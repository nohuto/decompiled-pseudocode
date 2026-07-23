/*
 * XREFs of PopPepStartComponentActivatingActivity @ 0x1402BFA70
 * Callers:
 *     PopPepWork @ 0x1402BEEE0 (PopPepWork.c)
 *     PopPepProcessEvent @ 0x1402C0980 (PopPepProcessEvent.c)
 *     PopPepStartActivity @ 0x1402C2730 (PopPepStartActivity.c)
 * Callees:
 *     <none>
 */

char __fastcall PopPepStartComponentActivatingActivity(__int64 a1, __int64 a2, __int64 a3)
{
  char result; // al

  result = 0;
  if ( a2 )
  {
    *(_DWORD *)a3 = 0;
    *(_QWORD *)(a3 + 8) = *(_QWORD *)(a1 + 32);
    *(_DWORD *)(a3 + 16) = *(_DWORD *)(a2 + 8);
    return 1;
  }
  return result;
}
