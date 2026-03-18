/*
 * XREFs of SmmCreateHardwareReservedRanges @ 0x14027E250
 * Callers:
 *     ?SysMmCreateAdapter@@YAJPEAU_DEVICE_OBJECT@@PEBQEAU1@IPEBU_DXGK_PHYSICAL_MEMORY_RANGE@@IIPEBUSYSMM_ADAPTER_CREATE_PARAMS@@PEAPEAUSYSMM_ADAPTER@@@Z @ 0x14027E850 (-SysMmCreateAdapter@@YAJPEAU_DEVICE_OBJECT@@PEBQEAU1@IPEBU_DXGK_PHYSICAL_MEMORY_RANGE@@IIPEBUSYS.c)
 *     ?SysMmFinalizeInitialization@@YAJPEAUSYSMM_ADAPTER@@T_LARGE_INTEGER@@_N2PEBU_DXGK_PHYSICAL_MEMORY_RANGE@@IW4SYSMM_LEGACY_IOMMU_FLAGS_MODE@@PEATSYSMM_IOMMU_STATE@@@Z @ 0x14027EF80 (-SysMmFinalizeInitialization@@YAJPEAUSYSMM_ADAPTER@@T_LARGE_INTEGER@@_N2PEBU_DXGK_PHYSICAL_MEMOR.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     SmmValidateHardwareReservedRanges @ 0x14027E69C (SmmValidateHardwareReservedRanges.c)
 */

__int64 __fastcall SmmCreateHardwareReservedRanges(__int64 a1, __int128 *a2, unsigned int a3)
{
  __int64 v3; // rbx
  __int64 v4; // rsi
  __int64 result; // rax
  __int64 v8; // r9
  __int64 v9; // r14
  __int64 Pool2; // rax
  __int128 v11; // xmm0

  v3 = 0LL;
  v4 = a3;
  if ( !a3 )
    return 0LL;
  if ( *(_QWORD *)(a1 + 400) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 413;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"pAdapter->HardwareReservedRanges == nullptr",
      413LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( *(_DWORD *)(a1 + 28) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 414;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"pAdapter->HardwareReservedRangeCount == 0",
      414LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  result = SmmValidateHardwareReservedRanges(a2, (unsigned int)v4);
  if ( (int)result >= 0 )
  {
    v9 = v4;
    Pool2 = ExAllocatePool2(64LL, 24 * v4, 947091524LL, v8);
    *(_QWORD *)(a1 + 400) = Pool2;
    if ( !Pool2 )
    {
      _InterlockedIncrement(&dword_14015E628);
      WdLogSingleEntry0(6LL);
      WdLogGlobalForLineNumber = 425;
      DxgkLogInternalTriageEvent(
        0LL,
        262145,
        0xFFFFFFFFLL,
        L"Failed to allocate SYSMM_HARDWARE_RESERVED_RANGE array",
        425LL,
        0LL,
        0LL,
        0LL,
        0LL);
      return 3221225495LL;
    }
    do
    {
      v11 = *a2++;
      *(_OWORD *)(v3 + *(_QWORD *)(a1 + 400)) = v11;
      v3 += 24LL;
      --v9;
    }
    while ( v9 );
    *(_DWORD *)(a1 + 28) = v4;
    return 0LL;
  }
  return result;
}
