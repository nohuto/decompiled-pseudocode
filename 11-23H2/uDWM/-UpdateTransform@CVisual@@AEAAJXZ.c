/*
 * XREFs of ?UpdateTransform@CVisual@@AEAAJXZ @ 0x1801058F8
 * Callers:
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x18003DE40 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 *     ?ValidateVisual@CTopLevelWindow3D@@UEAAJXZ @ 0x180042EC0 (-ValidateVisual@CTopLevelWindow3D@@UEAAJXZ.c)
 *     ?ValidateVisual@CVisual@@UEAAJXZ @ 0x180045C90 (-ValidateVisual@CVisual@@UEAAJXZ.c)
 *     ?ValidateVisual@CRenderDataVisual@@UEAAJXZ @ 0x180050710 (-ValidateVisual@CRenderDataVisual@@UEAAJXZ.c)
 * Callees:
 *     ?Update@CMatrixTransformProxy@@QEAAJAEBU_MilMatrix3x2D@@@Z @ 0x180009BD0 (-Update@CMatrixTransformProxy@@QEAAJAEBU_MilMatrix3x2D@@@Z.c)
 *     ?GetCurrentTransform@CVisual@@AEAA_NPEAUD2DMatrix@@@Z @ 0x18000C51C (-GetCurrentTransform@CVisual@@AEAA_NPEAUD2DMatrix@@@Z.c)
 *     ??$CreateProxy@VCMatrixTransformProxy@@@CCompositor@@IEAAJPEAPEAVCMatrixTransformProxy@@@Z @ 0x18004FEDC (--$CreateProxy@VCMatrixTransformProxy@@@CCompositor@@IEAAJPEAPEAVCMatrixTransformProxy@@@Z.c)
 *     __security_check_cookie @ 0x18005C640 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetTransform@CVisualProxy@@QEAAJPEAVCBaseTransformProxy@@@Z @ 0x180105C28 (-SetTransform@CVisualProxy@@QEAAJPEAVCBaseTransformProxy@@@Z.c)
 */

__int64 __fastcall CVisual::UpdateTransform(CVisualProxy **this)
{
  CBaseObject **v1; // rdi
  int v3; // eax
  unsigned int v4; // ebx
  int v5; // eax
  char CurrentTransform; // al
  float v7; // xmm1_4
  DOUBLE v8; // xmm0_8
  CMatrixTransformProxy *v9; // rcx
  int v10; // eax
  struct _MilMatrix3x2D v12; // [rsp+38h] [rbp-29h] BYREF
  float v13[16]; // [rsp+68h] [rbp+7h] BYREF

  v1 = this + 14;
  if ( !this[14] )
  {
    v3 = CCompositor::CreateProxy<CMatrixTransformProxy>(
           *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6),
           v1);
    v4 = v3;
    if ( v3 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v3, 0x28Eu);
      return v4;
    }
    v5 = CVisualProxy::SetTransform(this[2], *v1);
    v4 = v5;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v5, 0x28Fu);
      return v4;
    }
  }
  CurrentTransform = CVisual::GetCurrentTransform((CVisual *)this, (struct D2DMatrix *)v13);
  v7 = v13[1];
  v8 = v13[0];
  *((_BYTE *)this + 92) = (2 * CurrentTransform) | *((_BYTE *)this + 92) & 0xFD;
  v9 = *v1;
  v12.S_11 = v8;
  v12.S_12 = v7;
  v12.S_21 = v13[4];
  v12.S_22 = v13[5];
  v12.DX = v13[12];
  v12.DY = v13[13];
  v10 = CMatrixTransformProxy::Update(v9, &v12);
  v4 = v10;
  if ( v10 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v10, 0x29Du);
  return v4;
}
