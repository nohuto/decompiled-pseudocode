/*
 * XREFs of ?InitializePageTable@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@IEE@Z @ 0x1400E79B4
 * Callers:
 *     ?CreatePageTable@@YAPEAVVIDMM_PAGE_TABLE@@PEAVCVirtualAddressAllocator@@IEE@Z @ 0x1400E7850 (-CreatePageTable@@YAPEAVVIDMM_PAGE_TABLE@@PEAVCVirtualAddressAllocator@@IEE@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140038248 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?CreateVidMmObjects@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@II@Z @ 0x1400E86FC (-CreateVidMmObjects@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@II@Z.c)
 */

__int64 __fastcall VIDMM_PAGE_TABLE::InitializePageTable(
        VIDMM_PAGE_TABLE *this,
        struct CVirtualAddressAllocator *a2,
        unsigned int a3,
        char a4,
        char a5)
{
  unsigned __int64 v7; // r15
  __int64 v8; // r10
  __int64 v10; // rsi
  __int64 v11; // rbx
  int v12; // ecx
  __int64 v13; // rax
  __int64 v14; // rax
  unsigned int v15; // r8d
  int VidMmObjects; // eax
  unsigned int v17; // edi
  __int64 v19; // rcx
  int v20; // eax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rcx

  v7 = a3;
  v8 = (*(_DWORD *)this >> 7) & 0x1F;
  v10 = *((_QWORD *)a2 + 15) + 32LL * (unsigned int)v8;
  v11 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 11) + 40232LL) + 8 * v8);
  v12 = *(_DWORD *)this ^ ((unsigned __int8)*(_DWORD *)this ^ (unsigned __int8)(a4 << 6)) & 0x40;
  *(_DWORD *)this = v12;
  v13 = 16LL * a3;
  *(_DWORD *)this = (*(_DWORD *)(v11 + 464) << 13) ^ ((*(_DWORD *)(v11 + 464) << 13) ^ v12) & 0xFFFF1FFF;
  if ( !is_mul_ok(a3, 0x10uLL) )
    v13 = -1LL;
  v14 = operator new[](v13, 0x34356956u, 256LL);
  *((_QWORD *)this + 4) = v14;
  if ( !v14 )
  {
    _InterlockedIncrement(&dword_1400817D4);
    WdLogSingleEntry0(6LL);
    v20 = 4800;
    goto LABEL_9;
  }
  if ( a4 )
  {
    v21 = 16 * v7;
    if ( !is_mul_ok(v7, 0x10uLL) )
      v21 = -1LL;
    v22 = operator new[](v21, 0x34356956u, 256LL);
    *((_QWORD *)this + 5) = v22;
    if ( v22 )
    {
      v15 = *(_DWORD *)(*(_QWORD *)(v11 + 480) + 12LL);
      if ( a5 && v15 < *(_DWORD *)(v11 + 72) )
        v15 = *(_DWORD *)(v11 + 72);
      goto LABEL_6;
    }
    _InterlockedIncrement(&dword_1400817D8);
    WdLogSingleEntry0(6LL);
    v20 = 4808;
LABEL_9:
    WdLogGlobalForLineNumber = v20;
    DxgkLogInternalTriageEvent(v19, 262145LL);
    return 3221225495LL;
  }
  v15 = *(_DWORD *)(v11 + 72);
LABEL_6:
  VidMmObjects = VIDMM_PAGE_TABLE_BASE::CreateVidMmObjects(this, a2, v15, *(_DWORD *)(v10 + 28));
  v17 = VidMmObjects;
  if ( VidMmObjects >= 0 )
    return 0LL;
  WdLogSingleEntry1(1LL, VidMmObjects);
  WdLogGlobalForLineNumber = 4844;
  DxgkLogInternalTriageEvent(v23, 0x40000LL);
  return v17;
}
