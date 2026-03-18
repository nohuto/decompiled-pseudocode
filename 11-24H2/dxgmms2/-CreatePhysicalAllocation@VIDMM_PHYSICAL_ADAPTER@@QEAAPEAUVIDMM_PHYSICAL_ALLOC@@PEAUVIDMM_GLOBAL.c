/*
 * XREFs of ?CreatePhysicalAllocation@VIDMM_PHYSICAL_ADAPTER@@QEAAPEAUVIDMM_PHYSICAL_ALLOC@@PEAUVIDMM_GLOBAL_ALLOC@@_K11IKKU_D3DDDI_SEGMENTPREFERENCE@@@Z @ 0x1400F1790
 * Callers:
 *     ?CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@U_DXGK_ALLOCATIONINFOFLAGS2@@PEBVDXGADAPTERALLOCATION@@PEAX6KE6PEAVVIDMM_PAGE_TABLE_BASE@@PEAPEAUVIDMM_CROSSADAPTER_ALLOC@@PEAPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400DCBA4 (-CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_D3DDDI_SEGMENTPREFERENCE@@U_D.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14001C724 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 */

struct VIDMM_PHYSICAL_ALLOC *__fastcall VIDMM_PHYSICAL_ADAPTER::CreatePhysicalAllocation(
        VIDMM_PHYSICAL_ADAPTER *this,
        struct VIDMM_GLOBAL_ALLOC *a2,
        __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
        unsigned int a6,
        unsigned int a7,
        unsigned int a8,
        struct _D3DDDI_SEGMENTPREFERENCE a9)
{
  __int64 v13; // r10
  unsigned int v14; // r8d
  unsigned int v15; // ecx
  __int64 v16; // rcx
  struct VIDMM_PHYSICAL_ALLOC *result; // rax
  int v18; // edx
  unsigned int v19; // eax

  v13 = operator new(200LL, 0x6D4D6956u, 64LL);
  if ( v13 )
  {
    v14 = a8;
    if ( (*((_BYTE *)this + 476) & 0x12) != 0
      && (v18 = 1 << *((_BYTE *)this + 68), v14 = v18 | a8, (*((_DWORD *)a2 + 6) & 0x40) != 0)
      && (**((_DWORD **)a2 + 49) & 0x8000) == 0 )
    {
      v15 = v18 | a7;
    }
    else
    {
      v15 = a7;
    }
    *(_QWORD *)(v13 + 24) = a5;
    *(_DWORD *)(v13 + 32) = a6;
    *(struct _D3DDDI_SEGMENTPREFERENCE *)(v13 + 44) = a9;
    v19 = *(_DWORD *)(v13 + 52) & 0xFFFFFFFE;
    *(_QWORD *)v13 = a2;
    *(_QWORD *)(v13 + 8) = a3;
    *(_DWORD *)(v13 + 52) = v19 | 2;
    result = (struct VIDMM_PHYSICAL_ALLOC *)v13;
    *(_QWORD *)(v13 + 16) = a4;
    *(_DWORD *)(v13 + 40) = v15;
    *(_DWORD *)(v13 + 36) = v14;
  }
  else
  {
    _InterlockedAdd(dword_14008183C, 1u);
    WdLogSingleEntry2(6LL, a2, *((_QWORD *)this + 6));
    WdLogGlobalForLineNumber = 1564;
    DxgkLogInternalTriageEvent(v16, 262145LL);
    return 0LL;
  }
  return result;
}
