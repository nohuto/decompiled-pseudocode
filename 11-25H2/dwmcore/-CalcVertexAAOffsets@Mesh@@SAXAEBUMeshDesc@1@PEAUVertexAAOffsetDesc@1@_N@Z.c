/*
 * XREFs of ?CalcVertexAAOffsets@Mesh@@SAXAEBUMeshDesc@1@PEAUVertexAAOffsetDesc@1@_N@Z @ 0x1801B5DD0
 * Callers:
 *     ?AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@@Z @ 0x18008B5B0 (-AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAtt.c)
 *     ?AppendHWGeometry@CDrawListEntryBuilder@@AEAAXAEBUMeshDesc@Mesh@@PEBUPrimitiveVertexAttributesDesc@@@Z @ 0x18016A110 (-AppendHWGeometry@CDrawListEntryBuilder@@AEAAXAEBUMeshDesc@Mesh@@PEBUPrimitiveVertexAttributesDe.c)
 *     ?GenerateGeometry@Mesh@@SAXAEBUMeshDesc@1@PEAUGeometryBuffers@1@@Z @ 0x18016BE70 (-GenerateGeometry@Mesh@@SAXAEBUMeshDesc@1@PEAUGeometryBuffers@1@@Z.c)
 *     ?Create@VertexAAOffsetsResource@Mesh@@SAXAEBUMeshDesc@2@PEAPEAV12@@Z @ 0x1801B5D4C (-Create@VertexAAOffsetsResource@Mesh@@SAXAEBUMeshDesc@2@PEAPEAV12@@Z.c)
 * Callees:
 *     sqrtf_0 @ 0x1802E8938 (sqrtf_0.c)
 */

