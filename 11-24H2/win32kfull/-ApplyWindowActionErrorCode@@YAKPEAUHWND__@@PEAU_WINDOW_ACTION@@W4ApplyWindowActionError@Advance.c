/*
 * XREFs of ?ApplyWindowActionErrorCode@@YAKPEAUHWND__@@PEAU_WINDOW_ACTION@@W4ApplyWindowActionError@AdvancedWindowPos@@@Z @ 0x1402C9084
 * Callers:
 *     ?xxxApplyAction@WindowActions@@YAKPEAUHWND__@@PEAU_WINDOW_ACTION@@@Z @ 0x1402CC61C (-xxxApplyAction@WindowActions@@YAKPEAUHWND__@@PEAU_WINDOW_ACTION@@@Z.c)
 * Callees:
 *     ?ApplyFailed@ApplyWindowAction@InputTraceLogging@@SAXPEAUHWND__@@PEBGKK@Z @ 0x1402C8FF8 (-ApplyFailed@ApplyWindowAction@InputTraceLogging@@SAXPEAUHWND__@@PEBGKK@Z.c)
 *     ?GetApplyWindowActionErrorString@AdvancedWindowPos@@YAPEBGW4ApplyWindowActionError@1@@Z @ 0x1402C99C0 (-GetApplyWindowActionErrorString@AdvancedWindowPos@@YAPEBGW4ApplyWindowActionError@1@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_SqDD @ 0x1402D16C0 (WPP_RECORDER_AND_TRACE_SF_SqDD.c)
 */

__int64 __fastcall ApplyWindowActionErrorCode(HWND a1, __int64 a2, unsigned int a3)
{
  const unsigned __int16 *ApplyWindowActionErrorString; // r12
  __int64 v6; // rcx
  bool v7; // bp
  bool v8; // r14
  __int64 UserSessionState; // rax
  int v10; // r8d
  int v11; // edx
  unsigned int v12; // esi
  unsigned int v13; // esi
  unsigned int v14; // esi
  unsigned int v15; // esi

  ApplyWindowActionErrorString = (const unsigned __int16 *)AdvancedWindowPos::GetApplyWindowActionErrorString(a3);
  InputTraceLogging::ApplyWindowAction::ApplyFailed(a1, ApplyWindowActionErrorString);
  v7 = 0;
  if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control )
  {
    v6 = *(unsigned int *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL);
    if ( (v6 & 8) != 0 && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 3u )
      v7 = 1;
  }
  v8 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
  if ( v7 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    UserSessionState = W32GetUserSessionState(v6, *(_QWORD *)&WPP_GLOBAL_Control);
    LOBYTE(v10) = v8;
    LOBYTE(v11) = v7;
    WPP_RECORDER_AND_TRACE_SF_SqDD(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
      v11,
      v10,
      *(_QWORD *)(UserSessionState + 69416));
  }
  v12 = a3 - 1;
  if ( v12 )
  {
    v13 = v12 - 3;
    if ( !v13 )
      return 5LL;
    v14 = v13 - 1;
    if ( !v14 )
      return 5LL;
    v15 = v14 - 3;
    if ( v15 && v15 != 2 )
      return 87LL;
  }
  return 5023LL;
}
