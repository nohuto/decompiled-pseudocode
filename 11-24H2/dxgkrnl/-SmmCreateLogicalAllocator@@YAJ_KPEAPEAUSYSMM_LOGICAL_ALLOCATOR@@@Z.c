/*
 * XREFs of ?SmmCreateLogicalAllocator@@YAJ_KPEAPEAUSYSMM_LOGICAL_ALLOCATOR@@@Z @ 0x140286D30
 * Callers:
 *     ?SysMmCreateAdapter@@YAJPEAU_DEVICE_OBJECT@@PEBQEAU1@IPEBU_DXGK_PHYSICAL_MEMORY_RANGE@@IIPEBUSYSMM_ADAPTER_CREATE_PARAMS@@PEAPEAUSYSMM_ADAPTER@@@Z @ 0x140285BC0 (-SysMmCreateAdapter@@YAJPEAU_DEVICE_OBJECT@@PEBQEAU1@IPEBU_DXGK_PHYSICAL_MEMORY_RANGE@@IIPEBUSYS.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x14002D590 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     SmmGetLogicalPool @ 0x1400648A4 (SmmGetLogicalPool.c)
 *     SmmAddBlockToPool @ 0x1400950F4 (SmmAddBlockToPool.c)
 *     SmmAllocateBlock @ 0x140095124 (SmmAllocateBlock.c)
 *     SmmGetLowerOrderFromPageCount @ 0x140095610 (SmmGetLowerOrderFromPageCount.c)
 *     SmmGetOrderBlockSizeInPages @ 0x14009562C (SmmGetOrderBlockSizeInPages.c)
 *     SmmInitializeLogicalBlock @ 0x1400956B8 (SmmInitializeLogicalBlock.c)
 *     Feature_Servicing_GraphicsKernel_DmaRemappingMSI__private_IsEnabledDeviceUsageNoInline @ 0x140095860 (Feature_Servicing_GraphicsKernel_DmaRemappingMSI__private_IsEnabledDeviceUsageNoInline.c)
 *     ?SmmAllocateLogicalAddressAt@@YAJPEAUSYSMM_LOGICAL_ALLOCATOR@@_K1PEBXPEAPEAUSYSMM_LOGICAL_BLOCK@@@Z @ 0x140286BC0 (-SmmAllocateLogicalAddressAt@@YAJPEAUSYSMM_LOGICAL_ALLOCATOR@@_K1PEBXPEAPEAUSYSMM_LOGICAL_BLOCK@.c)
 *     ?SmmDestroyLogicalAllocator@@YAXPEAUSYSMM_LOGICAL_ALLOCATOR@@@Z @ 0x140287060 (-SmmDestroyLogicalAllocator@@YAXPEAUSYSMM_LOGICAL_ALLOCATOR@@@Z.c)
 *     SmmInitializeLogicalAllocator @ 0x14028730C (SmmInitializeLogicalAllocator.c)
 */

