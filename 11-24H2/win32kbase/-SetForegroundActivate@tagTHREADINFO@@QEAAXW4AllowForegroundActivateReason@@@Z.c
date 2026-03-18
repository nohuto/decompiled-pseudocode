/*
 * XREFs of ?SetForegroundActivate@tagTHREADINFO@@QEAAXW4AllowForegroundActivateReason@@@Z @ 0x14015D080
 * Callers:
 *     xxxCreateThreadInfo @ 0x14015DFD8 (xxxCreateThreadInfo.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_dD @ 0x1400AACA4 (WPP_RECORDER_AND_TRACE_SF_dD.c)
 *     ?GetTID@tagTHREADINFO@@QEBAKXZ @ 0x1400F2110 (-GetTID@tagTHREADINFO@@QEBAKXZ.c)
 */

_UNKNOWN **__fastcall tagTHREADINFO::SetForegroundActivate(__int64 a1, int a2)
{
  char v4; // si
  _UNKNOWN **result; // rax
  char v6; // r14
  unsigned int TID; // ebx
  __int64 v8; // rcx
  __int64 UserSessionState; // rax

  v4 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x1000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  result = &WPP_RECORDER_INITIALIZED;
  v6 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    TID = (unsigned int)tagTHREADINFO::GetTID((PETHREAD *)a1);
    UserSessionState = W32GetUserSessionState(v8);
    result = (_UNKNOWN **)WPP_RECORDER_AND_TRACE_SF_dD(
                            *((_QWORD *)WPP_GLOBAL_Control + 3),
                            v4,
                            v6,
                            *(_QWORD *)(UserSessionState + 69400),
                            4u,
                            0xDu,
                            0xAu,
                            (__int64)&WPP_ab198495905d31ffcdd691cf04187f1c_Traceguids,
                            a2,
                            TID);
  }
  if ( (a2 & 0x20) != 0 )
  {
    result = (_UNKNOWN **)MEMORY[0xFFFFF78000000320];
    *(_DWORD *)(a1 + 1720) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  }
  *(_DWORD *)(a1 + 1716) |= a2;
  return result;
}
