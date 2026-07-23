/*
 * XREFs of HalpHpetAcknowledgeInterrupt @ 0x1404A99E0
 * Callers:
 *     <none>
 * Callees:
 *     HalpHpetSetMatchValue @ 0x14049D89C (HalpHpetSetMatchValue.c)
 *     HalSetTimerProblem @ 0x1404F8640 (HalSetTimerProblem.c)
 */

__int64 __fastcall HalpHpetAcknowledgeInterrupt(__int64 a1)
{
  __int64 result; // rax

  if ( *(_DWORD *)(a1 + 8) == 1 )
    return HalpHpetSetMatchValue((int *)a1, *(_DWORD *)(a1 + 20), 1);
  if ( *(_DWORD *)(a1 + 8) == 2 && !*(_BYTE *)(a1 + 12) )
    return HalSetTimerProblem(a1, 2LL);
  return result;
}
