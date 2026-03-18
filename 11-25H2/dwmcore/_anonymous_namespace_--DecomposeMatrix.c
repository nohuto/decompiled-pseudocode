/*
 * XREFs of _anonymous_namespace_::DecomposeMatrix @ 0x180177E90
 * Callers:
 *     ?ProcessInput@CInteractionProcessor@@QEAAJPEBVCInteraction@@AEBUtagPOINTER_INFO@@AEBUtagPOINTER_INFO_UNION@@IAEBVCMILMatrix@@PEAUIManipulationResource@@PEA_N@Z @ 0x180263290 (-ProcessInput@CInteractionProcessor@@QEAAJPEBVCInteraction@@AEBUtagPOINTER_INFO@@AEBUtagPOINTER_.c)
 * Callees:
 *     ??$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ @ 0x180089340 (--$IsIdentity@$0A@@CMILMatrix@@AEBA_NXZ.c)
 *     ?D3DXQuaternionRotationMatrix@@YAPEAUD2DQuaternion@@PEAU1@PEBUD2DMatrix@@@Z @ 0x180160230 (-D3DXQuaternionRotationMatrix@@YAPEAUD2DQuaternion@@PEAU1@PEBUD2DMatrix@@@Z.c)
 *     ?D3DXQuaternionNormalize@@YAPEAUD2DQuaternion@@PEAU1@PEBU1@@Z @ 0x1801604CC (-D3DXQuaternionNormalize@@YAPEAUD2DQuaternion@@PEAU1@PEBU1@@Z.c)
 *     ?Set2DRotation@CMILMatrix@@QEAAXMMM@Z @ 0x180176B24 (-Set2DRotation@CMILMatrix@@QEAAXMMM@Z.c)
 *     ?Set2DAffineMatrix@CMILMatrix@@QEAAXAEBUfloat2@Numerics@Foundation@Windows@@M000@Z @ 0x180176C50 (-Set2DAffineMatrix@CMILMatrix@@QEAAXAEBUfloat2@Numerics@Foundation@Windows@@M000@Z.c)
 *     ?Decompose2DAffineMatrixIntoScaleAndRest@CMILMatrix@@QEBAXPEAV1@0PEA_N@Z @ 0x1801774E8 (-Decompose2DAffineMatrixIntoScaleAndRest@CMILMatrix@@QEBAXPEAV1@0PEA_N@Z.c)
 *     ??$Is2DAffine@$00@CMILMatrix@@AEBA_N_N@Z @ 0x180177CE0 (--$Is2DAffine@$00@CMILMatrix@@AEBA_N_N@Z.c)
 *     ?Query@CPointerDeviceCache@@SAAEBUDEVICE_INFO@@PEAX@Z @ 0x1801796B8 (-Query@CPointerDeviceCache@@SAAEBUDEVICE_INFO@@PEAX@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3333333333333333333333333333333333@Z @ 0x18021F5D8 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U_ea_18021F5D8.c)
 *     acosf_0 @ 0x1802E883C (acosf_0.c)
 */

