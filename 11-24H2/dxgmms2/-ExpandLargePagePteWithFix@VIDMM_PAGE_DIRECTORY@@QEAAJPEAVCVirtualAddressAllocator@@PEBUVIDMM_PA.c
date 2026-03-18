/*
 * XREFs of ?ExpandLargePagePteWithFix@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUVIDMM_PAGE_TABLE_LEVEL_DESC@@E_KIPEAPEAUVIDMM_ALLOC@@@Z @ 0x14009A358
 * Callers:
 *     ?ExpandLargePagePte@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUVIDMM_PAGE_TABLE_LEVEL_DESC@@E_KIPEAPEAUVIDMM_ALLOC@@@Z @ 0x140114090 (-ExpandLargePagePte@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUVIDMM_PAGE_TABL.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     ?GetVidMmGlobalAllocFromOwner@@YAPEAUVIDMM_GLOBAL_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z @ 0x140036F30 (-GetVidMmGlobalAllocFromOwner@@YAPEAUVIDMM_GLOBAL_ALLOC@@W4VIDMM_VAD_OWNER_TYPE@@PEAX@Z.c)
 *     memset @ 0x140056340 (memset.c)
 *     ?EnsureResident@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@_KPEAPEAUVIDMM_ALLOC@@@Z @ 0x14009A2F8 (-EnsureResident@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@_KPEAPEAUVIDMM_ALLOC@@@Z.c)
 *     ?DestroyPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z @ 0x1400AAB2C (-DestroyPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z.c)
 *     ?CreatePageTable@@YAPEAVVIDMM_PAGE_TABLE@@PEAVCVirtualAddressAllocator@@IEE@Z @ 0x1400DB930 (-CreatePageTable@@YAPEAVVIDMM_PAGE_TABLE@@PEAVCVirtualAddressAllocator@@IEE@Z.c)
 *     ?SetPageTableInPde@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@I@Z @ 0x1400F1F58 (-SetPageTableInPde@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@I@Z.c)
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1400F2030 (-CommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_ST.c)
 */

__int64 __fastcall VIDMM_PAGE_DIRECTORY::ExpandLargePagePteWithFix(
        VIDMM_PAGE_DIRECTORY *this,
        struct CVirtualAddressAllocator *a2,
        const struct VIDMM_PAGE_TABLE_LEVEL_DESC *a3,
        char a4,
        unsigned __int64 a5,
        unsigned int a6,
        struct VIDMM_ALLOC **a7)
{
  unsigned __int8 v10; // r9
  VIDMM_PAGE_TABLE *PageTable; // rax
  __int64 v12; // r8
  VIDMM_PAGE_TABLE *v13; // r14
  __int64 v14; // rcx
  int v15; // edi
  int v16; // eax
  unsigned __int64 v17; // r13
  __int64 v18; // r15
  __int64 v19; // rdi
  _QWORD *v20; // rdx
  __int64 v21; // r12
  __int64 v22; // r9
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // r8
  _QWORD *VidMmGlobalAllocFromOwner; // rax
  unsigned __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rcx
  unsigned int v29; // r8d
  _QWORD v31[18]; // [rsp+58h] [rbp-51h] BYREF
  struct VIDMM_ALLOC *v32; // [rsp+F8h] [rbp+4Fh] BYREF
  const struct VIDMM_PAGE_TABLE_LEVEL_DESC *v33; // [rsp+108h] [rbp+5Fh]
  char v34; // [rsp+110h] [rbp+67h]

  v34 = a4;
  v33 = a3;
  ++*((_DWORD *)this + 1);
  v32 = 0LL;
  if ( (*(_DWORD *)this & 0x40) == 0 || (v10 = 1, a4) )
    v10 = 0;
  PageTable = CreatePageTable(a2, (*(_DWORD *)this >> 7) & 0x1F, (*(_DWORD *)this & 0x40) != 0, v10);
  v13 = PageTable;
  if ( !PageTable )
  {
    _InterlockedIncrement(&dword_1400817EC);
    WdLogSingleEntry0(6LL);
    WdLogGlobalForLineNumber = 6339;
    DxgkLogInternalTriageEvent(v14, 262145LL);
    v15 = -1073741801;
    goto LABEL_17;
  }
  v16 = VIDMM_PAGE_TABLE::EnsureResident(PageTable, a2, v12, &v32);
  v17 = a5;
  v15 = v16;
  if ( v16 < 0 )
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 6355;
    goto LABEL_13;
  }
  v18 = 8LL * a6;
  v19 = *(_QWORD *)(v18 + *((_QWORD *)this + 6));
  if ( !v19 )
  {
LABEL_16:
    v29 = a6;
    *(_QWORD *)(v18 + *((_QWORD *)this + 6)) = v13;
    VIDMM_PAGE_DIRECTORY::SetPageTableInPde(this, a2, v29);
    v15 = 0;
    goto LABEL_17;
  }
  memset(v31, 0, 0x60uLL);
  v20 = *(_QWORD **)v19;
  v21 = 2LL * a6;
  v22 = *((_QWORD *)this + 5);
  LODWORD(v31[7]) = *(_DWORD *)(v19 + 8);
  v31[6] = v20;
  v23 = *(_QWORD *)(v22 + 16LL * a6);
  v24 = v23 >> 5;
  v31[0] = v23 & 0xFFFFFFFFFFFFFBFFuLL;
  v31[2] = *(_QWORD *)(v19 + 16);
  BYTE5(v31[9]) = v34;
  LOBYTE(v23) = (*(_DWORD *)this & 0x40) != 0;
  LODWORD(v31[9]) = v24 & 0x1F;
  BYTE4(v31[9]) = v23;
  VidMmGlobalAllocFromOwner = GetVidMmGlobalAllocFromOwner(v31[7], v20);
  v28 = v27 + 8 * v21;
  if ( VidMmGlobalAllocFromOwner )
    v26 = (*(_QWORD *)(v28 + 8) << 12) - *(_QWORD *)(*VidMmGlobalAllocFromOwner + 72LL);
  v15 = VIDMM_PAGE_TABLE::CommitVirtualAddressRange(
          v13,
          a2,
          (const struct COMMIT_VA_STATE *)v31,
          v26,
          v17,
          *((_QWORD *)v33 + 5),
          *(_QWORD *)(v28 + 8) << 12,
          0,
          &v32);
  if ( v15 >= 0 )
  {
    ExFreeToPagedLookasideList(
      (PPAGED_LOOKASIDE_LIST)(*((_QWORD *)a2 + 11) + 40256LL),
      *(PVOID *)(*((_QWORD *)this + 6) + v18));
    *(_QWORD *)(v18 + *((_QWORD *)this + 6)) = 0LL;
    *(_QWORD *)(*((_QWORD *)this + 5) + 8 * v21) &= ~0x400uLL;
    goto LABEL_16;
  }
  WdLogSingleEntry0(3LL);
  WdLogGlobalForLineNumber = 6410;
LABEL_13:
  VIDMM_PAGE_TABLE::DestroyPageTable(v13, a2, v17);
  if ( v32 )
    *a7 = (struct VIDMM_ALLOC *)*((_QWORD *)this + 3);
LABEL_17:
  --*((_DWORD *)this + 1);
  return (unsigned int)v15;
}
