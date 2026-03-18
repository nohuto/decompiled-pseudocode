/*
 * XREFs of ?InitializePageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@@Z @ 0x1400DAB58
 * Callers:
 *     ?CreatePageDirectory@@YAPEAVVIDMM_PAGE_DIRECTORY@@PEAVCVirtualAddressAllocator@@II@Z @ 0x1400DA9AC (-CreatePageDirectory@@YAPEAVVIDMM_PAGE_DIRECTORY@@PEAVCVirtualAddressAllocator@@II@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140036BA0 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?CreateVidMmObjects@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@II@Z @ 0x1400DC804 (-CreateVidMmObjects@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@II@Z.c)
 */

__int64 __fastcall VIDMM_PAGE_DIRECTORY::InitializePageDirectory(
        VIDMM_PAGE_DIRECTORY *this,
        struct CVirtualAddressAllocator *a2)
{
  __int64 v4; // r9
  __int64 v5; // r10
  int v6; // edx
  unsigned int v7; // edx
  unsigned int v8; // r8d
  unsigned int v9; // esi
  unsigned __int64 v10; // rbp
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  int VidMmObjects; // eax
  unsigned int v16; // edi
  __int64 v18; // rcx
  __int64 v19; // rcx

  v4 = *((_QWORD *)a2 + 15) + 32LL * ((*(_DWORD *)this >> 7) & 0x1F);
  v5 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 11) + 40232LL) + 8LL * ((*(_DWORD *)this >> 7) & 0x1F));
  if ( (*(_DWORD *)this & 0x10) != 0 && !*(_DWORD *)(v4 + 16) )
    return 0LL;
  v6 = *(_DWORD *)this ^ ((unsigned __int16)*(_DWORD *)this ^ (unsigned __int16)(32 * **(_DWORD **)(v5 + 480))) & 0x1000;
  *(_DWORD *)this = v6;
  v7 = (*(_DWORD *)(v5 + 464) << 13) ^ ((*(_DWORD *)(v5 + 464) << 13) ^ v6) & 0xFFFF1FFF;
  *(_DWORD *)this = v7;
  if ( (v7 & 0x10) != 0 )
  {
    v8 = *(_DWORD *)(v4 + 16);
    v9 = *(_DWORD *)(v4 + 20);
  }
  else
  {
    v8 = *(_DWORD *)(v5 + 48LL * (v7 & 7) + 128);
    v9 = *(_DWORD *)(v5 + 48LL * (v7 & 7) + 136);
  }
  v10 = 2 * v8;
  *(_DWORD *)this = v7 ^ ((unsigned __int8)v7 ^ (unsigned __int8)(v7 >> 6)) & 0x40;
  if ( (v7 & 0x1020) != 0x1020 )
    v10 = v8;
  v11 = 16 * v10;
  if ( !is_mul_ok(v10, 0x10uLL) )
    v11 = -1LL;
  v12 = operator new[](v11, 0x37356956u, 256LL);
  *((_QWORD *)this + 5) = v12;
  if ( !v12 )
  {
    _InterlockedIncrement(&dword_1400817F4);
    WdLogSingleEntry1(6LL, this);
    WdLogGlobalForLineNumber = 5371;
LABEL_15:
    DxgkLogInternalTriageEvent(v18, 262145LL);
    return 3221225495LL;
  }
  v13 = 8 * v10;
  if ( !is_mul_ok(v10, 8uLL) )
    v13 = -1LL;
  v14 = operator new[](v13, 0x33356956u, 256LL);
  *((_QWORD *)this + 6) = v14;
  if ( !v14 )
  {
    _InterlockedIncrement(&dword_1400817EC);
    WdLogSingleEntry1(6LL, this);
    WdLogGlobalForLineNumber = 5378;
    goto LABEL_15;
  }
  VidMmObjects = VIDMM_PAGE_TABLE_BASE::CreateVidMmObjects(
                   this,
                   a2,
                   v9,
                   *(_DWORD *)(32LL * ((*(_DWORD *)this >> 7) & 0x1F) + *((_QWORD *)a2 + 15) + 24));
  v16 = VidMmObjects;
  if ( VidMmObjects >= 0 )
    return 0LL;
  WdLogSingleEntry1(1LL, VidMmObjects);
  WdLogGlobalForLineNumber = 5385;
  DxgkLogInternalTriageEvent(v19, 0x40000LL);
  return v16;
}
