/*
 * XREFs of CmpAllocateLayerInfoForKcb @ 0x1409FD420
 * Callers:
 *     CmRenameKey @ 0x1407D95B8 (CmRenameKey.c)
 *     CmpCreateKeyControlBlock @ 0x140875AF0 (CmpCreateKeyControlBlock.c)
 *     CmpCreateLayerLink @ 0x1409FD390 (CmpCreateLayerLink.c)
 * Callees:
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 __fastcall CmpAllocateLayerInfoForKcb(__int64 a1)
{
  unsigned int v1; // ebx
  _QWORD *Pool2; // rax
  _QWORD *v4; // rdi

  v1 = 0;
  if ( !*(_QWORD *)(a1 + 192) )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(0x100uLL, 0x40uLL, 0x696C4D43u);
    v4 = Pool2;
    if ( Pool2 )
    {
      memset_0(Pool2, 0, 0x40uLL);
      v4[2] = a1;
      v4[5] = v4 + 4;
      v4[4] = v4 + 4;
      v4[7] = v4 + 6;
      v4[6] = v4 + 6;
      *(_QWORD *)(a1 + 192) = v4;
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  return v1;
}
