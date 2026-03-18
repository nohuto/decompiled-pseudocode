/*
 * XREFs of PcisuppReleasePciInterfaces @ 0x1400A9244
 * Callers:
 *     ACPIBusIrpRemoveDevice @ 0x140050130 (ACPIBusIrpRemoveDevice.c)
 * Callees:
 *     WPP_RECORDER_SF_qss @ 0x14003E0C4 (WPP_RECORDER_SF_qss.c)
 *     ACPIInternalClearFlags @ 0x14003E7CC (ACPIInternalClearFlags.c)
 *     ACPIWakeReleasePmeRouting @ 0x140069C90 (ACPIWakeReleasePmeRouting.c)
 *     PcisuppReleasePciRouting @ 0x1400A934C (PcisuppReleasePciRouting.c)
 */

void __fastcall PcisuppReleasePciInterfaces(_QWORD *a1)
{
  char v2; // al
  const char *v3; // rcx
  const char *v4; // r8
  __int64 v5; // rdx

  KeEnterCriticalRegion();
  ExAcquireResourceExclusiveLite(&PciRouteInterfaceLock, 1u);
  if ( (a1[140] & 2) != 0 )
  {
    ACPIInternalClearFlags(a1 + 140, 2LL);
    if ( _InterlockedExchangeAdd(&PciRoutingInterfaceCount, 0xFFFFFFFF) == 1 )
    {
      PcisuppReleasePciRouting();
      ACPIWakeReleasePmeRouting();
      v2 = 0;
      v3 = byte_1400753E8;
      v4 = byte_1400753E8;
      if ( a1 )
      {
        v5 = a1[1];
        v2 = (char)a1;
        if ( (v5 & 0x200000000000LL) != 0 )
        {
          v3 = (const char *)a1[76];
          if ( (v5 & 0x400000000000LL) != 0 )
            v4 = (const char *)a1[77];
        }
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qss(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          4u,
          5u,
          0xAu,
          (__int64)&WPP_d83fe99678ff30ab9ed6237ab8d0cc59_Traceguids,
          v2,
          v3,
          v4);
    }
  }
  ExReleaseResourceLite(&PciRouteInterfaceLock);
  KeLeaveCriticalRegion();
}
