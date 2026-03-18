/*
 * XREFs of MiStoreCheckCandidatePage @ 0x1402CA054
 * Callers:
 *     MiStoreWriteModifiedPages @ 0x1402CA294 (MiStoreWriteModifiedPages.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x140219770 (MiGetSystemRegionType.c)
 *     MI_NODE_FROM_PFN @ 0x14021CB00 (MI_NODE_FROM_PFN.c)
 *     MiGetPfnPriority @ 0x140230FB0 (MiGetPfnPriority.c)
 *     MiIsStoreProcess @ 0x140239E20 (MiIsStoreProcess.c)
 *     MiGetPageTablePfnBuddyRaw @ 0x1402C9D00 (MiGetPageTablePfnBuddyRaw.c)
 *     MiGetTopLevelPfn @ 0x1402C9D70 (MiGetTopLevelPfn.c)
 */

__int64 __fastcall MiStoreCheckCandidatePage(ULONG_PTR BugCheckParameter2, int a2, _DWORD *a3, _OWORD *a4, _QWORD *a5)
{
  unsigned int v5; // edi
  int v9; // r14d
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // rbx
  __int64 TopLevelPfn; // rax
  PEPROCESS PageTablePfnBuddyRaw; // r14
  __int64 v14; // r8
  int v15; // ebx
  char PfnPriority; // al
  char v17; // r10
  int v18; // ecx
  int v19; // eax
  __int128 v21; // [rsp+20h] [rbp-10h]

  v5 = 0;
  v9 = 0;
  if ( *(__int64 *)(BugCheckParameter2 + 40) < 0 )
  {
    *(_QWORD *)&v21 = *(_QWORD *)(BugCheckParameter2 + 8) | 0x8000000000000000uLL;
    *((_QWORD *)&v21 + 1) = 2LL;
  }
  else
  {
    v10 = *(_QWORD *)(BugCheckParameter2 + 8) | 0x8000000000000000uLL;
    if ( (unsigned int)MiGetSystemRegionType(v10) == 4 )
    {
      *(_QWORD *)&v21 = v10 - 808;
      *((_QWORD *)&v21 + 1) = 0xFFFFF6FB7DBED000uLL;
    }
    else
    {
      v11 = (__int64)(v10 << 25) >> 16;
      HIDWORD(v21) = HIDWORD(v11);
      if ( v11 <= 0x7FFFFFFEFFFFLL
        || v11 >= qword_140E2F040 && v11 <= qword_140E2F050
        || v11 >= 0xFFFFF68000000000uLL && v11 <= 0xFFFFF6FFFFFFFFFFuLL )
      {
        TopLevelPfn = MiGetTopLevelPfn(BugCheckParameter2);
        if ( TopLevelPfn == BugCheckParameter2 )
          return (unsigned int)-1073741253;
        PageTablePfnBuddyRaw = MiGetPageTablePfnBuddyRaw(TopLevelPfn);
        *(_QWORD *)&v21 = PageTablePfnBuddyRaw;
        _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( MiIsStoreProcess((__int64)PageTablePfnBuddyRaw) )
          return (unsigned int)-1073741401;
        v9 = (HIDWORD(PageTablePfnBuddyRaw[3].ActiveGroupsMask.Masks[1]) >> 18) & 1;
        DWORD2(v21) = v11 & 0xFFFFFFFC;
      }
      else
      {
        *(_QWORD *)&v21 = 0LL;
        DWORD2(v21) = v11 & 0xFFFFFFFC | 1;
      }
    }
  }
  v15 = *(_DWORD *)(BugCheckParameter2 + 32);
  MI_NODE_FROM_PFN(BugCheckParameter2);
  PfnPriority = MiGetPfnPriority(BugCheckParameter2);
  v18 = 3072;
  v19 = ((16 * (v9 | (2 * (v17 & 0x3F)))) | PfnPriority & 7) << 13;
  *a4 = v21;
  if ( (BYTE2(v15) & 0xC0) != 0x40 )
    v18 = 68608;
  *a5 = v18 | (unsigned int)v19;
  *a3 = a2;
  return v5;
}
