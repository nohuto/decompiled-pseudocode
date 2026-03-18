/*
 * XREFs of BmlDoesTargetModeObeyConstraint @ 0x1402625B8
 * Callers:
 *     BmlGetNextBestTargetMode @ 0x1402D37C8 (BmlGetNextBestTargetMode.c)
 *     _BmlGetPathModeListForPathTargetModes @ 0x14039C56C (_BmlGetPathModeListForPathTargetModes.c)
 * Callees:
 *     ?IsFreqWithinToleranceRange@DMMVIDEOSIGNALMODE@@SAEAEBU_D3DDDI_RATIONAL@@0I@Z @ 0x14003953C (-IsFreqWithinToleranceRange@DMMVIDEOSIGNALMODE@@SAEAEBU_D3DDDI_RATIONAL@@0I@Z.c)
 *     ?IsUnspecifiedFrequency@@YA_NAEBU_D3DDDI_RATIONAL@@@Z @ 0x140045E18 (-IsUnspecifiedFrequency@@YA_NAEBU_D3DDDI_RATIONAL@@@Z.c)
 *     ?GetPresentationVSync@DMMVIDEOSIGNALMODE@@SA?AU_D3DDDI_RATIONAL@@AEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@@Z @ 0x14004A1A0 (-GetPresentationVSync@DMMVIDEOSIGNALMODE@@SA-AU_D3DDDI_RATIONAL@@AEBU_D3DKMDT_VIDEO_SIGNAL_INFO@.c)
 *     ?SupportVirtualRefreshRate@DMMVIDPNTARGETMODE@@QEBA_NAEBU_D3DDDI_RATIONAL@@I@Z @ 0x140184A4C (-SupportVirtualRefreshRate@DMMVIDPNTARGETMODE@@QEBA_NAEBU_D3DDDI_RATIONAL@@I@Z.c)
 *     ?BmlCompareModeExtents@@YA?AW4BML_COMPARISON_RESULT@@AEBU_D3DKMDT_2DREGION@@0@Z @ 0x1402C80F4 (-BmlCompareModeExtents@@YA-AW4BML_COMPARISON_RESULT@@AEBU_D3DKMDT_2DREGION@@0@Z.c)
 *     BmlDoesTargetModeSupportWireFormat @ 0x140357540 (BmlDoesTargetModeSupportWireFormat.c)
 *     BmlIsSupportedByMonitorTargetMode @ 0x14038A904 (BmlIsSupportedByMonitorTargetMode.c)
 *     BmlAreRawModesEnabled @ 0x14039C53C (BmlAreRawModesEnabled.c)
 */

bool __fastcall BmlDoesTargetModeObeyConstraint(__int64 a1, unsigned __int16 a2, __int64 a3)
{
  __int64 v4; // rbp
  __int64 *v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // r8
  char v9; // r9
  struct _D3DDDI_RATIONAL v10; // r10
  const struct _D3DDDI_RATIONAL *v11; // rcx
  struct _D3DDDI_RATIONAL v12; // r10
  struct _D3DDDI_RATIONAL v14; // [rsp+20h] [rbp-18h] BYREF
  struct _D3DDDI_RATIONAL PresentationVSync; // [rsp+40h] [rbp+8h] BYREF

  v4 = 120LL * a2;
  v6 = *(__int64 **)(a1 + v4 + 16);
  if ( !(unsigned __int8)BmlAreRawModesEnabled(a1, a2) )
  {
    LOBYTE(v7) = v9;
    if ( !(unsigned __int8)BmlIsSupportedByMonitorTargetMode(v8, v7) )
      return 0;
  }
  v10 = (struct _D3DDDI_RATIONAL)*v6;
  if ( (*v6 & 0x4000000000LL) != 0 )
  {
    if ( (unsigned int)BmlCompareModeExtents(v4 + a1 + 52, a3 + 84) )
      return 0;
  }
  if ( (v10.Numerator & 0x1000000) != 0
    && (v6[1] & 0x1000000) != 0
    && !IsUnspecifiedFrequency((const struct _D3DDDI_RATIONAL *)(a3 + 92))
    && !IsUnspecifiedFrequency((const struct _D3DDDI_RATIONAL *)v6 + 28)
    && !DMMVIDPNTARGETMODE::SupportVirtualRefreshRate((DMMVIDPNTARGETMODE *)a3, v11) )
  {
    return 0;
  }
  v12 = (struct _D3DDDI_RATIONAL)*v6;
  if ( (*v6 & 0x8F) == 0 )
    return 1;
  if ( (v12.Numerator & 4) != 0 && ((*(_BYTE *)(a3 + 120) ^ *((_BYTE *)v6 + 80)) & 7) != 0 )
    return 0;
  if ( (v12.Numerator & 1) != 0 && (v6[1] & 1) != 0 && (unsigned int)BmlCompareModeExtents(a3 + 84, (char *)v6 + 44) )
    return 0;
  if ( (v12.Numerator & 2) != 0
    && (v6[1] & 2) != 0
    && !IsUnspecifiedFrequency((const struct _D3DDDI_RATIONAL *)(a3 + 92)) )
  {
    PresentationVSync = DMMVIDEOSIGNALMODE::GetPresentationVSync((const struct _D3DKMDT_VIDEO_SIGNAL_INFO *)(v6 + 4));
    v14 = DMMVIDEOSIGNALMODE::GetPresentationVSync((const struct _D3DKMDT_VIDEO_SIGNAL_INFO *)(a3 + 72));
    if ( !DMMVIDEOSIGNALMODE::IsFreqWithinToleranceRange(&v14, &PresentationVSync, 0) )
      return 0;
  }
  return (*(_BYTE *)v6 & 8) == 0
      || (v6[1] & 8) == 0
      || (unsigned __int8)BmlDoesTargetModeSupportWireFormat(a3, *((unsigned int *)v6 + 51)) != 0;
}
