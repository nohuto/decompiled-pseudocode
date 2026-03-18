/*
 * XREFs of ?CreateIntersectedD2DGeometry@CRoundedRectangleShape@@AEBAJPEAPEAUID2D1Geometry@@@Z @ 0x1801AC390
 * Callers:
 *     ?GetD2DGeometry@CRoundedRectangleShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x180072D70 (-GetD2DGeometry@CRoundedRectangleShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z.c)
 * Callees:
 *     ??0CDirtyRegionAnnotation@@QEAA@XZ @ 0x180019EB0 (--0CDirtyRegionAnnotation@@QEAA@XZ.c)
 *     ?CalcEdgesAndControlPoints@CRoundedRectangleShape@@AEBAXPEAVCMilPoint2F@@@Z @ 0x1800413C0 (-CalcEdgesAndControlPoints@CRoundedRectangleShape@@AEBAXPEAVCMilPoint2F@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180061E70 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?InternalRelease@?$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ @ 0x1800956F8 (-InternalRelease@-$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?IsRoundedCorner@CRoundedRectangleGeometryData@@SA_NAEBUD2D_VECTOR_2F@@@Z @ 0x1801ACCA0 (-IsRoundedCorner@CRoundedRectangleGeometryData@@SA_NAEBUD2D_VECTOR_2F@@@Z.c)
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CRoundedRectangleShape::CreateIntersectedD2DGeometry(
        CRoundedRectangleShape *this,
        struct ID2D1Geometry **a2)
{
  unsigned int v2; // edi
  CDirtyRegionAnnotation *v3; // rbx
  struct ID2D1Geometry *v6; // rsi
  __int64 v7; // r14
  __int64 v8; // rdx
  float v9; // xmm4_4
  float v10; // xmm5_4
  float v11; // xmm0_4
  float v12; // xmm1_4
  bool v13; // zf
  float v14; // xmm3_4
  float v15; // xmm2_4
  float *v16; // r8
  float *v17; // rax
  unsigned __int64 v18; // rcx
  float v19; // xmm6_4
  float v20; // xmm7_4
  float v21; // xmm1_4
  float v22; // xmm8_4
  int v23; // r15d
  int *i; // r14
  __int64 v25; // rcx
  int v26; // eax
  CGlobalDrawingContext *v27; // rbx
  __int64 (__fastcall *v28)(CGlobalDrawingContext *, __int64 *); // rdi
  int v29; // eax
  float v30; // xmm0_4
  float v31; // xmm0_4
  int v32; // eax
  __int64 v33; // rdx
  __int64 v34; // r8
  int v35; // eax
  CGlobalDrawingContext *v36; // rbx
  __int64 (__fastcall *v37)(CGlobalDrawingContext *, __int64 *); // rdi
  int v38; // eax
  int v39; // eax
  int v40; // eax
  CGlobalDrawingContext *v41; // rbx
  __int64 v42; // rdx
  __int64 v43; // r8
  __int64 v44; // rcx
  __int64 v45; // rcx
  int v46; // eax
  CGlobalDrawingContext *v47; // rbx
  __int64 (__fastcall *v48)(CGlobalDrawingContext *, CGlobalDrawingContext **); // rdi
  int v49; // eax
  int v50; // eax
  int v51; // eax
  __int64 v52; // rdx
  __int64 v53; // r8
  CGlobalDrawingContext *v54; // rbx
  struct ID2D1Geometry *v55; // rcx
  CGlobalDrawingContext *v56; // rcx
  __int64 v57; // rdx
  __int64 v58; // r8
  CGlobalDrawingContext **v59; // rcx
  __int64 v60; // rax
  CGlobalDrawingContext *v61; // rcx
  CGlobalDrawingContext *v63; // rcx
  __int64 v64; // rdx
  __int64 v65; // r8
  __int64 v66; // rcx
  __int64 v67; // rdx
  __int64 v68; // r8
  __int64 v69; // rcx
  int v70; // eax
  __int64 v71; // rcx
  __int64 v72; // rdx
  __int64 v73; // r8
  CGlobalDrawingContext *v74; // [rsp+48h] [rbp-C0h] BYREF
  CGlobalDrawingContext *v75; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v76; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v77; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v78; // [rsp+68h] [rbp-A0h]
  __int64 v79; // [rsp+70h] [rbp-98h]
  __int64 v80; // [rsp+78h] [rbp-90h]
  __int64 v81; // [rsp+80h] [rbp-88h]
  __int64 v82; // [rsp+88h] [rbp-80h]
  __int64 v83; // [rsp+90h] [rbp-78h]
  __int128 v84; // [rsp+98h] [rbp-70h]
  _DWORD v85[2]; // [rsp+B0h] [rbp-58h] BYREF
  float v86; // [rsp+B8h] [rbp-50h]
  float v87; // [rsp+BCh] [rbp-4Ch]
  __int128 v88; // [rsp+C0h] [rbp-48h] BYREF
  unsigned __int64 v89; // [rsp+D0h] [rbp-38h]
  float v90; // [rsp+D8h] [rbp-30h] BYREF
  float v91[5]; // [rsp+DCh] [rbp-2Ch]
  float v92; // [rsp+F0h] [rbp-18h]
  float v93; // [rsp+F4h] [rbp-14h]
  float v94; // [rsp+118h] [rbp+10h]
  float v95; // [rsp+11Ch] [rbp+14h]
  float v96; // [rsp+130h] [rbp+28h]
  float v97; // [rsp+134h] [rbp+2Ch]

  v2 = 0;
  v3 = (CDirtyRegionAnnotation *)&v90;
  v6 = 0LL;
  v7 = 20LL;
  do
  {
    --v7;
    if ( Microsoft::BamoImpl::BamoPrincipalImpl::AsPrincipal == CDirtyRegionAnnotation::CDirtyRegionAnnotation )
      CDirtyRegionAnnotation::CDirtyRegionAnnotation(v3);
    v3 = (CDirtyRegionAnnotation *)((char *)v3 + 8);
  }
  while ( v7 );
  CRoundedRectangleShape::CalcEdgesAndControlPoints(this, (struct CMilPoint2F *)&v90);
  v8 = *((_QWORD *)this + 2);
  v9 = *(float *)(v8 + 20);
  v10 = *(float *)(v8 + 16);
  v11 = *(float *)(v8 + 28);
  v12 = *(float *)(v8 + 24);
  v13 = *(_BYTE *)(v8 + 68) == 0;
  *(float *)v85 = v10;
  *(float *)&v85[1] = v9;
  if ( v13 )
  {
    v86 = v12;
    v14 = v11;
    v87 = v11;
    v15 = v12;
  }
  else
  {
    v15 = v10 + v12;
    v14 = v9 + v11;
    v86 = v10 + v12;
    v87 = v9 + v11;
  }
  v16 = (float *)(v8 + 32);
  v17 = (float *)(v8 + 32);
  v18 = -(__int64)(*(_BYTE *)(v8 + 68) != 0) & 0xFFFFFFFFFFFFFFF8uLL;
  if ( !*(_BYTE *)(v8 + 68) )
  {
    v17 = (float *)(v8 + 48);
    v16 = (float *)(v8 + 56);
  }
  v19 = fmaxf(v14, fmaxf(*(float *)(v8 + 36), *(float *)(v18 + v8 + 44)) + v9);
  v20 = fmaxf(v15, fmaxf(*(float *)(v8 + 32), *v16) + v10);
  v21 = fminf(v9, v14 - fmaxf(v16[1], v17[1]));
  v22 = fminf(v10, v15 - fmaxf(*(float *)(v18 + v8 + 40), *v17));
  if ( v22 == v10 && v21 == v9 && v20 == v15 && v19 == v14 )
    goto LABEL_13;
  v90 = v22;
  v91[0] = v21;
  v92 = v20;
  v93 = v21;
  v94 = v22;
  v95 = v19;
  v96 = v20;
  v97 = v19;
  v74 = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v74);
  v70 = (*(__int64 (__fastcall **)(__int64, _DWORD *, CGlobalDrawingContext **))(*(_QWORD *)g_DeviceManager + 40LL))(
          g_DeviceManager,
          v85,
          &v74);
  v2 = v70;
  if ( v70 >= 0 )
  {
    v6 = v74;
LABEL_13:
    v23 = 0;
    for ( i = (int *)&unk_18032FE54; ; i += 7 )
    {
      v25 = *((_QWORD *)this + 2);
      if ( v23 >= 4 )
        break;
      if ( !*(_BYTE *)(v25 + 68) )
        v25 += 8LL * (unsigned int)v23;
      if ( CRoundedRectangleGeometryData::IsRoundedCorner((const struct D2D_VECTOR_2F *)(v25 + 32)) )
      {
        v74 = (CGlobalDrawingContext *)*(i - 1);
        v78 = *i;
        v79 = i[1];
        v80 = i[2];
        v81 = i[3];
        v82 = i[4];
        v83 = i[5];
        v75 = 0LL;
        Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v75, v8, (__int64)v16);
        v26 = (*(__int64 (__fastcall **)(__int64, CGlobalDrawingContext **))(*(_QWORD *)g_DeviceManager + 80LL))(
                g_DeviceManager,
                &v75);
        v2 = v26;
        if ( v26 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v26, 0x271u, 0LL);
          goto LABEL_47;
        }
        v76 = 0LL;
        v27 = v75;
        v28 = *(__int64 (__fastcall **)(CGlobalDrawingContext *, __int64 *))(*(_QWORD *)v75 + 136LL);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v76);
        v29 = v28(v27, &v76);
        v2 = v29;
        if ( v29 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v29, 0x274u, 0LL);
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v76);
          goto LABEL_47;
        }
        (*(void (__fastcall **)(__int64, unsigned __int64, _QWORD))(*(_QWORD *)v76 + 40LL))(
          v76,
          _mm_unpacklo_ps((__m128)LODWORD(v91[2 * (_QWORD)v74 - 1]), (__m128)LODWORD(v91[2 * (_QWORD)v74])).m128_u64[0],
          0LL);
        v30 = v91[2 * v78 - 1];
        *((float *)&v84 + 1) = v91[2 * v78];
        *(float *)&v84 = v30;
        v31 = v91[2 * v79 - 1];
        *((float *)&v84 + 3) = v91[2 * v79];
        *((float *)&v84 + 2) = v31;
        v89 = _mm_unpacklo_ps((__m128)LODWORD(v91[2 * v80 - 1]), (__m128)LODWORD(v91[2 * v80])).m128_u64[0];
        v88 = v84;
        (*(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v76 + 88LL))(v76, &v88);
        (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v76 + 80LL))(
          v76,
          _mm_unpacklo_ps((__m128)LODWORD(v91[2 * v81 - 1]), (__m128)LODWORD(v91[2 * v81])).m128_u64[0]);
        (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v76 + 80LL))(
          v76,
          _mm_unpacklo_ps((__m128)LODWORD(v91[2 * v82 - 1]), (__m128)LODWORD(v91[2 * v82])).m128_u64[0]);
        (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v76 + 80LL))(
          v76,
          _mm_unpacklo_ps((__m128)LODWORD(v91[2 * v83 - 1]), (__m128)LODWORD(v91[2 * v83])).m128_u64[0]);
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v76 + 64LL))(v76, 1LL);
        v32 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v76 + 72LL))(v76);
        v2 = v32;
        if ( v32 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v32, 0x27Du, 0LL);
          v71 = v76;
          if ( v76 )
          {
            v76 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v71 + 16LL))(v71);
          }
LABEL_47:
          v59 = &v75;
LABEL_48:
          Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(v59, v57, v58);
          if ( v6 )
            goto LABEL_49;
          return v2;
        }
        if ( v6 )
        {
          v74 = 0LL;
          Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v74, v33, v34);
          v35 = (*(__int64 (__fastcall **)(__int64, CGlobalDrawingContext **))(*(_QWORD *)g_DeviceManager + 80LL))(
                  g_DeviceManager,
                  &v74);
          v2 = v35;
          if ( v35 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v35, 0x287u, 0LL);
            goto LABEL_60;
          }
          v77 = 0LL;
          v36 = v74;
          v37 = *(__int64 (__fastcall **)(CGlobalDrawingContext *, __int64 *))(*(_QWORD *)v74 + 136LL);
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v77);
          v38 = v37(v36, &v77);
          v2 = v38;
          if ( v38 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v38, 0x28Au, 0LL);
LABEL_76:
            Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v77);
            Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v74, v72, v73);
            Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v76);
            goto LABEL_62;
          }
          v39 = (*(__int64 (__fastcall **)(struct ID2D1Geometry *, CGlobalDrawingContext *, __int64, _QWORD, _DWORD, __int64))(*(_QWORD *)v6 + 88LL))(
                  v6,
                  v75,
                  1LL,
                  0LL,
                  0,
                  v77);
          v2 = v39;
          if ( v39 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v39, 0x292u, 0LL);
            v66 = v77;
            if ( v77 )
            {
              v77 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v66 + 16LL))(v66);
            }
LABEL_60:
            Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v74, v64, v65);
            v69 = v76;
            if ( v76 )
            {
              v76 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v69 + 16LL))(v69);
            }
LABEL_62:
            Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v75, v67, v68);
LABEL_49:
            v60 = *(_QWORD *)v6;
            v61 = v6;
LABEL_50:
            (*(void (__fastcall **)(CGlobalDrawingContext *))(v60 + 16))(v61);
            return v2;
          }
          v40 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v77 + 72LL))(v77);
          v2 = v40;
          if ( v40 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v40, 0x294u, 0LL);
            goto LABEL_76;
          }
          v41 = v74;
          v74 = 0LL;
          (*(void (__fastcall **)(struct ID2D1Geometry *))(*(_QWORD *)v6 + 16LL))(v6);
          v44 = v77;
          v6 = v41;
          if ( v77 )
          {
            v77 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v44 + 16LL))(v44);
          }
          Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v74, v42, v43);
        }
        else
        {
          v6 = v75;
          v75 = 0LL;
        }
        v45 = v76;
        if ( v76 )
        {
          v76 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v45 + 16LL))(v45);
        }
        Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v75, v33, v34);
      }
      ++v23;
    }
    if ( *(float *)(v25 + 64) > 0.0 )
    {
      v74 = 0LL;
      Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v74, v8, (__int64)v16);
      v46 = (*(__int64 (__fastcall **)(__int64, CGlobalDrawingContext **))(*(_QWORD *)g_DeviceManager + 80LL))(
              g_DeviceManager,
              &v74);
      v2 = v46;
      if ( v46 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v46, 0x29Fu, 0LL);
      }
      else
      {
        v75 = 0LL;
        v47 = v74;
        v48 = *(__int64 (__fastcall **)(CGlobalDrawingContext *, CGlobalDrawingContext **))(*(_QWORD *)v74 + 136LL);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v75);
        v49 = v48(v47, &v75);
        v2 = v49;
        if ( v49 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v49, 0x2A2u, 0LL);
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v75);
        }
        else
        {
          v50 = (*(__int64 (__fastcall **)(struct ID2D1Geometry *, __int64, _QWORD))(*(_QWORD *)v6 + 72LL))(
                  v6,
                  1LL,
                  0LL);
          v2 = v50;
          if ( v50 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v50, 0x2A7u, 0LL);
          }
          else
          {
            v51 = (*(__int64 (__fastcall **)(CGlobalDrawingContext *))(*(_QWORD *)v75 + 72LL))(v75);
            v2 = v51;
            if ( v51 >= 0 )
            {
              v54 = v74;
              if ( v74 )
                (*(void (__fastcall **)(CGlobalDrawingContext *))(*(_QWORD *)v74 + 8LL))(v74);
              v55 = v6;
              v6 = v54;
              if ( v55 )
                (*(void (__fastcall **)(struct ID2D1Geometry *))(*(_QWORD *)v55 + 16LL))(v55);
              v56 = v75;
              if ( v75 )
              {
                v75 = 0LL;
                (*(void (__fastcall **)(CGlobalDrawingContext *))(*(_QWORD *)v56 + 16LL))(v56);
              }
              Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v74, v52, v53);
              goto LABEL_45;
            }
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v51, 0x2A8u, 0LL);
          }
          v63 = v75;
          if ( v75 )
          {
            v75 = 0LL;
            (*(void (__fastcall **)(CGlobalDrawingContext *))(*(_QWORD *)v63 + 16LL))(v63);
          }
        }
      }
      v59 = &v74;
      goto LABEL_48;
    }
LABEL_45:
    *a2 = v6;
    return v2;
  }
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v70, 0x25Fu, 0LL);
  v61 = v74;
  if ( v74 )
  {
    v74 = 0LL;
    v60 = *(_QWORD *)v61;
    goto LABEL_50;
  }
  return v2;
}
