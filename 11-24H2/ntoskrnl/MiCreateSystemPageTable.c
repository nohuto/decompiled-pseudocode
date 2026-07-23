/*
 * XREFs of MiCreateSystemPageTable @ 0x14038EDA0
 * Callers:
 *     <none>
 * Callees:
 *     MiLockNestedPageTable @ 0x140201F50 (MiLockNestedPageTable.c)
 *     MiReleaseProcessorFlushList @ 0x140208120 (MiReleaseProcessorFlushList.c)
 *     MiGetPageTablePages @ 0x14021CA98 (MiGetPageTablePages.c)
 *     MiFlushTbList @ 0x1402A1330 (MiFlushTbList.c)
 *     MiUnlockPageTableInternal @ 0x1402C9C00 (MiUnlockPageTableInternal.c)
 *     MiIsPageAGapPage @ 0x14038F0FC (MiIsPageAGapPage.c)
 *     MiInitializeSystemPageTable @ 0x14038F158 (MiInitializeSystemPageTable.c)
 *     MiFillPteHierarchy @ 0x140398880 (MiFillPteHierarchy.c)
 *     MiArePageContentsZero @ 0x1404C33B0 (MiArePageContentsZero.c)
 *     MiMakeSystemLeavesNonZero @ 0x1404D1540 (MiMakeSystemLeavesNonZero.c)
 *     MiMakeLargePageTable @ 0x1404F5A48 (MiMakeLargePageTable.c)
 */

__int64 __fastcall MiCreateSystemPageTable(__int64 a1, unsigned __int64 *a2, unsigned int a3)
{
  __int64 v3; // rsi
  __int64 v4; // rdi
  ULONG_PTR v5; // r15
  unsigned __int64 v7; // rbx
  unsigned __int64 v9; // rdx
  int v10; // ecx
  unsigned int v11; // r8d
  int PageTablePages; // eax
  __int64 v13; // r12
  _QWORD *v14; // rbx
  _QWORD *v15; // r13
  __int64 *v16; // r13
  __int64 v17; // rcx
  unsigned __int64 v18; // [rsp+20h] [rbp-40h]
  __int128 v19; // [rsp+28h] [rbp-38h] BYREF
  __int64 v20; // [rsp+38h] [rbp-28h]
  _OWORD v21[2]; // [rsp+40h] [rbp-20h] BYREF
  ULONG_PTR *i; // [rsp+A0h] [rbp+40h]
  __int64 v23; // [rsp+B8h] [rbp+58h]

  v3 = *(_QWORD *)(a1 + 184);
  v4 = (int)a3;
  v20 = 0LL;
  v5 = (ULONG_PTR)a2;
  v19 = 0LL;
  memset(v21, 0, sizeof(v21));
  if ( _bittest((const signed __int32 *)(v3 + 128), 0xEu) )
  {
    MiFillPteHierarchy(a2, v21);
    v5 = *((_QWORD *)v21 + v4);
    LOBYTE(v18) = 0;
  }
  else
  {
    v7 = *a2;
    v18 = *a2;
    if ( (*a2 & 1) != 0 )
    {
      if ( (v7 & 0x80u) != 0LL )
        return 0LL;
      if ( !(unsigned int)MiIsPageAGapPage((v7 >> 12) & 0xFFFFFFFFFFLL, a3) && ((v7 & 0x800) != 0 || (v7 & 0x42) != 0) )
      {
        if ( (_DWORD)v4 == ((*(_DWORD *)(a1 + 4) >> 6) & 7) )
        {
LABEL_7:
          if ( (int)v4 > 1 )
            MiMakeSystemLeavesNonZero(a1, v5, (unsigned int)v4);
        }
        return 0LL;
      }
    }
  }
  if ( (*(_DWORD *)(v3 + 128) & 0x80u) != 0 && (unsigned int)MiMakeLargePageTable(a1, v5, (unsigned int)v4) )
    return 0LL;
  v9 = 1LL;
  v23 = 1LL;
  v10 = 2;
  if ( (_DWORD)v4 )
  {
    if ( !_bittest((const signed __int32 *)(v3 + 128), 0xEu) )
      goto LABEL_13;
    v9 = (int)v4 + 1;
    v23 = v9;
  }
  v10 = 3;
LABEL_13:
  v11 = v10 | 0x2000;
  if ( (*(_DWORD *)(v3 + 128) & 0x2000) == 0 )
    v11 = v10;
  PageTablePages = MiGetPageTablePages(v3, v9, v11, (__int64)&v19);
  if ( PageTablePages < 0 )
  {
    if ( PageTablePages == -1073741801
      && (*(_DWORD *)a1 & 2) != 0
      && *(_BYTE *)(a1 + 9) < 2u
      && KeGetCurrentThread()->Priority < 16
      && (*(_DWORD *)(v3 + 128) & 0x400) == 0 )
    {
      return 3LL;
    }
    else
    {
      *(_DWORD *)(v3 + 144) = PageTablePages;
      return 5LL;
    }
  }
  else
  {
    v13 = v20;
    v14 = (_QWORD *)v19;
    for ( i = (ULONG_PTR *)v21 + v4; ; v5 = *i )
    {
      v15 = v14;
      if ( v14 )
      {
        v14 = (_QWORD *)*v14;
        v13 = --v20;
      }
      if ( (MiFlags & 0x80u) != 0LL && (++dword_140E302B0 & MmPageValidationFrequency) == 0 )
        MiArePageContentsZero(0xAAAAAAAAAAAAAAABuLL * ((__int64)(v15 + 0x44000000000LL) >> 4));
      MiInitializeSystemPageTable(a1, (unsigned int)v4, v5, v15);
      v16 = *(__int64 **)(v3 + 176);
      if ( v16 && v16[4] && (int)v4 >= 1 )
      {
        MiLockNestedPageTable(*v16, v5);
        MiUnlockPageTableInternal(*v16, ((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
        v16[4] = v5;
      }
      if ( !v13 )
        break;
      LODWORD(v4) = v4 - 1;
      --i;
    }
    *(_QWORD *)(v3 + 112) += v23;
    if ( (*(_DWORD *)(v3 + 128) & 0x4000) != 0 )
      return 0LL;
    if ( (int)v4 <= ((*(_DWORD *)(a1 + 4) >> 6) & 7) )
      goto LABEL_7;
    if ( (v18 & 1) != 0 )
    {
      v17 = *(_QWORD *)(v3 + 136);
      if ( v17 )
      {
        MiFlushTbList(v17);
        MiReleaseProcessorFlushList();
        *(_QWORD *)(v3 + 136) = 0LL;
      }
    }
    return 2LL;
  }
}
