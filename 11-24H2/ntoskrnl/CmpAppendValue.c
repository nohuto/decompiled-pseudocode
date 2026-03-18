/*
 * XREFs of CmpAppendValue @ 0x140C180FC
 * Callers:
 *     CmpParseInfBuffer @ 0x140C185C4 (CmpParseInfBuffer.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 */

char __fastcall CmpAppendValue(__int64 a1, __int64 a2, char a3)
{
  ULONG_PTR Pool2; // rax
  ULONG_PTR *v7; // rcx

  if ( !*(_QWORD *)(a1 + 16) )
    return 0;
  if ( !a2 )
    return 0;
  Pool2 = ExAllocatePool2(0x100uLL, 0x18uLL, 0x69704D43uLL);
  if ( !Pool2 )
    return 0;
  *(_QWORD *)Pool2 = 0LL;
  *(_QWORD *)(Pool2 + 8) = a2;
  *(_BYTE *)(Pool2 + 16) = a3;
  v7 = *(ULONG_PTR **)(a1 + 24);
  if ( v7 )
    *v7 = Pool2;
  else
    *(_QWORD *)(*(_QWORD *)(a1 + 16) + 16LL) = Pool2;
  *(_QWORD *)(a1 + 24) = Pool2;
  return 1;
}
