/*
 * XREFs of wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x14026CD5C
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
 *     <none>
 */

void __fastcall wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(unsigned __int8 a1, int a2, __int64 a3)
{
  volatile signed __int32 *v3; // r9
  int v4; // edx
  unsigned int v5; // r10d
  signed __int32 v6; // eax
  signed __int32 v7; // ett

  v3 = *(volatile signed __int32 **)a3;
  v4 = a2 - 3;
  if ( v4 )
  {
    if ( v4 != 1 )
      return;
    v5 = 32;
  }
  else
  {
    v5 = 16;
  }
  if ( *(_BYTE *)(a3 + 30) || *(_BYTE *)(a3 + 29) )
  {
    _InterlockedOr(v3, v5);
  }
  else
  {
    v6 = *v3;
    do
    {
      if ( (v6 & 2) == 0 )
        break;
      if ( ((a1 ^ (unsigned __int8)v6) & 1) != 0 )
        break;
      v7 = v6;
      v6 = _InterlockedCompareExchange(v3, v6 | v5, v6);
    }
    while ( v7 != v6 );
  }
}
