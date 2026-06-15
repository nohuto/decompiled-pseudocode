/*
 * XREFs of ?TsSessionFromSessionId@@YAJKHPEAPEAVTSSession@@@Z @ 0x18000C380
 * Callers:
 *     ?TsSessionIdAreAccessibilityAudioSettingsInitialized@@YA_NK@Z @ 0x18001F2A0 (-TsSessionIdAreAccessibilityAudioSettingsInitialized@@YA_NK@Z.c)
 *     ?RpcSetAccessibilityAudioMonoMixState@CWindowsPolicyManager@@UEAAJH@Z @ 0x18002C970 (-RpcSetAccessibilityAudioMonoMixState@CWindowsPolicyManager@@UEAAJH@Z.c)
 *     ?HandleMediaPlaybackRequestForApp@CApplicationManager@@QEAAJPEBG_KK@Z @ 0x18003A32C (-HandleMediaPlaybackRequestForApp@CApplicationManager@@QEAAJPEBG_KK@Z.c)
 *     _lambda_28433bbdf35c05dec82bca523d2a5fd2_::operator() @ 0x1800400FC (_lambda_28433bbdf35c05dec82bca523d2a5fd2_--operator().c)
 *     _lambda_458ffd326e5965d00ecb8a039a2797a1_::operator() @ 0x18004027C (_lambda_458ffd326e5965d00ecb8a039a2797a1_--operator().c)
 *     ?DoLaunchBackgroundTask@@YAJPEAVCApplication@@PEBG1PEAU_GUID@@@Z @ 0x1800407A4 (-DoLaunchBackgroundTask@@YAJPEAVCApplication@@PEBG1PEAU_GUID@@@Z.c)
 *     ?TS_SessionChanged@@YAXKPEAUtagWTSSESSION_NOTIFICATION@@@Z @ 0x180041340 (-TS_SessionChanged@@YAXKPEAUtagWTSSESSION_NOTIFICATION@@@Z.c)
 *     ?TsSessionGetUserSid@@YAJKPEAPEAG@Z @ 0x180041AE8 (-TsSessionGetUserSid@@YAJKPEAPEAG@Z.c)
 *     ?TsSessionIdAddActiveMediaApp@@YAJKPEAVCApplication@@@Z @ 0x180041BE8 (-TsSessionIdAddActiveMediaApp@@YAJKPEAVCApplication@@@Z.c)
 *     ?TsSessionIdAddAppManagerClient@@YAJPEAVCProcess@@@Z @ 0x180041CB8 (-TsSessionIdAddAppManagerClient@@YAJPEAVCProcess@@@Z.c)
 *     ?TsSessionIdAddEndpointVolumeReference@@YAJKPEBGAEA_N1AEAM11@Z @ 0x180041DB4 (-TsSessionIdAddEndpointVolumeReference@@YAJKPEBGAEA_N1AEAM11@Z.c)
 *     ?TsSessionIdConnect@@YAXK@Z @ 0x180041EA8 (-TsSessionIdConnect@@YAXK@Z.c)
 *     ?TsSessionIdDisplayNotificationCallback@@YAKPEAXK0@Z @ 0x180042050 (-TsSessionIdDisplayNotificationCallback@@YAKPEAXK0@Z.c)
 *     ?TsSessionIdGetAppsBlockedTillConsoleUnlocked@@YA?AW4AppTypesBlockedTillConsoleUnlocked@@K@Z @ 0x1800421C0 (-TsSessionIdGetAppsBlockedTillConsoleUnlocked@@YA-AW4AppTypesBlockedTillConsoleUnlocked@@K@Z.c)
 *     ?TsSessionIdInitAccessibilityAudioSettings@@YAXKH@Z @ 0x180042348 (-TsSessionIdInitAccessibilityAudioSettings@@YAXKH@Z.c)
 *     ?TsSessionIdIsStreamCategoryDucked@@YA_NKPEBGKH@Z @ 0x1800423B0 (-TsSessionIdIsStreamCategoryDucked@@YA_NKPEBGKH@Z.c)
 *     ?TsSessionIdLogoff@@YAJK@Z @ 0x180042470 (-TsSessionIdLogoff@@YAJK@Z.c)
 *     ?TsSessionIdLogon@@YAJK@Z @ 0x18004250C (-TsSessionIdLogon@@YAJK@Z.c)
 *     ?TsSessionIdReleaseEndpointVolumeReference@@YAJKPEBGAEA_N1AEAM11@Z @ 0x1800425A4 (-TsSessionIdReleaseEndpointVolumeReference@@YAJKPEBGAEA_N1AEAM11@Z.c)
 *     ?TsSessionIdScreenReaderStateChanged@@YAJKKHMPEAH@Z @ 0x180042698 (-TsSessionIdScreenReaderStateChanged@@YAJKKHMPEAH@Z.c)
 *     ?TsSessionIdTerminate@@YAJK@Z @ 0x180042850 (-TsSessionIdTerminate@@YAJK@Z.c)
 *     ?TsSessionIsActiveMediaApplication@@YA_NPEAVCApplication@@@Z @ 0x18004290C (-TsSessionIsActiveMediaApplication@@YA_NPEAVCApplication@@@Z.c)
 *     std::_Func_impl_no_alloc__lambda_1f55666334b8184c6ae1399bb7301650__void_::_Do_call @ 0x1800435A0 (std--_Func_impl_no_alloc__lambda_1f55666334b8184c6ae1399bb7301650__void_--_Do_call.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180007BD4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TsSessionCreate@@YAJKPEAPEAVTSSession@@@Z @ 0x180041534 (-TsSessionCreate@@YAJKPEAPEAVTSSession@@@Z.c)
 */

__int64 __fastcall TsSessionFromSessionId(DWORD a1, int a2, struct TSSession **a3)
{
  __int64 v4; // rbx
  _QWORD *v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rax
  int v11; // eax
  unsigned int v12; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = 0LL;
  *a3 = 0LL;
  EnterCriticalSection(&stru_180067AF8);
  v7 = (_QWORD *)(qword_180067B38
                + 16
                * ((0x100000001B3LL
                  * (HIBYTE(a1) ^ (0x100000001B3LL
                                 * (BYTE2(a1) ^ (0x100000001B3LL
                                               * (BYTE1(a1) ^ (0x100000001B3LL
                                                             * ((unsigned __int8)a1 ^ 0xCBF29CE484222325uLL)))))))) & qword_180067B50));
  v8 = v7[1];
  if ( v8 != qword_180067B28 )
  {
    while ( a1 != *(_DWORD *)(v8 + 16) )
    {
      if ( v8 == *v7 )
        goto LABEL_4;
      v8 = *(_QWORD *)(v8 + 8);
    }
    v4 = v8;
  }
LABEL_4:
  v9 = qword_180067B28;
  if ( v4 )
    v9 = v4;
  if ( v9 != qword_180067B28 )
  {
    *a3 = *(struct TSSession **)(v9 + 24);
    LeaveCriticalSection(&stru_180067AF8);
    return 0LL;
  }
  LeaveCriticalSection(&stru_180067AF8);
  if ( !a2 )
    return 2147943568LL;
  v11 = TsSessionCreate(a1, a3);
  v12 = v11;
  if ( v11 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x43A,
    (int)"clientcore\\multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\ts.cpp",
    (const char *)(unsigned int)v11);
  return v12;
}
