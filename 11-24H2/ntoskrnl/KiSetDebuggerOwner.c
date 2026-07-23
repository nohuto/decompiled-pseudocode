/*
 * XREFs of KiSetDebuggerOwner @ 0x1404F8B84
 * Callers:
 *     KeFreezeExecution @ 0x1404CEFB0 (KeFreezeExecution.c)
 *     KeBugCheck2 @ 0x1405AE6F0 (KeBugCheck2.c)
 *     KeSwitchFrozenProcessor @ 0x1405BF100 (KeSwitchFrozenProcessor.c)
 *     KiFreezeTargetExecution @ 0x1405BF250 (KiFreezeTargetExecution.c)
 *     KiBugCheckRecoveryFreezeOtherProcessors @ 0x1405C32B0 (KiBugCheckRecoveryFreezeOtherProcessors.c)
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
    v2 = qword_140FC8C88;
    if ( *(_DWORD *)(a1 + 36) )
      v2 = KiProcessorBlock[0];
  }
  KiFreezeStallOwner = v2;
  _InterlockedExchange64(&KiDebuggerOwner, a1);
  return result;
}
