/*
 * XREFs of ACPIRootEvent @ 0x14004B5F0
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x14001B920 (ACPIInternalGetDeviceExtension.c)
 *     WPP_RECORDER_SF_Dqss @ 0x14002AD3C (WPP_RECORDER_SF_Dqss.c)
 *     ACPIInternalEvaluateOST @ 0x140061980 (ACPIInternalEvaluateOST.c)
 *     ACPINotifyOsShutdown @ 0x14006751C (ACPINotifyOsShutdown.c)
 */

_UNKNOWN **__fastcall ACPIRootEvent(ULONG_PTR a1, int a2)
{
  __int64 DeviceExtension; // rax
  __int64 v4; // r8
  const char *v5; // rcx
  __int64 v6; // rbx
  const char *v7; // rdx
  __int64 v8; // rax
  _UNKNOWN **result; // rax

  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  v4 = 0LL;
  v5 = byte_140075488;
  v6 = DeviceExtension;
  v7 = byte_140075488;
  if ( DeviceExtension )
  {
    v4 = DeviceExtension;
    v8 = *(_QWORD *)(DeviceExtension + 8);
    if ( (v8 & 0x200000000000LL) != 0 )
    {
      v5 = *(const char **)(v6 + 608);
      if ( (v8 & 0x400000000000LL) != 0 )
        v7 = *(const char **)(v6 + 616);
    }
  }
  result = &WPP_RECORDER_INITIALIZED;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    result = (_UNKNOWN **)WPP_RECORDER_SF_Dqss(
                            (__int64)WPP_GLOBAL_Control->DeviceExtension,
                            4u,
                            6u,
                            0x21u,
                            (__int64)&WPP_407264dfc63035306de6021495d93ce2_Traceguids,
                            a2,
                            v4,
                            v5,
                            v7);
  if ( a2 == 129 )
  {
    if ( AcpiNotifyOsShutdownEnabled && AcpiShutdownNotification )
      return (_UNKNOWN **)ACPINotifyOsShutdown(v6, 129LL, v4);
    else
      return (_UNKNOWN **)ACPIInternalEvaluateOST(v6, 129LL, 131LL);
  }
  return result;
}
