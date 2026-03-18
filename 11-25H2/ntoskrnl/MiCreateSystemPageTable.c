/*
 * XREFs of MiCreateSystemPageTable @ 0x1402D0110
 * Callers:
 *     <none>
 * Callees:
 *     MiGetPageTablePages @ 0x14022A2B8 (MiGetPageTablePages.c)
 *     MiReleaseProcessorFlushList @ 0x140237CC0 (MiReleaseProcessorFlushList.c)
 *     MiUnlockPageTable @ 0x14028B6B0 (MiUnlockPageTable.c)
 *     MiIsPageAGapPage @ 0x1402D046C (MiIsPageAGapPage.c)
 *     MiInitializeSystemPageTable @ 0x1402D04C8 (MiInitializeSystemPageTable.c)
 *     MiLockNestedPageTable @ 0x1402FB780 (MiLockNestedPageTable.c)
 *     MiFlushTbList @ 0x14032BCA0 (MiFlushTbList.c)
 *     MiFillPteHierarchy @ 0x14038B8B0 (MiFillPteHierarchy.c)
 *     MiArePageContentsZero @ 0x1404C9D90 (MiArePageContentsZero.c)
 *     MiMakeSystemLeavesNonZero @ 0x1404D9074 (MiMakeSystemLeavesNonZero.c)
 *     MiMakeLargePageTable @ 0x1404F59B4 (MiMakeLargePageTable.c)
 */

__int64 __fastcall MiCreateSystemPageTable(__int64 a1, unsigned __int64 *a2, unsigned int a3)
{
  __int64 v3; // rsi
  __int64 v4; // rdi
  unsigned __int64 v5; // r15
  unsigned __int64 v7; // rbx
  unsigned __int64 v9; // rdx
  int v10; // ecx
  unsigned int v11; // r8d
  int PageTablePages; // eax
  __int64 v13; // r12
  _QWORD *v14; // rbx
  _QWORD *v15; // r13
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 *v18; // r13
  __int64 v19; // rcx
  unsigned __int64 v20; // [rsp+20h] [rbp-40h]
  __int128 v21; // [rsp+28h] [rbp-38h] BYREF
  __int64 v22; // [rsp+38h] [rbp-28h]
  _OWORD v23[2]; // [rsp+40h] [rbp-20h] BYREF
  unsigned __int64 *i; // [rsp+A0h] [rbp+40h]
  __int64 v25; // [rsp+B8h] [rbp+58h]

  v3 = *(_QWORD *)(a1 + 184);
  v4 = (int)a3;
  v22 = 0LL;
  v5 = (unsigned __int64)a2;
  v21 = 0LL;
  memset(v23, 0, sizeof(v23));
  if ( _bittest((const signed __int32 *)(v3 + 128), 0xEu) )
  {
    MiFillPteHierarchy(a2, v23);
    v5 = *((_QWORD *)v23 + v4);
    LOBYTE(v20) = 0;
  }
  else
  {
    v7 = *a2;
    v20 = *a2;
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
  v25 = 1LL;
  v10 = 2;
  if ( (_DWORD)v4 )
  {
    if ( !_bittest((const signed __int32 *)(v3 + 128), 0xEu) )
      goto LABEL_13;
    v9 = (int)v4 + 1;
    v25 = v9;
  }
  v10 = 3;
LABEL_13:
  v11 = v10 | 0x2000;
  if ( (*(_DWORD *)(v3 + 128) & 0x2000) == 0 )
    v11 = v10;
  PageTablePages = MiGetPageTablePages(v3, v9, v11, (__int64)&v21);
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
    v13 = v22;
    v14 = (_QWORD *)v21;
    for ( i = (unsigned __int64 *)v23 + v4; ; v5 = *i )
    {
      v15 = v14;
      if ( v14 )
      {
        v14 = (_QWORD *)*v14;
        v13 = --v22;
      }
      if ( (MiFlags & 0x80u) != 0LL && (++dword_140E2FF28 & MmPageValidationFrequency) == 0 )
        MiArePageContentsZero(0xAAAAAAAAAAAAAAABuLL * ((__int64)(v15 + 0x44000000000LL) >> 4));
      MiInitializeSystemPageTable(a1, (unsigned int)v4, v5, v15);
      v18 = *(__int64 **)(v3 + 176);
      if ( v18 && v18[4] && (int)v4 >= 1 )
      {
        MiLockNestedPageTable(*v18, v5);
        MiUnlockPageTable(*v18, ((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
        v18[4] = v5;
      }
      if ( !v13 )
        break;
      LODWORD(v4) = v4 - 1;
      --i;
    }
    *(_QWORD *)(v3 + 112) += v25;
    if ( (*(_DWORD *)(v3 + 128) & 0x4000) != 0 )
      return 0LL;
    if ( (int)v4 <= ((*(_DWORD *)(a1 + 4) >> 6) & 7) )
      goto LABEL_7;
    if ( (v20 & 1) != 0 )
    {
      v19 = *(_QWORD *)(v3 + 136);
      if ( v19 )
      {
        MiFlushTbList(v19, v16, v17);
        MiReleaseProcessorFlushList();
        *(_QWORD *)(v3 + 136) = 0LL;
      }
    }
    return 2LL;
  }
}
