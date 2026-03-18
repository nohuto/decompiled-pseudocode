/*
 * XREFs of CommonBuffer_WdfEvtCleanupCallback @ 0x14003F4C0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x14002CE68 (WPP_RECORDER_SF_q.c)
 *     XilCoreCommonBuffer_Cleanup @ 0x140056F94 (XilCoreCommonBuffer_Cleanup.c)
 *     _guard_dispatch_icall @ 0x1400596E0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CommonBuffer_WdfEvtCleanupCallback(__int64 a1)
{
  char v1; // di
  int v2; // edx
  _QWORD *v3; // rbx
  struct _PCW_INSTANCE *v4; // rcx

  v1 = a1;
  v3 = (_QWORD *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01033 + 1616))(
                   WdfDriverGlobals,
                   a1,
                   off_14006B100);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v2) = 5;
    WPP_RECORDER_SF_q(*(_QWORD *)(*v3 + 72LL), v2, 8, 13, (__int64)&WPP_ab4b74589bd330f105f5531a87063139_Traceguids, v1);
  }
  v4 = (struct _PCW_INSTANCE *)v3[2];
  if ( v4 )
    PcwCloseInstance(v4);
  return XilCoreCommonBuffer_Cleanup(v3 + 11);
}
