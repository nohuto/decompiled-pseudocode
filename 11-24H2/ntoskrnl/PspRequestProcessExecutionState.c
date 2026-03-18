/*
 * XREFs of PspRequestProcessExecutionState @ 0x140A8B914
 * Callers:
 *     PspSetProcessFreezeStateCallback @ 0x1403E3850 (PspSetProcessFreezeStateCallback.c)
 *     PsSwapProcessWorkingSet @ 0x140774624 (PsSwapProcessWorkingSet.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PspRequestProcessExecutionState(__int64 a1, char a2, char a3)
{
  __int64 result; // rax

  result = *(unsigned int *)(a1 + 1532);
  if ( (result & 1) != 0 && (a3 & 1) == 0 )
    a2 &= ~2u;
  *(_BYTE *)(a1 + 2043) = a2;
  return result;
}
