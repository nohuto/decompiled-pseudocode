/*
 * XREFs of ?GenerateGeometryForRectangle@Mesh@@CAXAEBUMeshDesc@1@PEAUGeometryBuffers@1@@Z @ 0x18016BF60
 * Callers:
 *     ?AppendHWGeometry@CDrawListEntryBuilder@@AEAAXAEBUMeshDesc@Mesh@@PEBUPrimitiveVertexAttributesDesc@@@Z @ 0x18016A110 (-AppendHWGeometry@CDrawListEntryBuilder@@AEAAXAEBUMeshDesc@Mesh@@PEBUPrimitiveVertexAttributesDe.c)
 *     ?GenerateGeometry@Mesh@@SAXAEBUMeshDesc@1@PEAUGeometryBuffers@1@@Z @ 0x18016BE70 (-GenerateGeometry@Mesh@@SAXAEBUMeshDesc@1@PEAUGeometryBuffers@1@@Z.c)
 * Callees:
 *     ?GenerateGeometryWorker@Mesh@@CAXAEBUMeshDesc@1@PEAUGeometryBuffers@1@@Z @ 0x18016C7C0 (-GenerateGeometryWorker@Mesh@@CAXAEBUMeshDesc@1@PEAUGeometryBuffers@1@@Z.c)
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 *     memset_0 @ 0x18025D108 (memset_0.c)
 */

