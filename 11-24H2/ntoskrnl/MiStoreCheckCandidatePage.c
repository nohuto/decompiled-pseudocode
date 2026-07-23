/*
 * XREFs of MiStoreCheckCandidatePage @ 0x1402FC214
 * Callers:
 *     MiStoreWriteModifiedPages @ 0x1402FB3F4 (MiStoreWriteModifiedPages.c)
 * Callees:
 *     MI_NODE_FROM_PFN @ 0x140251340 (MI_NODE_FROM_PFN.c)
 *     MiGetPageTablePfnBuddyRaw @ 0x1402FB220 (MiGetPageTablePfnBuddyRaw.c)
 *     MiGetTopLevelPfn @ 0x1402FB290 (MiGetTopLevelPfn.c)
 *     MiGetSystemRegionType @ 0x1402FDF90 (MiGetSystemRegionType.c)
 *     MiGetPfnPriority @ 0x140335630 (MiGetPfnPriority.c)
 *     MiIsStoreProcess @ 0x140343630 (MiIsStoreProcess.c)
 */

__int64 __fastcall MiStoreCheckCandidatePage(
        ULONG_PTR BugCheckParameter2,
        __int64 a2,
        _DWORD *a3,
        _OWORD *a4,
        _QWORD *a5)
{
  unsigned int v5; // edi
  int v9; // r14d
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // rbx
  __int64 TopLevelPfn; // rax
  PEPROCESS PageTablePfnBuddyRaw; // r14
  __int64 v14; // r8
  __int64 v15; // rdx
  __int64 v16; // r9
  int v17; // ebx
  char PfnPriority; // al
  char v19; // r10
  int v20; // ecx
  int v21; // eax
  __int128 v23; // [rsp+20h] [rbp-10h]
  int v24; // [rsp+78h] [rbp+48h]

  v24 = a2;
  v5 = 0;
  v9 = 0;
  if ( *(__int64 *)(BugCheckParameter2 + 40) < 0 )
  {
    *(_QWORD *)&v23 = *(_QWORD *)(BugCheckParameter2 + 8) | 0x8000000000000000uLL;
    *((_QWORD *)&v23 + 1) = 2LL;
  }
  else
  {
    v10 = *(_QWORD *)(BugCheckParameter2 + 8) | 0x8000000000000000uLL;
    if ( (unsigned int)MiGetSystemRegionType(v10, a2, a3) == 4 )
    {
      *(_QWORD *)&v23 = v10 - 808;
      *((_QWORD *)&v23 + 1) = 0xFFFFF6FB7DBED000uLL;
    }
    else
    {
      v11 = (__int64)(v10 << 25) >> 16;
      HIDWORD(v23) = HIDWORD(v11);
      if ( v11 > 0x7FFFFFFEFFFFLL
        && (v11 < qword_140E2F3C0 || v11 > qword_140E2F3D0)
        && (v11 < 0xFFFFF68000000000uLL || v11 > 0xFFFFF6FFFFFFFFFFuLL) )
      {
        *(_QWORD *)&v23 = 0LL;
        DWORD2(v23) = v11 & 0xFFFFFFFC | 1;
      }
      else
      {
        TopLevelPfn = MiGetTopLevelPfn(BugCheckParameter2);
        if ( TopLevelPfn == BugCheckParameter2 )
          return (unsigned int)-1073741253;
        PageTablePfnBuddyRaw = MiGetPageTablePfnBuddyRaw(TopLevelPfn);
        *(_QWORD *)&v23 = PageTablePfnBuddyRaw;
        _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( (unsigned int)MiIsStoreProcess(PageTablePfnBuddyRaw, v15, v14, v16) )
          return (unsigned int)-1073741401;
        v9 = (HIDWORD(PageTablePfnBuddyRaw[3].ActiveGroupsMask.Masks[1]) >> 18) & 1;
        DWORD2(v23) = v11 & 0xFFFFFFFC;
      }
    }
  }
  v17 = *(_DWORD *)(BugCheckParameter2 + 32);
  MI_NODE_FROM_PFN(BugCheckParameter2);
  PfnPriority = MiGetPfnPriority(BugCheckParameter2);
  v20 = 3072;
  v21 = ((16 * (v9 | (2 * (v19 & 0x3F)))) | PfnPriority & 7) << 13;
  *a4 = v23;
  if ( (BYTE2(v17) & 0xC0) != 0x40 )
    v20 = 68608;
  *a5 = v20 | (unsigned int)v21;
  *a3 = v24;
  return v5;
}
