/*
 * XREFs of TtmpTerminalInactivityWorkerRoutine @ 0x140770430
 * Callers:
 *     <none>
 * Callees:
 *     ZwUpdateWnfStateData @ 0x1406AA030 (ZwUpdateWnfStateData.c)
 */

__int64 TtmpTerminalInactivityWorkerRoutine()
{
  __int64 result; // rax

  do
  {
    ZwUpdateWnfStateData((__int64)&WNF_PO_TERMINAL_INACTIVITY, 0LL);
    result = (unsigned int)_InterlockedExchangeAdd(&TtmpTerminalInactivityWorkCount, 0xFFFFFFFF);
  }
  while ( (_DWORD)result != 1 );
  return result;
}