void __fastcall Mesh::CalcVertexAAOffsets(
        const struct Mesh::MeshDesc *a1,
        struct Mesh::VertexAAOffsetDesc *a2,
        char a3)
{
  const struct Mesh::MeshDesc *v4; // r13
  unsigned __int64 v5; // r15
  unsigned int v6; // r8d
  float v7; // xmm8_4
  __int64 v8; // rdi
  int v9; // ebx
  unsigned int v10; // esi
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rbp
  float v13; // xmm6_4
  float v14; // xmm7_4
  float v15; // xmm1_4
  float v16; // xmm2_4
  float v17; // xmm0_4
  float v18; // xmm1_4
  __int64 v19; // rdx
  __int64 v20; // rax
  unsigned int v21; // r10d
  __int64 v22; // rax
  float *v23; // rbx
  unsigned int v24; // edi
  unsigned int v25; // r15d
  __int64 i; // rbp
  float v27; // xmm4_4
  __int64 v28; // rax
  __int64 v29; // r8
  int v30; // edx
  float v31; // xmm4_4
  float v32; // xmm6_4
  float v33; // xmm7_4
  float v34; // xmm2_4
  float v35; // xmm5_4
  char v36; // r12
  float v37; // xmm8_4
  float v38; // xmm3_4
  float v39; // xmm2_4
  float *v40; // r13
  float *v41; // rax
  float *v42; // rdx
  float *v43; // rcx
  int v44; // ecx
  float v45; // xmm2_4
  float *v46; // r13
  float v47; // xmm3_4
  float v48; // xmm2_4
  float v49; // xmm0_4
  float *v50; // rsi
  float v51; // xmm6_4
  float v52; // xmm7_4
  float v53; // xmm6_4
  float v54; // xmm0_4
  unsigned __int64 j; // rdx
  int v56; // ecx
  int v57; // edx
  bool v58; // zf
  char *v59; // rcx
  unsigned int v60; // ecx
  __int64 v61; // rax
  __int64 v62; // rax
  unsigned int v64; // [rsp+100h] [rbp+18h]

  v4 = a1;
  if ( a3 )
  {
    v5 = *((_QWORD *)a1 + 1);
    v6 = 0;
    v7 = *(float *)a1;
    v8 = *((_QWORD *)a1 + 2);
    if ( v5 )
    {
      v9 = 0;
      do
      {
        v10 = v6 + 1;
        v11 = (v6 + 1) % v5;
        v12 = v6 + 1;
        v13 = *(float *)(v8 + 8 * v11) - *(float *)(v8 + 8LL * v6);
        v14 = *(float *)(v8 + 8 * v11 + 4) - *(float *)(v8 + 8LL * v6 + 4);
        if ( v7 <= COERCE_FLOAT(LODWORD(v13) & _xmm) || v7 <= COERCE_FLOAT(LODWORD(v14) & _xmm) )
        {
          v15 = (float)(v14 * v14) + (float)(v13 * v13);
          if ( v15 < 0.0 )
            v16 = sqrtf_0(v15);
          else
            v16 = fsqrt(v15);
          v17 = (float)(1.0 / v16) * v14;
          v18 = (float)(1.0 / v16) * v13;
        }
        else
        {
          v17 = 0.0;
          v18 = 0.0;
        }
        v19 = v9;
        v20 = v9;
        v9 += 32;
        v6 = v10;
        *(float *)((char *)a2 + v20) = v18;
        *(float *)((char *)a2 + v19 + 4) = v17;
      }
      while ( v12 < v5 );
    }
  }
  v21 = *((_DWORD *)v4 + 2);
  do
  {
    if ( !v21 )
      break;
    v22 = 32LL * --v21;
    if ( *(float *)((char *)a2 + v22) != 0.0 )
      break;
  }
  while ( *(float *)((char *)a2 + v22 + 4) == 0.0 );
  v64 = v21;
  if ( v21 )
  {
    v23 = (float *)((char *)a2 + 24);
    v24 = 0;
    v25 = v21;
    for ( i = 0LL; ; i += 4LL )
    {
      v27 = *(v23 - 6);
      v28 = 32LL * v25;
      if ( v27 != 0.0 || *(v23 - 5) != 0.0 )
        break;
LABEL_37:
      ++v24;
      v23 += 8;
      if ( v24 > v21 )
        return;
    }
    v29 = *((_QWORD *)v4 + 3);
    v30 = *(_DWORD *)(v29 + i);
    if ( !v30 && !*(_DWORD *)(v29 + 4LL * v25) )
    {
      v46 = v23 - 2;
      *((_QWORD *)v23 - 2) = 0LL;
      *(v23 - 2) = 0.0;
      v50 = v23 + 1;
      *(_QWORD *)(v23 - 1) = 0LL;
      goto LABEL_47;
    }
    LODWORD(v31) = LODWORD(v27) ^ _xmm;
    v32 = *(float *)((char *)a2 + v28 + 4);
    v33 = *(float *)((char *)a2 + v28);
    v34 = (float)(*(v23 - 5) * v33) + (float)(v31 * v32);
    if ( COERCE_FLOAT(LODWORD(v34) & _xmm) < 0.0000011920929 )
    {
      v33 = *(v23 - 5);
      v32 = v31;
      v34 = FLOAT_2_0;
      v35 = v33;
    }
    else
    {
      v35 = v31;
      LODWORD(v31) = *((_DWORD *)v23 - 5) ^ _xmm;
    }
    v36 = 0;
    v37 = 0.5 / v34;
    if ( v30 == 3 )
    {
      LODWORD(v38) = LODWORD(v33) ^ _xmm;
      LODWORD(v39) = LODWORD(v32) ^ _xmm;
      v36 = 1;
    }
    else
    {
      v57 = v30 - 1;
      if ( v57 )
      {
        v58 = v57 == 1;
        v43 = v23 - 1;
        v42 = v23 - 3;
        v41 = v23;
        v40 = v23 - 4;
        if ( v58 )
        {
          v39 = v32;
          v38 = v33;
        }
        else
        {
          v32 = 0.0;
          v33 = 0.0;
          v39 = 0.0;
          v38 = 0.0;
        }
LABEL_25:
        *v40 = v38;
        *v42 = v39;
        *v43 = v33;
        *v41 = v32;
        v44 = *(_DWORD *)(v29 + 4LL * v25);
        if ( v44 == 3 )
        {
          v36 = 1;
          v38 = v38 - v35;
          v39 = v39 - v31;
        }
        else
        {
          v56 = v44 - 1;
          if ( !v56 )
          {
            v38 = v38 - v35;
            v39 = v39 - v31;
            v33 = v33 - v35;
            v32 = v32 - v31;
            goto LABEL_28;
          }
          if ( v56 != 1 )
            goto LABEL_29;
          v38 = v35 + v38;
          v39 = v31 + v39;
        }
        v32 = v32 + v31;
        v33 = v35 + *(v23 - 1);
LABEL_28:
        *(v23 - 1) = v33;
        *v23 = v32;
LABEL_29:
        v45 = v39 * v37;
        v46 = v23 - 2;
        v47 = v38 * v37;
        *(v23 - 3) = v45;
        *(v23 - 4) = v47;
        v48 = (float)(v45 * v45) + (float)(v47 * v47);
        if ( v48 < 0.0 )
          v49 = sqrtf_0(v48);
        else
          v49 = fsqrt(v48);
        *v46 = v49;
        v50 = v23 + 1;
        if ( v36 )
        {
          v51 = v32 * v37;
          v52 = v33 * v37;
          *v23 = v51;
          *(v23 - 1) = v52;
          v53 = (float)(v51 * v51) + (float)(v52 * v52);
          if ( v53 < 0.0 )
            v54 = sqrtf_0(v53);
          else
            v54 = fsqrt(v53);
          v21 = v64;
          *v50 = v54;
LABEL_35:
          for ( j = (unsigned __int64)(v25 + 1) % *((_QWORD *)a1 + 1);
                (_DWORD)j != v24;
                j = (unsigned __int64)(unsigned int)(j + 1) % *((_QWORD *)a1 + 1) )
          {
            v59 = (char *)a2 + 32 * (unsigned int)j;
            *((_QWORD *)v59 + 1) = *((_QWORD *)v23 - 2);
            *((float *)v59 + 4) = *v46;
            *(_QWORD *)(v59 + 20) = *(_QWORD *)(v23 - 1);
            *((float *)v59 + 7) = *v50;
          }
          v4 = a1;
          v25 = v24;
          goto LABEL_37;
        }
        v21 = v64;
LABEL_47:
        *v50 = 0.0;
        goto LABEL_35;
      }
      LODWORD(v33) ^= _xmm;
      LODWORD(v32) ^= _xmm;
      v38 = v33;
      v39 = v32;
    }
    v40 = v23 - 4;
    v41 = v23;
    v42 = v23 - 3;
    v43 = v23 - 1;
    goto LABEL_25;
  }
  v60 = 0;
  if ( *((_QWORD *)v4 + 1) )
  {
    v61 = 0LL;
    do
    {
      v62 = 32 * v61;
      ++v60;
      *(_QWORD *)((char *)a2 + v62 + 8) = 0LL;
      *(_QWORD *)((char *)a2 + v62 + 16) = 0LL;
      *(_QWORD *)((char *)a2 + v62 + 24) = 0LL;
      v61 = v60;
    }
    while ( (unsigned __int64)v60 < *((_QWORD *)v4 + 1) );
  }
}
