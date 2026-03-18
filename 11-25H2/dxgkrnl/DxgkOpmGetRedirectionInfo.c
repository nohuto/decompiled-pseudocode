/*
 * XREFs of DxgkOpmGetRedirectionInfo @ 0x14019DF4C
 * Callers:
 *     ?CreateProtectedOutputIndirectDisplay@@YAJPEAU_FDO_CONTEXT@@0W4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS@@IPEAPEAX2@Z @ 0x140089740 (-CreateProtectedOutputIndirectDisplay@@YAJPEAU_FDO_CONTEXT@@0W4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTI.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x14002B150 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z @ 0x1400369D4 (-GetDisplayModeInfo@ADAPTER_DISPLAY@@QEBAQEBU_DXGK_DISPLAYMODE_INFO@@I@Z.c)
 *     ?DodGetOpmMftContext@ADAPTER_DISPLAY@@QEAAJIPEA_K@Z @ 0x14019684C (-DodGetOpmMftContext@ADAPTER_DISPLAY@@QEAAJIPEA_K@Z.c)
 *     ?DmmGetClientVidPnTargetModeInfo@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_SIGNAL_STANDARD@@PEAIPEAEPEAW4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@PEAU_D3DKMDT_2DREGION@@PEAU_D3DDDI_RATIONAL@@@Z @ 0x140251260 (-DmmGetClientVidPnTargetModeInfo@@YAJQEAXIPEAW4_D3DKMDT_VIDEO_SIGNAL_STANDARD@@PEAIPEAEPEAW4_D3D.c)
 *     ?DmmGetSourceConnectedToTargetInClientVidPn@@YAJQEAXIPEAI@Z @ 0x1402D57C8 (-DmmGetSourceConnectedToTargetInClientVidPn@@YAJQEAXIPEAI@Z.c)
 */

__int64 __fastcall DxgkOpmGetRedirectionInfo(ADAPTER_DISPLAY **a1, unsigned int a2, unsigned __int64 *a3, __int64 a4)
{
  __int64 v5; // r15
  unsigned int SourceConnectedToTargetInClientVidPn; // esi
  __int64 result; // rax
  const wchar_t *v10; // r9
  __int64 v11; // rsi
  const struct _DXGK_DISPLAYMODE_INFO *DisplayModeInfo; // r14
  struct _D3DKMDT_2DREGION v13; // [rsp+50h] [rbp-10h] BYREF
  struct _D3DDDI_RATIONAL v14; // [rsp+58h] [rbp-8h] BYREF
  unsigned int v15; // [rsp+A0h] [rbp+40h] BYREF
  enum _D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING v16; // [rsp+B0h] [rbp+50h] BYREF

  v5 = a2;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner((DXGADAPTER *)a1) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1075;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"pDxgAdapter->IsCoreResourceSharedOwner()",
      1075LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  SourceConnectedToTargetInClientVidPn = 0;
  if ( !a3 )
    goto LABEL_7;
  if ( (*((_DWORD *)a1 + 111) & 0x100) == 0 )
  {
    WdLogSingleEntry1(2LL, a1);
    WdLogGlobalForLineNumber = 1083;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      0xFFFFFFFFLL,
      L"Try to call DxgkOpmGetRedirectionInfo on a non-indirect display adapter 0x%I64x!",
      (__int64)a1,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225659LL;
  }
  result = ADAPTER_DISPLAY::DodGetOpmMftContext(a1[390], (unsigned int)v5, a3);
  SourceConnectedToTargetInClientVidPn = result;
  if ( (int)result >= 0 )
  {
LABEL_7:
    if ( a4 )
    {
      v15 = 0;
      SourceConnectedToTargetInClientVidPn = DmmGetSourceConnectedToTargetInClientVidPn(a1, v5, &v15);
      if ( (SourceConnectedToTargetInClientVidPn & 0x80000000) != 0 )
      {
        WdLogSingleEntry2(2LL, v5, a1);
        v10 = L"Could not find SourceID for TargetId 0x%I64x on adapter 0x%I64x!";
        WdLogGlobalForLineNumber = 1102;
LABEL_10:
        DxgkLogInternalTriageEvent(0LL, 0x40000, 0xFFFFFFFFLL, v10, v5, (__int64)a1, 0LL, 0LL, 0LL);
        return SourceConnectedToTargetInClientVidPn;
      }
      v11 = v15;
      if ( v15 == -1 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 1105;
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          0xFFFFFFFFLL,
          L"VidPnSourceId != D3DDDI_ID_UNINITIALIZED",
          1105LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      DisplayModeInfo = ADAPTER_DISPLAY::GetDisplayModeInfo(a1[390], v11);
      if ( !DisplayModeInfo )
      {
        WdLogSingleEntry2(2LL, v11, a1);
        WdLogGlobalForLineNumber = 1111;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          0xFFFFFFFFLL,
          L"Could not find display infoSource 0x%I64x on adapter 0x%I64x!",
          v11,
          (__int64)a1,
          0LL,
          0LL,
          0LL);
        return 3221225485LL;
      }
      v13 = 0LL;
      v14 = 0LL;
      v16 = D3DDDI_VSSLO_UNINITIALIZED;
      SourceConnectedToTargetInClientVidPn = DmmGetClientVidPnTargetModeInfo(a1, v5, 0LL, 0LL, 0LL, &v16, &v13, &v14);
      if ( (SourceConnectedToTargetInClientVidPn & 0x80000000) != 0 )
      {
        WdLogSingleEntry2(2LL, v5, a1);
        v10 = L"Could not find target mode info for TargetId 0x%I64x on adapter 0x%I64x!";
        WdLogGlobalForLineNumber = 1121;
        goto LABEL_10;
      }
      *(_OWORD *)a4 = 0LL;
      *(_OWORD *)(a4 + 16) = 0LL;
      *(_QWORD *)(a4 + 32) = 0LL;
      *(_DWORD *)(a4 + 40) = 0;
      *(struct _D3DKMDT_2DREGION *)(a4 + 20) = v13;
      *(_DWORD *)(a4 + 32) = *((_DWORD *)DisplayModeInfo + 2);
      *(struct _D3DDDI_RATIONAL *)(a4 + 36) = v14;
      if ( v16 != *((_DWORD *)DisplayModeInfo + 6) )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 1131;
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          0xFFFFFFFFLL,
          L"ScanLineOrder == pDisplayModeInfo->DisplayMode.ScanLineOrdering",
          1131LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      switch ( *((_DWORD *)DisplayModeInfo + 6) )
      {
        case 1:
          goto LABEL_26;
        case 2:
          *(_DWORD *)(a4 + 28) = 4;
          return SourceConnectedToTargetInClientVidPn;
        case 3:
          *(_DWORD *)(a4 + 28) = 3;
          return SourceConnectedToTargetInClientVidPn;
      }
      if ( *((_DWORD *)DisplayModeInfo + 6) != 255 )
      {
LABEL_26:
        *(_DWORD *)(a4 + 28) = 2;
        return SourceConnectedToTargetInClientVidPn;
      }
      *(_DWORD *)(a4 + 28) = 0;
    }
    return SourceConnectedToTargetInClientVidPn;
  }
  return result;
}
