/*
 * XREFs of ?MapScratchAreaVaRange@VIDMM_PAGING_PROCESS@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@I_KPEAUVIDMM_GLOBAL_ALLOC@@0I0PEBU_DXGK_ADL@@PEAE0@Z @ 0x1400BD984
 * Callers:
 *     ?MemoryTransferUsingGpuVaWorker@VIDMM_GLOBAL@@QEAAXKPEAUVIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@1PEAU_MDL@@2131U_DXGK_TRANSFERFLAGS@@1@Z @ 0x1400A804C (-MemoryTransferUsingGpuVaWorker@VIDMM_GLOBAL@@QEAAXKPEAUVIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT.c)
 *     TryMapScratchRange @ 0x1400BBC84 (TryMapScratchRange.c)
 *     MapScratchRangeWithStall @ 0x140106350 (MapScratchRangeWithStall.c)
 * Callees:
 *     ?MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_VAD_OWNER_TYPE@@_K333IU_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@1IPEAPEAUVIDMM_VAD_PENDING_OPERATION@@_N@Z @ 0x1400BDBC4 (-MapVirtualAddressRange@CVirtualAddressAllocator@@QEAAPEAUVIDMM_MAPPED_VA_RANGE@@PEAX_KW4VIDMM_V.c)
 *     ?CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEBU_DXGK_ADL@@W4VIDMM_FLUSH_TLB_MODE@@PEAPEAUVIDMM_ALLOC@@PEA_NW4VIDMM_PAGESIZEUSAGE@@1@Z @ 0x1400BE2C0 (-CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEBU_DX.c)
 */

// write access to const memory has been detected, the output may be wrong!
struct VIDMM_MAPPED_VA_RANGE *__fastcall VIDMM_PAGING_PROCESS::MapScratchAreaVaRange(
        VIDMM_PAGING_PROCESS *this,
        unsigned int a2,
        __int64 a3,
        struct VIDMM_GLOBAL_ALLOC *a4,
        unsigned __int64 a5,
        unsigned int a6,
        unsigned __int64 a7,
        const struct _DXGK_ADL *a8,
        unsigned __int8 *a9,
        unsigned __int64 a10)
{
  __int64 v11; // r12
  int v14; // r8d
  unsigned __int8 v15; // r10
  __int64 v16; // r9
  _QWORD *v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rbp
  __int64 v21; // rax
  __int64 v22; // rdi
  int v23; // eax
  struct VIDMM_MAPPED_VA_RANGE *result; // rax
  __int64 v25; // [rsp+70h] [rbp-28h]
  int v26; // [rsp+A8h] [rbp+10h]

  v11 = a2;
  v26 = 1;
  v14 = *(_DWORD *)(*(_QWORD *)a4 + 32LL);
  v15 = 0;
  if ( a6 )
  {
    v16 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 40232LL) + 8LL * a2);
    if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v16 + 1648) + 8LL * (a6 - 1)) + 416LL) == 0x10000
      && *(_DWORD *)(*(_QWORD *)(v16 + 480) + 12LL)
      && !((unsigned __int16)a5 | (unsigned __int16)a3)
      && v14
      && !(_WORD)v14 )
    {
      v15 = 1;
      v26 = 2;
    }
  }
  *a9 = v15;
  v17 = (_QWORD *)*((_QWORD *)this + 2);
  if ( v15 )
  {
    v18 = v17[5120];
    v19 = v17[5121];
  }
  else
  {
    v18 = v17[5118];
    v19 = v17[5119];
  }
  v20 = *((_QWORD *)this + v11 + 4);
  v21 = CVirtualAddressAllocator::MapVirtualAddressRange(
          v20,
          a4,
          a5,
          3LL,
          a3,
          0LL,
          v18,
          v19,
          v14,
          1LL,
          a10,
          v11,
          0LL,
          0,
          v25);
  v22 = v21;
  if ( v21 )
  {
    *(_DWORD *)(v21 + 72) |= 0x2000u;
    *(_QWORD *)(v21 + 48) = 0LL;
    a9 = 0LL;
    v23 = CVirtualAddressAllocator::CommitVirtualAddressRange(
            v20,
            v21,
            (unsigned int)v11,
            a6,
            a7,
            a8,
            0,
            &a9,
            0LL,
            v26,
            0LL);
    if ( v23 < 0 )
    {
      g_DxgMmsBugcheckExportIndex = 1;
      WdLogSingleEntry5(0LL, 270LL, 75LL, this, v22, v23);
      WdLogGlobalForLineNumber = 195;
      JUMPOUT(0x1400BDBBBLL);
    }
    return (struct VIDMM_MAPPED_VA_RANGE *)v22;
  }
  else
  {
    WdLogSingleEntry3(4LL, v20, a3, a4);
    result = 0LL;
    WdLogGlobalForLineNumber = 9222;
  }
  return result;
}
