/*
 * XREFs of ?CreateIntersectedD2DGeometry@CRoundedRectangleShape@@AEBAJPEAPEAUID2D1Geometry@@@Z @ 0x1801A7850
 * Callers:
 *     ?GetD2DGeometry@CRoundedRectangleShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x1800A45E0 (-GetD2DGeometry@CRoundedRectangleShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z.c)
 * Callees:
 *     ?CalcEdgesAndControlPoints@CRoundedRectangleShape@@AEBAXPEAVCMilPoint2F@@@Z @ 0x18006B200 (-CalcEdgesAndControlPoints@CRoundedRectangleShape@@AEBAXPEAVCMilPoint2F@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x18007BD44 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CDirtyRegionAnnotation@@QEAA@XZ @ 0x180129660 (--0CDirtyRegionAnnotation@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ @ 0x18013A67C (-InternalRelease@-$ComPtr@UID2D1PathGeometry@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?IsRoundedCorner@CRoundedRectangleGeometryData@@SA_NAEBUD2D_VECTOR_2F@@@Z @ 0x1801A8160 (-IsRoundedCorner@CRoundedRectangleGeometryData@@SA_NAEBUD2D_VECTOR_2F@@@Z.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
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
  int v33; // eax
  CGlobalDrawingContext *v34; // rbx
  __int64 (__fastcall *v35)(CGlobalDrawingContext *, __int64 *); // rdi
  int v36; // eax
  int v37; // eax
  int v38; // eax
  CGlobalDrawingContext *v39; // rbx
  __int64 v40; // rcx
  __int64 v41; // rcx
  int v42; // eax
  CGlobalDrawingContext *v43; // rbx
  __int64 (__fastcall *v44)(CGlobalDrawingContext *, CGlobalDrawingContext **); // rdi
  int v45; // eax
  int v46; // eax
  int v47; // eax
  CGlobalDrawingContext *v48; // rbx
  struct ID2D1Geometry *v49; // rcx
  CGlobalDrawingContext *v50; // rcx
  CGlobalDrawingContext **v51; // rcx
  __int64 v52; // rax
  CGlobalDrawingContext *v53; // rcx
  CGlobalDrawingContext *v55; // rcx
  __int64 v56; // rcx
  __int64 v57; // rcx
  int v58; // eax
  __int64 v59; // rcx
  CGlobalDrawingContext *v60; // [rsp+48h] [rbp-C0h] BYREF
  CGlobalDrawingContext *v61; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v62; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v63; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v64; // [rsp+68h] [rbp-A0h]
  __int64 v65; // [rsp+70h] [rbp-98h]
  __int64 v66; // [rsp+78h] [rbp-90h]
  __int64 v67; // [rsp+80h] [rbp-88h]
  __int64 v68; // [rsp+88h] [rbp-80h]
  __int64 v69; // [rsp+90h] [rbp-78h]
  __int128 v70; // [rsp+98h] [rbp-70h]
  _DWORD v71[2]; // [rsp+B0h] [rbp-58h] BYREF
  float v72; // [rsp+B8h] [rbp-50h]
  float v73; // [rsp+BCh] [rbp-4Ch]
  __int128 v74; // [rsp+C0h] [rbp-48h] BYREF
  unsigned __int64 v75; // [rsp+D0h] [rbp-38h]
  float v76; // [rsp+D8h] [rbp-30h] BYREF
  float v77[5]; // [rsp+DCh] [rbp-2Ch]
  float v78; // [rsp+F0h] [rbp-18h]
  float v79; // [rsp+F4h] [rbp-14h]
  float v80; // [rsp+118h] [rbp+10h]
  float v81; // [rsp+11Ch] [rbp+14h]
  float v82; // [rsp+130h] [rbp+28h]
  float v83; // [rsp+134h] [rbp+2Ch]

  v2 = 0;
  v3 = (CDirtyRegionAnnotation *)&v76;
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
  CRoundedRectangleShape::CalcEdgesAndControlPoints(this, (struct CMilPoint2F *)&v76);
  v8 = *((_QWORD *)this + 2);
  v9 = *(float *)(v8 + 20);
  v10 = *(float *)(v8 + 16);
  v11 = *(float *)(v8 + 28);
  v12 = *(float *)(v8 + 24);
  v13 = *(_BYTE *)(v8 + 68) == 0;
  *(float *)v71 = v10;
  *(float *)&v71[1] = v9;
  if ( v13 )
  {
    v72 = v12;
    v14 = v11;
    v73 = v11;
    v15 = v12;
  }
  else
  {
    v15 = v10 + v12;
    v14 = v9 + v11;
    v72 = v10 + v12;
    v73 = v9 + v11;
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
  v76 = v22;
  v77[0] = v21;
  v78 = v20;
  v79 = v21;
  v80 = v22;
  v81 = v19;
  v82 = v20;
  v83 = v19;
  v60 = 0LL;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v60);
  v58 = (*(__int64 (__fastcall **)(__int64, _DWORD *, CGlobalDrawingContext **))(*(_QWORD *)g_DeviceManager + 40LL))(
          g_DeviceManager,
          v71,
          &v60);
  v2 = v58;
  if ( v58 >= 0 )
  {
    v6 = v60;
LABEL_13:
    v23 = 0;
    for ( i = (int *)&unk_180338F14; ; i += 7 )
    {
      v25 = *((_QWORD *)this + 2);
      if ( v23 >= 4 )
        break;
      if ( !*(_BYTE *)(v25 + 68) )
        v25 += 8LL * (unsigned int)v23;
      if ( CRoundedRectangleGeometryData::IsRoundedCorner((const struct D2D_VECTOR_2F *)(v25 + 32)) )
      {
        v60 = (CGlobalDrawingContext *)*(i - 1);
        v64 = *i;
        v65 = i[1];
        v66 = i[2];
        v67 = i[3];
        v68 = i[4];
        v69 = i[5];
        v61 = 0LL;
        Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v61);
        v26 = (*(__int64 (__fastcall **)(__int64, CGlobalDrawingContext **))(*(_QWORD *)g_DeviceManager + 80LL))(
                g_DeviceManager,
                &v61);
        v2 = v26;
        if ( v26 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v26, 0x271u, 0LL);
          goto LABEL_47;
        }
        v62 = 0LL;
        v27 = v61;
        v28 = *(__int64 (__fastcall **)(CGlobalDrawingContext *, __int64 *))(*(_QWORD *)v61 + 136LL);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v62);
        v29 = v28(v27, &v62);
        v2 = v29;
        if ( v29 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v29, 0x274u, 0LL);
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v62);
          goto LABEL_47;
        }
        (*(void (__fastcall **)(__int64, unsigned __int64, _QWORD))(*(_QWORD *)v62 + 40LL))(
          v62,
          _mm_unpacklo_ps((__m128)LODWORD(v77[2 * (_QWORD)v60 - 1]), (__m128)LODWORD(v77[2 * (_QWORD)v60])).m128_u64[0],
          0LL);
        v30 = v77[2 * v64 - 1];
        *((float *)&v70 + 1) = v77[2 * v64];
        *(float *)&v70 = v30;
        v31 = v77[2 * v65 - 1];
        *((float *)&v70 + 3) = v77[2 * v65];
        *((float *)&v70 + 2) = v31;
        v75 = _mm_unpacklo_ps((__m128)LODWORD(v77[2 * v66 - 1]), (__m128)LODWORD(v77[2 * v66])).m128_u64[0];
        v74 = v70;
        (*(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v62 + 88LL))(v62, &v74);
        (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v62 + 80LL))(
          v62,
          _mm_unpacklo_ps((__m128)LODWORD(v77[2 * v67 - 1]), (__m128)LODWORD(v77[2 * v67])).m128_u64[0]);
        (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v62 + 80LL))(
          v62,
          _mm_unpacklo_ps((__m128)LODWORD(v77[2 * v68 - 1]), (__m128)LODWORD(v77[2 * v68])).m128_u64[0]);
        (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v62 + 80LL))(
          v62,
          _mm_unpacklo_ps((__m128)LODWORD(v77[2 * v69 - 1]), (__m128)LODWORD(v77[2 * v69])).m128_u64[0]);
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v62 + 64LL))(v62, 1LL);
        v32 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v62 + 72LL))(v62);
        v2 = v32;
        if ( v32 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v32, 0x27Du, 0LL);
          v59 = v62;
          if ( v62 )
          {
            v62 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v59 + 16LL))(v59);
          }
LABEL_47:
          v51 = &v61;
LABEL_48:
          Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(v51);
          if ( v6 )
            goto LABEL_49;
          return v2;
        }
        if ( v6 )
        {
          v60 = 0LL;
          Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v60);
          v33 = (*(__int64 (__fastcall **)(__int64, CGlobalDrawingContext **))(*(_QWORD *)g_DeviceManager + 80LL))(
                  g_DeviceManager,
                  &v60);
          v2 = v33;
          if ( v33 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v33, 0x287u, 0LL);
            goto LABEL_60;
          }
          v63 = 0LL;
          v34 = v60;
          v35 = *(__int64 (__fastcall **)(CGlobalDrawingContext *, __int64 *))(*(_QWORD *)v60 + 136LL);
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v63);
          v36 = v35(v34, &v63);
          v2 = v36;
          if ( v36 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v36, 0x28Au, 0LL);
LABEL_76:
            Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v63);
            Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v60);
            Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v62);
            goto LABEL_62;
          }
          v37 = (*(__int64 (__fastcall **)(struct ID2D1Geometry *, CGlobalDrawingContext *, __int64, _QWORD, _DWORD, __int64))(*(_QWORD *)v6 + 88LL))(
                  v6,
                  v61,
                  1LL,
                  0LL,
                  0,
                  v63);
          v2 = v37;
          if ( v37 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v37, 0x292u, 0LL);
            v56 = v63;
            if ( v63 )
            {
              v63 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v56 + 16LL))(v56);
            }
LABEL_60:
            Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v60);
            v57 = v62;
            if ( v62 )
            {
              v62 = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v57 + 16LL))(v57);
            }
LABEL_62:
            Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v61);
LABEL_49:
            v52 = *(_QWORD *)v6;
            v53 = v6;
LABEL_50:
            (*(void (__fastcall **)(CGlobalDrawingContext *))(v52 + 16))(v53);
            return v2;
          }
          v38 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v63 + 72LL))(v63);
          v2 = v38;
          if ( v38 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v38, 0x294u, 0LL);
            goto LABEL_76;
          }
          v39 = v60;
          v60 = 0LL;
          (*(void (__fastcall **)(struct ID2D1Geometry *))(*(_QWORD *)v6 + 16LL))(v6);
          v40 = v63;
          v6 = v39;
          if ( v63 )
          {
            v63 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v40 + 16LL))(v40);
          }
          Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v60);
        }
        else
        {
          v6 = v61;
          v61 = 0LL;
        }
        v41 = v62;
        if ( v62 )
        {
          v62 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v41 + 16LL))(v41);
        }
        Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v61);
      }
      ++v23;
    }
    if ( *(float *)(v25 + 64) > 0.0 )
    {
      v60 = 0LL;
      Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v60);
      v42 = (*(__int64 (__fastcall **)(__int64, CGlobalDrawingContext **))(*(_QWORD *)g_DeviceManager + 80LL))(
              g_DeviceManager,
              &v60);
      v2 = v42;
      if ( v42 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v42, 0x29Fu, 0LL);
      }
      else
      {
        v61 = 0LL;
        v43 = v60;
        v44 = *(__int64 (__fastcall **)(CGlobalDrawingContext *, CGlobalDrawingContext **))(*(_QWORD *)v60 + 136LL);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v61);
        v45 = v44(v43, &v61);
        v2 = v45;
        if ( v45 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v45, 0x2A2u, 0LL);
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v61);
        }
        else
        {
          v46 = (*(__int64 (__fastcall **)(struct ID2D1Geometry *, __int64, _QWORD))(*(_QWORD *)v6 + 72LL))(
                  v6,
                  1LL,
                  0LL);
          v2 = v46;
          if ( v46 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v46, 0x2A7u, 0LL);
          }
          else
          {
            v47 = (*(__int64 (__fastcall **)(CGlobalDrawingContext *))(*(_QWORD *)v61 + 72LL))(v61);
            v2 = v47;
            if ( v47 >= 0 )
            {
              v48 = v60;
              if ( v60 )
                (*(void (__fastcall **)(CGlobalDrawingContext *))(*(_QWORD *)v60 + 8LL))(v60);
              v49 = v6;
              v6 = v48;
              if ( v49 )
                (*(void (__fastcall **)(struct ID2D1Geometry *))(*(_QWORD *)v49 + 16LL))(v49);
              v50 = v61;
              if ( v61 )
              {
                v61 = 0LL;
                (*(void (__fastcall **)(CGlobalDrawingContext *))(*(_QWORD *)v50 + 16LL))(v50);
              }
              Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v60);
              goto LABEL_45;
            }
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v47, 0x2A8u, 0LL);
          }
          v55 = v61;
          if ( v61 )
          {
            v61 = 0LL;
            (*(void (__fastcall **)(CGlobalDrawingContext *))(*(_QWORD *)v55 + 16LL))(v55);
          }
        }
      }
      v51 = &v60;
      goto LABEL_48;
    }
LABEL_45:
    *a2 = v6;
    return v2;
  }
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v58, 0x25Fu, 0LL);
  v53 = v60;
  if ( v60 )
  {
    v60 = 0LL;
    v52 = *(_QWORD *)v53;
    goto LABEL_50;
  }
  return v2;
}
