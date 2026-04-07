/*
 * XREFs of ?Initialize@CDrawNineGridInstruction@@AEAAJPEAVCBitmapSource@@@Z @ 0x18003ABC8
 * Callers:
 *     ?Create@CDrawNineGridInstruction@@SAJPEAVCBitmapSource@@PEAPEAV1@@Z @ 0x18003A8E4 (-Create@CDrawNineGridInstruction@@SAJPEAVCBitmapSource@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetCurrentRect@CDrawNineGridInstruction@@SAXIAEAUNineGridLayout@@PEAUD2D_POINTANDSIZE_L@@@Z @ 0x18003B420 (-GetCurrentRect@CDrawNineGridInstruction@@SAXIAEAUNineGridLayout@@PEAUD2D_POINTANDSIZE_L@@@Z.c)
 *     ?GetNineGridLayout@CDrawNineGridInstruction@@SAXU_MARGINS@@AEBUD2D_POINTANDSIZE_L@@PEAUNineGridLayout@@@Z @ 0x18003B8EC (-GetNineGridLayout@CDrawNineGridInstruction@@SAXU_MARGINS@@AEBUD2D_POINTANDSIZE_L@@PEAUNineGridL.c)
 *     ?HasSourceClip@CBitmapSource@@QEBA_NXZ @ 0x18003B998 (-HasSourceClip@CBitmapSource@@QEBA_NXZ.c)
 *     ?CreateImageLegacyMilBrushProxy@CCompositor@@QEAAJPEAPEAVCImageLegacyMilBrushProxy@@@Z @ 0x18003CC30 (-CreateImageLegacyMilBrushProxy@CCompositor@@QEAAJPEAPEAVCImageLegacyMilBrushProxy@@@Z.c)
 *     ?Update@CImageLegacyMilBrushProxy@@QEAAJNAEBUD2D_RECT_F@@0PEBVCDoubleResourceProxy@@W4Enum@MilBrushMappingMode@@2PEBVCRectResourceProxy@@3W44MilStretch@@W44MilTileMode@@W44MilHorizontalAlignment@@W44MilVerticalAlignment@@PEBVCBaseImageProxy@@@Z @ 0x18003CC3C (-Update@CImageLegacyMilBrushProxy@@QEAAJNAEBUD2D_RECT_F@@0PEBVCDoubleResourceProxy@@W4Enum@MilBr.c)
 *     __security_check_cookie @ 0x18009B5A0 (__security_check_cookie.c)
 */

__int64 __fastcall CDrawNineGridInstruction::Initialize(struct _MARGINS *this, struct CBitmapSource *a2)
{
  unsigned int v3; // esi
  struct _MARGINS v4; // xmm0
  __int64 v5; // rdx
  unsigned int i; // edi
  int v7; // r12d
  int v8; // r15d
  CDesktopManager *v9; // rax
  int ImageLegacyMilBrushProxy; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  int v13; // eax
  __int128 v15; // [rsp+70h] [rbp-39h] BYREF
  struct _MARGINS v16; // [rsp+80h] [rbp-29h] BYREF
  __int128 v17; // [rsp+90h] [rbp-19h] BYREF
  _OWORD v18[2]; // [rsp+A0h] [rbp-9h] BYREF

  memset(v18, 0, sizeof(v18));
  v3 = 0;
  *(_QWORD *)&v15 = 0LL;
  v4 = (struct _MARGINS)*((_OWORD *)a2 + 2);
  this[1] = v4;
  this[2] = *((struct _MARGINS *)a2 + 3);
  *((_QWORD *)&v15 + 1) = *((_QWORD *)a2 + 3);
  if ( CBitmapSource::HasSourceClip(a2) )
    *(_QWORD *)&v15 = *(_QWORD *)(v5 + 80);
  v16 = v4;
  CDrawNineGridInstruction::GetNineGridLayout(
    &v16,
    (const struct D2D_POINTANDSIZE_L *)&v15,
    (struct NineGridLayout *)v18);
  this[7].cyTopHeight = 0;
  for ( i = 0; i < 9; ++i )
  {
    v15 = 0LL;
    CDrawNineGridInstruction::GetCurrentRect(i, (struct NineGridLayout *)v18, (struct D2D_POINTANDSIZE_L *)&v15);
    v7 = DWORD2(v15);
    if ( SDWORD2(v15) <= 0 || (v8 = HIDWORD(v15), *((__int64 *)&v15 + 1) <= 0) )
    {
      *((_QWORD *)&this[3].cxLeftWidth + i) = 0LL;
    }
    else
    {
      v9 = CDesktopManager::s_pDesktopManagerInstance;
      ++this[7].cyTopHeight;
      ImageLegacyMilBrushProxy = CCompositor::CreateImageLegacyMilBrushProxy(
                                   *((CCompositor **)v9 + 6),
                                   (struct CImageLegacyMilBrushProxy **)&this[3] + i);
      v3 = ImageLegacyMilBrushProxy;
      if ( ImageLegacyMilBrushProxy < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, ImageLegacyMilBrushProxy, 0x6Du, 0LL);
        return v3;
      }
      v17 = _xmm;
      *(float *)&v16.cxLeftWidth = (float)(int)v15;
      v12 = *((_QWORD *)&this[3].cxLeftWidth + i);
      *(float *)&v16.cxRightWidth = (float)SDWORD1(v15);
      *(float *)&v16.cyBottomHeight = (float)(DWORD1(v15) + v8);
      *(float *)&v16.cyTopHeight = (float)(v7 + v15);
      v13 = CImageLegacyMilBrushProxy::Update(v12, v11, &v17, &v16, 0LL, 1, 0, 0LL, 0LL, 1);
      v3 = v13;
      if ( v13 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v13, 0x89u, 0LL);
        return v3;
      }
    }
  }
  return v3;
}
