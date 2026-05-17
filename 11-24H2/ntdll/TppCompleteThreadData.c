/*
 * XREFs of TppCompleteThreadData @ 0x18001F420
 * Callers:
 *     TppIopExecuteCallback @ 0x18001EF70 (TppIopExecuteCallback.c)
 *     RtlpTpWaitCallback @ 0x180020530 (RtlpTpWaitCallback.c)
 *     TppTimerpExecuteCallback @ 0x180020920 (TppTimerpExecuteCallback.c)
 *     TppJobpExecuteCallback @ 0x180068EC0 (TppJobpExecuteCallback.c)
 *     TppSimplepExecuteCallback @ 0x180069230 (TppSimplepExecuteCallback.c)
 *     RtlpTpTimerCallback @ 0x18006D350 (RtlpTpTimerCallback.c)
 *     RtlpTpWorkCallback @ 0x18006F790 (RtlpTpWorkCallback.c)
 *     RtlpTpIoCallback @ 0x1800EC3E0 (RtlpTpIoCallback.c)
 * Callees:
 *     <none>
 */

void __fastcall TppCompleteThreadData(__int64 a1)
{
  __int64 v1; // rdx

  if ( a1 )
  {
    v1 = *(_QWORD *)(a1 + 24);
    if ( MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0] >= v1 )
      *(_QWORD *)(a1 + 24) = MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0] - v1;
  }
}
