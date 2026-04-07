/*
 * XREFs of ?UpdateAnimatedResources@CTopLevelWindow3D@@AEAAJXZ @ 0x180040710
 * Callers:
 *     ?ValidateVisual@CTopLevelWindow3D@@UEAAJXZ @ 0x180042EC0 (-ValidateVisual@CTopLevelWindow3D@@UEAAJXZ.c)
 * Callees:
 *     ?CreateRectangleGeometry@ResourceHelper@@SAJHHHHPEAPEAVCRectangleGeometryProxy@@@Z @ 0x18001C16C (-CreateRectangleGeometry@ResourceHelper@@SAJHHHHPEAPEAVCRectangleGeometryProxy@@@Z.c)
 *     ?SetClip@CVisualProxy@@QEAAJPEAVCBaseGeometryProxy@@@Z @ 0x1800336E4 (-SetClip@CVisualProxy@@QEAAJPEAVCBaseGeometryProxy@@@Z.c)
 *     ?D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z @ 0x180040E00 (-D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18004CDD0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     __security_check_cookie @ 0x18005C640 (__security_check_cookie.c)
 *     cosf @ 0x18005D49C (cosf.c)
 *     _o_sinf_0 @ 0x18005D4D8 (_o_sinf_0.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 *     ?CreateRectangleGeometry@ResourceHelper@@SAJAEBUMilPointAndSizeL@@MPEAPEAVCRectangleGeometryProxy@@@Z @ 0x1800D62E0 (-CreateRectangleGeometry@ResourceHelper@@SAJAEBUMilPointAndSizeL@@MPEAPEAVCRectangleGeometryProx.c)
 *     ?GetRadiusFromCornerStyle@CTopLevelWindow@@AEAAMXZ @ 0x1800E5B98 (-GetRadiusFromCornerStyle@CTopLevelWindow@@AEAAMXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CTopLevelWindow3D::UpdateAnimatedResources(CTopLevelWindow3D *this)
{
  __int64 v2; // rax
  float v3; // xmm7_4
  __int64 v4; // rax
  float v5; // xmm5_4
  __int64 v6; // rax
  float v7; // xmm15_4
  __int64 v8; // rax
  float v9; // xmm4_4
  __int64 v10; // rax
  float v11; // xmm3_4
  __int64 v12; // rax
  __int64 v13; // rax
  float v14; // xmm12_4
  __int64 v15; // rax
  float v16; // xmm13_4
  __int64 v17; // rax
  float v18; // xmm8_4
  __int64 v19; // rax
  double v20; // xmm0_8
  double v21; // xmm2_8
  float v22; // xmm0_4
  float v23; // xmm8_4
  float v24; // xmm11_4
  float v25; // xmm10_4
  float v26; // xmm12_4
  float v27; // xmm9_4
  float v28; // xmm8_4
  float v29; // xmm13_4
  float v30; // xmm12_4
  float v31; // xmm0_4
  float v32; // xmm14_4
  float v33; // xmm13_4
  float v34; // xmm12_4
  float v35; // xmm1_4
  float v36; // xmm12_4
  float v37; // xmm9_4
  float v38; // xmm7_4
  float v39; // xmm3_4
  float v40; // xmm10_4
  float v41; // xmm4_4
  float v42; // xmm6_4
  float v43; // xmm8_4
  _DWORD *v44; // rdx
  float v45; // xmm6_4
  float v46; // xmm7_4
  int v47; // eax
  int v48; // r8d
  float v49; // xmm5_4
  float v50; // xmm4_4
  int v51; // eax
  int v52; // ebx
  _DWORD *v54; // r9
  __int64 v55; // rbx
  float v56; // xmm2_4
  float v57; // xmm8_4
  int v58; // eax
  float v59; // xmm9_4
  int v60; // eax
  float v61; // xmm10_4
  __int64 v62; // rax
  float v63; // xmm1_4
  int v64; // r12d
  __int64 v65; // rax
  float v66; // xmm1_4
  int v67; // r14d
  __int64 v68; // rax
  float v69; // xmm1_4
  int v70; // esi
  __int64 v71; // rax
  float v72; // xmm1_4
  int v73; // r15d
  CTopLevelWindow *v74; // rbx
  float v75; // xmm0_4
  int v76; // eax
  __int64 v77; // rax
  float v78; // xmm1_4
  struct CBaseGeometryProxy *v79; // rbx
  int v80; // eax
  unsigned int v81; // esi
  struct CBaseGeometryProxy *v82; // [rsp+38h] [rbp-D0h] BYREF
  float v83; // [rsp+40h] [rbp-C8h]
  float v84; // [rsp+44h] [rbp-C4h]
  float v85; // [rsp+48h] [rbp-C0h]
  float v86; // [rsp+4Ch] [rbp-BCh]
  __int64 v87; // [rsp+54h] [rbp-B4h] BYREF
  __int64 v88; // [rsp+5Ch] [rbp-ACh]
  int v89; // [rsp+64h] [rbp-A4h]
  float v90; // [rsp+68h] [rbp-A0h]
  __int64 v91; // [rsp+6Ch] [rbp-9Ch]
  int v92; // [rsp+74h] [rbp-94h]
  __int64 v93; // [rsp+78h] [rbp-90h]
  float v94; // [rsp+80h] [rbp-88h]
  int v95; // [rsp+84h] [rbp-84h]
  __int128 v96; // [rsp+88h] [rbp-80h]
  _DWORD v97[4]; // [rsp+98h] [rbp-70h] BYREF
  float v98; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v99; // [rsp+ACh] [rbp-5Ch]
  __int64 v100; // [rsp+B4h] [rbp-54h]
  float v101; // [rsp+BCh] [rbp-4Ch]
  __int64 v102; // [rsp+C0h] [rbp-48h]
  __int64 v103; // [rsp+C8h] [rbp-40h]
  __int64 v104; // [rsp+D0h] [rbp-38h]
  float v105; // [rsp+D8h] [rbp-30h]
  float v106; // [rsp+DCh] [rbp-2Ch]
  int v107; // [rsp+E0h] [rbp-28h]
  int v108; // [rsp+E4h] [rbp-24h]
  double v109; // [rsp+E8h] [rbp-20h] BYREF
  __int128 v110; // [rsp+F0h] [rbp-18h]
  double v111; // [rsp+100h] [rbp-8h]
  double v112; // [rsp+108h] [rbp+0h]
  double v113; // [rsp+110h] [rbp+8h]

  v2 = *((_QWORD *)this + 49);
  if ( v2 )
    v3 = *(double *)(v2 + 48);
  else
    v3 = 0.0;
  *(float *)&v82 = v3;
  v4 = *((_QWORD *)this + 50);
  if ( v4 )
    v5 = *(double *)(v4 + 48);
  else
    v5 = 0.0;
  v85 = v5;
  v6 = *((_QWORD *)this + 51);
  if ( v6 )
    v7 = *(double *)(v6 + 48);
  else
    v7 = 0.0;
  v8 = *((_QWORD *)this + 55);
  if ( v8 )
    v9 = *(double *)(v8 + 48);
  else
    v9 = FLOAT_1_0;
  v83 = v9;
  v10 = *((_QWORD *)this + 56);
  if ( v10 )
    v11 = *(double *)(v10 + 48);
  else
    v11 = FLOAT_1_0;
  v84 = v11;
  v12 = *((_QWORD *)this + 57);
  if ( v12 )
    v86 = *(double *)(v12 + 48);
  else
    v86 = FLOAT_1_0;
  v13 = *((_QWORD *)this + 52);
  if ( v13 )
    v14 = *(double *)(v13 + 48);
  else
    v14 = 0.0;
  v15 = *((_QWORD *)this + 53);
  if ( v15 )
    v16 = *(double *)(v15 + 48);
  else
    v16 = 0.0;
  v17 = *((_QWORD *)this + 54);
  if ( v17 )
    v18 = *(double *)(v17 + 48);
  else
    v18 = 0.0;
  v19 = *((_QWORD *)this + 58);
  if ( v19 )
    v20 = *(double *)(v19 + 48);
  else
    v20 = *((double *)this + 24);
  v21 = (float)v20;
  v22 = v20;
  if ( COERCE_FLOAT(COERCE_UNSIGNED_INT((float)*((double *)this + 24) - v22) & _xmm) > 0.0000011920929 )
  {
    *((double *)this + 24) = v21;
    (*(void (__fastcall **)(CTopLevelWindow3D *, __int64))(*(_QWORD *)this + 24LL))(this, 32LL);
    v11 = v84;
    v9 = v83;
    v5 = v85;
  }
  if ( !*((_BYTE *)this + 616) )
  {
    v104 = 1065353216LL;
    v103 = 0LL;
    v102 = 0LL;
    v100 = 0LL;
    v99 = 0LL;
    v108 = 1065353216;
    v101 = 1.0;
    v98 = 1.0;
    LODWORD(v105) = *((_DWORD *)this + 128) ^ _xmm;
    LODWORD(v106) = *((_DWORD *)this + 129) ^ _xmm;
    v107 = *((_DWORD *)this + 130) ^ _xmm;
    v23 = (float)(v18 * 0.017453292) * 0.5;
    v24 = o_sinf_0(v23);
    v25 = cosf(v23);
    v26 = (float)(v14 * 0.017453292) * 0.5;
    v27 = o_sinf_0(v26);
    v28 = cosf(v26);
    v29 = (float)(v16 * 0.017453292) * 0.5;
    v30 = o_sinf_0(v29);
    v31 = cosf(v29);
    v32 = (float)((float)(v31 * v27) * v25) + (float)((float)(v30 * v28) * v24);
    v33 = (float)((float)(v30 * v28) * v25) - (float)((float)(v31 * v27) * v24);
    v34 = v30 * v27;
    v35 = (float)((float)(v31 * v28) * v24) - (float)(v34 * v25);
    v36 = (float)(v34 * v24) + (float)((float)(v31 * v28) * v25);
    v37 = (float)(v32 + v32) * v36;
    v38 = (float)(v33 + v33) * v36;
    v39 = (float)(v35 + v35) * v36;
    v40 = (float)(v33 + v33) * v33;
    v41 = (float)(v35 + v35) * v33;
    v42 = (float)(v35 + v35) * v35;
    *((float *)&v87 + 1) = (float)(1.0 - v40) - v42;
    *(float *)&v88 = (float)((float)(v33 + v33) * v32) + v39;
    *((float *)&v88 + 1) = (float)((float)(v35 + v35) * v32) - v38;
    v89 = 0;
    v90 = (float)((float)(v33 + v33) * v32) - v39;
    v43 = (float)(v32 + v32) * v32;
    *(float *)&v91 = (float)(1.0 - v43) - v42;
    *((float *)&v91 + 1) = v41 + v37;
    v92 = 0;
    *(float *)&v93 = (float)((float)(v35 + v35) * v32) + v38;
    *((float *)&v93 + 1) = v41 - v37;
    v94 = (float)(1.0 - v43) - v40;
    v95 = 0;
    v96 = _xmm;
    D2DMatrixMultiply(
      (struct D2DMatrix *)&v98,
      (const struct D2DMatrix *)&v98,
      (const struct D2DMatrix *)((char *)&v87 + 4));
    v93 = 0LL;
    v91 = 1065353216LL;
    v90 = 0.0;
    v88 = 0LL;
    v94 = 1.0;
    HIDWORD(v87) = 1065353216;
    *(float *)&v96 = *((float *)this + 128) - *((float *)this + 131);
    *((float *)&v96 + 1) = *((float *)this + 129) - *((float *)this + 132);
    *((float *)&v96 + 2) = *((float *)this + 130) - *((float *)this + 133);
    D2DMatrixMultiply(
      (struct D2DMatrix *)&v98,
      (const struct D2DMatrix *)&v98,
      (const struct D2DMatrix *)((char *)&v87 + 4));
    v44 = (_DWORD *)*((_QWORD *)this + 43);
    v45 = (float)(v44[22] + *((_DWORD *)this + 80));
    v46 = (float)(v44[24] + *((_DWORD *)this + 81));
    v47 = v44[20] - v44[23] - v44[22];
    if ( v47 < 0 )
      v47 = 0;
    v48 = v44[21] - v44[25] - v44[24];
    if ( v48 < 0 )
      v48 = 0;
    *(_QWORD *)((char *)&v96 + 4) = 0LL;
    LODWORD(v96) = 0;
    *((float *)&v87 + 1) = (float)v47 * v83;
    *(float *)&v91 = (float)v48 * v84;
    v94 = v86;
    D2DMatrixMultiply(
      (struct D2DMatrix *)&v98,
      (const struct D2DMatrix *)&v98,
      (const struct D2DMatrix *)((char *)&v87 + 4));
    v94 = 1.0;
    LODWORD(v91) = 1065353216;
    HIDWORD(v87) = 1065353216;
    *(float *)&v96 = (float)(v45 + *(float *)&v82) + (float)(v49 * *((float *)this + 131));
    *((float *)&v96 + 1) = (float)(v46 + v85) + (float)(v50 * *((float *)this + 132));
    *((float *)&v96 + 2) = v7 + *((float *)this + 133);
    D2DMatrixMultiply(
      (struct D2DMatrix *)&v98,
      (const struct D2DMatrix *)&v98,
      (const struct D2DMatrix *)((char *)&v87 + 4));
    v109 = v98;
    *(double *)&v110 = *(float *)&v99;
    *((double *)&v110 + 1) = *((float *)&v100 + 1);
    v111 = v101;
    v112 = v105;
    v113 = v106;
LABEL_29:
    v51 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, double *))(**(_QWORD **)(*(_QWORD *)(*((_QWORD *)this + 44) + 16LL)
                                                                            + 16LL)
                                                              + 912LL))(
            *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 44) + 16LL) + 16LL),
            *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 44) + 16LL) + 24LL),
            &v109);
    v52 = v51;
    if ( v51 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v51, 0x48Bu, 0LL);
    return (unsigned int)v52;
  }
  v54 = (_DWORD *)*((_QWORD *)this + 43);
  v55 = *((_QWORD *)this + 42);
  v56 = (float)(v54[22] + *(_DWORD *)(v55 + 48));
  v57 = (float)(v54[24] + *(_DWORD *)(v55 + 52));
  v58 = 0;
  if ( v54[20] - v54[23] - v54[22] >= 0 )
    v58 = v54[20] - v54[23] - v54[22];
  v59 = (float)v58;
  v60 = 0;
  if ( v54[21] - v54[25] - v54[24] >= 0 )
    v60 = v54[21] - v54[25] - v54[24];
  v61 = (float)v60;
  v109 = v9;
  v110 = 0LL;
  v111 = v11;
  v112 = (float)(v3 + v56);
  v113 = (float)(v5 + v57);
  v62 = *((_QWORD *)this + 59);
  if ( v62 )
    v63 = *(double *)(v62 + 48);
  else
    v63 = FLOAT_1_0;
  v64 = (int)(float)((float)((float)(1.0 - v63) * *((float *)this + 155)) + (float)(v56 * v63));
  v97[0] = v64;
  v65 = *((_QWORD *)this + 60);
  if ( v65 )
    v66 = *(double *)(v65 + 48);
  else
    v66 = FLOAT_1_0;
  v67 = (int)(float)((float)((float)(1.0 - v66) * *((float *)this + 156)) + (float)(v57 * v66));
  v97[1] = v67;
  v68 = *((_QWORD *)this + 61);
  if ( v68 )
    v69 = *(double *)(v68 + 48);
  else
    v69 = FLOAT_1_0;
  v70 = (int)(float)((float)((float)(1.0 - v69) * *((float *)this + 157)) + (float)(v59 * v69));
  v97[2] = v70;
  v71 = *((_QWORD *)this + 62);
  if ( v71 )
    v72 = *(double *)(v71 + 48);
  else
    v72 = FLOAT_1_0;
  v73 = (int)(float)((float)((float)(1.0 - v72) * *((float *)this + 158)) + (float)(v61 * v72));
  v97[3] = v73;
  v74 = *(CTopLevelWindow **)(v55 + 440);
  v75 = (float)(CTopLevelWindow::GetRadiusFromCornerStyle(v74) * (float)*(int *)(*((_QWORD *)v74 + 94) + 348LL)) / 96.0;
  v76 = *((_DWORD *)this + 96);
  if ( (v76 == 2 || v76 == 12) && v75 > 0.0 )
  {
    v77 = *((_QWORD *)this + 63);
    if ( v77 )
      v78 = *(double *)(v77 + 48);
    else
      v78 = FLOAT_1_0;
    v82 = 0LL;
    v52 = ResourceHelper::CreateRectangleGeometry(
            (const struct MilPointAndSizeL *)v97,
            (float)(int)(float)((float)((float)(1.0 - v78) * v75) + (float)(v78 * 0.0)),
            &v82);
    if ( v52 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v52, 0x46Fu, 0LL);
      goto LABEL_67;
    }
  }
  else
  {
    v82 = 0LL;
    v52 = ResourceHelper::CreateRectangleGeometry(v64, v67, v70, v73, &v82);
    if ( v52 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v52, 0x473u, 0LL);
LABEL_67:
      if ( v82 )
        CBaseObject::Release(v82);
      return (unsigned int)v52;
    }
  }
  v79 = v82;
  v80 = CVisualProxy::SetClip(*((CVisualProxy **)this + 2), v82);
  v81 = v80;
  if ( v80 >= 0 )
  {
    if ( v79 )
      CBaseObject::Release(v79);
    goto LABEL_29;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v80, 0x476u, 0LL);
  if ( v79 )
    CBaseObject::Release(v79);
  return v81;
}
