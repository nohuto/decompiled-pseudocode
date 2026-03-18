/*
 * XREFs of ACPIDeviceIrpDeviceRequest @ 0x14001A998
 * Callers:
 *     ACPIFilterIrpSetPower @ 0x14001BD40 (ACPIFilterIrpSetPower.c)
 *     ACPIBusIrpSetDevicePower @ 0x140028AE4 (ACPIBusIrpSetDevicePower.c)
 *     ACPIDockIrpSetPower @ 0x140057A90 (ACPIDockIrpSetPower.c)
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x14001B920 (ACPIInternalGetDeviceExtension.c)
 *     ACPIDeviceInitializePowerRequest @ 0x14001BA00 (ACPIDeviceInitializePowerRequest.c)
 *     WPP_RECORDER_SF_qdqss @ 0x14001D6DC (WPP_RECORDER_SF_qdqss.c)
 *     _guard_dispatch_icall @ 0x140070B90 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ACPIDeviceIrpDeviceRequest(ULONG_PTR a1, _QWORD *a2, void *a3)
{
  __int64 DeviceExtension; // rax
  __int64 v6; // rcx
  __int64 v7; // rbx
  char v8; // r8
  unsigned int v9; // r14d
  int v10; // r15d
  const char *v11; // rcx
  const char *v12; // rdx
  int v13; // esi
  __int64 v14; // rax
  KIRQL v15; // al
  __int64 *v16; // rcx
  KIRQL v17; // si
  _QWORD *Pool2; // rax
  int v20; // eax
  __int64 v21; // rax

  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  v6 = a2[23];
  v7 = DeviceExtension;
  v8 = 0;
  v9 = *(_DWORD *)(v6 + 24);
  v10 = *(_DWORD *)(v6 + 32);
  v11 = byte_1400753E8;
  v12 = byte_1400753E8;
  if ( DeviceExtension )
  {
    v21 = *(_QWORD *)(DeviceExtension + 8);
    v8 = v7;
    if ( (v21 & 0x200000000000LL) != 0 )
    {
      v11 = *(const char **)(v7 + 608);
      if ( (v21 & 0x400000000000LL) != 0 )
        v12 = *(const char **)(v7 + 616);
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qdqss(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)v12,
      10,
      31,
      (__int64)&WPP_2c64a3eb75823feba16c7995e2df05b8_Traceguids,
      (char)a2,
      v9 - 1,
      v8,
      (__int64)v11,
      (__int64)v12);
  if ( *((_BYTE *)a2 + 65) )
    *(_BYTE *)(a2[23] + 3LL) |= 1u;
  v13 = *((_DWORD *)a2 + 12);
  if ( v13 < 0 || v9 == *(_DWORD *)(v7 + 384) )
  {
    if ( a3 )
      ((void (__fastcall *)(__int64, _QWORD *, _QWORD))a3)(v7, a2, (unsigned int)v13);
    return (unsigned int)v13;
  }
  else
  {
    if ( v9 == 1 )
    {
      v14 = *(_QWORD *)(v7 + 8);
      if ( (v14 & 0x102000000LL) != 0 )
      {
        if ( (v14 & 0x2000000) != 0
          && (_InterlockedCompareExchange((volatile signed __int32 *)(v7 + 184), 0, 0) & 1) != 0 )
        {
          KeSetEvent((PRKEVENT)(v7 + 272), 0, 0);
        }
        else if ( (*(_QWORD *)(v7 + 8) & 0x800000000010000LL) == 0x800000000010000LL )
        {
          v15 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
          v16 = (__int64 *)AcpiPowerWaitWakeList;
          v17 = v15;
          while ( v16 != &AcpiPowerWaitWakeList )
          {
            if ( v16[5] == v7 )
            {
              Pool2 = (_QWORD *)ExAllocatePool2(64LL, 16LL, 1349542721LL);
              if ( Pool2 )
              {
                *Pool2 = a2;
                a2 = Pool2;
                Pool2[1] = a3;
                a3 = &ACPIWaitWakeEnableOnPowerUp;
              }
              break;
            }
            v16 = (__int64 *)*v16;
          }
          KeReleaseSpinLock(&AcpiPowerLock, v17);
        }
      }
    }
    if ( (unsigned int)(v10 - 4) <= 1 || (v20 = 0, v10 == 6) )
      v20 = 1;
    return ACPIDeviceInitializePowerRequest(v7, v9, 0LL, a3, a2, v10, 0, 8 * v20);
  }
}
