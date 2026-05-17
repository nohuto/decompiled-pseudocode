/*
 * XREFs of RtlFreeHandle @ 0x1800F0D30
 * Callers:
 *     <none>
 * Callees:
 *     memset$thunk$772440563353939046 @ 0x180174030 (memset$thunk$772440563353939046.c)
 */

char __fastcall RtlFreeHandle(__int64 a1, _QWORD *a2)
{
  char result; // al

  memset_thunk_772440563353939046(a2, 0, *(unsigned int *)(a1 + 4));
  *a2 = *(_QWORD *)(a1 + 16);
  result = 1;
  *(_QWORD *)(a1 + 16) = a2;
  return result;
}
