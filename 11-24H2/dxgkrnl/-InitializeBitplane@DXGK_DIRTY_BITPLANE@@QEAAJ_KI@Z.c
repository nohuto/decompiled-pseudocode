/*
 * XREFs of ?InitializeBitplane@DXGK_DIRTY_BITPLANE@@QEAAJ_KI@Z @ 0x14007ADA0
 * Callers:
 *     ?InitializeDirtyBitplaneForAllocation@DXGK_VIRTUAL_GPU_GPUP@@QEAAJI@Z @ 0x140218F8C (-InitializeDirtyBitplaneForAllocation@DXGK_VIRTUAL_GPU_GPUP@@QEAAJI@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400224A0 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 */

__int64 __fastcall DXGK_DIRTY_BITPLANE::InitializeBitplane(
        PRTL_BITMAP BitMapHeader,
        unsigned __int64 a2,
        unsigned int a3)
{
  __int64 v4; // rdi
  unsigned __int64 v6; // rsi
  __int64 result; // rax
  unsigned __int64 v8; // rcx
  ULONG *v9; // rax

  v4 = a3;
  v6 = a2 / a3;
  if ( a2 % a3 )
  {
    WdLogSingleEntry2(2LL, a2, a3);
    WdLogGlobalForLineNumber = 3227;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Size is not a multiple of page size. VF size: 0x%I64x Page size: 0x%I64x",
      a2,
      v4,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
  else
  {
    v8 = 4 * (unsigned int)((a2 / a3 + 31) >> 5);
    BitMapHeader[1].SizeOfBitMap = v8;
    v9 = (ULONG *)operator new[](v8, 0x4B677844u, 256LL);
    if ( v9 )
    {
      RtlInitializeBitMap(BitMapHeader, v9, v6);
      result = 0LL;
      BitMapHeader[1].Buffer = (PULONG)v4;
    }
    else
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 3236;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000LL,
        0xFFFFFFFFLL,
        L"Failed to allocate dirty bitplane buffer",
        3236LL,
        0LL,
        0LL,
        0LL,
        0LL);
      return 3221225495LL;
    }
  }
  return result;
}
