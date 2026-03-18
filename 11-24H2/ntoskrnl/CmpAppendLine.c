/*
 * XREFs of CmpAppendLine @ 0x140C17F60
 * Callers:
 *     CmpParseInfBuffer @ 0x140C185C4 (CmpParseInfBuffer.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 */

char __fastcall CmpAppendLine(_QWORD *a1, __int64 a2, char a3)
{
  ULONG_PTR Pool2; // rax
  ULONG_PTR *v7; // rcx

  if ( !a1[1] )
    return 0;
  Pool2 = ExAllocatePool2(0x100uLL, 0x20uLL, 0x69704D43uLL);
  if ( !Pool2 )
    return 0;
  *(_QWORD *)Pool2 = 0LL;
  *(_QWORD *)(Pool2 + 16) = 0LL;
  *(_QWORD *)(Pool2 + 8) = a2;
  *(_BYTE *)(Pool2 + 24) = a3;
  v7 = (ULONG_PTR *)a1[2];
  if ( v7 )
    *v7 = Pool2;
  else
    *(_QWORD *)(a1[1] + 16LL) = Pool2;
  a1[3] = 0LL;
  a1[2] = Pool2;
  return 1;
}