__int64 __fastcall SmmCreateLogicalAllocator(unsigned __int64 a1, struct SYSMM_LOGICAL_ALLOCATOR **a2)
{
  __int64 result; // rax
  unsigned __int64 v5; // rdi
  __int64 v6; // rax
  __int64 v7; // rbx
  unsigned __int64 v8; // r14
  __int64 LowerOrderFromPageCount; // rbp
  __int64 Block; // rax
  _QWORD *v11; // r10
  _QWORD *v12; // rax
  _DWORD *LogicalPool; // rax
  __int64 v14; // r10
  int IsEnabledDeviceUsageNoInline; // eax
  int LogicalAddressAt; // esi

  if ( (unsigned int)Feature_Servicing_GraphicsKernel_DmaRemappingMSI__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( a1 < 0x201000 )
    {
      WdLogSingleEntry1(3LL, 2101248LL);
      WdLogGlobalForLineNumber = 1657;
      return 3221225485LL;
    }
  }
  else if ( a1 < 0x11000 )
  {
    WdLogSingleEntry1(3LL, 69632LL);
    WdLogGlobalForLineNumber = 1666;
    return 3221225485LL;
  }
  v5 = a1 & 0xFFFFFFFFFFFFF000uLL;
  v6 = operator new(0x538uLL, 0x35737844u, 64LL);
  v7 = v6;
  if ( !v6 )
  {
    _InterlockedIncrement(&dword_140161678);
    WdLogSingleEntry0(6LL);
    WdLogGlobalForLineNumber = 1682;
    DxgkLogInternalTriageEvent(
      0LL,
      262145LL,
      0xFFFFFFFFLL,
      L"Failed to allocate logical allocator",
      1682LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225495LL;
  }
  SmmInitializeLogicalAllocator(v6, v5);
  v8 = v5 >> 12;
  if ( v5 >> 12 )
  {
    while ( 1 )
    {
      LowerOrderFromPageCount = (unsigned __int8)SmmGetLowerOrderFromPageCount(v8);
      Block = SmmAllocateBlock();
      if ( !Block )
        break;
      SmmInitializeLogicalBlock(Block, (v5 >> 12) - v8, LowerOrderFromPageCount);
      v12 = *(_QWORD **)(v7 + 1264);
      if ( *v12 != v7 + 1256 )
        __fastfail(3u);
      *v11 = v7 + 1256;
      v11[1] = v12;
      *v12 = v11;
      *(_QWORD *)(v7 + 1264) = v11;
      LogicalPool = (_DWORD *)SmmGetLogicalPool(v7, LowerOrderFromPageCount);
      SmmAddBlockToPool(LogicalPool, v14);
      v8 -= SmmGetOrderBlockSizeInPages(LowerOrderFromPageCount);
      if ( !v8 )
        goto LABEL_13;
    }
    WdLogSingleEntry1(3LL, LowerOrderFromPageCount);
    WdLogGlobalForLineNumber = 1722;
    LogicalAddressAt = -1073741801;
    goto LABEL_26;
  }
LABEL_13:
  IsEnabledDeviceUsageNoInline = Feature_Servicing_GraphicsKernel_DmaRemappingMSI__private_IsEnabledDeviceUsageNoInline();
  if ( IsEnabledDeviceUsageNoInline )
    IsEnabledDeviceUsageNoInline = 1;
  LogicalAddressAt = SmmAllocateLogicalAddressAt(
                       (struct SYSMM_LOGICAL_ALLOCATOR *)v7,
                       0LL,
                       IsEnabledDeviceUsageNoInline != 0 ? 0x200000LL : 0x10000LL,
                       (const void *)0xFFFFFFFFFFFFFFFFLL,
                       (struct SYSMM_LOGICAL_BLOCK **)(v7 + 1272));
  if ( LogicalAddressAt < 0 )
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 1770;
LABEL_26:
    SmmDestroyLogicalAllocator((struct SYSMM_LOGICAL_ALLOCATOR *)v7);
    return (unsigned int)LogicalAddressAt;
  }
  *(_QWORD *)(*(_QWORD *)(v7 + 1272) + 32LL) |= 0x800000000000000uLL;
  if ( (unsigned int)Feature_Servicing_GraphicsKernel_DmaRemappingMSI__private_IsEnabledDeviceUsageNoInline()
    && v5 > 0xFEE00000 )
  {
    if ( v5 < 0xFEF00000 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 1790;
      DxgkLogInternalTriageEvent(
        0LL,
        262146LL,
        0xFFFFFFFFLL,
        L"AddressSpaceSize >= SYSMM_MSI_RANGE_END",
        1790LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    LogicalAddressAt = SmmAllocateLogicalAddressAt(
                         (struct SYSMM_LOGICAL_ALLOCATOR *)v7,
                         4276092928LL,
                         0x100000LL,
                         (const void *)0xFFFFFFFFFFFFFFFFLL,
                         (struct SYSMM_LOGICAL_BLOCK **)(v7 + 1280));
    if ( LogicalAddressAt < 0 )
    {
      WdLogSingleEntry0(3LL);
      WdLogGlobalForLineNumber = 1811;
      goto LABEL_26;
    }
    *(_QWORD *)(*(_QWORD *)(v7 + 1280) + 32LL) |= 0x800000000000000uLL;
  }
  *(_DWORD *)(v7 + 1328) ^= ((unsigned __int8)*(_DWORD *)(v7 + 1328) ^ (unsigned __int8)((unsigned int)dword_140161610 >> 6)) & 1;
  result = 0LL;
  *a2 = (struct SYSMM_LOGICAL_ALLOCATOR *)v7;
  return result;
}