void __fastcall anonymous_namespace_::DecomposeMatrix(
        __int64 a1,
        void *a2,
        __int64 a3,
        __int64 a4,
        struct CMILMatrix *a5,
        CMILMatrix *a6)
{
  float v10; // xmm6_4
  struct CMILMatrix *v11; // rdi
  char v12; // al
  CMILMatrix *v13; // r14
  char v14; // al
  __int128 v15; // xmm0
  float v16; // xmm10_4
  float v17; // xmm11_4
  unsigned int v18; // xmm8_4
  unsigned int v19; // xmm9_4
  float v20; // xmm1_4
  float v21; // xmm0_4
  const struct DEVICE_INFO *v22; // rdi
  int v23; // ecx
  int v24; // r8d
  int v25; // r9d
  int v26; // eax
  __m128i v27; // xmm0
  float v28; // xmm2_4
  float v29; // xmm2_4
  int v30; // eax
  float v31; // xmm2_4
  int v32; // xmm0_4
  int v33; // xmm1_4
  int v34; // xmm0_4
  int v35; // xmm1_4
  int v36; // xmm0_4
  int v37; // xmm1_4
  int v38; // xmm0_4
  int v39; // xmm1_4
  int v40; // xmm0_4
  int v41; // xmm1_4
  int v42; // xmm0_4
  int v43; // xmm1_4
  int v44; // xmm0_4
  int v45; // xmm1_4
  int v46; // xmm0_4
  unsigned int v47; // xmm1_4
  int v48; // [rsp+148h] [rbp-80h] BYREF
  int v49; // [rsp+14Ch] [rbp-7Ch]
  float v50; // [rsp+150h] [rbp-78h]
  float v51; // [rsp+154h] [rbp-74h]
  int v52; // [rsp+158h] [rbp-70h] BYREF
  int v53; // [rsp+15Ch] [rbp-6Ch] BYREF
  int v54; // [rsp+160h] [rbp-68h] BYREF
  int v55; // [rsp+164h] [rbp-64h] BYREF
  int v56; // [rsp+168h] [rbp-60h] BYREF
  float v57; // [rsp+16Ch] [rbp-5Ch] BYREF
  float v58; // [rsp+170h] [rbp-58h] BYREF
  float v59; // [rsp+174h] [rbp-54h] BYREF
  int v60; // [rsp+178h] [rbp-50h] BYREF
  int v61; // [rsp+17Ch] [rbp-4Ch] BYREF
  unsigned int v62; // [rsp+180h] [rbp-48h] BYREF
  unsigned int v63; // [rsp+184h] [rbp-44h] BYREF
  float v64; // [rsp+188h] [rbp-40h] BYREF
  float v65; // [rsp+18Ch] [rbp-3Ch] BYREF
  int v66; // [rsp+190h] [rbp-38h] BYREF
  int v67; // [rsp+194h] [rbp-34h] BYREF
  int v68; // [rsp+198h] [rbp-30h] BYREF
  int v69; // [rsp+19Ch] [rbp-2Ch] BYREF
  int v70; // [rsp+1A0h] [rbp-28h] BYREF
  int v71; // [rsp+1A4h] [rbp-24h] BYREF
  int v72; // [rsp+1A8h] [rbp-20h] BYREF
  int v73; // [rsp+1ACh] [rbp-1Ch] BYREF
  int v74; // [rsp+1B0h] [rbp-18h] BYREF
  int v75; // [rsp+1B4h] [rbp-14h] BYREF
  int v76; // [rsp+1B8h] [rbp-10h] BYREF
  int v77; // [rsp+1BCh] [rbp-Ch] BYREF
  int v78; // [rsp+1C0h] [rbp-8h] BYREF
  int v79; // [rsp+1C4h] [rbp-4h] BYREF
  int v80; // [rsp+1C8h] [rbp+0h] BYREF
  _DWORD v81[3]; // [rsp+1CCh] [rbp+4h] BYREF
  _OWORD v82[4]; // [rsp+1D8h] [rbp+10h] BYREF
  int v83; // [rsp+218h] [rbp+50h]
  int v84; // [rsp+2C8h] [rbp+100h] BYREF
  int v85; // [rsp+2CCh] [rbp+104h]
  int v86; // [rsp+2D8h] [rbp+110h] BYREF
  int v87; // [rsp+2DCh] [rbp+114h]
  float v88; // [rsp+2E0h] [rbp+118h] BYREF
  float v89; // [rsp+2E4h] [rbp+11Ch]

  *(_OWORD *)a3 = *(_OWORD *)a1;
  v10 = 0.0;
  *(_OWORD *)(a3 + 16) = *(_OWORD *)(a1 + 16);
  *(_OWORD *)(a3 + 32) = *(_OWORD *)(a1 + 32);
  *(_OWORD *)(a3 + 48) = *(_OWORD *)(a1 + 48);
  *(_DWORD *)(a3 + 64) = *(_DWORD *)(a1 + 64);
  *(_QWORD *)(a4 + 60) = 1065353216LL;
  *(_QWORD *)a4 = 1065353216LL;
  *(_QWORD *)(a4 + 8) = 0LL;
  *(_DWORD *)(a4 + 16) = 0;
  *(_QWORD *)(a4 + 20) = 1065353216LL;
  *(_QWORD *)(a4 + 28) = 0LL;
  *(_DWORD *)(a4 + 36) = 0;
  *(_QWORD *)(a4 + 40) = 1065353216LL;
  *(_QWORD *)(a4 + 48) = 0LL;
  *(_DWORD *)(a4 + 56) = 0;
  v11 = a5;
  v12 = *(_BYTE *)(a4 + 65) & 0xE9;
  *(_BYTE *)(a4 + 64) = -86;
  *(_BYTE *)(a4 + 65) = v12 | 0x29;
  *(_QWORD *)((char *)v11 + 60) = 1065353216LL;
  *(_QWORD *)v11 = 1065353216LL;
  *((_QWORD *)v11 + 1) = 0LL;
  *((_DWORD *)v11 + 4) = 0;
  *(_QWORD *)((char *)v11 + 20) = 1065353216LL;
  *(_QWORD *)((char *)v11 + 28) = 0LL;
  *((_DWORD *)v11 + 9) = 0;
  *((_QWORD *)v11 + 5) = 1065353216LL;
  *((_QWORD *)v11 + 6) = 0LL;
  *((_DWORD *)v11 + 14) = 0;
  v13 = a6;
  v14 = *((_BYTE *)v11 + 65) & 0xE9;
  *((_BYTE *)v11 + 64) = -86;
  *((_BYTE *)v11 + 65) = v14 | 0x29;
  v15 = *(_OWORD *)a3;
  v83 = 0;
  *(_OWORD *)v13 = v15;
  *((_OWORD *)v13 + 1) = *(_OWORD *)(a3 + 16);
  *((_OWORD *)v13 + 2) = *(_OWORD *)(a3 + 32);
  *((_OWORD *)v13 + 3) = *(_OWORD *)(a3 + 48);
  *((_DWORD *)v13 + 16) = *(_DWORD *)(a3 + 64);
  v16 = *(float *)(a1 + 48);
  v17 = *(float *)(a1 + 52);
  v18 = *(_DWORD *)a1;
  v19 = *(_DWORD *)(a1 + 20);
  v82[0] = _xmm;
  v88 = v16;
  v89 = v17;
  a6 = (CMILMatrix *)__PAIR64__(v19, v18);
  v82[1] = _xmm;
  LOBYTE(a5) = 0;
  BYTE1(v83) = BYTE1(v83) & 0xC0 | 0x29;
  v82[2] = _xmm;
  v82[3] = *(const struct _D3DCOLORVALUE *)&_xmm.r;
  LOBYTE(v83) = -86;
  CMILMatrix::Decompose2DAffineMatrixIntoScaleAndRest((CMILMatrix *)a1, v11, (struct CMILMatrix *)v82, (bool *)&a5);
  if ( (_BYTE)a5 )
  {
    v18 = *(_DWORD *)v11;
    v19 = *((_DWORD *)v11 + 5);
    LODWORD(a6) = *(_DWORD *)v11;
    HIDWORD(a6) = v19;
    D3DXQuaternionRotationMatrix((struct D2DQuaternion *)&v48, (const struct D2DMatrix *)v82);
    v48 = 0;
    v49 = 0;
    D3DXQuaternionNormalize((struct D2DQuaternion *)&v48, (const struct D2DQuaternion *)&v48);
    if ( v50 < 0.0 )
      v20 = FLOAT_N1_0;
    else
      v20 = *(float *)&`CVisual::SetOpacityInternal'::`2'::sc_defaultValue;
    v21 = acosf_0(v51 * v20);
    v10 = v21 + v21;
    CMILMatrix::Set2DRotation((CMILMatrix *)a4, v21 + v21, 0.0, 0.0);
  }
  if ( !CMILMatrix::Is2DAffine<1>(a1, 1) )
  {
    v84 = 0;
    v85 = 0;
    v86 = 0;
    v87 = 0;
    CMILMatrix::Set2DAffineMatrix(
      (__m128 *)a3,
      (const struct Windows::Foundation::Numerics::float2 *)&a6,
      v10,
      (const struct Windows::Foundation::Numerics::float2 *)&v88,
      (const struct Windows::Foundation::Numerics::float2 *)&v86,
      (const struct Windows::Foundation::Numerics::float2 *)&v84);
    *(_OWORD *)v13 = *(_OWORD *)a3;
    *((_OWORD *)v13 + 1) = *(_OWORD *)(a3 + 16);
    *((_OWORD *)v13 + 2) = *(_OWORD *)(a3 + 32);
    *((_OWORD *)v13 + 3) = *(_OWORD *)(a3 + 48);
    *((_DWORD *)v13 + 16) = *(_DWORD *)(a3 + 64);
  }
  v22 = CPointerDeviceCache::Query(a2);
  if ( !CMILMatrix::IsIdentity<0>(a3) && *((_BYTE *)v22 + 48) )
  {
    v26 = *((_DWORD *)v22 + 6) - *((_DWORD *)v22 + 4);
    v27 = _mm_cvtsi32_si128(*(_DWORD *)v22);
    v84 = 0;
    v85 = 0;
    v86 = 0;
    v87 = 0;
    v28 = v16 - _mm_cvtepi32_pd(v27).m128d_f64[0];
    v29 = v28 * (float)v26;
    v30 = *((_DWORD *)v22 + 7) - *((_DWORD *)v22 + 5);
    *(double *)v27.m128i_i64 = (double)*((int *)v22 + 1);
    v88 = (float)(v29 / (float)(*((_DWORD *)v22 + 2) - *(_DWORD *)v22)) + (float)*((int *)v22 + 4);
    v31 = v17 - *(double *)v27.m128i_i64;
    v89 = (float)((float)(v31 * (float)v30) / (float)(*((_DWORD *)v22 + 3) - *((_DWORD *)v22 + 1)))
        + (float)*((int *)v22 + 5);
    CMILMatrix::Set2DAffineMatrix(
      (__m128 *)v13,
      (const struct Windows::Foundation::Numerics::float2 *)&a6,
      v10,
      (const struct Windows::Foundation::Numerics::float2 *)&v88,
      (const struct Windows::Foundation::Numerics::float2 *)&v86,
      (const struct Windows::Foundation::Numerics::float2 *)&v84);
  }
  if ( (unsigned int)dword_180404D18 > 4 && (byte_180404D28 & 2) != 0 && (qword_180404D30 & 2) == qword_180404D30 )
  {
    v32 = *(_DWORD *)(a1 + 60);
    v33 = *(_DWORD *)(a1 + 56);
    LODWORD(a6) = *((_DWORD *)v22 + 3);
    v84 = *((_DWORD *)v22 + 2);
    v86 = *((_DWORD *)v22 + 1);
    v88 = *(float *)v22;
    v52 = *((_DWORD *)v22 + 7);
    v53 = *((_DWORD *)v22 + 6);
    v54 = *((_DWORD *)v22 + 5);
    v55 = *((_DWORD *)v22 + 4);
    v58 = v51;
    v59 = v50;
    v60 = v49;
    v61 = v48;
    LODWORD(a5) = (unsigned __int8)a5;
    v66 = v32;
    v34 = *(_DWORD *)(a1 + 52);
    v67 = v33;
    v35 = *(_DWORD *)(a1 + 48);
    v68 = v34;
    v36 = *(_DWORD *)(a1 + 44);
    v69 = v35;
    v37 = *(_DWORD *)(a1 + 40);
    v70 = v36;
    v38 = *(_DWORD *)(a1 + 36);
    v71 = v37;
    v39 = *(_DWORD *)(a1 + 32);
    v72 = v38;
    v40 = *(_DWORD *)(a1 + 28);
    v73 = v39;
    v41 = *(_DWORD *)(a1 + 24);
    v74 = v40;
    v42 = *(_DWORD *)(a1 + 20);
    v75 = v41;
    v43 = *(_DWORD *)(a1 + 16);
    v76 = v42;
    v44 = *(_DWORD *)(a1 + 12);
    v77 = v43;
    v45 = *(_DWORD *)(a1 + 8);
    v78 = v44;
    v46 = *(_DWORD *)(a1 + 4);
    v79 = v45;
    v47 = *(_DWORD *)a1;
    v57 = v10;
    v62 = v19;
    v63 = v18;
    v64 = v17;
    v65 = v16;
    v80 = v46;
    v81[0] = v47;
    v56 = (int)a2;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v23,
      (unsigned int)&unk_1803D7428,
      v24,
      v25,
      (__int64)&a5,
      (__int64)v81,
      (__int64)&v80,
      (__int64)&v79,
      (__int64)&v78,
      (__int64)&v77,
      (__int64)&v76,
      (__int64)&v75,
      (__int64)&v74,
      (__int64)&v73,
      (__int64)&v72,
      (__int64)&v71,
      (__int64)&v70,
      (__int64)&v69,
      (__int64)&v68,
      (__int64)&v67,
      (__int64)&v66,
      (__int64)&v65,
      (__int64)&v64,
      (__int64)&v63,
      (__int64)&v62,
      (__int64)&v61,
      (__int64)&v60,
      (__int64)&v59,
      (__int64)&v58,
      (__int64)&v57,
      (__int64)&v56,
      (__int64)&v55,
      (__int64)&v54,
      (__int64)&v53,
      (__int64)&v52,
      (__int64)&v88,
      (__int64)&v86,
      (__int64)&v84,
      (__int64)&a6);
  }
}
