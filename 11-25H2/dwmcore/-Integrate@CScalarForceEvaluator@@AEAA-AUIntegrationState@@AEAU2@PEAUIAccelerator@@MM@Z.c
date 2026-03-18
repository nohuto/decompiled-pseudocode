/*
 * XREFs of ?Integrate@CScalarForceEvaluator@@AEAA?AUIntegrationState@@AEAU2@PEAUIAccelerator@@MM@Z @ 0x18017E940
 * Callers:
 *     ?AdvanceToTime@CScalarForceEvaluator@@QEAAMMPEAUIAccelerator@@@Z @ 0x18017E758 (-AdvanceToTime@CScalarForceEvaluator@@QEAAMMPEAUIAccelerator@@@Z.c)
 * Callees:
 *     ?Accelerate@CSpringAccelerator@@UEAAMPEAUIntegrationState@@M@Z @ 0x18017EC90 (-Accelerate@CSpringAccelerator@@UEAAMPEAUIntegrationState@@M@Z.c)
 *     ?Evaluate@CScalarForceEvaluator@@AEAA?AUDerivative@@AEAUIntegrationState@@PEAUIAccelerator@@M@Z @ 0x180213CAC (-Evaluate@CScalarForceEvaluator@@AEAA-AUDerivative@@AEAUIntegrationState@@PEAUIAccelerator@@M@Z.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CScalarForceEvaluator::Integrate(
        __int64 a1,
        __int64 a2,
        float *a3,
        CSpringAccelerator *a4,
        float a5,
        float a6)
{
  __int64 v10; // rcx
  float v11; // xmm13_4
  double v12; // xmm0_8
  float v13; // xmm12_4
  float v14; // xmm14_4
  float v15; // xmm6_4
  float (__fastcall *v16)(CSpringAccelerator *__hidden, struct IntegrationState *, float); // rax
  float v17; // xmm7_4
  float v18; // xmm0_4
  float v19; // xmm12_4
  __int64 v20; // rax
  float v21; // xmm10_4
  float v22; // xmm0_4
  float (__fastcall *v23)(CSpringAccelerator *__hidden, struct IntegrationState *, float); // rax
  float v24; // xmm6_4
  float v25; // xmm0_4
  __int64 v26; // rax
  float v27; // xmm7_4
  float (__fastcall *v28)(CSpringAccelerator *__hidden, struct IntegrationState *, float); // rax
  float v29; // xmm9_4
  float v30; // xmm0_4
  float v31; // xmm7_4
  __int64 result; // rax
  float v33; // xmm1_4
  int v34; // [rsp+38h] [rbp-A9h] BYREF
  float v35; // [rsp+3Ch] [rbp-A5h]
  float v36; // [rsp+40h] [rbp-A1h] BYREF
  float v37; // [rsp+44h] [rbp-9Dh]
  float v38; // [rsp+48h] [rbp-99h]
  float v39; // [rsp+4Ch] [rbp-95h]
  __int64 v40; // [rsp+50h] [rbp-91h]

  *(_OWORD *)a2 = 0LL;
  *(_DWORD *)(a2 + 16) = 0;
  if ( (*(unsigned int (__fastcall **)(CSpringAccelerator *))(*(_QWORD *)a4 + 48LL))(a4)
    && (*(_BYTE *)(a1 + 64) & 4) != 0 )
  {
    CScalarForceEvaluator::Evaluate(v10, &v34, a3, a4, LODWORD(a5));
    v33 = (float)(a6 * v35) + a3[2];
    *(float *)a2 = v35;
    *(float *)(a2 + 8) = v33;
    *(float *)(a2 + 4) = (float)(v33 * a6) + a3[1];
  }
  else
  {
    v11 = a3[2];
    v12 = (*(double (__fastcall **)(CSpringAccelerator *, float *))(*(_QWORD *)a4 + 16LL))(a4, a3);
    v13 = *(float *)&v12;
    v14 = *(float *)&v12;
    v15 = a6 * 0.5;
    v16 = *(float (__fastcall **)(CSpringAccelerator *__hidden, struct IntegrationState *, float))(*(_QWORD *)a4 + 16LL);
    v36 = *a3;
    v17 = a5 + (float)(a6 * 0.5);
    LODWORD(v40) = *(_DWORD *)(a1 + 56);
    v18 = *(float *)(a1 + 60);
    v39 = v18;
    v19 = (float)(v13 * (float)(a6 * 0.5)) + a3[2];
    v37 = (float)(v11 * (float)(a6 * 0.5)) + a3[1];
    v38 = v19;
    if ( v16 == CSpringAccelerator::Accelerate )
      v18 = CSpringAccelerator::Accelerate(a4, (struct IntegrationState *)&v36, v17);
    else
      ((void (__fastcall *)(CSpringAccelerator *, float *))v16)(a4, &v36);
    v20 = *(_QWORD *)a4;
    v21 = v18;
    LODWORD(v40) = *(_DWORD *)(a1 + 56);
    v22 = v15 * v19;
    v23 = *(float (__fastcall **)(CSpringAccelerator *__hidden, struct IntegrationState *, float))(v20 + 16);
    v24 = (float)(v15 * v21) + a3[2];
    v37 = v22 + a3[1];
    v36 = *a3;
    v25 = *(float *)(a1 + 60);
    v39 = v25;
    v38 = v24;
    if ( v23 == CSpringAccelerator::Accelerate )
      v25 = CSpringAccelerator::Accelerate(a4, (struct IntegrationState *)&v36, v17);
    else
      ((void (__fastcall *)(CSpringAccelerator *, float *))v23)(a4, &v36);
    v26 = *(_QWORD *)a4;
    v27 = v25;
    LODWORD(v40) = *(_DWORD *)(a1 + 56);
    v28 = *(float (__fastcall **)(CSpringAccelerator *__hidden, struct IntegrationState *, float))(v26 + 16);
    v29 = (float)(a6 * v25) + a3[2];
    v37 = (float)(a6 * v24) + a3[1];
    v36 = *a3;
    v30 = *(float *)(a1 + 60);
    v39 = v30;
    v38 = v29;
    if ( v28 == CSpringAccelerator::Accelerate )
      v30 = CSpringAccelerator::Accelerate(a4, (struct IntegrationState *)&v36, a6 + a5);
    else
      ((void (__fastcall *)(CSpringAccelerator *, float *))v28)(a4, &v36);
    *(float *)(a2 + 4) = (float)((float)((float)((float)((float)((float)(v24 + v19) + (float)(v24 + v19)) + v11) + v29)
                                       * 0.16666667)
                               * a6)
                       + a3[1];
    v31 = (float)((float)((float)((float)((float)((float)(v27 + v21) + (float)(v27 + v21)) + v14) + v30) * 0.16666667)
                * a6)
        + a3[2];
    *(float *)a2 = v30;
    *(float *)(a2 + 8) = v31;
  }
  result = a2;
  *(_DWORD *)(a2 + 16) = *(_DWORD *)(a1 + 56);
  *(_DWORD *)(a2 + 12) = *(_DWORD *)(a1 + 60);
  return result;
}
