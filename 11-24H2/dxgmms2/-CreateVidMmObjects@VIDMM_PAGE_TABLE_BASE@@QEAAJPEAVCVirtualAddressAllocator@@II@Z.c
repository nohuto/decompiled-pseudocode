/*
 * XREFs of ?CreateVidMmObjects@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@II@Z @ 0x1400DC804
 * Callers:
 *     ?InitializePageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@@Z @ 0x1400DAB58 (-InitializePageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@@Z.c)
 *     ?InitializePageTable@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@IEE@Z @ 0x1400DBA94 (-InitializePageTable@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@IEE@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x140055E20 (__security_check_cookie.c)
 *     ?OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_GLOBAL_ALLOC@@PEAX_NPEAVDXGALLOCATION@@PEAPEAUVIDMM_ALLOC@@PEAE@Z @ 0x1400DBD28 (-OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_GLOBAL_ALLOC@@PEAX_NPEAVDXGALL.c)
 *     ?CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@U_DXGK_ALLOCATIONINFOFLAGS2@@PEBVDXGADAPTERALLOCATION@@PEAX6KE6PEAVVIDMM_PAGE_TABLE_BASE@@PEAPEAUVIDMM_CROSSADAPTER_ALLOC@@PEAPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400DCBA4 (-CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_D3DDDI_SEGMENTPREFERENCE@@U_D.c)
 */

__int64 __fastcall VIDMM_PAGE_TABLE_BASE::CreateVidMmObjects(
        struct VIDMM_ALLOC **this,
        struct CVirtualAddressAllocator *a2)
{
  VIDMM_GLOBAL *v2; // rbx
  unsigned int v3; // r11d
  struct VIDMM_PROCESS **v5; // r15
  struct VIDMM_GLOBAL_ALLOC **v7; // rsi
  int OneAllocation; // eax
  __int64 v9; // rdi
  PRKPROCESS *v10; // rcx
  __int64 v12; // rcx
  unsigned __int8 v13[8]; // [rsp+A0h] [rbp-88h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+A8h] [rbp-80h] BYREF

  v2 = (VIDMM_GLOBAL *)*((_QWORD *)a2 + 11);
  v3 = *(_DWORD *)this;
  v5 = (struct VIDMM_PROCESS **)*((_QWORD *)a2 + 13);
  v13[0] = 0;
  v7 = this + 2;
  OneAllocation = VIDMM_GLOBAL::CreateOneAllocation(v2, v5, (v3 >> 7) & 0x1F);
  LODWORD(v9) = OneAllocation;
  if ( OneAllocation < 0 )
  {
    _InterlockedIncrement(&dword_1400816D8);
    WdLogSingleEntry1(6LL, OneAllocation);
    WdLogGlobalForLineNumber = 5130;
  }
  else
  {
    if ( (*((_DWORD *)a2 + 36) & 4) != 0 )
      *((_DWORD *)*v7 + 6) |= 0x200u;
    v10 = (PRKPROCESS *)*((_QWORD *)a2 + 12);
    memset(&ApcState, 0, sizeof(ApcState));
    KeStackAttachProcess(*v10, &ApcState);
    v9 = (int)VIDMM_GLOBAL::OpenOneAllocation(v2, v5, *v7, 0LL, 0, 0LL, this + 3, v13);
    KeUnstackDetachProcess(&ApcState);
    if ( (int)v9 >= 0 )
      return 0LL;
    _InterlockedIncrement(&dword_1400816DC);
    WdLogSingleEntry1(6LL, v9);
    WdLogGlobalForLineNumber = 5161;
  }
  DxgkLogInternalTriageEvent(v12, 262145LL);
  return (unsigned int)v9;
}
