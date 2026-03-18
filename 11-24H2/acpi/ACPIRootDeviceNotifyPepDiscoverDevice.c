/*
 * XREFs of ACPIRootDeviceNotifyPepDiscoverDevice @ 0x140054FE8
 * Callers:
 *     ACPIRootInitialize @ 0x1400A67CC (ACPIRootInitialize.c)
 * Callees:
 *     AcpiNotifyPlExtDiscoverDeviceAsync @ 0x1400205DC (AcpiNotifyPlExtDiscoverDeviceAsync.c)
 *     WPP_RECORDER_SF_sqqDqss @ 0x140053EA4 (WPP_RECORDER_SF_sqqDqss.c)
 */

__int64 ACPIRootDeviceNotifyPepDiscoverDevice()
{
  ULONG_PTR v0; // rbx
  int v1; // edi
  __int64 v2; // r8
  __int64 v3; // rcx
  const char *v4; // rax
  const char *v5; // rdx
  _QWORD v7[2]; // [rsp+60h] [rbp+27h] BYREF
  int v8; // [rsp+70h] [rbp+37h]
  int v9; // [rsp+74h] [rbp+3Bh]
  struct _KEVENT Event; // [rsp+78h] [rbp+3Fh] BYREF

  v0 = RootDeviceExtension;
  memset(&Event, 0, sizeof(Event));
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  v7[0] = 0LL;
  v9 = 0;
  v7[1] = &Event;
  v8 = -1073741823;
  v1 = AcpiNotifyPlExtDiscoverDeviceAsync(
         *(_QWORD *)(v0 + 760),
         (__int64)ACPIRootDeviceDiscoverDeviceCompletion,
         (__int64)v7);
  if ( v1 == 259 )
  {
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    v1 = v8;
  }
  if ( v1 >= 0 )
  {
    if ( v7[0] )
    {
      *(_QWORD *)(v0 + 944) = v7[0];
      _InterlockedOr64((volatile signed __int64 *)(v0 + 1120), 0x4000000uLL);
    }
    v3 = *(_QWORD *)(v0 + 8);
    v4 = byte_1400753E8;
    v5 = byte_1400753E8;
    if ( (v3 & 0x200000000000LL) != 0 )
    {
      v4 = *(const char **)(v0 + 608);
      if ( (v3 & 0x400000000000LL) != 0 )
        v5 = *(const char **)(v0 + 616);
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_sqqDqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        (__int64)v5,
        v2,
        0x1Fu,
        (__int64)&WPP_407264dfc63035306de6021495d93ce2_Traceguids,
        "ACPIRootDeviceNotifyPepDiscoverDevice",
        v0,
        *(_QWORD *)(v0 + 944),
        v1,
        v0,
        v4,
        v5);
  }
  _InterlockedOr64((volatile signed __int64 *)(v0 + 1120), 0x2000000uLL);
  return (unsigned int)v1;
}
