/*
 * XREFs of Feature_UserModeNonClientScrollBars2__private_IsEnabledDeviceUsageNoInline @ 0x14027F280
 * Callers:
 *     ?xxxFreeWindow_Phase2@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@@Z @ 0x14002E080 (-xxxFreeWindow_Phase2@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@@Z.c)
 *     ?FreeWindow_Phase3@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@PEAU?$Win32HMOptionalThreadLockAlways@UtagWND@@@@@Z @ 0x14002E8AC (-FreeWindow_Phase3@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@PEAU-$Win32HMOptionalThreadLockAlways@Utag.c)
 *     xxxCreateWindowEx @ 0x14004B6FC (xxxCreateWindowEx.c)
 *     NtUserGetScrollBarInfo @ 0x1401AC9D0 (NtUserGetScrollBarInfo.c)
 *     NtUserSBGetParms @ 0x140245070 (NtUserSBGetParms.c)
 *     ?xxxDWP_DoCancelMode@@YAXPEAUtagWND@@@Z @ 0x140252758 (-xxxDWP_DoCancelMode@@YAXPEAUtagWND@@@Z.c)
 *     xxxRealDefWindowProc @ 0x140252B3C (xxxRealDefWindowProc.c)
 *     xxxDrawWindowFrame @ 0x140255644 (xxxDrawWindowFrame.c)
 *     ?GETCLIENTWNDINFOOFFSET@@YAHPEBUtagWND@@@Z @ 0x14026C2A4 (-GETCLIENTWNDINFOOFFSET@@YAHPEBUtagWND@@@Z.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x14027AA48 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     xxxSysCommand @ 0x1402B5464 (xxxSysCommand.c)
 *     ?GetClientExtraBytesTotalSize@@YAHPEBUtagWND@@@Z @ 0x1402F13E4 (-GetClientExtraBytesTotalSize@@YAHPEBUtagWND@@@Z.c)
 * Callees:
 *     Feature_UserModeNonClientScrollBars2__private_IsEnabledFallback @ 0x14027F2B8 (Feature_UserModeNonClientScrollBars2__private_IsEnabledFallback.c)
 */

__int64 Feature_UserModeNonClientScrollBars2__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_UserModeNonClientScrollBars2__private_featureState & 0x10) != 0 )
    return Feature_UserModeNonClientScrollBars2__private_featureState & 1;
  else
    return Feature_UserModeNonClientScrollBars2__private_IsEnabledFallback(
             (unsigned int)Feature_UserModeNonClientScrollBars2__private_featureState,
             3LL);
}
