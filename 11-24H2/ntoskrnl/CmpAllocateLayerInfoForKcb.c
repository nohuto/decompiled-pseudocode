/*
 * XREFs of CmpAllocateLayerInfoForKcb @ 0x140A00448
 * Callers:
 *     CmRenameKey @ 0x1407D9068 (CmRenameKey.c)
 *     CmpCreateKeyControlBlock @ 0x1408717C0 (CmpCreateKeyControlBlock.c)
 *     CmpCreateLayerLink @ 0x140A003B8 (CmpCreateLayerLink.c)
 * Callees:
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 */

__int64 __fastcall CmpAllocateLayerInfoForKcb(__int64 a1)
{
  unsigned int v1; // ebx
  _QWORD *Pool2; // rax
  _QWORD *v4; // rdi

  v1 = 0;
  if ( !*(_QWORD *)(a1 + 192) )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(0x100uLL);
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
