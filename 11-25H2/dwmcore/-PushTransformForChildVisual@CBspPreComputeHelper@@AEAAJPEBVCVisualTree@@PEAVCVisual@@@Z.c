/*
 * XREFs of ?PushTransformForChildVisual@CBspPreComputeHelper@@AEAAJPEBVCVisualTree@@PEAVCVisual@@@Z @ 0x18002668C
 * Callers:
 *     ?PushStacksForBspChildVisual@CBspPreComputeHelper@@AEAAJPEBVCVisualTree@@PEAVCVisual@@@Z @ 0x180134410 (-PushStacksForBspChildVisual@CBspPreComputeHelper@@AEAAJPEBVCVisualTree@@PEAVCVisual@@@Z.c)
 * Callees:
 *     ?GetTransformParent@CVisual@@QEBAPEBV1@PEBVCVisualTree@@PEA_N@Z @ 0x18001DF00 (-GetTransformParent@CVisual@@QEBAPEBV1@PEBVCVisualTree@@PEA_N@Z.c)
 *     ?CalcTransform@CVisual@@QEBAXPEBVCVisualTree@@PEBVCMILMatrix@@PEA_NPEAV3@3@Z @ 0x180024D70 (-CalcTransform@CVisual@@QEBAXPEBVCVisualTree@@PEBVCMILMatrix@@PEA_NPEAV3@3@Z.c)
 *     ?Push@CMatrixStack@@QEAAJPEBVCMILMatrix@@_N@Z @ 0x1800268C0 (-Push@CMatrixStack@@QEAAJPEBVCMILMatrix@@_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 __fastcall CBspPreComputeHelper::PushTransformForChildVisual(
        CBspPreComputeHelper *this,
        CVisual **a2,
        const struct CVisual **a3)
{
  int v6; // ebx
  const struct CVisual *TransformParent; // rax
  const struct CVisual *v8; // r10
  int v9; // eax
  const struct CMILMatrix *v10; // r8
  __int64 v11; // rax
  int v12; // eax
  unsigned int v13; // ebx
  const struct CVisual *v15; // r9
  int v16; // ecx
  const struct CVisual **v17; // rax
  _BYTE v18[64]; // [rsp+30h] [rbp-A8h] BYREF
  int v19; // [rsp+70h] [rbp-68h]
  char v20[64]; // [rsp+80h] [rbp-58h] BYREF
  int v21; // [rsp+C0h] [rbp-18h]
  bool v22; // [rsp+E0h] [rbp+8h] BYREF

  v6 = 0;
  TransformParent = CVisual::GetTransformParent((CVisual *)a3, a2, (bool *)a3);
  v8 = TransformParent;
  if ( TransformParent )
  {
    v15 = a3[11];
    if ( TransformParent != v15 )
    {
      v16 = *((_DWORD *)this + 8);
      v17 = 0LL;
      if ( v16 )
        v17 = (const struct CVisual **)(*((_QWORD *)this + 3) + 8LL * (unsigned int)(v16 - 1));
      while ( v15 )
      {
        if ( v15 == v8 )
          goto LABEL_2;
        if ( v15 == *v17 )
          goto LABEL_17;
        v15 = (const struct CVisual *)*((_QWORD *)v15 + 11);
        ++v6;
      }
      if ( !v8 )
        goto LABEL_2;
LABEL_17:
      v6 = 0;
    }
  }
LABEL_2:
  v9 = *((_DWORD *)this + 20);
  v10 = 0LL;
  v21 = 0;
  v19 = 0;
  v11 = (unsigned int)(v9 - v6 - 1);
  v22 = 0;
  if ( *((_DWORD *)this + 20) && (unsigned int)v11 < *((_DWORD *)this + 20) )
    v10 = (const struct CMILMatrix *)(*((_QWORD *)this + 9) + 68 * v11);
  CVisual::CalcTransform((CVisual *)a3, a2, v10, &v22, (struct CMILMatrix *)v20, (struct CMILMatrix *)v18);
  v12 = CMatrixStack::Push((CBspPreComputeHelper *)((char *)this + 72), (const struct CMILMatrix *)v18, 0);
  v13 = v12;
  if ( v12 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0xF4u, 0LL);
  return v13;
}
