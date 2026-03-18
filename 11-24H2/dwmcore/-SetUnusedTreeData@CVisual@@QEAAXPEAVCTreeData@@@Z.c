/*
 * XREFs of ?SetUnusedTreeData@CVisual@@QEAAXPEAVCTreeData@@@Z @ 0x180032DB0
 * Callers:
 *     ?ReleaseTreeDatas@CVisualTree@@AEAAXXZ @ 0x1800324F0 (-ReleaseTreeDatas@CVisualTree@@AEAAXXZ.c)
 * Callees:
 *     ?Allocate@AllocatedStorage@?$CSparseAlignedStorage@$07$07@@CAPEAV12@I@Z @ 0x1800330D8 (-Allocate@AllocatedStorage@-$CSparseAlignedStorage@$07$07@@CAPEAV12@I@Z.c)
 *     ?FindSlot@AllocatedStorage@?$CSparseAlignedStorage@$07$07@@AEBAII@Z @ 0x180048940 (-FindSlot@AllocatedStorage@-$CSparseAlignedStorage@$07$07@@AEBAII@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800BC0C0 (--3@YAXPEAX@Z.c)
 *     memcpy_0 @ 0x1802DF6D4 (memcpy_0.c)
 */

void __fastcall CVisual::SetUnusedTreeData(CVisual *this, struct CTreeData *a2)
{
  unsigned int *v2; // rbx
  unsigned int v5; // eax
  _BYTE *v6; // rcx
  unsigned int v7; // edi
  unsigned int v8; // eax
  unsigned int v9; // ecx
  unsigned int v10; // edi
  _DWORD *v11; // r12
  const void *v12; // r15
  _BYTE *v13; // rax
  __int64 *v14; // r14
  unsigned int Slot; // eax
  __int64 v16; // rcx
  _QWORD *v17; // rdi

  v2 = (unsigned int *)*((_QWORD *)this + 29);
  v5 = *v2;
  if ( a2 )
  {
    if ( (v5 & 0x10000000) != 0 )
    {
      Slot = CSparseAlignedStorage<8,8>::AllocatedStorage::FindSlot(*((_QWORD *)this + 29), 4LL);
      v16 = v2[1];
      if ( Slot >= (unsigned int)v16 )
        v17 = 0LL;
      else
        v17 = (_QWORD *)((char *)v2 + 8LL * Slot - (((_BYTE)v16 + 15) & 7) + v16 + 15);
      *v17 = a2;
    }
    else
    {
      v9 = v2[1];
      v10 = 0;
      v11 = v2 + 1;
      v12 = v2 + 2;
      if ( v9 )
      {
        v13 = v2 + 2;
        do
        {
          if ( !*v13 )
            break;
          ++v10;
          ++v13;
        }
        while ( v10 < v9 );
      }
      if ( v10 == v9 )
      {
        v14 = (__int64 *)v2;
        v2 = (unsigned int *)CSparseAlignedStorage<8,8>::AllocatedStorage::Allocate(v9 + 4);
        *((_QWORD *)this + 29) = v2;
        if ( v14 != &_pfnDefaultDliFailureHook2 )
        {
          *v2 = *(_DWORD *)v14;
          memcpy_0(v2 + 2, v12, (unsigned int)*v11);
          memcpy_0(
            (char *)v2 + v2[1] + 15LL - (((unsigned __int8)v2[1] + 15) & 7),
            (char *)v14 + (unsigned int)*v11 + 15LL - (((unsigned __int8)*v11 + 15) & 7),
            8LL * (unsigned int)*v11);
          operator delete(v14);
        }
      }
      *v2 |= 0x10000000u;
      *((_BYTE *)v2 + v10 + 8) = 4;
      *(_QWORD *)((char *)v2 + v2[1] + 8LL * v10 - (((unsigned __int8)v2[1] + 15) & 7) + 15) = a2;
    }
  }
  else if ( (v5 & 0x10000000) != 0 )
  {
    v6 = v2 + 2;
    *v2 = v5 & 0xEFFFFFFF;
    v7 = 0;
    v8 = v2[1];
    if ( v8 )
    {
      do
      {
        if ( *v6 == 4 )
          break;
        ++v7;
        ++v6;
      }
      while ( v7 < v8 );
    }
    if ( v7 < v8 )
      *((_BYTE *)v2 + v7 + 8) = 0;
  }
}
