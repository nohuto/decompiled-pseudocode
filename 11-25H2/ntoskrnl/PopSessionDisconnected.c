/*
 * XREFs of PopSessionDisconnected @ 0x140A22878
 * Callers:
 *     PopSessionConnectionChange @ 0x140A226D0 (PopSessionConnectionChange.c)
 * Callees:
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     PopSetSessionUserStatus @ 0x140964818 (PopSetSessionUserStatus.c)
 *     PopDiagTraceSessionStates @ 0x14096526C (PopDiagTraceSessionStates.c)
 *     PopSetSessionDisplayStatus @ 0x140A229B4 (PopSetSessionDisplayStatus.c)
 */

__int64 __fastcall PopSessionDisconnected(unsigned int a1, __int64 a2)
{
  __int64 result; // rax

  PopDiagTraceSessionStates(&POP_ETW_ADPM_SESSION_DISCONNECTED, a1, 0);
  if ( dword_140F06D58 == a1 && a1 != -1 )
  {
    memset_0(&PopAdaptiveContext, 0, 0x50uLL);
    dword_140F06D58 = -1;
    dword_140F06D5C = 3;
  }
  PopSetSessionDisplayStatus(a1, 0LL, 0LL);
  PopSetSessionUserStatus(a1, 2u);
  result = 0LL;
  *(_DWORD *)a2 = 0;
  *(_DWORD *)(a2 + 8) = 0;
  *(_BYTE *)(a2 + 12) = 0;
  return result;
}
