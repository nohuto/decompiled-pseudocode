/*
 * XREFs of ?CalcLocalToDeviceMatrix@CCompositionLight@@IEBAJPEBVCDrawingContext@@PEBVCMILMatrix@@PEAVCVisual@@PEAV3@3@Z @ 0x18011D370
 * Callers:
 *     ?GetLightInfo@CCompositionSpotLight@@UEBAJPEBVCDrawingContext@@PEBVCMILMatrix@@PEAULightInfo@@@Z @ 0x18011D1E0 (-GetLightInfo@CCompositionSpotLight@@UEBAJPEBVCDrawingContext@@PEBVCMILMatrix@@PEAULightInfo@@@Z.c)
 *     ?GetLightInfo@CCompositionDistantLight@@UEBAJPEBVCDrawingContext@@PEBVCMILMatrix@@PEAULightInfo@@@Z @ 0x1802A0A20 (-GetLightInfo@CCompositionDistantLight@@UEBAJPEBVCDrawingContext@@PEBVCMILMatrix@@PEAULightInfo@.c)
 *     ?GetLightInfo@CCompositionPointLight@@UEBAJPEBVCDrawingContext@@PEBVCMILMatrix@@PEAULightInfo@@@Z @ 0x1802A2120 (-GetLightInfo@CCompositionPointLight@@UEBAJPEBVCDrawingContext@@PEBVCMILMatrix@@PEAULightInfo@@@.c)
 * Callees:
 *     ?GetWorldTransform@CVisual@@QEBAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z @ 0x1800B6CE0 (-GetWorldTransform@CVisual@@QEBAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x180122E90 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?Invert@CMILMatrix@@QEAA_NXZ @ 0x1801612EC (-Invert@CMILMatrix@@QEAA_NXZ.c)
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
  int v11; // r8d
  int v12; // r8d
  __int128 v13; // [rsp+30h] [rbp-59h] BYREF
  __int128 v14; // [rsp+40h] [rbp-49h]
  __int128 v15; // [rsp+50h] [rbp-39h]
  __int128 v16; // [rsp+60h] [rbp-29h]
  int v17; // [rsp+70h] [rbp-19h]
  _OWORD v18[4]; // [rsp+80h] [rbp-9h] BYREF
  int v19; // [rsp+C0h] [rbp+37h]

  v6 = (const struct CVisualTree *)*((_QWORD *)a2 + 993);
  v19 = 0;
  WorldTransform = CVisual::GetWorldTransform(a4, v6, 3, (__int64)v18, 0LL, 0LL);
  v9 = WorldTransform;
  if ( WorldTransform >= 0 )
  {
    v13 = v18[0];
    v17 = v19;
    v14 = v18[1];
    v15 = v18[2];
    v16 = v18[3];
    CMILMatrix::Multiply((CMILMatrix *)&v13, a3);
    v11 = v17;
    *(_OWORD *)a5 = v13;
    *((_OWORD *)a5 + 1) = v14;
    *((_OWORD *)a5 + 2) = v15;
    *((_OWORD *)a5 + 3) = v16;
    *((_DWORD *)a5 + 16) = v11;
    CMILMatrix::Invert(a5);
    *(_OWORD *)a6 = v13;
    *((_OWORD *)a6 + 1) = v14;
    *((_OWORD *)a6 + 2) = v15;
    *((_OWORD *)a6 + 3) = v16;
    *((_DWORD *)a6 + 16) = v12;
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, WorldTransform, 0xBCu, 0LL);
  }
  return v9;
}
