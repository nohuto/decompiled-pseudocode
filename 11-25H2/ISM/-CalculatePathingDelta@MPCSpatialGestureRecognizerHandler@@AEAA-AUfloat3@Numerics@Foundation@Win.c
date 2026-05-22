/*
 * XREFs of ?CalculatePathingDelta@MPCSpatialGestureRecognizerHandler@@AEAA?AUfloat3@Numerics@Foundation@Windows@@PEAUISpatialManipulationUpdatedEventArgs@Spatial@Input@UI@5@@Z @ 0x1800C45CC
 * Callers:
 *     ?OnSpatialManipulationUpdated@MPCSpatialGestureRecognizerHandler@@AEAAJPEAUISpatialGestureRecognizer@Spatial@Input@UI@Windows@@PEAUISpatialManipulationUpdatedEventArgs@3456@@Z @ 0x1800C5860 (-OnSpatialManipulationUpdated@MPCSpatialGestureRecognizerHandler@@AEAAJPEAUISpatialGestureRecogn.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000EAF4 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ @ 0x180012E04 (-GetInstance@MPCHolographicInputManager@@SAPEAV1@XZ.c)
 *     ?transform@Numerics@Foundation@Windows@@YA?AUfloat3@123@AEBU4123@AEBUfloat4x4@123@@Z @ 0x180013D54 (-transform@Numerics@Foundation@Windows@@YA-AUfloat3@123@AEBU4123@AEBUfloat4x4@123@@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008DFBC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _o_sqrtf_0 @ 0x18009D35C (_o_sqrtf_0.c)
 *     ?UpdateCoordinateSystemForTick@MPCSpatialGestureRecognizerHandler@@AEAAJ_J@Z @ 0x1800C6604 (-UpdateCoordinateSystemForTick@MPCSpatialGestureRecognizerHandler@@AEAAJ_J@Z.c)
 *     memcpy_0 @ 0x1801C7CFC (memcpy_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801D3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
unsigned __int64 *__fastcall MPCSpatialGestureRecognizerHandler::CalculatePathingDelta(
        MPCSpatialGestureRecognizerHandler *a1,
        unsigned __int64 *a2,
        __int64 a3)
{
  int v6; // eax
  int v7; // ebx
  int updated; // eax
  __int64 (__fastcall *v9)(__int64, _QWORD, __int64 *); // rbx
  int v10; // eax
  int v11; // eax
  float v12; // xmm0_4
  struct MPCHolographicInputManager *Instance; // rax
  float *v14; // rax
  __int64 v15; // rcx
  float v16; // xmm5_4
  __m128 v17; // xmm4
  __m128 v18; // xmm3
  __m128 v19; // xmm1
  __m128 v20; // xmm4
  float v21; // xmm4_4
  float v22; // xmm1_4
  float v23; // xmm7_4
  float v24; // xmm2_4
  float v25; // xmm5_4
  float v27[4]; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v28; // [rsp+38h] [rbp-D0h] BYREF
  char v29[80]; // [rsp+48h] [rbp-C0h] BYREF
  float v30[812]; // [rsp+98h] [rbp-70h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D60h] [rbp+C58h]
  __int64 v32; // [rsp+D78h] [rbp+C70h] BYREF
  int v33; // [rsp+D80h] [rbp+C78h] BYREF

  *a2 = 0LL;
  *((_DWORD *)a2 + 2) = 0;
  v33 = 0;
  v6 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)a3 + 48LL))(a3, &v33);
  if ( v6 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x238,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcspatialgesturerecognizerhandler.cpp",
      (const char *)(unsigned int)v6,
      SLODWORD(v27[0]));
  v7 = v33;
  if ( v33 == 1 )
  {
    updated = MPCSpatialGestureRecognizerHandler::UpdateCoordinateSystemForTick(a1, *((_QWORD *)a1 + 20));
    if ( updated < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x23C,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcspatialgesturerecognizerhandler.cpp",
        (const char *)(unsigned int)updated,
        SLODWORD(v27[0]));
    v32 = 0LL;
    v9 = *(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)a3 + 56LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v32);
    v10 = v9(a3, *((_QWORD *)a1 + 16), &v32);
    if ( v10 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x23F,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcspatialgesturerecognizerhandler.cpp",
        (const char *)(unsigned int)v10,
        SLODWORD(v27[0]));
    if ( v32 )
    {
      v11 = (*(__int64 (__fastcall **)(__int64, unsigned __int64 *))(*(_QWORD *)v32 + 48LL))(v32, a2);
      if ( v11 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x242,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcspatialgesturerecognizerhandler.cpp",
          (const char *)(unsigned int)v11,
          SLODWORD(v27[0]));
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v32);
  }
  else
  {
    if ( v33 != 3 )
      goto LABEL_20;
    v28 = 0LL;
    if ( (**(int (__fastcall ***)(__int64, GUID *, __int64 *))a3)(a3, &GUID_dbedfb55_5c2b_443b_a82d_10a749076fc8, &v28) >= 0 )
    {
      LOBYTE(v32) = 0;
      *(_QWORD *)v27 = 0LL;
      if ( (*(int (__fastcall **)(__int64, float *, __int64 *))(*(_QWORD *)v28 + 48LL))(v28, v27, &v32) >= 0 )
      {
        if ( (_BYTE)v32 )
        {
          v12 = v27[0] * 0.0174532925199433;
          *(float *)a2 = v12;
          *((float *)a2 + 1) = v27[1] * 0.0174532925199433;
          *((_DWORD *)a2 + 2) = 0;
        }
      }
    }
    Instance = MPCHolographicInputManager::GetInstance();
    memcpy_0(v29, Instance, 0xCD0uLL);
    v14 = Windows::Foundation::Numerics::transform(v27, (float *)a2, v30);
    *a2 = *(_QWORD *)v14;
    *((float *)a2 + 2) = v14[2];
    v15 = v28;
    if ( v28 )
    {
      v28 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    }
  }
  v7 = v33;
LABEL_20:
  v16 = o_sqrtf_0(
          (float)((float)(*(float *)a2 * *(float *)a2) + (float)(*((float *)a2 + 1) * *((float *)a2 + 1)))
        + (float)(*((float *)a2 + 2) * *((float *)a2 + 2)));
  if ( v16 > 0.037999999 )
  {
    v17 = _mm_movelh_ps((__m128)*a2, (__m128)*((unsigned int *)a2 + 2));
    v18 = _mm_mul_ps(v17, v17);
    v19 = _mm_shuffle_ps(v18, v18, 102);
    v18.m128_f32[0] = (float)(v18.m128_f32[0] + v19.m128_f32[0]) + _mm_shuffle_ps(v19, v19, 85).m128_f32[0];
    v20 = _mm_div_ps(v17, _mm_sqrt_ps(_mm_shuffle_ps(v18, v18, 0)));
    *(_QWORD *)v27 = v20.m128_u64[0];
    LODWORD(v21) = _mm_shuffle_ps(v20, v20, 170).m128_u32[0];
    v22 = v27[1];
    v23 = v27[1] * 0.037999999;
    if ( v7 == 3 )
      v24 = FLOAT_0_5;
    else
      v24 = FLOAT_2_1500001;
    v25 = v16 - 0.037999999;
    *(float *)a2 = (float)((float)(v27[0] * v25) * v24) + (float)(v27[0] * 0.037999999);
    *((float *)a2 + 1) = (float)((float)(v22 * v25) * v24) + v23;
    *((float *)a2 + 2) = (float)((float)(v21 * v25) * v24) + (float)(v21 * 0.037999999);
  }
  return a2;
}
