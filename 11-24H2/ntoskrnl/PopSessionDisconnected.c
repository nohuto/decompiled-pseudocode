/*
 * XREFs of PopSessionDisconnected @ 0x1409A0C38
 * Callers:
 *     PopSessionConnectionChangeV2 @ 0x14075E8A4 (PopSessionConnectionChangeV2.c)
 *     PopSessionConnectionChange @ 0x140AC8CFC (PopSessionConnectionChange.c)
 * Callees:
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     PopDiagTraceSessionStates @ 0x1409A0CBC (PopDiagTraceSessionStates.c)
 *     PopSetSessionDisplayStatus @ 0x1409A0EDC (PopSetSessionDisplayStatus.c)
 *     PopSetSessionUserStatus @ 0x1409A2C18 (PopSetSessionUserStatus.c)
 */

__int64 __fastcall PopSessionDisconnected(unsigned int a1, __int64 a2)
{
  __int64 result; // rax

  PopDiagTraceSessionStates(&POP_ETW_ADPM_SESSION_DISCONNECTED);
  if ( dword_140F07678 == a1 && a1 != -1 )
  {
    memset_0(&PopAdaptiveContext, 0, 0x50uLL);
    dword_140F07678 = -1;
    dword_140F0767C = 3;
  }
  PopSetSessionDisplayStatus(a1, 0LL);
  PopSetSessionUserStatus(a1, 2LL);
  result = 0LL;
  *(_DWORD *)a2 = 0;
  *(_DWORD *)(a2 + 8) = 0;
  *(_BYTE *)(a2 + 12) = 0;
  return result;
}
