/*
 * XREFs of ?SmmDestroyLogicalAllocator@@YAXPEAUSYSMM_LOGICAL_ALLOCATOR@@@Z @ 0x140287060
 * Callers:
 *     ?SysMmDestroyAdapter@@YAXPEAUSYSMM_ADAPTER@@@Z @ 0x140286170 (-SysMmDestroyAdapter@@YAXPEAUSYSMM_ADAPTER@@@Z.c)
 *     ?SmmCreateLogicalAllocator@@YAJ_KPEAPEAUSYSMM_LOGICAL_ALLOCATOR@@@Z @ 0x140286D30 (-SmmCreateLogicalAllocator@@YAJ_KPEAPEAUSYSMM_LOGICAL_ALLOCATOR@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x140020540 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     SmmGetLogicalPool @ 0x1400648A4 (SmmGetLogicalPool.c)
 *     SmmFreeBlock @ 0x140095414 (SmmFreeBlock.c)
 *     ?SmmFreeLogicalAddress@@YAXPEAUSYSMM_LOGICAL_ALLOCATOR@@PEAUSYSMM_LOGICAL_BLOCK@@@Z @ 0x14009542C (-SmmFreeLogicalAddress@@YAXPEAUSYSMM_LOGICAL_ALLOCATOR@@PEAUSYSMM_LOGICAL_BLOCK@@@Z.c)
 *     SmmRemoveBlockFromPool @ 0x1400957C0 (SmmRemoveBlockFromPool.c)
 *     Feature_Servicing_GraphicsKernel_DmaRemappingMSI__private_IsEnabledDeviceUsageNoInline @ 0x140095860 (Feature_Servicing_GraphicsKernel_DmaRemappingMSI__private_IsEnabledDeviceUsageNoInline.c)
 */

void __fastcall SmmDestroyLogicalAllocator(struct SYSMM_LOGICAL_ALLOCATOR *a1)
{
  struct SYSMM_LOGICAL_BLOCK *v1; // rdx
  struct SYSMM_LOGICAL_BLOCK *v3; // rdx
  struct SYSMM_LOGICAL_ALLOCATOR *v4; // rsi
  struct SYSMM_LOGICAL_ALLOCATOR *v5; // rdi
  __int64 LogicalPool; // rax
  __int64 v7; // rcx
  __int64 v8; // rbp
  struct SYSMM_LOGICAL_ALLOCATOR **v9; // rax
  __int64 v10; // rcx

  v1 = (struct SYSMM_LOGICAL_BLOCK *)*((_QWORD *)a1 + 159);
  if ( v1 )
    SmmFreeLogicalAddress(a1, v1);
  if ( (unsigned int)Feature_Servicing_GraphicsKernel_DmaRemappingMSI__private_IsEnabledDeviceUsageNoInline() )
  {
    v3 = (struct SYSMM_LOGICAL_BLOCK *)*((_QWORD *)a1 + 160);
    if ( v3 )
      SmmFreeLogicalAddress(a1, v3);
  }
  v4 = (struct SYSMM_LOGICAL_ALLOCATOR *)*((_QWORD *)a1 + 157);
  while ( v4 != (struct SYSMM_LOGICAL_ALLOCATOR *)((char *)a1 + 1256) )
  {
    v5 = v4;
    v4 = *(struct SYSMM_LOGICAL_ALLOCATOR **)v4;
    if ( (*((_QWORD *)v5 + 4) & 0x10000000000000LL) != 0 )
    {
      WdLogSingleEntry5(0LL, 484LL, 9LL, a1, v5, 0LL);
      WdLogGlobalForLineNumber = 1585;
    }
    LogicalPool = SmmGetLogicalPool((__int64)a1, (*((_QWORD *)v5 + 4) >> 53) & 0x3F);
    v7 = *(_QWORD *)v5;
    v8 = LogicalPool;
    if ( *(struct SYSMM_LOGICAL_ALLOCATOR **)(*(_QWORD *)v5 + 8LL) != v5
      || (v9 = (struct SYSMM_LOGICAL_ALLOCATOR **)*((_QWORD *)v5 + 1), *v9 != v5) )
    {
      __fastfail(3u);
    }
    *v9 = (struct SYSMM_LOGICAL_ALLOCATOR *)v7;
    *(_QWORD *)(v7 + 8) = v9;
    SmmRemoveBlockFromPool(v8, (__int64)v5);
    SmmFreeBlock(v10, v5);
    if ( *(_DWORD *)(v8 + 16) || *(_QWORD *)v8 != v8 )
    {
      WdLogSingleEntry5(0LL, 484LL, 8LL, a1, v8, 0LL);
      WdLogGlobalForLineNumber = 1604;
    }
  }
  if ( *((_QWORD *)a1 + 161) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1611;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"pAllocator->Statistics.BytesAllocated == 0",
      1611LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( *((_QWORD *)a1 + 162) != *((_QWORD *)a1 + 156) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1612;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"pAllocator->Statistics.BytesFree == pAllocator->Size",
      1612LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( *((_QWORD *)a1 + 164) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1613;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"pAllocator->Statistics.BytesWasted == 0",
      1613LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( *((_QWORD *)a1 + 163) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1614;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"pAllocator->Statistics.RealBytesAllocated == 0",
      1614LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  DXGQUOTAALLOCATOR<256,1835156294>::operator delete(a1);
}
