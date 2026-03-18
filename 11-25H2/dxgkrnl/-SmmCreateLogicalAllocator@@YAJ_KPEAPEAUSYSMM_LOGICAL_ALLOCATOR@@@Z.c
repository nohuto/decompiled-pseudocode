/*
 * XREFs of ?SmmCreateLogicalAllocator@@YAJ_KPEAPEAUSYSMM_LOGICAL_ALLOCATOR@@@Z @ 0x14027F9C0
 * Callers:
 *     ?SysMmCreateAdapter@@YAJPEAU_DEVICE_OBJECT@@PEBQEAU1@IPEBU_DXGK_PHYSICAL_MEMORY_RANGE@@IIPEBUSYSMM_ADAPTER_CREATE_PARAMS@@PEAPEAUSYSMM_ADAPTER@@@Z @ 0x14027E850 (-SysMmCreateAdapter@@YAJPEAU_DEVICE_OBJECT@@PEBQEAU1@IPEBU_DXGK_PHYSICAL_MEMORY_RANGE@@IIPEBUSYS.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002CD80 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     SmmGetLogicalPool @ 0x140064C84 (SmmGetLogicalPool.c)
 *     SmmAddBlockToPool @ 0x140092BF0 (SmmAddBlockToPool.c)
 *     SmmAllocateBlock @ 0x140092C20 (SmmAllocateBlock.c)
 *     SmmGetLowerOrderFromPageCount @ 0x14009310C (SmmGetLowerOrderFromPageCount.c)
 *     SmmGetOrderBlockSizeInPages @ 0x140093128 (SmmGetOrderBlockSizeInPages.c)
 *     SmmInitializeLogicalBlock @ 0x1400931B4 (SmmInitializeLogicalBlock.c)
 *     ?SmmAllocateLogicalAddressAt@@YAJPEAUSYSMM_LOGICAL_ALLOCATOR@@_K1PEBXPEAPEAUSYSMM_LOGICAL_BLOCK@@@Z @ 0x14027F850 (-SmmAllocateLogicalAddressAt@@YAJPEAUSYSMM_LOGICAL_ALLOCATOR@@_K1PEBXPEAPEAUSYSMM_LOGICAL_BLOCK@.c)
 *     ?SmmDestroyLogicalAllocator@@YAXPEAUSYSMM_LOGICAL_ALLOCATOR@@@Z @ 0x14027FBE0 (-SmmDestroyLogicalAllocator@@YAXPEAUSYSMM_LOGICAL_ALLOCATOR@@@Z.c)
 *     SmmInitializeLogicalAllocator @ 0x14027FE70 (SmmInitializeLogicalAllocator.c)
 */

__int64 __fastcall SmmCreateLogicalAllocator(
        unsigned __int64 a1,
        struct SYSMM_LOGICAL_ALLOCATOR **a2,
        __int64 a3,
        __int64 a4)
{
  __int64 result; // rax
  unsigned __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rdi
  unsigned __int64 v9; // rbx
  unsigned __int64 i; // rsi
  __int64 LowerOrderFromPageCount; // rbp
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 Block; // rax
  _QWORD *v17; // r10
  _QWORD *v18; // rax
  _DWORD *LogicalPool; // rax
  __int64 v20; // r10
  int LogicalAddressAt; // ebx

  if ( a1 >= 0x11000 )
  {
    v6 = a1 & 0xFFFFFFFFFFFFF000uLL;
    v7 = operator new(0x530uLL, 0x35737844u, 64LL, a4);
    v8 = v7;
    if ( v7 )
    {
      SmmInitializeLogicalAllocator(v7, v6);
      v9 = v6 >> 12;
      for ( i = v9; i; i -= SmmGetOrderBlockSizeInPages(LowerOrderFromPageCount) )
      {
        LowerOrderFromPageCount = (unsigned __int8)SmmGetLowerOrderFromPageCount(i);
        Block = SmmAllocateBlock(v13, v12, v14, v15);
        if ( !Block )
        {
          WdLogSingleEntry1(3LL, LowerOrderFromPageCount);
          WdLogGlobalForLineNumber = 1695;
          LogicalAddressAt = -1073741801;
LABEL_14:
          SmmDestroyLogicalAllocator((struct SYSMM_LOGICAL_ALLOCATOR *)v8);
          return (unsigned int)LogicalAddressAt;
        }
        SmmInitializeLogicalBlock(Block, v9 - i, LowerOrderFromPageCount);
        v18 = *(_QWORD **)(v8 + 1264);
        if ( *v18 != v8 + 1256 )
          __fastfail(3u);
        *v17 = v8 + 1256;
        v17[1] = v18;
        *v18 = v17;
        *(_QWORD *)(v8 + 1264) = v17;
        LogicalPool = (_DWORD *)SmmGetLogicalPool(v8, LowerOrderFromPageCount);
        SmmAddBlockToPool(LogicalPool, v20);
      }
      LogicalAddressAt = SmmAllocateLogicalAddressAt(
                           (struct SYSMM_LOGICAL_ALLOCATOR *)v8,
                           0LL,
                           0x10000LL,
                           (const void *)0xFFFFFFFFFFFFFFFFLL,
                           (struct SYSMM_LOGICAL_BLOCK **)(v8 + 1272));
      if ( LogicalAddressAt < 0 )
      {
        WdLogSingleEntry0(3LL);
        WdLogGlobalForLineNumber = 1730;
        goto LABEL_14;
      }
      *(_QWORD *)(*(_QWORD *)(v8 + 1272) + 32LL) |= 0x800000000000000uLL;
      *(_DWORD *)(v8 + 1320) ^= ((unsigned __int8)*(_DWORD *)(v8 + 1320) ^ (unsigned __int8)((unsigned int)dword_14015E600 >> 6)) & 1;
      result = 0LL;
      *a2 = (struct SYSMM_LOGICAL_ALLOCATOR *)v8;
    }
    else
    {
      _InterlockedIncrement(&dword_14015E668);
      WdLogSingleEntry0(6LL);
      WdLogGlobalForLineNumber = 1655;
      DxgkLogInternalTriageEvent(
        0LL,
        262145,
        0xFFFFFFFFLL,
        L"Failed to allocate logical allocator",
        1655LL,
        0LL,
        0LL,
        0LL,
        0LL);
      return 3221225495LL;
    }
  }
  else
  {
    WdLogSingleEntry1(3LL, 69632LL);
    result = 3221225485LL;
    WdLogGlobalForLineNumber = 1640;
  }
  return result;
}
