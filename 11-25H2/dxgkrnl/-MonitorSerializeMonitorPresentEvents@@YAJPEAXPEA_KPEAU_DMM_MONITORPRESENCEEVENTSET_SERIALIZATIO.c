/*
 * XREFs of ?MonitorSerializeMonitorPresentEvents@@YAJPEAXPEA_KPEAU_DMM_MONITORPRESENCEEVENTSET_SERIALIZATION@@@Z @ 0x14026818C
 * Callers:
 *     ?AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z @ 0x14024F2D8 (-AcquireDiagInfo@VIDPN_MGR@@QEAAJQEAX_KW4DIAGINFO_TYPE@1@QEBTDIAGINFO_CONTEXT@1@QEA_K@Z.c)
 *     ?AcquireDiagSummary@VIDPN_MGR@@QEAAJPEAV?$AutoBuffer@E@DMM@@@Z @ 0x14024FE94 (-AcquireDiagSummary@VIDPN_MGR@@QEAAJPEAV-$AutoBuffer@E@DMM@@@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x14002B150 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?_SerializeMonitorPresentEvent@MONITOR_MGR@@QEAAJPEA_KPEAU_DMM_MONITORPRESENCEEVENTSET_SERIALIZATION@@@Z @ 0x14026E29C (-_SerializeMonitorPresentEvent@MONITOR_MGR@@QEAAJPEA_KPEAU_DMM_MONITORPRESENCEEVENTSET_SERIALIZA.c)
 */

__int64 __fastcall MonitorSerializeMonitorPresentEvents(
        DXGADAPTER *a1,
        unsigned __int64 *a2,
        struct _DMM_MONITORPRESENCEEVENTSET_SERIALIZATION *a3)
{
  __int64 v6; // rax
  __int64 result; // rax
  MONITOR_MGR *v8; // rcx

  if ( !a1 || !a2 )
    return 3221225485LL;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1966;
  }
  v6 = *((_QWORD *)a1 + 390);
  if ( !v6 )
  {
    WdLogSingleEntry1(2LL, a1);
    result = 3221225659LL;
    WdLogGlobalForLineNumber = 1970;
    return result;
  }
  v8 = *(MONITOR_MGR **)(v6 + 112);
  if ( !v8 )
  {
    WdLogSingleEntry1(2LL, a1);
    WdLogGlobalForLineNumber = 1983;
    return 3221225485LL;
  }
  return MONITOR_MGR::_SerializeMonitorPresentEvent(v8, a2, a3);
}
