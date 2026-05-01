/*
 * XREFs of wil::details::CallAndHandleErrorsWithReturnType_void__lambda_e369aae3ebba8282559023f1a5b0b63f__&_long_&_0_ @ 0x180463414
 * Callers:
 *     _lambda_aecc241a7c4d6980cbdbe967239d0201_::operator() @ 0x180464C0C (_lambda_aecc241a7c4d6980cbdbe967239d0201_--operator().c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?ShowStartView@XamlLauncherState@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLAGS@@@Z @ 0x180251010 (-ShowStartView@XamlLauncherState@@UEAAJW4IMMERSIVELAUNCHERSHOWMETHOD@@W4IMMERSIVELAUNCHERSHOWFLA.c)
 *     ??$ShowAttemptSkippedDueToFullScreenExperience@AEAJ@StartWindowTelemetry@@SAXAEAJ@Z @ 0x180463E88 (--$ShowAttemptSkippedDueToFullScreenExperience@AEAJ@StartWindowTelemetry@@SAXAEAJ@Z.c)
 */

__int64 __fastcall wil::details::CallAndHandleErrorsWithReturnType_void__lambda_e369aae3ebba8282559023f1a5b0b63f____long___0_(
        __int64 a1,
        int *a2)
{
  int v2; // r8d
  int started; // eax
  const char *v4; // r9
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v7; // [rsp+30h] [rbp+8h] BYREF

  try
  {
    v7 = *a2;
    v2 = v7;
    *(_BYTE *)(*(_QWORD *)(a1 + 8) + 1120LL) = 0;
    *(_BYTE *)(*(_QWORD *)(a1 + 8) + 1124LL) = 0;
    if ( v2 < 0 )
    {
      StartWindowTelemetry::ShowAttemptSkippedDueToFullScreenExperience<long &>(&v7);
    }
    else
    {
      started = XamlLauncherState::ShowStartView(
                  *(_QWORD *)(a1 + 8) + 24LL,
                  *(_DWORD *)(*(_QWORD *)(a1 + 8) + 1112LL),
                  *(_DWORD *)(*(_QWORD *)(a1 + 8) + 1116LL));
      if ( started < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x236,
          (int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
          (const char *)(unsigned int)started);
    }
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x59F,
                           (int)"onecore\\internal\\sdk\\inc\\wil\\opensource/wil/winrt.h",
                           v4);
  }
  return result;
}
