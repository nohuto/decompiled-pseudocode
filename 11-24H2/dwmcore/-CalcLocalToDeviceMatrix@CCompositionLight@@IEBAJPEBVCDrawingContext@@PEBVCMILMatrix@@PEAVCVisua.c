/*
 * XREFs of ?CalcLocalToDeviceMatrix@CCompositionLight@@IEBAJPEBVCDrawingContext@@PEBVCMILMatrix@@PEAVCVisual@@PEAV3@3@Z @ 0x1801659D0
 * Callers:
 *     ?GetLightInfo@CCompositionSpotLight@@UEBAJPEBVCDrawingContext@@PEBVCMILMatrix@@PEAULightInfo@@@Z @ 0x180165840 (-GetLightInfo@CCompositionSpotLight@@UEBAJPEBVCDrawingContext@@PEBVCMILMatrix@@PEAULightInfo@@@Z.c)
 *     ?GetLightInfo@CCompositionDistantLight@@UEBAJPEBVCDrawingContext@@PEBVCMILMatrix@@PEAULightInfo@@@Z @ 0x1802950D0 (-GetLightInfo@CCompositionDistantLight@@UEBAJPEBVCDrawingContext@@PEBVCMILMatrix@@PEAULightInfo@.c)
 *     ?GetLightInfo@CCompositionPointLight@@UEBAJPEBVCDrawingContext@@PEBVCMILMatrix@@PEAULightInfo@@@Z @ 0x1802980A0 (-GetLightInfo@CCompositionPointLight@@UEBAJPEBVCDrawingContext@@PEBVCMILMatrix@@PEAULightInfo@@@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x1800B0E00 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?GetWorldTransform@CVisual@@QEBAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z @ 0x1800C35D0 (-GetWorldTransform@CVisual@@QEBAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z.c)
 *     ?Invert@CMILMatrix@@QEAA_NXZ @ 0x1800FB0BC (-Invert@CMILMatrix@@QEAA_NXZ.c)
 */

__int64 __fastcall CCompositionLight::CalcLocalToDeviceMatrix(
        CCompositionLight *this,
        const struct CDrawingContext *a2,
        const struct CMILMatrix *a3,
        struct CVisual *a4,
        struct CMILMatrix *a5,
        struct CMILMatrix *a6)
{
  const struct CVisualTree *v6; // rdx
  int WorldTransform; // eax
  unsigned int v9; // ebx
  struct Windows::Foundation::Numerics::float4x4 *v11; // r8
  __int64 v12; // rdx
  int v13; // r8d
  __int128 v14; // [rsp+30h] [rbp-59h] BYREF
  __int128 v15; // [rsp+40h] [rbp-49h]
  __int128 v16; // [rsp+50h] [rbp-39h]
  __int128 v17; // [rsp+60h] [rbp-29h]
  unsigned int v18; // [rsp+70h] [rbp-19h]
  _OWORD v19[4]; // [rsp+80h] [rbp-9h] BYREF
  unsigned int v20; // [rsp+C0h] [rbp+37h]

  v6 = (const struct CVisualTree *)*((_QWORD *)a2 + 993);
  v20 = 0;
  WorldTransform = CVisual::GetWorldTransform(a4, v6, 3, (__int64)v19, 0LL, 0LL);
  v9 = WorldTransform;
  if ( WorldTransform >= 0 )
  {
    v14 = v19[0];
    v18 = v20;
    v15 = v19[1];
    v16 = v19[2];
    v17 = v19[3];
    CMILMatrix::Multiply((CMILMatrix *)&v14, a3);
    v11 = (struct Windows::Foundation::Numerics::float4x4 *)v18;
    *(_OWORD *)a5 = v14;
    *((_OWORD *)a5 + 1) = v15;
    *((_OWORD *)a5 + 2) = v16;
    *((_OWORD *)a5 + 3) = v17;
    *((_DWORD *)a5 + 16) = (_DWORD)v11;
    CMILMatrix::Invert(a5, v12, v11);
    *(_OWORD *)a6 = v14;
    *((_OWORD *)a6 + 1) = v15;
    *((_OWORD *)a6 + 2) = v16;
    *((_OWORD *)a6 + 3) = v17;
    *((_DWORD *)a6 + 16) = v13;
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, WorldTransform, 0xBCu, 0LL);
  }
  return v9;
}
