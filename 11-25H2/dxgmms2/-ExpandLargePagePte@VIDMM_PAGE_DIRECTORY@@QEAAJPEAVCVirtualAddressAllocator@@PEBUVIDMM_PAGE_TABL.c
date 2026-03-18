/*
 * XREFs of ?ExpandLargePagePte@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUVIDMM_PAGE_TABLE_LEVEL_DESC@@E_KIPEAPEAUVIDMM_ALLOC@@@Z @ 0x1400CF084
 * Callers:
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1400D03C0 (-CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_V.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     ?GetVidMmGlobalAllocFromOwner@@YAPEAUVIDMM_GLOBAL_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z @ 0x14003839C (-GetVidMmGlobalAllocFromOwner@@YAPEAUVIDMM_GLOBAL_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z.c)
 *     memset @ 0x140056780 (memset.c)
 *     ?DestroyPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z @ 0x1400B9124 (-DestroyPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z.c)
 *     ?SetPageTableInPde@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@I@Z @ 0x1400CF5A8 (-SetPageTableInPde@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@I@Z.c)
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1400CF680 (-CommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_ST.c)
 *     ?CreatePageTable@@YAPEAVVIDMM_PAGE_TABLE@@PEAVCVirtualAddressAllocator@@IEE@Z @ 0x1400E7850 (-CreatePageTable@@YAPEAVVIDMM_PAGE_TABLE@@PEAVCVirtualAddressAllocator@@IEE@Z.c)
 */

__int64 __fastcall VIDMM_PAGE_DIRECTORY::ExpandLargePagePte(
        VIDMM_PAGE_DIRECTORY *this,
        struct CVirtualAddressAllocator *a2,
        const struct VIDMM_PAGE_TABLE_LEVEL_DESC *a3,
        char a4,
        unsigned __int64 a5,
        unsigned int a6,
        struct VIDMM_ALLOC **a7)
{
  __int64 v11; // rbx
  _QWORD *v12; // rdx
  unsigned __int64 v13; // rsi
  __int64 v14; // r11
  int v15; // r9d
  unsigned __int64 v16; // rcx
  __int64 v17; // rax
  unsigned __int8 v18; // bl
  _QWORD *VidMmGlobalAllocFromOwner; // rax
  char v20; // r9
  unsigned int v21; // r10d
  __int64 v22; // r11
  unsigned __int8 v23; // r9
  struct VIDMM_PAGE_TABLE *PageTable; // rbx
  int v25; // esi
  __int64 v27; // rcx
  struct VIDMM_ALLOC *v28; // rcx
  _QWORD v29[12]; // [rsp+50h] [rbp-88h] BYREF

  v11 = *(_QWORD *)(*((_QWORD *)this + 6) + 8LL * a6);
  memset(v29, 0, sizeof(v29));
  v12 = *(_QWORD **)v11;
  v13 = 0LL;
  v14 = *((_QWORD *)this + 5);
  v15 = *(_DWORD *)this >> 6;
  LODWORD(v29[7]) = *(_DWORD *)(v11 + 8);
  v16 = *(_QWORD *)(v14 + 16LL * a6);
  v29[6] = v12;
  v29[0] = v16 & 0xFFFFFFFFFFFFFBFFuLL;
  v17 = *(_QWORD *)(v11 + 16);
  LODWORD(v29[9]) = (v16 >> 5) & 0x1F;
  v18 = v15 & 1;
  BYTE4(v29[9]) = v15 & 1;
  v29[2] = v17;
  BYTE5(v29[9]) = a4;
  VidMmGlobalAllocFromOwner = GetVidMmGlobalAllocFromOwner(v29[7], v12);
  if ( VidMmGlobalAllocFromOwner )
    v13 = (*(_QWORD *)(v22 + 16LL * a6 + 8) << 12) - *(_QWORD *)(*VidMmGlobalAllocFromOwner + 72LL);
  v23 = (v20 & 1) != 0 && !a4;
  PageTable = CreatePageTable(a2, (v21 >> 7) & 0x1F, v18, v23);
  if ( PageTable )
  {
    v25 = VIDMM_PAGE_TABLE::CommitVirtualAddressRange(
            PageTable,
            a2,
            (const struct COMMIT_VA_STATE *)v29,
            v13,
            a5,
            *((_QWORD *)a3 + 5),
            *(_QWORD *)(*((_QWORD *)this + 5) + 16LL * a6 + 8) << 12,
            0,
            a7);
    if ( v25 < 0 )
    {
      WdLogSingleEntry0(3LL);
      v28 = (struct VIDMM_ALLOC *)*((_QWORD *)PageTable + 3);
      WdLogGlobalForLineNumber = 5840;
      if ( *a7 == v28 )
        *a7 = (struct VIDMM_ALLOC *)*((_QWORD *)this + 3);
      VIDMM_PAGE_TABLE::DestroyPageTable((struct VIDMM_GLOBAL_ALLOC **)PageTable, a2, a5);
      return (unsigned int)v25;
    }
    else
    {
      ExFreeToPagedLookasideList(
        (PPAGED_LOOKASIDE_LIST)(*((_QWORD *)a2 + 11) + 40256LL),
        *(PVOID *)(*((_QWORD *)this + 6) + 8LL * a6));
      *(_QWORD *)(*((_QWORD *)this + 6) + 8LL * a6) = 0LL;
      *(_QWORD *)(*((_QWORD *)this + 6) + 8LL * a6) = PageTable;
      *(_QWORD *)(*((_QWORD *)this + 5) + 16LL * a6) &= ~0x400uLL;
      VIDMM_PAGE_DIRECTORY::SetPageTableInPde(this, a2, a6);
      return 0LL;
    }
  }
  else
  {
    _InterlockedIncrement(&dword_1400817CC);
    WdLogSingleEntry0(6LL);
    WdLogGlobalForLineNumber = 5821;
    DxgkLogInternalTriageEvent(v27, 262145LL);
    return 3221225495LL;
  }
}
