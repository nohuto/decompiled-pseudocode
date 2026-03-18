/*
 * XREFs of ?GetProjectionOntoVisualMatrix@ShadowHelpers@@YAJPEBVCVisualTree@@PEAVCCompositionLight@@PEAVCVisual@@PEAVCMILMatrix@@@Z @ 0x1801640B4
 * Callers:
 *     ?PrepareShadows@CProjectedShadowScene@@AEAAJPEAVCDrawingContext@@PEAVCProjectedShadowReceiver@@@Z @ 0x18016865C (-PrepareShadows@CProjectedShadowScene@@AEAAJPEAVCDrawingContext@@PEAVCProjectedShadowReceiver@@@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetProjectionMatrix@ShadowHelpers@@YA?AVCMILMatrix@@AEBUD2D_VECTOR_3F@@AEBUD2D_VECTOR_4F@@_N@Z @ 0x180163D00 (-GetProjectionMatrix@ShadowHelpers@@YA-AVCMILMatrix@@AEBUD2D_VECTOR_3F@@AEBUD2D_VECTOR_4F@@_N@Z.c)
 *     ?GetPlaneOfVisual@ShadowHelpers@@YA?AUD2D_VECTOR_4F@@PEAVCVisual@@@Z @ 0x180163E88 (-GetPlaneOfVisual@ShadowHelpers@@YA-AUD2D_VECTOR_4F@@PEAVCVisual@@@Z.c)
 *     ?GetLightPosition@ShadowHelpers@@YAJPEBVCVisualTree@@PEBVCCompositionLight@@PEAVCVisual@@PEAUD2D_VECTOR_3F@@@Z @ 0x1801647E4 (-GetLightPosition@ShadowHelpers@@YAJPEBVCVisualTree@@PEBVCCompositionLight@@PEAVCVisual@@PEAUD2D.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall ShadowHelpers::GetProjectionOntoVisualMatrix(
        ShadowHelpers *this,
        const struct CVisualTree *a2,
        struct CCompositionLight *a3,
        struct CVisual *a4)
{
  int LightPosition; // eax
  struct CVisual *v8; // r8
  unsigned int v9; // ebx
  __int128 v11; // xmm0
  __int64 (__fastcall *v12)(const struct CVisualTree *); // rax
  int v13; // eax
  __int64 ProjectionMatrix; // rax
  struct D2D_VECTOR_3F *v15; // [rsp+20h] [rbp-88h]
  __int64 v16; // [rsp+30h] [rbp-78h] BYREF
  int v17; // [rsp+38h] [rbp-70h]
  __int128 v18; // [rsp+40h] [rbp-68h] BYREF
  _BYTE v19[80]; // [rsp+50h] [rbp-58h] BYREF

  v16 = 0LL;
  v17 = 0;
  LightPosition = ShadowHelpers::GetLightPosition(this, a2, a3, (struct CVisual *)&v16, v15);
  v9 = LightPosition;
  if ( LightPosition >= 0 )
  {
    v11 = (__int128)*ShadowHelpers::GetPlaneOfVisual((ShadowHelpers *)&v18, (struct D2D_VECTOR_4F *)a3, v8);
    v12 = *(__int64 (__fastcall **)(const struct CVisualTree *))(*(_QWORD *)a2 + 216LL);
    v18 = v11;
    v13 = v12(a2);
    ProjectionMatrix = ShadowHelpers::GetProjectionMatrix((__int64)v19, (float *)&v16, (float *)&v18, v13 == 2);
    *(_OWORD *)a4 = *(_OWORD *)ProjectionMatrix;
    *((_OWORD *)a4 + 1) = *(_OWORD *)(ProjectionMatrix + 16);
    *((_OWORD *)a4 + 2) = *(_OWORD *)(ProjectionMatrix + 32);
    *((_OWORD *)a4 + 3) = *(_OWORD *)(ProjectionMatrix + 48);
    *((_DWORD *)a4 + 16) = *(_DWORD *)(ProjectionMatrix + 64);
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, LightPosition, 0x35u, 0LL);
  }
  return v9;
}
