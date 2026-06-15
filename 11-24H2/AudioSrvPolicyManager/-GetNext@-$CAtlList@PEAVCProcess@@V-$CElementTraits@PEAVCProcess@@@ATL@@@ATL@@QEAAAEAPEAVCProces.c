/*
 * XREFs of ?GetNext@?$CAtlList@PEAVCProcess@@V?$CElementTraits@PEAVCProcess@@@ATL@@@ATL@@QEAAAEAPEAVCProcess@@AEAPEAU__POSITION@@@Z @ 0x18000D680
 * Callers:
 *     ?ProcessPendingSoundLevelNotification@CApplication@@IEAAXXZ @ 0x18000EC20 (-ProcessPendingSoundLevelNotification@CApplication@@IEAAXXZ.c)
 *     ?SendTrackStateNotification@CApplication@@QEAAJW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@@Z @ 0x18001A26C (-SendTrackStateNotification@CApplication@@QEAAJW4__MIDL___MIDL_itf_audiosrv_0000_0000_0003@@@Z.c)
 *     ?RawCategory@CApplication@@QEAA?AW4_APPLICATION_CATEGORY@@XZ @ 0x18001F20C (-RawCategory@CApplication@@QEAA-AW4_APPLICATION_CATEGORY@@XZ.c)
 *     ?AddCategoryOverrideToProcesses@CApplication@@IEAAXW4OverridePolicy@@W4_APPLICATION_CATEGORY@@H@Z @ 0x180031180 (-AddCategoryOverrideToProcesses@CApplication@@IEAAXW4OverridePolicy@@W4_APPLICATION_CATEGORY@@H@.c)
 *     ?ApplySmtcRelatedPolicy@CApplication@@QEAAXXZ @ 0x180031324 (-ApplySmtcRelatedPolicy@CApplication@@QEAAXXZ.c)
 *     ?GetActiveProcessCount@CApplication@@QEAAIXZ @ 0x180032038 (-GetActiveProcessCount@CApplication@@QEAAIXZ.c)
 *     ?GetBackgroundTaskId@CApplication@@QEAA?AU_GUID@@XZ @ 0x1800320CC (-GetBackgroundTaskId@CApplication@@QEAA-AU_GUID@@XZ.c)
 *     ?GetSmtcProcesses@CApplication@@QEAAJPEAV?$forward_list@V?$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCProcess@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@PEAI@Z @ 0x1800322A0 (-GetSmtcProcesses@CApplication@@QEAAJPEAV-$forward_list@V-$com_ptr_t@VCProcess@@Uerr_returncode_.c)
 *     ?GetTotalActiveCaptureStreamCount@CApplication@@QEAAIXZ @ 0x18003235C (-GetTotalActiveCaptureStreamCount@CApplication@@QEAAIXZ.c)
 *     ?GetTotalActiveRenderStreamCount@CApplication@@QEAAIXZ @ 0x1800323E0 (-GetTotalActiveRenderStreamCount@CApplication@@QEAAIXZ.c)
 *     ?HasDuckedStream@CApplication@@QEAAHXZ @ 0x180032740 (-HasDuckedStream@CApplication@@QEAAHXZ.c)
 *     ?IsMutedForSleep@CApplication@@QEAAHXZ @ 0x180032A40 (-IsMutedForSleep@CApplication@@QEAAHXZ.c)
 *     ?IsPlaying@CApplication@@QEAAHH@Z @ 0x180032B54 (-IsPlaying@CApplication@@QEAAHH@Z.c)
 *     ?IsVoipCallCapableAndCallIsActive@CApplication@@QEAAHXZ @ 0x180032C20 (-IsVoipCallCapableAndCallIsActive@CApplication@@QEAAHXZ.c)
 *     ?MarkAsPendingTermination@CApplication@@QEAAXXZ @ 0x180032E98 (-MarkAsPendingTermination@CApplication@@QEAAXXZ.c)
 *     ?RemoveCategoryOverrideFromProcesses@CApplication@@IEAAXW4OverridePolicy@@@Z @ 0x180033DB0 (-RemoveCategoryOverrideFromProcesses@CApplication@@IEAAXW4OverridePolicy@@@Z.c)
 *     ?ReviveProcessesPendingTermination@CApplication@@QEAAXXZ @ 0x180033FE4 (-ReviveProcessesPendingTermination@CApplication@@QEAAXXZ.c)
 *     ?SendAppClosureNotification@CApplication@@QEAAXXZ @ 0x1800341E4 (-SendAppClosureNotification@CApplication@@QEAAXXZ.c)
 *     ??1CApplicationManager@@MEAA@XZ @ 0x180036448 (--1CApplicationManager@@MEAA@XZ.c)
 *     ?FindAppFromProcessId@CApplicationManager@@QEAAPEAVCApplication@@K@Z @ 0x180036964 (-FindAppFromProcessId@CApplicationManager@@QEAAPEAVCApplication@@K@Z.c)
 *     ?HandleMediaPlaybackRequestForActiveMediaApp@CApplicationManager@@IEAAJPEAVCApplication@@@Z @ 0x180037C94 (-HandleMediaPlaybackRequestForActiveMediaApp@CApplicationManager@@IEAAJPEAVCApplication@@@Z.c)
 *     ?IsInPlmSponsoredGracePeriod@CApplication@@QEAAHXZ @ 0x180037FB0 (-IsInPlmSponsoredGracePeriod@CApplication@@QEAAHXZ.c)
 *     ?OnApplicationClosed@CApplicationManager@@QEAAJPEBG_KK@Z @ 0x180038194 (-OnApplicationClosed@CApplicationManager@@QEAAJPEBG_KK@Z.c)
 *     ?ResetProcessDataFlowAccessCheckResults@CApplicationManager@@QEAAXPEBG0@Z @ 0x1800392B0 (-ResetProcessDataFlowAccessCheckResults@CApplicationManager@@QEAAXPEBG0@Z.c)
 *     ?TsSessionLaunchBackgroundTask@@YAJKPEBG0PEAU_GUID@@@Z @ 0x180040170 (-TsSessionLaunchBackgroundTask@@YAJKPEBG0PEAU_GUID@@@Z.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18001B930 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

_QWORD *__fastcall ATL::CAtlList<CProcess *,ATL::CElementTraits<CProcess *>>::GetNext(__int64 a1, _QWORD **a2)
{
  _QWORD *v2; // rax

  v2 = *a2;
  if ( !*a2 )
    ATL::AtlThrowImpl(-2147467259);
  *a2 = (_QWORD *)*v2;
  return v2 + 2;
}
