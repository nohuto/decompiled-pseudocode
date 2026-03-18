/*
 * XREFs of CmpKeyEnumStackStart @ 0x140974128
 * Callers:
 *     CmpKeyEnumStackStartFromKeyNodeStack @ 0x140973E5C (CmpKeyEnumStackStartFromKeyNodeStack.c)
 *     CmpSubtreeEnumeratorStart @ 0x140973EA8 (CmpSubtreeEnumeratorStart.c)
 *     CmpGetSubKeyCountForKeyNodeStack @ 0x14097451C (CmpGetSubKeyCountForKeyNodeStack.c)
 * Callees:
 *     CmpAllocatePool @ 0x1403DCED4 (CmpAllocatePool.c)
 *     CmpStartKeyNodeStack @ 0x1409741C0 (CmpStartKeyNodeStack.c)
 *     CmpKeyEnumStackEntryInitialize @ 0x140975C8C (CmpKeyEnumStackEntryInitialize.c)
 */

__int64 __fastcall CmpKeyEnumStackStart(__int64 a1, unsigned __int16 a2)
{
  __int64 v5; // rbp
  __int64 Pool; // rax
  __int64 v7; // rsi

  if ( (__int16)a2 < 2 )
    goto LABEL_2;
  LOWORD(v5) = a2 - 1;
  Pool = CmpAllocatePool(0x100uLL);
  v7 = 0LL;
  *(_QWORD *)(a1 + 344) = Pool;
  if ( Pool )
  {
    v5 = (unsigned __int16)v5;
    do
    {
      CmpKeyEnumStackEntryInitialize(v7 + *(_QWORD *)(a1 + 344));
      v7 += 128LL;
      --v5;
    }
    while ( v5 );
LABEL_2:
    *(_WORD *)a1 = a2;
    return CmpStartKeyNodeStack(a1 + 8, a2);
  }
  return 3221225626LL;
}
