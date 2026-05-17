/*
 * XREFs of TppCompleteThreadData @ 0x1800406E0
 * Callers:
 *     RtlpTpWorkCallback @ 0x18003D6C0 (RtlpTpWorkCallback.c)
 *     RtlpTpTimerCallback @ 0x18003E090 (RtlpTpTimerCallback.c)
 *     TppIopExecuteCallback @ 0x180040230 (TppIopExecuteCallback.c)
 *     RtlpTpWaitCallback @ 0x180041F40 (RtlpTpWaitCallback.c)
 *     TppTimerpExecuteCallback @ 0x180042330 (TppTimerpExecuteCallback.c)
 *     TppJobpExecuteCallback @ 0x1800D5D60 (TppJobpExecuteCallback.c)
 *     TppSimplepExecuteCallback @ 0x1800D60D0 (TppSimplepExecuteCallback.c)
 *     RtlpTpIoCallback @ 0x1800ECBC0 (RtlpTpIoCallback.c)
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
