/*
 * XREFs of wil_details_FeatureReporting_ReportUsageToService @ 0x1401A5404
 * Callers:
 *     Feature_HSHELL_IAM_Delivery__private_IsEnabledPreCheck @ 0x1401D52CC (Feature_HSHELL_IAM_Delivery__private_IsEnabledPreCheck.c)
 *     Feature_ReadClipboardEvent__private_IsEnabledPreCheck @ 0x1401ED08C (Feature_ReadClipboardEvent__private_IsEnabledPreCheck.c)
 *     DispBrokerGetCurrentModeImpl @ 0x1401F8E30 (DispBrokerGetCurrentModeImpl.c)
 *     ?IsPenQuickLaunchAndShouldBeDisabled@@YA_NIE@Z @ 0x140215AB0 (-IsPenQuickLaunchAndShouldBeDisabled@@YA_NIE@Z.c)
 *     wil_details_IsEnabledFallback @ 0x1402677D8 (wil_details_IsEnabledFallback.c)
 *     Feature_MTestAbSh1__private_ReportDeviceUsage @ 0x14026865C (Feature_MTestAbSh1__private_ReportDeviceUsage.c)
 *     InitRotationManager @ 0x140270F00 (InitRotationManager.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x14027AA48 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     Feature_GestureOnlyTouchpadParam2__private_ReportDeviceUsage @ 0x1402ADD94 (Feature_GestureOnlyTouchpadParam2__private_ReportDeviceUsage.c)
 *     ??0InkProcessor@@AEAA@XZ @ 0x1402EA548 (--0InkProcessor@@AEAA@XZ.c)
 * Callees:
 *     wil_details_MapReportingKind @ 0x1401A5494 (wil_details_MapReportingKind.c)
 *     wil_details_FeatureReporting_ReportUsageToServiceDirect @ 0x1401A5534 (wil_details_FeatureReporting_ReportUsageToServiceDirect.c)
 *     _guard_dispatch_icall @ 0x140340330 (_guard_dispatch_icall.c)
 */

__int64 (__fastcall *__fastcall wil_details_FeatureReporting_ReportUsageToService(
        __int64 a1,
        char a2,
        unsigned int a3,
        __int64 a4))(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD)
{
  unsigned int v5; // edi
  unsigned int v7; // eax
  __int64 v8; // r9
  __int64 v9; // r10
  __int64 (__fastcall *result)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD); // rax
  char v11; // [rsp+30h] [rbp-28h]
  unsigned int v12; // [rsp+70h] [rbp+18h] BYREF

  v12 = a3;
  v5 = a2 & 1;
  v7 = wil_details_MapReportingKind(a3, a2 & 1);
  result = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD))wil_details_FeatureReporting_ReportUsageToServiceDirect(
                                                                                                     a1,
                                                                                                     v9,
                                                                                                     v7,
                                                                                                     v8);
  if ( (_DWORD)result )
  {
    result = g_wil_details_pfnFeatureLoggingHook;
    if ( g_wil_details_pfnFeatureLoggingHook )
    {
      v11 = 0;
      return (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD))g_wil_details_pfnFeatureLoggingHook(*(unsigned int *)(a1 + 24), *(_QWORD *)(a1 + 16), 0LL, v5, &v12, 0LL, v11, a4);
    }
  }
  return result;
}
