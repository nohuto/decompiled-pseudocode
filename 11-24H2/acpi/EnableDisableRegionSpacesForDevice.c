/*
 * XREFs of EnableDisableRegionSpacesForDevice @ 0x14004E778
 * Callers:
 *     ACPIDispatchIrp @ 0x14001ADE0 (ACPIDispatchIrp.c)
 *     OSNotifyCreateOperationRegionWorker @ 0x140063C20 (OSNotifyCreateOperationRegionWorker.c)
 *     ACPIBusIrpCancelRemoveOrStopDevice @ 0x14009B550 (ACPIBusIrpCancelRemoveOrStopDevice.c)
 *     ACPIBusIrpQueryRemoveOrStopDevice @ 0x14009B7D0 (ACPIBusIrpQueryRemoveOrStopDevice.c)
 *     ACPIBusIrpStopDevice @ 0x14009BC90 (ACPIBusIrpStopDevice.c)
 * Callees:
 *     EnableDisableDeviceRegionSpace @ 0x140065944 (EnableDisableDeviceRegionSpace.c)
 *     WPP_RECORDER_SF_sdqD @ 0x140065B20 (WPP_RECORDER_SF_sdqD.c)
 */

__int64 __fastcall EnableDisableRegionSpacesForDevice(__int64 a1, char a2)
{
  unsigned int v2; // ebp
  __int64 result; // rax
  __int64 v6; // r8
  __int64 i; // rbx
  unsigned int v8; // edi
  int v9; // eax
  int v10; // edx
  int v11; // r14d
  const char *v12; // rcx
  int v13; // [rsp+20h] [rbp-58h]

  v2 = 0;
  result = *(_DWORD *)(a1 + 668) & (unsigned int)AcpiRegisteredOpRegionMask;
  if ( (*(_DWORD *)(a1 + 668) & AcpiRegisteredOpRegionMask) != 0 )
  {
    ExAcquireFastMutex(&AcpiOpRegionLock);
    for ( i = AcpiOpRegionHandlerList; (__int64 *)i != &AcpiOpRegionHandlerList; i = *(_QWORD *)i )
    {
      v8 = *(_DWORD *)(i + 36);
      if ( v8 - 8 <= 1 )
      {
        v9 = *(_DWORD *)(a1 + 668);
        if ( _bittest(&v9, v8) )
        {
          LOBYTE(v6) = a2;
          v11 = EnableDisableDeviceRegionSpace(a1, v8, v6);
          if ( v11 < 0 )
          {
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              v12 = "enable";
              if ( !a2 )
                v12 = "disable";
              WPP_RECORDER_SF_sdqD(
                WPP_GLOBAL_Control->DeviceExtension,
                v10,
                v6,
                13,
                v13,
                (__int64)v12,
                v8,
                *(_QWORD *)(a1 + 768),
                v11);
            }
            v2 = v11;
          }
        }
      }
    }
    ExReleaseFastMutex(&AcpiOpRegionLock);
    return v2;
  }
  return result;
}
