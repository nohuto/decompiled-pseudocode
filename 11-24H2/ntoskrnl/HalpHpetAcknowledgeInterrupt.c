/*
 * XREFs of HalpHpetAcknowledgeInterrupt @ 0x1404AF000
 * Callers:
 *     <none>
 * Callees:
 *     HalpHpetSetMatchValue @ 0x1404A290C (HalpHpetSetMatchValue.c)
 *     HalSetTimerProblem @ 0x1404FAD60 (HalSetTimerProblem.c)
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
