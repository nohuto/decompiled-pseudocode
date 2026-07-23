/*
 * XREFs of CmpSubtreeEnumeratorStart @ 0x140908DB0
 * Callers:
 *     CmpSubtreeEnumeratorStartForKcbStack @ 0x1409077A0 (CmpSubtreeEnumeratorStartForKcbStack.c)
 *     CmpPromoteSubtree @ 0x140908398 (CmpPromoteSubtree.c)
 *     CmpDoAccessCheckOnLayeredSubtree @ 0x1409090E8 (CmpDoAccessCheckOnLayeredSubtree.c)
 * Callees:
 *     CmpAllocatePool @ 0x1403C9EA4 (CmpAllocatePool.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     CmpStartKcbStack @ 0x140872120 (CmpStartKcbStack.c)
 *     CmpKeyEnumStackStart @ 0x140908FBC (CmpKeyEnumStackStart.c)
 *     CmpStartKeyNodeStack @ 0x140909054 (CmpStartKeyNodeStack.c)
 *     CmpKeyEnumStackInitialize @ 0x14090A9A4 (CmpKeyEnumStackInitialize.c)
 */

__int64 __fastcall CmpSubtreeEnumeratorStart(__int64 a1, __int16 a2)
{
  __int64 Pool; // rax
  __int64 v4; // rbp
  __int64 v5; // rsi
  _WORD *v6; // rbx
  __int16 i; // bx
  __int64 v8; // rdx
  __int64 v9; // rsi
  __int64 result; // rax

  *(_WORD *)(a1 + 2) = a2;
  Pool = CmpAllocatePool(0x100uLL, 0x33000uLL, 0x31394D43u);
  *(_QWORD *)(a1 + 96) = Pool;
  if ( !Pool )
    return 3221225626LL;
  v4 = 512LL;
  v5 = 0LL;
  do
  {
    v6 = (_WORD *)(v5 + *(_QWORD *)(a1 + 96));
    memset_0(v6, 0, 0x198uLL);
    v6[13] = -1;
    CmpKeyEnumStackInitialize(v6 + 28);
    v5 += 408LL;
    --v4;
  }
  while ( v4 );
  for ( i = 0; ; ++i )
  {
    v8 = *(unsigned __int16 *)(a1 + 2);
    if ( i >= 512 )
      break;
    v9 = *(_QWORD *)(a1 + 96) + 408LL * i;
    result = CmpStartKcbStack(v9 + 24, v8);
    if ( (int)result < 0 )
      return result;
    result = CmpKeyEnumStackStart(v9 + 56, *(unsigned __int16 *)(a1 + 2));
    if ( (int)result < 0 )
      return result;
  }
  return CmpStartKeyNodeStack(a1 + 16, v8);
}
