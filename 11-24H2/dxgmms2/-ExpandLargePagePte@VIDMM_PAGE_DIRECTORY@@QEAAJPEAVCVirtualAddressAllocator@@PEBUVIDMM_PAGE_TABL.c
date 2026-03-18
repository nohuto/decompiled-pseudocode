/*
 * XREFs of ?ExpandLargePagePte@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUVIDMM_PAGE_TABLE_LEVEL_DESC@@E_KIPEAPEAUVIDMM_ALLOC@@@Z @ 0x140114090
 * Callers:
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1400F28C0 (-CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_V.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     ?GetVidMmGlobalAllocFromOwner@@YAPEAUVIDMM_GLOBAL_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z @ 0x140036F30 (-GetVidMmGlobalAllocFromOwner@@YAPEAUVIDMM_GLOBAL_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z.c)
 *     Feature_3694358843__private_IsEnabledDeviceUsageNoInline @ 0x14004C408 (Feature_3694358843__private_IsEnabledDeviceUsageNoInline.c)
 *     memset @ 0x140056340 (memset.c)
 *     ?ExpandLargePagePteWithFix@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUVIDMM_PAGE_TABLE_LEVEL_DESC@@E_KIPEAPEAUVIDMM_ALLOC@@@Z @ 0x14009A358 (-ExpandLargePagePteWithFix@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUVIDMM_PA.c)
 *     ?DestroyPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z @ 0x1400AAB2C (-DestroyPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z.c)
 *     ?CreatePageTable@@YAPEAVVIDMM_PAGE_TABLE@@PEAVCVirtualAddressAllocator@@IEE@Z @ 0x1400DB930 (-CreatePageTable@@YAPEAVVIDMM_PAGE_TABLE@@PEAVCVirtualAddressAllocator@@IEE@Z.c)
 *     ?SetPageTableInPde@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@I@Z @ 0x1400F1F58 (-SetPageTableInPde@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@I@Z.c)
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1400F2030 (-CommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_ST.c)
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
  __int64 v12; // rbx
  _QWORD *v13; // rdx
  unsigned __int64 v14; // rbp
  __int64 v15; // r9
  int v16; // r10d
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // r8
  __int64 v19; // rax
  _QWORD *VidMmGlobalAllocFromOwner; // rax
  char v21; // r8
  __int64 v22; // r9
  unsigned int v23; // r10d
  unsigned __int8 v24; // r11
  char v25; // r9
  struct VIDMM_GLOBAL_ALLOC **PageTable; // rbx
  __int64 v27; // rcx
  int v28; // ebp
  struct VIDMM_ALLOC *v29; // rcx
  __int64 v30; // [rsp+50h] [rbp-98h]
  _QWORD v31[12]; // [rsp+60h] [rbp-88h] BYREF

  if ( (unsigned int)Feature_3694358843__private_IsEnabledDeviceUsageNoInline() )
    return VIDMM_PAGE_DIRECTORY::ExpandLargePagePteWithFix(this, a2, a3, a4, a5, a6, a7);
  v12 = *(_QWORD *)(8LL * a6 + *((_QWORD *)this + 6));
  v30 = 8LL * a6;
  memset(v31, 0, sizeof(v31));
  v13 = *(_QWORD **)v12;
  v14 = 0LL;
  v15 = *((_QWORD *)this + 5);
  v16 = *(_DWORD *)this;
  LODWORD(v31[7]) = *(_DWORD *)(v12 + 8);
  v31[6] = v13;
  v17 = *(_QWORD *)(v15 + 16LL * a6);
  BYTE5(v31[9]) = a4;
  v18 = v17 >> 5;
  v31[0] = v17 & 0xFFFFFFFFFFFFFBFFuLL;
  v19 = *(_QWORD *)(v12 + 16);
  LODWORD(v31[9]) = v18 & 0x1F;
  v31[2] = v19;
  BYTE4(v31[9]) = (v16 & 0x40) != 0;
  VidMmGlobalAllocFromOwner = GetVidMmGlobalAllocFromOwner(v31[7], v13);
  if ( VidMmGlobalAllocFromOwner )
    v14 = (*(_QWORD *)(v22 + 16LL * a6 + 8) << 12) - *(_QWORD *)(*VidMmGlobalAllocFromOwner + 72LL);
  if ( (v21 & 1) == 0 || (v25 = 1, a4) )
    v25 = 0;
  PageTable = CreatePageTable(a2, (v23 >> 7) & 0x1F, v24, v25);
  if ( PageTable )
  {
    v28 = VIDMM_PAGE_TABLE::CommitVirtualAddressRange(
            (void **)PageTable,
            a2,
            (const struct COMMIT_VA_STATE *)v31,
            v14,
            a5,
            *((_QWORD *)a3 + 5),
            *(_QWORD *)(*((_QWORD *)this + 5) + 16LL * a6 + 8) << 12,
            0,
            a7);
    if ( v28 >= 0 )
    {
      ExFreeToPagedLookasideList(
        (PPAGED_LOOKASIDE_LIST)(*((_QWORD *)a2 + 11) + 40256LL),
        *(PVOID *)(*((_QWORD *)this + 6) + 8LL * a6));
      *(_QWORD *)(v30 + *((_QWORD *)this + 6)) = 0LL;
      *(_QWORD *)(v30 + *((_QWORD *)this + 6)) = PageTable;
      *(_QWORD *)(*((_QWORD *)this + 5) + 16LL * a6) &= ~0x400uLL;
      VIDMM_PAGE_DIRECTORY::SetPageTableInPde(this, a2, a6);
      return 0LL;
    }
    else
    {
      WdLogSingleEntry0(3LL);
      v29 = PageTable[3];
      WdLogGlobalForLineNumber = 6290;
      if ( *a7 == v29 )
        *a7 = (struct VIDMM_ALLOC *)*((_QWORD *)this + 3);
      VIDMM_PAGE_TABLE::DestroyPageTable(PageTable, a2, a5);
      return (unsigned int)v28;
    }
  }
  else
  {
    _InterlockedIncrement(&dword_1400817EC);
    WdLogSingleEntry0(6LL);
    WdLogGlobalForLineNumber = 6271;
    DxgkLogInternalTriageEvent(v27, 262145LL);
    return 3221225495LL;
  }
}
