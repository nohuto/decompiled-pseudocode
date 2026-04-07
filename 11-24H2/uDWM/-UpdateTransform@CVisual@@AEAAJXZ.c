/*
 * XREFs of ?UpdateTransform@CVisual@@AEAAJXZ @ 0x1800784DC
 * Callers:
 *     ?ValidateVisual@CVisual@@UEAAJXZ @ 0x180028E60 (-ValidateVisual@CVisual@@UEAAJXZ.c)
 * Callees:
 *     ?CreateMatrixTransformProxy@CCompositor@@QEAAJPEAPEAVCMatrixTransformProxy@@@Z @ 0x180015B98 (-CreateMatrixTransformProxy@CCompositor@@QEAAJPEAPEAVCMatrixTransformProxy@@@Z.c)
 *     ?GetCurrentTransform@CVisual@@AEAA_NPEAUD2DMatrix@@@Z @ 0x180019180 (-GetCurrentTransform@CVisual@@AEAA_NPEAUD2DMatrix@@@Z.c)
 *     ?Update@CMatrixTransformProxy@@QEAAJAEBUD2D_MATRIX_3X2_F@@@Z @ 0x180019B80 (-Update@CMatrixTransformProxy@@QEAAJAEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetTransform@CVisualProxy@@QEAAJPEAVCBaseTransformProxy@@@Z @ 0x180048BB8 (-SetTransform@CVisualProxy@@QEAAJPEAVCBaseTransformProxy@@@Z.c)
 *     __security_check_cookie @ 0x18009B5A0 (__security_check_cookie.c)
 */

__int64 __fastcall CVisual::UpdateTransform(CVisualProxy **this, __int64 a2, __int64 a3)
{
  struct CMatrixTransformProxy **v3; // rdi
  int MatrixTransformProxy; // eax
  unsigned int v6; // ebx
  char CurrentTransform; // al
  char v9; // cl
  unsigned int v10; // xmm0_4
  unsigned int v11; // xmm1_4
  CMatrixTransformProxy *v12; // rcx
  int v13; // eax
  int v14; // eax
  struct D2D_MATRIX_3X2_F v15; // [rsp+38h] [rbp-19h] BYREF
  _QWORD v16[6]; // [rsp+58h] [rbp+7h] BYREF
  unsigned int v17; // [rsp+88h] [rbp+37h]
  unsigned int v18; // [rsp+8Ch] [rbp+3Bh]

  v3 = this + 7;
  if ( !this[7] )
  {
    MatrixTransformProxy = CCompositor::CreateMatrixTransformProxy(
                             *((CCompositor **)CDesktopManager::s_pDesktopManagerInstance + 6),
                             v3);
    v6 = MatrixTransformProxy;
    if ( MatrixTransformProxy < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, MatrixTransformProxy, 0x236u, 0LL);
      return v6;
    }
    v14 = CVisualProxy::SetTransform(this[2], *v3);
    v6 = v14;
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v14, 0x237u, 0LL);
      return v6;
    }
  }
  CurrentTransform = CVisual::GetCurrentTransform((CVisual *)this, (struct D2DMatrix *)v16, a3);
  v9 = *((_BYTE *)this + 36) & 0xFD;
  *(_QWORD *)&v15.m11 = v16[0];
  *(_QWORD *)&v15.m[1][0] = v16[2];
  v10 = v17;
  v11 = v18;
  *((_BYTE *)this + 36) = (2 * CurrentTransform) | v9;
  v12 = *v3;
  *(_QWORD *)&v15.m[2][0] = __PAIR64__(v11, v10);
  v13 = CMatrixTransformProxy::Update(v12, &v15);
  v6 = v13;
  if ( v13 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v13, 0x244u, 0LL);
  return v6;
}
