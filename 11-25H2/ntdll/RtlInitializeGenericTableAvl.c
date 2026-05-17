/*
 * XREFs of RtlInitializeGenericTableAvl @ 0x1800FA130
 * Callers:
 *     <none>
 * Callees:
 *     memset$thunk$772440563353939046 @ 0x180174030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlInitializeGenericTableAvl(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 result; // rax

  memset_thunk_772440563353939046(a1, 0, 0x68uLL);
  result = a5;
  a1[9] = a2;
  a1[11] = a4;
  a1[12] = a5;
  *a1 = a1;
  a1[10] = a3;
  return result;
}
