/*
 * XREFs of KiSetDebuggerOwner @ 0x1404FB2A4
 * Callers:
 *     KeFreezeExecution @ 0x1404D5B60 (KeFreezeExecution.c)
 *     KeBugCheck2 @ 0x1405B1780 (KeBugCheck2.c)
 *     KeSwitchFrozenProcessor @ 0x1405C1B30 (KeSwitchFrozenProcessor.c)
 *     KiFreezeTargetExecution @ 0x1405C1C80 (KiFreezeTargetExecution.c)
 *     KiBugCheckRecoveryFreezeOtherProcessors @ 0x1405C5B80 (KiBugCheckRecoveryFreezeOtherProcessors.c)
 * Callees:
 *     <none>
 */

char __fastcall KiSetDebuggerOwner(__int64 a1)
{
  char result; // al
  __int64 v2; // rdx

  result = KiDebuggerIsStallOwner;
  if ( KiDebuggerIsStallOwner
    || !a1
    || (result = KeNumberProcessors_0, (_DWORD)KeNumberProcessors_0 == 1)
    || (result = MEMORY[0xFFFFF780000003C6]) != 0 )
  {
    v2 = a1;
  }
  else
  {
    v2 = qword_140FC7C08;
    if ( *(_DWORD *)(a1 + 36) )
      v2 = KiProcessorBlock[0];
  }
  KiFreezeStallOwner = v2;
  _InterlockedExchange64(&KiDebuggerOwner, a1);
  return result;
}
