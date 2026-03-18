/*
 * XREFs of ?SmmDestroyLogicalAllocator@@YAXPEAUSYSMM_LOGICAL_ALLOCATOR@@@Z @ 0x14027FBE0
 * Callers:
 *     ?SysMmDestroyAdapter@@YAXPEAUSYSMM_ADAPTER@@@Z @ 0x14027EE00 (-SysMmDestroyAdapter@@YAXPEAUSYSMM_ADAPTER@@@Z.c)
 *     ?SmmCreateLogicalAllocator@@YAJ_KPEAPEAUSYSMM_LOGICAL_ALLOCATOR@@@Z @ 0x14027F9C0 (-SmmCreateLogicalAllocator@@YAJ_KPEAPEAUSYSMM_LOGICAL_ALLOCATOR@@@Z.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x1400110B0 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     SmmGetLogicalPool @ 0x140064C84 (SmmGetLogicalPool.c)
 *     SmmFreeBlock @ 0x140092F10 (SmmFreeBlock.c)
 *     ?SmmFreeLogicalAddress@@YAXPEAUSYSMM_LOGICAL_ALLOCATOR@@PEAUSYSMM_LOGICAL_BLOCK@@@Z @ 0x140092F28 (-SmmFreeLogicalAddress@@YAXPEAUSYSMM_LOGICAL_ALLOCATOR@@PEAUSYSMM_LOGICAL_BLOCK@@@Z.c)
 *     SmmRemoveBlockFromPool @ 0x1400932BC (SmmRemoveBlockFromPool.c)
 */

void __fastcall SmmDestroyLogicalAllocator(struct SYSMM_LOGICAL_ALLOCATOR *a1)
{
  struct SYSMM_LOGICAL_BLOCK *v1; // rdx
  struct SYSMM_LOGICAL_ALLOCATOR *v3; // rsi
  struct SYSMM_LOGICAL_ALLOCATOR *v4; // rdi
  __int64 LogicalPool; // rax
  __int64 v6; // rcx
  __int64 v7; // rbp
  struct SYSMM_LOGICAL_ALLOCATOR **v8; // rax
  __int64 v9; // rcx

  v1 = (struct SYSMM_LOGICAL_BLOCK *)*((_QWORD *)a1 + 159);
  if ( v1 )
    SmmFreeLogicalAddress(a1, v1);
  v3 = (struct SYSMM_LOGICAL_ALLOCATOR *)*((_QWORD *)a1 + 157);
  while ( v3 != (struct SYSMM_LOGICAL_ALLOCATOR *)((char *)a1 + 1256) )
  {
    v4 = v3;
    v3 = *(struct SYSMM_LOGICAL_ALLOCATOR **)v3;
    if ( (*((_QWORD *)v4 + 4) & 0x10000000000000LL) != 0 )
    {
      WdLogSingleEntry5(0LL, 484LL, 9LL, a1, v4, 0LL);
      WdLogGlobalForLineNumber = 1570;
    }
    LogicalPool = SmmGetLogicalPool((__int64)a1, (*((_QWORD *)v4 + 4) >> 53) & 0x3F);
    v6 = *(_QWORD *)v4;
    v7 = LogicalPool;
    if ( *(struct SYSMM_LOGICAL_ALLOCATOR **)(*(_QWORD *)v4 + 8LL) != v4
      || (v8 = (struct SYSMM_LOGICAL_ALLOCATOR **)*((_QWORD *)v4 + 1), *v8 != v4) )
    {
      __fastfail(3u);
    }
    *v8 = (struct SYSMM_LOGICAL_ALLOCATOR *)v6;
    *(_QWORD *)(v6 + 8) = v8;
    SmmRemoveBlockFromPool(v7, (__int64)v4);
    SmmFreeBlock(v9, v4);
    if ( *(_DWORD *)(v7 + 16) || *(_QWORD *)v7 != v7 )
    {
      WdLogSingleEntry5(0LL, 484LL, 8LL, a1, v7, 0LL);
      WdLogGlobalForLineNumber = 1589;
    }
  }
  if ( *((_QWORD *)a1 + 160) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1596;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"pAllocator->Statistics.BytesAllocated == 0",
      1596LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( *((_QWORD *)a1 + 161) != *((_QWORD *)a1 + 156) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1597;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"pAllocator->Statistics.BytesFree == pAllocator->Size",
      1597LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( *((_QWORD *)a1 + 163) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1598;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"pAllocator->Statistics.BytesWasted == 0",
      1598LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( *((_QWORD *)a1 + 162) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1599;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"pAllocator->Statistics.RealBytesAllocated == 0",
      1599LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  DXGQUOTAALLOCATOR<256,1835156294>::operator delete(a1);
}
