/*
 * XREFs of ?PinContentScaling@DMMVIDPNPRESENTPATH@@QEAAJW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@@Z @ 0x14001C81C
 * Callers:
 *     ??0DMMVIDPNPRESENTPATH@@QEAA@PEAVDMMVIDPNSOURCE@@PEAVDMMVIDPNTARGET@@AEBU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x14008E7C4 (--0DMMVIDPNPRESENTPATH@@QEAA@PEAVDMMVIDPNSOURCE@@PEAVDMMVIDPNTARGET@@AEBU_D3DKMDT_VIDPN_PRESENT_.c)
 *     ?DmmRemovePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IE@Z @ 0x140252D98 (-DmmRemovePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IE@Z.c)
 *     ?PinPathContentScaling@VIDPN_MGR@@QEBAJQEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@_N@Z @ 0x140254464 (-PinPathContentScaling@VIDPN_MGR@@QEBAJQEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_VIDPN_PRESENT_PATH_SC.c)
 *     ?PinPathContentScaling@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@_N@Z @ 0x14039E2D0 (-PinPathContentScaling@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?IsScalingTransformationSupported@DMMVIDPNPRESENTPATH@@QEBAEW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@@Z @ 0x14001CAB8 (-IsScalingTransformationSupported@DMMVIDPNPRESENTPATH@@QEBAEW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALIN.c)
 *     ?IsValidContentScaling@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x14001CB60 (-IsValidContentScaling@DMMVIDPNPRESENTPATH@@QEBAEXZ.c)
 *     ?IsDriverAspectRatioCenteredMaxSupported@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x1402D1BF0 (-IsDriverAspectRatioCenteredMaxSupported@DMMVIDPNPRESENTPATH@@QEBAEXZ.c)
 *     ?IsMiniportDriverCCDSupport@DMMVIDPNPRESENTPATH@@QEBAEXZ @ 0x1402D1C08 (-IsMiniportDriverCCDSupport@DMMVIDPNPRESENTPATH@@QEBAEXZ.c)
 */

__int64 __fastcall DMMVIDPNPRESENTPATH::PinContentScaling(
        DMMVIDPNPRESENTPATH *this,
        enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING a2)
{
  __int64 v2; // rdi
  int v4; // esi
  __int64 result; // rax

  v2 = a2;
  if ( a2 == D3DKMDT_VPPS_RESERVED1 )
  {
    WdLogSingleEntry2(
      2LL,
      *(unsigned int *)(*((_QWORD *)this + 11) + 24LL),
      *(unsigned int *)(*((_QWORD *)this + 12) + 24LL));
    WdLogGlobalForLineNumber = 608;
    return 3223192389LL;
  }
  if ( DMMVIDPNPRESENTPATH::IsMiniportDriverCCDSupport(this) && (_DWORD)v2 == 255 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 614;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"!this->IsMiniportDriverCCDSupport() || (i_ContentScaling != D3DKMDT_VPPS_NOTSPECIFIED)",
      614LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !DMMVIDPNPRESENTPATH::IsMiniportDriverCCDSupport(this) && (_DWORD)v2 == 5 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 617;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"this->IsMiniportDriverCCDSupport() || (i_ContentScaling != D3DKMDT_VPPS_CUSTOM)",
      617LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( !DMMVIDPNPRESENTPATH::IsMiniportDriverCCDSupport(this) && (_DWORD)v2 == 4 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 618;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"this->IsMiniportDriverCCDSupport() || (i_ContentScaling != D3DKMDT_VPPS_ASPECTRATIOCENTEREDMAX)",
      618LL,
      0LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_14;
  }
  if ( (_DWORD)v2 != 1 && (_DWORD)v2 != 2 && (_DWORD)v2 != 3 )
  {
    if ( (_DWORD)v2 != 4 && (_DWORD)v2 != 5 )
    {
      if ( (_DWORD)v2 == 255 )
        goto LABEL_15;
LABEL_13:
      WdLogSingleEntry3(
        2LL,
        v2,
        *(unsigned int *)(*((_QWORD *)this + 11) + 24LL),
        *(unsigned int *)(*((_QWORD *)this + 12) + 24LL));
      WdLogGlobalForLineNumber = 623;
      return 3223192389LL;
    }
LABEL_14:
    if ( DMMVIDPNPRESENTPATH::IsDriverAspectRatioCenteredMaxSupported(this) )
      goto LABEL_15;
    goto LABEL_13;
  }
LABEL_15:
  if ( DMMVIDPNPRESENTPATH::IsScalingTransformationSupported(this, (enum _D3DKMDT_VIDPN_PRESENT_PATH_SCALING)v2) )
  {
    v4 = *((_DWORD *)this + 28);
    *((_DWORD *)this + 28) = v2;
    if ( DMMVIDPNPRESENTPATH::IsValidContentScaling(this) )
      return 0LL;
    WdLogSingleEntry2(2LL, v2, this);
    WdLogGlobalForLineNumber = 647;
    *((_DWORD *)this + 28) = v4;
    return 3223192389LL;
  }
  WdLogSingleEntry3(
    3LL,
    v2,
    *(unsigned int *)(*((_QWORD *)this + 11) + 24LL),
    *(unsigned int *)(*((_QWORD *)this + 12) + 24LL));
  result = 3223192326LL;
  WdLogGlobalForLineNumber = 631;
  return result;
}
