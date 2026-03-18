/*
 * XREFs of ACPICMButtonNotify @ 0x140039BD8
 * Callers:
 *     ACPICMButtonNotifyByDeviceObject @ 0x140039FF0 (ACPICMButtonNotifyByDeviceObject.c)
 *     ACPICMButtonNotifyByDeviceExtension @ 0x14005B9E0 (ACPICMButtonNotifyByDeviceExtension.c)
 * Callees:
 *     ACPIButtonEvent @ 0x14002433C (ACPIButtonEvent.c)
 *     WPP_RECORDER_SF_dqss @ 0x140033790 (WPP_RECORDER_SF_dqss.c)
 *     ACPISetDeviceWorker @ 0x140038938 (ACPISetDeviceWorker.c)
 *     ACPICMExperienceButtonHandleEvent @ 0x14005628C (ACPICMExperienceButtonHandleEvent.c)
 */

void __fastcall ACPICMButtonNotify(ULONG_PTR a1, __int64 a2, unsigned int a3)
{
  char v4; // r10
  int v5; // edx
  __int64 v6; // r9
  unsigned int v7; // r8d
  const char *v8; // rcx
  const char *v9; // rdx
  unsigned int v10; // edx

  v4 = a3;
  v5 = *(_DWORD *)(a2 + 200);
  v6 = *(_QWORD *)(a2 + 8);
  if ( (v6 & 0x2000) != 0 )
  {
    ACPICMExperienceButtonHandleEvent(a2, a3);
    return;
  }
  v7 = a3 - 2;
  if ( !v7 )
  {
    if ( !a1 )
      return;
    v10 = 0x80000000;
    goto LABEL_16;
  }
  if ( v7 != 126 )
  {
    v8 = byte_1400753E8;
    v9 = byte_1400753E8;
    if ( (v6 & 0x200000000000LL) != 0 )
    {
      v8 = *(const char **)(a2 + 608);
      if ( (v6 & 0x400000000000LL) != 0 )
        v9 = *(const char **)(a2 + 616);
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_dqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        5u,
        0xAu,
        (__int64)&WPP_14d801cc74893723bea673682ddc6690_Traceguids,
        v4,
        a2,
        v8,
        v9);
    return;
  }
  if ( (v5 & 4) != 0 )
  {
    ACPISetDeviceWorker(a2, 0);
    return;
  }
  if ( a1 )
  {
    v10 = v5 & 0x7FFFFFFF;
LABEL_16:
    ACPIButtonEvent(a1, v10);
  }
}
