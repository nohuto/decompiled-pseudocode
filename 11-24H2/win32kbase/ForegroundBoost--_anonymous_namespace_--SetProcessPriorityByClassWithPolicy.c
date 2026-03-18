/*
 * XREFs of ForegroundBoost::_anonymous_namespace_::SetProcessPriorityByClassWithPolicy @ 0x1401ACAE4
 * Callers:
 *     ForegroundBoost::_anonymous_namespace_::SetProcessPriorityByClass @ 0x140164034 (ForegroundBoost--_anonymous_namespace_--SetProcessPriorityByClass.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x14005DD80 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1400C0560 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     ForegroundBoost::_anonymous_namespace_::IsBoostAllowed @ 0x1401AC410 (ForegroundBoost--_anonymous_namespace_--IsBoostAllowed.c)
 */

__int64 __fastcall ForegroundBoost::_anonymous_namespace_::SetProcessPriorityByClassWithPolicy(
        __int64 a1,
        unsigned int a2)
{
  char v5; // di
  bool v6; // bl
  bool v7; // si
  __int64 UserSessionState; // rax
  int v9; // r8d
  int v10; // edx
  char v11; // si
  int v12; // ebx
  __int64 v13; // rax

  if ( ForegroundBoost::_anonymous_namespace_::IsBoostAllowed(a1) )
  {
    PsSetProcessPriorityByClass(*(_QWORD *)a1, a2);
    return 1LL;
  }
  else
  {
    v5 = 1;
    v6 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x1000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 3u;
    v7 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control);
      LOBYTE(v9) = v7;
      LOBYTE(v10) = v6;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v10,
        v9,
        *(_QWORD *)(UserSessionState + 69400),
        3,
        13,
        11,
        (__int64)&WPP_1d51b6299ead376684ffd9d69d49bf5d_Traceguids);
    }
    if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x1000) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
    {
      v5 = 0;
    }
    v11 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v12 = *(_DWORD *)(a1 + 56);
      v13 = W32GetUserSessionState(WPP_GLOBAL_Control);
      WPP_RECORDER_AND_TRACE_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v5,
        v11,
        *(_QWORD *)(v13 + 69400),
        4u,
        0xDu,
        0xCu,
        (__int64)&WPP_1d51b6299ead376684ffd9d69d49bf5d_Traceguids,
        v12);
    }
    return 2LL;
  }
}
