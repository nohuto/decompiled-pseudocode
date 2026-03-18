/*
 * XREFs of ?CreatePageTable@@YAPEAVVIDMM_PAGE_TABLE@@PEAVCVirtualAddressAllocator@@IEE@Z @ 0x1400DB930
 * Callers:
 *     ?ExpandLargePagePteWithFix@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUVIDMM_PAGE_TABLE_LEVEL_DESC@@E_KIPEAPEAUVIDMM_ALLOC@@@Z @ 0x14009A358 (-ExpandLargePagePteWithFix@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUVIDMM_PA.c)
 *     ?ExpandZeroPte@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@II_K222PEAPEAUVIDMM_ALLOC@@@Z @ 0x1400F1CA8 (-ExpandZeroPte@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@II_.c)
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1400F28C0 (-CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_V.c)
 *     ?ExpandLargePagePte@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUVIDMM_PAGE_TABLE_LEVEL_DESC@@E_KIPEAPEAUVIDMM_ALLOC@@@Z @ 0x140114090 (-ExpandLargePagePte@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUVIDMM_PAGE_TABL.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14001C724 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?DestroyPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z @ 0x1400AAB2C (-DestroyPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z.c)
 *     ?InitializePageTable@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@IEE@Z @ 0x1400DBA94 (-InitializePageTable@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@IEE@Z.c)
 */

struct VIDMM_GLOBAL_ALLOC **__fastcall CreatePageTable(
        struct CVirtualAddressAllocator *a1,
        unsigned int a2,
        unsigned __int8 a3,
        char a4)
{
  __int64 v5; // rbp
  __int64 v8; // rax
  struct VIDMM_GLOBAL_ALLOC **v9; // rdi
  unsigned int v10; // r8d
  int v11; // eax
  __int64 v13; // rcx
  __int64 v14; // rcx

  v5 = a2;
  v8 = operator new(56LL, 0x33356956u, 256LL);
  v9 = (struct VIDMM_GLOBAL_ALLOC **)v8;
  if ( v8 )
  {
    *(_OWORD *)v8 = 0LL;
    *(_OWORD *)(v8 + 16) = 0LL;
    *(_OWORD *)(v8 + 32) = 0LL;
    *(_QWORD *)(v8 + 48) = 0LL;
    *(_DWORD *)v8 = (v5 & 0x1F) << 7;
    v10 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 11) + 40232LL) + 8 * v5) + 116LL) >> 4;
    if ( !a3 )
      v10 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 11) + 40232LL) + 8 * v5) + 116LL);
    v11 = VIDMM_PAGE_TABLE::InitializePageTable((VIDMM_PAGE_TABLE *)v8, a1, v10, a3, a4);
    if ( v11 >= 0 )
      return v9;
    WdLogSingleEntry1(1LL, v11);
    WdLogGlobalForLineNumber = 5298;
    DxgkLogInternalTriageEvent(v14, 0x40000LL);
    VIDMM_PAGE_TABLE::DestroyPageTable(v9, a1, 0LL);
  }
  else
  {
    _InterlockedIncrement(&dword_1400817EC);
    WdLogSingleEntry0(6LL);
    WdLogGlobalForLineNumber = 5282;
    DxgkLogInternalTriageEvent(v13, 262145LL);
  }
  return 0LL;
}