void __fastcall Mesh::GenerateGeometryForRectangle(const struct Mesh::MeshDesc *a1, struct Mesh::GeometryBuffers *a2)
{
  int v2; // xmm1_4
  int v3; // xmm0_4
  int v5; // xmm2_4
  int v6; // r8d
  char v7; // al
  int v8; // xmm1_4
  int v9; // xmm0_4
  float v10; // xmm14_4
  float v11; // xmm2_4
  int v12; // xmm1_4
  int *v13; // rcx
  __int64 v14; // rax
  int *v15; // rcx
  __int64 v16; // rax
  int v17; // xmm0_4
  int *v18; // rcx
  __int64 v19; // rax
  int *v20; // rax
  __int64 v21; // rcx
  int v22; // xmm0_4
  int *v23; // rcx
  __int64 v24; // rax
  int *v25; // rax
  __int64 v26; // rcx
  int v27; // xmm0_4
  int *v28; // rcx
  __int64 v29; // rax
  int *v30; // rax
  __int64 v31; // r15
  int v32; // eax
  int v33; // esi
  int v34; // edi
  int v35; // ecx
  int v36; // ecx
  int v37; // r14d
  int v38; // eax
  int v39; // ebx
  int v40; // r8d
  float v41; // xmm8_4
  float v42; // xmm5_4
  float v43; // xmm9_4
  int v44; // r14d
  float v45; // xmm4_4
  float v46; // xmm6_4
  float v47; // xmm10_4
  float v48; // xmm7_4
  float v49; // xmm12_4
  int v50; // ebx
  int v51; // ebx
  float v52; // xmm11_4
  float v53; // xmm13_4
  int v54; // esi
  float v55; // xmm2_4
  float v56; // xmm2_4
  float v57; // xmm3_4
  float v58; // xmm15_4
  int v59; // edi
  int v60; // edi
  int v61; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v62; // [rsp+28h] [rbp-D8h]
  _DWORD *v63; // [rsp+30h] [rbp-D0h]
  __m128i *p_si128; // [rsp+38h] [rbp-C8h]
  char *v65; // [rsp+40h] [rbp-C0h]
  char *v66; // [rsp+48h] [rbp-B8h]
  int v67; // [rsp+50h] [rbp-B0h]
  char v68; // [rsp+54h] [rbp-ACh]
  char v69; // [rsp+55h] [rbp-ABh]
  int v70; // [rsp+58h] [rbp-A8h] BYREF
  int v71; // [rsp+5Ch] [rbp-A4h] BYREF
  int v72; // [rsp+60h] [rbp-A0h]
  char v73[8]; // [rsp+70h] [rbp-90h] BYREF
  float v74; // [rsp+78h] [rbp-88h]
  float v75; // [rsp+7Ch] [rbp-84h]
  int v76; // [rsp+80h] [rbp-80h]
  float v77; // [rsp+84h] [rbp-7Ch]
  float v78; // [rsp+88h] [rbp-78h]
  int v79; // [rsp+8Ch] [rbp-74h]
  float v80; // [rsp+98h] [rbp-68h]
  float v81; // [rsp+9Ch] [rbp-64h]
  int v82; // [rsp+A0h] [rbp-60h]
  float v83; // [rsp+A4h] [rbp-5Ch]
  float v84; // [rsp+A8h] [rbp-58h]
  int v85; // [rsp+ACh] [rbp-54h]
  float v86; // [rsp+B8h] [rbp-48h]
  float v87; // [rsp+BCh] [rbp-44h]
  int v88; // [rsp+C0h] [rbp-40h]
  float v89; // [rsp+C4h] [rbp-3Ch]
  float v90; // [rsp+C8h] [rbp-38h]
  int v91; // [rsp+CCh] [rbp-34h]
  float v92; // [rsp+D8h] [rbp-28h]
  float v93; // [rsp+DCh] [rbp-24h]
  int v94; // [rsp+E0h] [rbp-20h]
  float v95; // [rsp+E4h] [rbp-1Ch]
  float v96; // [rsp+E8h] [rbp-18h]
  int v97; // [rsp+ECh] [rbp-14h]
  int v98; // [rsp+F0h] [rbp-10h] BYREF
  _DWORD v99[3]; // [rsp+F4h] [rbp-Ch] BYREF
  __m128i si128; // [rsp+100h] [rbp+0h] BYREF
  _DWORD v101[8]; // [rsp+110h] [rbp+10h] BYREF

  v2 = *((_DWORD *)a1 + 3);
  v3 = *((_DWORD *)a1 + 4);
  v5 = *((_DWORD *)a1 + 2);
  v6 = *((_DWORD *)a1 + 6);
  v63 = v101;
  v66 = (char *)a1 + 28;
  v67 = *((_DWORD *)a1 + 12);
  v7 = *((_BYTE *)a1 + 53);
  v101[1] = v2;
  v101[2] = v3;
  v101[3] = v2;
  v8 = *((_DWORD *)a1 + 5);
  v101[4] = v3;
  v9 = *(_DWORD *)a1;
  v69 = v7;
  v101[0] = v5;
  v101[5] = v8;
  v101[6] = v5;
  v101[7] = v8;
  v61 = v9;
  v68 = 0;
  v62 = 4LL;
  if ( v6 == 50529027 )
  {
    p_si128 = &si128;
    v65 = (char *)&unk_1803384F0;
    si128 = _mm_load_si128((const __m128i *)&_xmm);
    Mesh::GenerateGeometryWorker((const struct Mesh::MeshDesc *)&v61, a2);
    return;
  }
  if ( !v6 )
  {
    p_si128 = &si128;
    v65 = (char *)&unk_180338460;
    si128 = 0LL;
    Mesh::GenerateGeometryWorker((const struct Mesh::MeshDesc *)&v61, a2);
    return;
  }
  v32 = v6 & 0x3000000;
  v33 = 2;
  v31 = 0LL;
  if ( (v6 & 0x3000000) == 0x3000000 )
  {
    v34 = 3;
  }
  else if ( v32 == 0x1000000 )
  {
    v34 = 1;
  }
  else
  {
    v34 = 2;
    if ( v32 != 0x2000000 )
      v34 = 0;
  }
  si128.m128i_i32[3] = v34;
  v35 = v6 & 3;
  if ( v35 == 3 )
  {
    v37 = 3;
  }
  else
  {
    v36 = v35 - 1;
    if ( v36 )
    {
      if ( v36 == 1 )
        v37 = 2;
      else
        v37 = 0;
    }
    else
    {
      v37 = 1;
    }
  }
  si128.m128i_i32[0] = v37;
  v38 = v6 & 0x300;
  if ( v38 == 768 )
  {
    v39 = 3;
  }
  else if ( v38 == 256 )
  {
    v39 = 1;
  }
  else
  {
    v39 = 2;
    if ( v38 != 512 )
      v39 = 0;
  }
  v40 = v6 & 0x30000;
  si128.m128i_i32[1] = v39;
  if ( v40 == 196608 )
  {
    v33 = 3;
  }
  else if ( v40 == 0x10000 )
  {
    v33 = 1;
  }
  else if ( v40 != 0x20000 )
  {
    v33 = 0;
  }
  si128.m128i_i32[2] = v33;
  memset_0(v73, 0, 0x80uLL);
  v41 = v81;
  v42 = v78;
  v43 = v84;
  if ( v37 == 3 )
  {
    v75 = FLOAT_0_5;
    v41 = v81 + 0.5;
    v45 = FLOAT_0_5;
  }
  else
  {
    v44 = v37 - 1;
    if ( !v44 )
    {
      v75 = FLOAT_0_5;
      v41 = v81 + 0.5;
      v45 = FLOAT_0_5;
      v42 = v78 + 0.5;
      v43 = v84 + 0.5;
      goto LABEL_71;
    }
    if ( v44 != 1 )
    {
      v45 = v75;
      goto LABEL_72;
    }
    v75 = FLOAT_N0_5;
    v41 = v81 + -0.5;
    v45 = FLOAT_N0_5;
  }
  v43 = v84 + -0.5;
  v42 = v78 + -0.5;
LABEL_71:
  v81 = v41;
  v78 = v42;
  v84 = v43;
LABEL_72:
  v46 = v80;
  v47 = v86;
  v48 = v83;
  v49 = v89;
  v50 = v39 - 1;
  if ( v50 )
  {
    v51 = v50 - 1;
    if ( !v51 )
    {
      v46 = v80 + 0.5;
      v47 = v86 + 0.5;
      v48 = v83 + 0.5;
      v49 = v89 + 0.5;
      goto LABEL_77;
    }
    if ( v51 != 1 )
      goto LABEL_78;
    v48 = v83 + 0.5;
    v49 = v89 + 0.5;
  }
  else
  {
    v48 = v83 + -0.5;
    v49 = v89 + -0.5;
  }
  v47 = v86 + -0.5;
  v46 = v80 + -0.5;
LABEL_77:
  v80 = v46;
  v86 = v47;
  v83 = v48;
  v89 = v49;
LABEL_78:
  v52 = v87;
  v53 = v90;
  if ( v33 == 3 )
  {
    v52 = v87 + -0.5;
    v55 = v93 + -0.5;
  }
  else
  {
    v54 = v33 - 1;
    if ( !v54 )
    {
      v52 = v87 + -0.5;
      v53 = v90 + -0.5;
      v93 = v93 + -0.5;
      v56 = v96 + -0.5;
      goto LABEL_84;
    }
    if ( v54 != 1 )
      goto LABEL_85;
    v52 = v87 + 0.5;
    v55 = v93 + 0.5;
  }
  v93 = v55;
  v53 = v90 + 0.5;
  v56 = v96 + 0.5;
LABEL_84:
  v87 = v52;
  v96 = v56;
  v90 = v53;
LABEL_85:
  v11 = v74;
  v10 = v92;
  v57 = v77;
  v58 = v95;
  v59 = v34 - 1;
  if ( v59 )
  {
    v60 = v59 - 1;
    if ( !v60 )
    {
      v11 = v74 + -0.5;
      v10 = v92 + -0.5;
      v57 = v77 + -0.5;
      v58 = v95 + -0.5;
      goto LABEL_5;
    }
    if ( v60 != 1 )
      goto LABEL_6;
    v57 = v77 + -0.5;
    v58 = v95 + -0.5;
  }
  else
  {
    v57 = v77 + 0.5;
    v58 = v95 + 0.5;
  }
  v10 = v92 + 0.5;
  v11 = v74 + 0.5;
LABEL_5:
  v74 = v11;
  v92 = v10;
  v77 = v57;
  v95 = v58;
LABEL_6:
  v12 = 0;
  v98 = 0;
  v99[0] = 1056964608;
  v99[1] = 1060439283;
  if ( v11 == 0.0 )
    v13 = &v98;
  else
    v13 = v99;
  v14 = v45 != 0.0;
  v76 = v13[v14];
  if ( v11 == v57 && v45 == v42 )
  {
    v17 = 0;
  }
  else
  {
    v70 = 0;
    v71 = 1056964608;
    v72 = 1060439283;
    if ( v57 == 0.0 )
      v15 = &v70;
    else
      v15 = &v71;
    v16 = v42 != 0.0;
    v17 = v15[v16];
  }
  v79 = v17;
  if ( v46 == 0.0 )
    v18 = &v98;
  else
    v18 = v99;
  v19 = v41 != 0.0;
  v82 = v18[v19];
  if ( v46 == v48 && v41 == v43 )
  {
    v22 = 0;
  }
  else
  {
    v70 = 0;
    v71 = 1056964608;
    v72 = 1060439283;
    if ( v48 == 0.0 )
      v20 = &v70;
    else
      v20 = &v71;
    v21 = v43 != 0.0;
    v22 = v20[v21];
  }
  v85 = v22;
  if ( v47 == 0.0 )
    v23 = &v98;
  else
    v23 = v99;
  v24 = v52 != 0.0;
  v88 = v23[v24];
  if ( v47 == v49 && v52 == v53 )
  {
    v27 = 0;
  }
  else
  {
    v70 = 0;
    v71 = 1056964608;
    v72 = 1060439283;
    if ( v49 == 0.0 )
      v25 = &v70;
    else
      v25 = &v71;
    v26 = v53 != 0.0;
    v27 = v25[v26];
  }
  v91 = v27;
  if ( v10 == 0.0 )
    v28 = &v98;
  else
    v28 = v99;
  v29 = v93 != 0.0;
  v94 = v28[v29];
  if ( v10 != v58 || v93 != v96 )
  {
    v70 = 0;
    v71 = 1056964608;
    v72 = 1060439283;
    if ( v58 == 0.0 )
      v30 = &v70;
    else
      v30 = &v71;
    if ( v96 != 0.0 )
      v31 = 1LL;
    v12 = v30[v31];
  }
  v97 = v12;
  p_si128 = &si128;
  v65 = v73;
  Mesh::GenerateGeometryWorker((const struct Mesh::MeshDesc *)&v61, a2);
}
