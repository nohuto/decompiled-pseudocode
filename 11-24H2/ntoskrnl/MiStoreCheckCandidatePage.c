/*
 * XREFs of MiStoreCheckCandidatePage @ 0x140229014
 * Callers:
 *     MiStoreWriteModifiedPages @ 0x1402281F4 (MiStoreWriteModifiedPages.c)
 * Callees:
 *     MiGetPfnPriority @ 0x1402141E0 (MiGetPfnPriority.c)
 *     MI_NODE_FROM_PFN @ 0x1402245F0 (MI_NODE_FROM_PFN.c)
 *     MiGetPageTablePfnBuddyRaw @ 0x140227FA0 (MiGetPageTablePfnBuddyRaw.c)
 *     MiGetTopLevelPfn @ 0x140228010 (MiGetTopLevelPfn.c)
 *     MiGetSystemRegionType @ 0x14022AD20 (MiGetSystemRegionType.c)
 *     MiIsStoreProcess @ 0x1402FB9C0 (MiIsStoreProcess.c)
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
      if ( v11 > 0x7FFFFFFEFFFFLL
        && (v11 < qword_140E2F280 || v11 > qword_140E2F290)
        && (v11 < 0xFFFFF68000000000uLL || v11 > 0xFFFFF6FFFFFFFFFFuLL) )
      {
        *(_QWORD *)&v21 = 0LL;
        DWORD2(v21) = v11 & 0xFFFFFFFC | 1;
      }
      else
      {
        TopLevelPfn = MiGetTopLevelPfn(BugCheckParameter2);
        if ( TopLevelPfn == BugCheckParameter2 )
          return (unsigned int)-1073741253;
        PageTablePfnBuddyRaw = MiGetPageTablePfnBuddyRaw(TopLevelPfn);
        *(_QWORD *)&v21 = PageTablePfnBuddyRaw;
        _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( (unsigned int)MiIsStoreProcess(PageTablePfnBuddyRaw) )
          return (unsigned int)-1073741401;
        v9 = (HIDWORD(PageTablePfnBuddyRaw[3].ActiveGroupsMask.Masks[1]) >> 18) & 1;
        DWORD2(v21) = v11 & 0xFFFFFFFC;
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
