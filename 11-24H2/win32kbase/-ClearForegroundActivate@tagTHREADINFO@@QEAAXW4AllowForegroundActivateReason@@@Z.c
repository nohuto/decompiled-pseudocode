/*
 * XREFs of ?ClearForegroundActivate@tagTHREADINFO@@QEAAXW4AllowForegroundActivateReason@@@Z @ 0x1401A2D50
 * Callers:
 *     <none>
 * Callees:
 *     ?GetTID@tagTHREADINFO@@QEBAKXZ @ 0x1400F2110 (-GetTID@tagTHREADINFO@@QEBAKXZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_DDD @ 0x1401A4324 (WPP_RECORDER_AND_TRACE_SF_DDD.c)
 */

__int64 __fastcall tagTHREADINFO::ClearForegroundActivate(__int64 a1, int a2)
{
  bool v4; // r14
  bool v5; // r15
  __int64 v6; // rcx
  __int64 UserSessionState; // rax
  int v8; // r8d
  int v9; // edx
  unsigned int v10; // ecx
  __int64 result; // rax

  v4 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x1000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v5 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    tagTHREADINFO::GetTID((PETHREAD *)a1);
    UserSessionState = W32GetUserSessionState(v6);
    LOBYTE(v8) = v5;
    LOBYTE(v9) = v4;
    WPP_RECORDER_AND_TRACE_SF_DDD(*((_QWORD *)WPP_GLOBAL_Control + 3), v9, v8, *(_QWORD *)(UserSessionState + 69400));
  }
  v10 = *(_DWORD *)(a1 + 1716);
  result = a2 & v10;
  if ( ((unsigned __int8)a2 & *(_BYTE *)(a1 + 1716) & 0x20) != 0 )
    *(_DWORD *)(a1 + 1720) = 0;
  *(_DWORD *)(a1 + 1716) = v10 & ~a2;
  return result;
}
