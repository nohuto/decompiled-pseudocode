/*
 * XREFs of ?ConvertThunkOverlayToPackedAttributes3@DXGCONTEXT@@AEAAXPEAU_VIDSCH_LAYER_ATTRIBUTE@@AEBU_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3@@@Z @ 0x14034A670
 * Callers:
 *     ?SubmitPresentMultiPlaneOverlays3@DXGCONTEXT@@AEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@EEEPEBVDXGALLOCATIONREFERENCE@@PEAEPEAU_DXGKARG_PRESENT@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAPEAV1@@Z @ 0x1402B61C0 (-SubmitPresentMultiPlaneOverlays3@DXGCONTEXT@@AEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@EEEP.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x140019E90 (DxgkLogInternalTriageEvent.c)
 */

void __fastcall DXGCONTEXT::ConvertThunkOverlayToPackedAttributes3(
        DXGCONTEXT *this,
        struct _VIDSCH_LAYER_ATTRIBUTE *a2,
        const struct _D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3 *a3)
{
  int v3; // esi
  UINT v6; // ecx
  int v7; // edx
  unsigned __int32 v8; // eax
  D3DDDI_COLOR_SPACE_TYPE ColorSpace; // ecx
  unsigned int v10; // eax

  v3 = 0;
  *(_WORD *)a2 = a3->SrcRect.left;
  *((_WORD *)a2 + 1) = a3->SrcRect.right;
  *((_WORD *)a2 + 2) = a3->SrcRect.top;
  *((_WORD *)a2 + 3) = a3->SrcRect.bottom;
  *((_WORD *)a2 + 4) = a3->DstRect.left;
  *((_WORD *)a2 + 5) = a3->DstRect.right;
  *((_WORD *)a2 + 6) = a3->DstRect.top;
  *((_WORD *)a2 + 7) = a3->DstRect.bottom;
  *((_WORD *)a2 + 8) = a3->ClipRect.left;
  *((_WORD *)a2 + 9) = a3->ClipRect.right;
  *((_WORD *)a2 + 10) = a3->ClipRect.top;
  *((_WORD *)a2 + 11) = a3->ClipRect.bottom;
  v6 = *((_DWORD *)a2 + 7) ^ (a3->Flags ^ *((_DWORD *)a2 + 7)) & 1;
  *((_DWORD *)a2 + 7) = v6;
  *((_DWORD *)a2 + 7) = a3->Flags & 2 | v6 & 0xFFFFFFFD;
  if ( !a3->Rotation )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2267;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"1 <= static_cast< UINT >(PlaneAttributes.Rotation)",
      2267LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( a3->Rotation > (unsigned int)D3DDDI_ROTATION_270 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2268;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      0xFFFFFFFFLL,
      L"4 >= static_cast< UINT >(PlaneAttributes.Rotation)",
      2268LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v7 = *((_DWORD *)a2 + 7) ^ ((unsigned __int8)*((_DWORD *)a2 + 7) ^ (unsigned __int8)(8 * a3->Rotation - 8)) & 0x18;
  *((_DWORD *)a2 + 7) = v7;
  v8 = (v7 & 0xFFFFFFFB ^ (4 * (a3->Blend & 1))) & 0xFFFFFF9F;
  *((_DWORD *)a2 + 7) = v8;
  ColorSpace = a3->ColorSpace;
  if ( ColorSpace == D3DDDI_COLOR_SPACE_YCBCR_STUDIO_G22_LEFT_P709
    || ColorSpace == D3DDDI_COLOR_SPACE_YCBCR_STUDIO_G22_LEFT_P601 )
  {
    v8 |= 0x80u;
    *((_DWORD *)a2 + 7) = v8;
  }
  if ( a3->ColorSpace == D3DDDI_COLOR_SPACE_YCBCR_STUDIO_G22_LEFT_P709
    || a3->ColorSpace == D3DDDI_COLOR_SPACE_YCBCR_FULL_G22_LEFT_P709 )
  {
    v8 |= 0x100u;
  }
  v10 = v8 & 0xFFFFFDFF;
  *((_DWORD *)a2 + 7) = v10;
  if ( a3->StretchQuality == DXGKMT_MULTIPLANE_OVERLAY_STRETCH_QUALITY_HIGH )
    v3 = 0x400000;
  *((_DWORD *)a2 + 7) = v10 & 0xFFBFFFFF | v3;
  *((_DWORD *)a2 + 6) = a3->ColorSpace;
  *((_DWORD *)a2 + 8) = a3->SDRWhiteLevel;
}
