/*
 * XREFs of ForegroundBoost::_anonymous_namespace_::CanAdjustPriority @ 0x1401ABFF4
 * Callers:
 *     ForegroundBoost::_anonymous_namespace_::_SetForegroundPriority_Old @ 0x1401AD1B0 (ForegroundBoost--_anonymous_namespace_--_SetForegroundPriority_Old.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_dD @ 0x1400AACA4 (WPP_RECORDER_AND_TRACE_SF_dD.c)
 */

char __fastcall ForegroundBoost::_anonymous_namespace_::CanAdjustPriority(__int64 a1)
{
  char v2; // si
  char v3; // bp
  unsigned int ThreadId; // eax
  __int64 v5; // rcx
  unsigned int v6; // edi
  int v7; // ebx
  __int64 UserSessionState; // rax

  if ( (_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 528), 0, 0) & 0xC) == 0 )
    return 1;
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x1000) == 0
    || (v2 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v2 = 0;
  }
  v3 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    ThreadId = (unsigned int)PsGetThreadId(*(PETHREAD *)a1);
    v5 = *(_QWORD *)(a1 + 464);
    v6 = ThreadId;
    v7 = *(_DWORD *)(v5 + 56);
    UserSessionState = W32GetUserSessionState(v5);
    WPP_RECORDER_AND_TRACE_SF_dD(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v2,
      v3,
      *(_QWORD *)(UserSessionState + 69400),
      4u,
      0xDu,
      0xAu,
      (__int64)&WPP_1d51b6299ead376684ffd9d69d49bf5d_Traceguids,
      v7,
      v6);
  }
  return 0;
}
