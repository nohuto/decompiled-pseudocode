/*
 * XREFs of ?RoundToNearestScaleFactor@@YAKIPEBU_DPI_SCALE_FACTOR_COLLECTION@@@Z @ 0x14006497C
 * Callers:
 *     ?FillDpiInfo@@YAXAEBUtagSIZE@@0PEBU_DPI_SCALE_FACTOR_COLLECTION@@IIIHPEAU_DPI_INFORMATION@@@Z @ 0x1400554C8 (-FillDpiInfo@@YAXAEBUtagSIZE@@0PEBU_DPI_SCALE_FACTOR_COLLECTION@@IIIHPEAU_DPI_INFORMATION@@@Z.c)
 * Callees:
 *     McTemplateK0zqqzxxxxx_EtwWriteTransfer @ 0x14000A750 (McTemplateK0zqqzxxxxx_EtwWriteTransfer.c)
 *     DxgkLogInternalTriageEvent @ 0x14000A8B0 (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall RoundToNearestScaleFactor(unsigned int a1, const struct _DPI_SCALE_FACTOR_COLLECTION *a2)
{
  unsigned int v2; // ebx
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r8
  __int64 v8; // r10

  v2 = 0;
  if ( !a2 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 835;
    if ( bTracingEnabled )
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200000000LL) != 0 )
        McTemplateK0zqqzxxxxx_EtwWriteTransfer(
          835LL,
          v5,
          v6,
          0LL,
          2,
          -1,
          L"pScaleFactorCollection != nullptr",
          67,
          0,
          0,
          0,
          0);
    }
  }
  if ( !*((_QWORD *)a2 + 2) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 836;
    DxgkLogInternalTriageEvent(
      0LL,
      262146LL,
      0xFFFFFFFFLL,
      L"pScaleFactorCollection->pScaleFactors != nullptr",
      836LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v7 = *((_QWORD *)a2 + 2);
  if ( !v7 )
    return 0LL;
  if ( *((_DWORD *)a2 + 2) != 1 )
  {
    do
    {
      v8 = v2 + 1;
      if ( a1 <= (unsigned int)(*(_DWORD *)(v7 + 4LL * v2) + *(_DWORD *)(v7 + 4 * v8)) >> 1 )
        break;
      ++v2;
    }
    while ( (unsigned int)v8 < *((_DWORD *)a2 + 2) - 1 );
  }
  return *(unsigned int *)(v7 + 4LL * v2);
}
