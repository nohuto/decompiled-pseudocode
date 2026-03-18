/*
 * XREFs of PopSessionDisconnected @ 0x1409BA5E8
 * Callers:
 *     PopSessionConnectionChangeV2 @ 0x14075F904 (PopSessionConnectionChangeV2.c)
 *     PopSessionConnectionChange @ 0x140ACB140 (PopSessionConnectionChange.c)
 * Callees:
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     PopDiagTraceSessionStates @ 0x1409BA66C (PopDiagTraceSessionStates.c)
 *     PopSetSessionDisplayStatus @ 0x1409BA88C (PopSetSessionDisplayStatus.c)
 *     PopSetSessionUserStatus @ 0x1409BC5C8 (PopSetSessionUserStatus.c)
 */

__int64 __fastcall PopSessionDisconnected(unsigned int a1, __int64 a2)
{
  __int64 result; // rax

  PopDiagTraceSessionStates(&POP_ETW_ADPM_SESSION_DISCONNECTED);
  if ( dword_140F07358 == a1 && a1 != -1 )
  {
    memset_0(&PopAdaptiveContext, 0, 0x50uLL);
    dword_140F07358 = -1;
    dword_140F0735C = 3;
  }
  PopSetSessionDisplayStatus(a1, 0LL);
  PopSetSessionUserStatus(a1, 2LL);
  result = 0LL;
  *(_DWORD *)a2 = 0;
  *(_DWORD *)(a2 + 8) = 0;
  *(_BYTE *)(a2 + 12) = 0;
  return result;
}
