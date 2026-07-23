/*
 * XREFs of TppCompleteThreadData @ 0x18004BE20
 * Callers:
 *     TppIopExecuteCallback @ 0x18004B970 (TppIopExecuteCallback.c)
 *     RtlpTpWaitCallback @ 0x18004CF30 (RtlpTpWaitCallback.c)
 *     TppTimerpExecuteCallback @ 0x18004D320 (TppTimerpExecuteCallback.c)
 *     TppJobpExecuteCallback @ 0x180084A50 (TppJobpExecuteCallback.c)
 *     TppSimplepExecuteCallback @ 0x180084DC0 (TppSimplepExecuteCallback.c)
 *     RtlpTpTimerCallback @ 0x180089C30 (RtlpTpTimerCallback.c)
 *     RtlpTpWorkCallback @ 0x18008C070 (RtlpTpWorkCallback.c)
 *     RtlpTpIoCallback @ 0x1800E7250 (RtlpTpIoCallback.c)
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
