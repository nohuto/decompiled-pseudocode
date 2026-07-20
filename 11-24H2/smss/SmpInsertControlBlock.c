/*
 * XREFs of SmpInsertControlBlock @ 0x140003ACC
 * Callers:
 *     SmpInsertControlBlock @ 0x140003ACC (SmpInsertControlBlock.c)
 *     SmpStartCsr @ 0x140004120 (SmpStartCsr.c)
 * Callees:
 *     SmpInsertControlBlock @ 0x140003ACC (SmpInsertControlBlock.c)
 */

__int64 __fastcall SmpInsertControlBlock(__int64 a1, __int64 a2)
{
  _QWORD *v5; // rax

  if ( !a1 )
    return 1LL;
  if ( *(_DWORD *)(a2 + 8) >= *(_DWORD *)(a1 - 96) )
  {
    if ( (unsigned int)SmpInsertControlBlock(*(_QWORD *)(a1 + 16)) )
    {
      v5 = (_QWORD *)(a2 + 104);
      *(_QWORD *)(a1 + 16) = a2 + 104;
      goto LABEL_8;
    }
  }
  else if ( (unsigned int)SmpInsertControlBlock(*(_QWORD *)(a1 + 8)) )
  {
    v5 = (_QWORD *)(a2 + 104);
    *(_QWORD *)(a1 + 8) = a2 + 104;
LABEL_8:
    *v5 = a1;
  }
  return 0LL;
}
