/*
 * XREFs of ?_UpdateSolidFill@CAccent@@IEAAJPEAVCRenderDataVisual@@KPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@M@Z @ 0x1800196A8
 * Callers:
 *     ?_UpdateBackgroundGeometry@CAccent@@IEAAJXZ @ 0x180011F54 (-_UpdateBackgroundGeometry@CAccent@@IEAAJXZ.c)
 *     ?UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCBaseGeometryProxy@@@Z @ 0x180019294 (-UpdateAccentPolicy@CAccent@@QEAAJPEBUtagRECT@@PEBUACCENT_POLICY@@PEAVCBaseGeometryProxy@@@Z.c)
 *     ?UpdateLayout@CAccent@@UEAAJ_N@Z @ 0x18002D2A0 (-UpdateLayout@CAccent@@UEAAJ_N@Z.c)
 *     ?_UpdateTransitionGradient@CAccent@@IEAAXXZ @ 0x1800A1AC0 (-_UpdateTransitionGradient@CAccent@@IEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ @ 0x180008E50 (-InternalRelease@-$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Create@CSolidRectangleInstruction@@SAJPEAPEAV1@@Z @ 0x18001985C (-Create@CSolidRectangleInstruction@@SAJPEAPEAV1@@Z.c)
 *     ?ClearInstructions@CRenderDataVisual@@QEAAJXZ @ 0x180037010 (-ClearInstructions@CRenderDataVisual@@QEAAJXZ.c)
 *     ?AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x180045B50 (-AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D254 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetMonitorRectAtIndex@CDesktopManager@@SA_NIPEAUtagRECT@@@Z @ 0x1800A04D0 (-GetMonitorRectAtIndex@CDesktopManager@@SA_NIPEAUtagRECT@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAccent::_UpdateSolidFill(_DWORD *a1, CRenderDataVisual *a2, int a3, const __m128i *a4, float a5)
{
  __m128i v8; // xmm6
  int v9; // eax
  unsigned int v10; // ebx
  int v11; // eax
  __int64 v14; // rdx
  __int64 v15; // rdx
  unsigned int v16; // ebx
  __int128 v17; // xmm6
  int v18; // eax
  float v19; // xmm3_4
  int v20; // eax
  float v21; // xmm2_4
  int v22; // edi
  __int64 v23; // rdx
  int v24; // [rsp+20h] [rbp-50h]
  struct CSolidRectangleInstruction *v25; // [rsp+30h] [rbp-40h] BYREF
  struct tagRECT v26; // [rsp+38h] [rbp-38h] BYREF
  float v27[6]; // [rsp+48h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]

  v25 = 0LL;
  v8 = _mm_loadu_si128(a4);
  v9 = CRenderDataVisual::ClearInstructions(a2);
  v10 = v9;
  if ( v9 < 0 )
  {
    v15 = 797LL;
    goto LABEL_30;
  }
  v27[0] = GammaLUT_sRGB_to_scRGB[(unsigned __int8)a3] / 255.0;
  v27[1] = GammaLUT_sRGB_to_scRGB[(unsigned __int64)(unsigned __int16)a3 >> 8] / 255.0;
  v27[2] = GammaLUT_sRGB_to_scRGB[BYTE2(a3)] / 255.0;
  v11 = a1[73];
  if ( (v11 & 0x800) != 0 )
    a5 = 0.0;
  v27[3] = a5;
  if ( (v11 & 4) != 0 )
  {
    if ( (v11 & 8) != 0 )
    {
      v26 = 0LL;
      v16 = 0;
      v17 = *(_OWORD *)v27;
      while ( 1 )
      {
        if ( !CDesktopManager::GetMonitorRectAtIndex(v16, &v26) )
          goto LABEL_11;
        if ( v26.left || v26.top )
        {
          v18 = 0;
          if ( v26.bottom - v26.top >= 0 )
            v18 = v26.bottom - v26.top;
          v19 = (float)v18;
          v20 = 0;
          if ( v26.right - v26.left >= 0 )
            v20 = v26.right - v26.left;
          v21 = (float)(v26.top - a1[147]);
          v27[0] = (float)(v26.left - a1[146]);
          v27[1] = v21;
          v27[2] = (float)v20 + v27[0];
          v27[3] = v21 + v19;
          Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v25);
          v22 = CSolidRectangleInstruction::Create(&v25);
          if ( v22 < 0 )
          {
            v23 = 832LL;
            goto LABEL_27;
          }
          *((_OWORD *)v25 + 2) = *(_OWORD *)v27;
          *((_OWORD *)v25 + 1) = v17;
          v22 = CRenderDataVisual::AddInstruction(a2, v25);
          if ( v22 < 0 )
          {
            v23 = 835LL;
LABEL_27:
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)v23,
              (unsigned int)"clientcore\\windows\\dwm\\udwm\\accent.cpp",
              (const char *)(unsigned int)v22,
              v24);
            v10 = v22;
            goto LABEL_7;
          }
        }
        ++v16;
      }
    }
    Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v25);
    v9 = CSolidRectangleInstruction::Create(&v25);
    v10 = v9;
    if ( v9 < 0 )
    {
      v15 = 846LL;
    }
    else
    {
      *((_OWORD *)v25 + 2) = _xmm;
      *((_OWORD *)v25 + 1) = *(_OWORD *)v27;
      v9 = CRenderDataVisual::AddInstruction(a2, v25);
      v10 = v9;
      if ( v9 >= 0 )
      {
LABEL_11:
        LOBYTE(v14) = 1;
        (*(void (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD, _BYTE))(**(_QWORD **)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance
                                                                                       + 6)
                                                                                     + 24LL)
                                                                       + 160LL))(
          *(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6) + 24LL),
          v14,
          0LL,
          0LL,
          0);
        goto LABEL_6;
      }
      v15 = 849LL;
    }
LABEL_30:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v15,
      (unsigned int)"clientcore\\windows\\dwm\\udwm\\accent.cpp",
      (const char *)(unsigned int)v9,
      v24);
    goto LABEL_7;
  }
  Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v25);
  v9 = CSolidRectangleInstruction::Create(&v25);
  v10 = v9;
  if ( v9 < 0 )
  {
    v15 = 862LL;
    goto LABEL_30;
  }
  *((__m128i *)v25 + 2) = v8;
  *((_OWORD *)v25 + 1) = *(_OWORD *)v27;
  v9 = CRenderDataVisual::AddInstruction(a2, v25);
  v10 = v9;
  if ( v9 < 0 )
  {
    v15 = 865LL;
    goto LABEL_30;
  }
LABEL_6:
  v10 = 0;
LABEL_7:
  Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(&v25);
  return v10;
}
