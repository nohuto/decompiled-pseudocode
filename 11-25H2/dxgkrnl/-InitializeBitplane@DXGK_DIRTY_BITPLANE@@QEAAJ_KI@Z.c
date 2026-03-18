/*
 * XREFs of ?InitializeBitplane@DXGK_DIRTY_BITPLANE@@QEAAJ_KI@Z @ 0x14007A8C0
 * Callers:
 *     ?InitializeDirtyBitplaneForAllocation@DXGK_VIRTUAL_GPU_GPUP@@QEAAJI@Z @ 0x14021296C (-InitializeDirtyBitplaneForAllocation@DXGK_VIRTUAL_GPU_GPUP@@QEAAJI@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140013010 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall DXGK_DIRTY_BITPLANE::InitializeBitplane(
        PRTL_BITMAP BitMapHeader,
        unsigned __int64 a2,
        unsigned int a3,
        __int64 a4)
{
  __int64 v5; // rdi
  unsigned __int64 v7; // rsi
  __int64 result; // rax
  unsigned __int64 v9; // rcx
  ULONG *v10; // rax

  v5 = a3;
  v7 = a2 / a3;
  if ( a2 % a3 )
  {
    WdLogSingleEntry2(2LL, a2, a3);
    WdLogGlobalForLineNumber = 3325;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Size is not a multiple of page size. VF size: 0x%I64x Page size: 0x%I64x",
      a2,
      v5,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
  else
  {
    v9 = 4 * (unsigned int)((a2 / a3 + 31) >> 5);
    BitMapHeader[1].SizeOfBitMap = v9;
    v10 = (ULONG *)operator new[](v9, 0x4B677844u, 256LL, a4);
    if ( v10 )
    {
      RtlInitializeBitMap(BitMapHeader, v10, v7);
      result = 0LL;
      BitMapHeader[1].Buffer = (PULONG)v5;
    }
    else
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 3334;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        0xFFFFFFFFLL,
        L"Failed to allocate dirty bitplane buffer",
        3334LL,
        0LL,
        0LL,
        0LL,
        0LL);
      return 3221225495LL;
    }
  }
  return result;
}
