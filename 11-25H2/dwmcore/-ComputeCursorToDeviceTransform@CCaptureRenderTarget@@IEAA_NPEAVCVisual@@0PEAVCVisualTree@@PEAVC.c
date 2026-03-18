/*
 * XREFs of ?ComputeCursorToDeviceTransform@CCaptureRenderTarget@@IEAA_NPEAVCVisual@@0PEAVCVisualTree@@PEAVCMILMatrix@@@Z @ 0x18028D47C
 * Callers:
 *     _lambda_5aff48886c632e43686d56bde1b6617b_::operator() @ 0x18028CDE0 (_lambda_5aff48886c632e43686d56bde1b6617b_--operator().c)
 *     _lambda_d632561372f60ca28cb2b9bb8a736df3_::operator() @ 0x18028D144 (_lambda_d632561372f60ca28cb2b9bb8a736df3_--operator().c)
 * Callees:
 *     ?GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@PEBUD2D_SIZE_F@@@Z @ 0x180019310 (-GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@PEBUD2D_SIZE_F@@@Z.c)
 *     ?GetWorldTransform@CVisual@@QEBAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z @ 0x1800B6CE0 (-GetWorldTransform@CVisual@@QEBAJPEBVCVisualTree@@W4WalkReason@@PEAVCMILMatrix@@PEA_N2@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Multiply@CMILMatrix@@QEAAXAEBV1@@Z @ 0x180122E90 (-Multiply@CMILMatrix@@QEAAXAEBV1@@Z.c)
 *     ?Invert@CMILMatrix@@QEAA_NXZ @ 0x1801612EC (-Invert@CMILMatrix@@QEAA_NXZ.c)
 */

bool __fastcall CCaptureRenderTarget::ComputeCursorToDeviceTransform(
        CCaptureRenderTarget *this,
        struct CVisual *a2,
        struct CVisual *a3,
        struct CVisualTree *a4,
        struct CMILMatrix *a5)
{
  int WorldTransform; // eax
  __int64 v9; // rdx
  struct Windows::Foundation::Numerics::float4x4 *v10; // r8
  int v11; // ebx
  int v12; // eax
  int v13; // eax
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  CTransform3D *v17; // rcx
  const struct CMILMatrix *Matrix; // rax
  __int128 v20; // [rsp+38h] [rbp-D0h] BYREF
  __int128 v21; // [rsp+48h] [rbp-C0h]
  __int128 v22; // [rsp+58h] [rbp-B0h]
  __int128 v23; // [rsp+68h] [rbp-A0h]
  int v24; // [rsp+78h] [rbp-90h]
  _OWORD v25[4]; // [rsp+88h] [rbp-80h] BYREF
  int v26; // [rsp+C8h] [rbp-40h]
  _OWORD v27[4]; // [rsp+D8h] [rbp-30h] BYREF
  int v28; // [rsp+118h] [rbp+10h]

  v24 = 0;
  v26 = 0;
  WorldTransform = CVisual::GetWorldTransform(a3, a4, 0, (__int64)&v20, 0LL, 0LL);
  v11 = WorldTransform;
  if ( WorldTransform < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, WorldTransform, 0x589u, 0LL);
  }
  else
  {
    v27[0] = v20;
    v27[1] = v21;
    v27[2] = v22;
    v27[3] = v23;
    v28 = v24;
    CMILMatrix::Invert((CMILMatrix *)v27, v9, v10);
    v12 = CVisual::GetWorldTransform(a2, a4, 0, (__int64)v25, 0LL, 0LL);
    v11 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v12, 0x58Eu, 0LL);
    }
    else
    {
      v20 = v25[0];
      v24 = v26;
      v21 = v25[1];
      v22 = v25[2];
      v23 = v25[3];
      CMILMatrix::Multiply((CMILMatrix *)&v20, (const struct CMILMatrix *)v27);
      v13 = v24;
      v14 = v21;
      *(_OWORD *)a5 = v20;
      v15 = v22;
      *((_OWORD *)a5 + 1) = v14;
      v16 = v23;
      *((_OWORD *)a5 + 2) = v15;
      *((_OWORD *)a5 + 3) = v16;
      *((_DWORD *)a5 + 16) = v13;
      v17 = (CTransform3D *)*((_QWORD *)this + 25);
      if ( v17 )
      {
        Matrix = CTransform3D::GetMatrix(v17, 0LL);
        CMILMatrix::Multiply(a5, Matrix);
      }
    }
  }
  return v11 >= 0;
}
