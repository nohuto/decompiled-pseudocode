/*
 * XREFs of ?GenerateGeometryWorker@Mesh@@CAXAEBUMeshDesc@1@PEAUGeometryBuffers@1@@Z @ 0x18017A5D0
 * Callers:
 *     ?AppendHWGeometry@CDrawListEntryBuilder@@AEAAXAEBUMeshDesc@Mesh@@PEBUPrimitiveVertexAttributesDesc@@@Z @ 0x180177F20 (-AppendHWGeometry@CDrawListEntryBuilder@@AEAAXAEBUMeshDesc@Mesh@@PEBUPrimitiveVertexAttributesDe.c)
 *     ?GenerateGeometry@Mesh@@SAXAEBUMeshDesc@1@PEAUGeometryBuffers@1@@Z @ 0x180179C80 (-GenerateGeometry@Mesh@@SAXAEBUMeshDesc@1@PEAUGeometryBuffers@1@@Z.c)
 *     ?GenerateGeometryForRectangle@Mesh@@CAXAEBUMeshDesc@1@PEAUGeometryBuffers@1@@Z @ 0x180179D70 (-GenerateGeometryForRectangle@Mesh@@CAXAEBUMeshDesc@1@PEAUGeometryBuffers@1@@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall Mesh::GenerateGeometryWorker(const struct Mesh::MeshDesc *a1, struct Mesh::GeometryBuffers *a2)
{
  __int64 v4; // rdi
  __int64 v5; // rdx
  unsigned __int64 v6; // rbx
  char v7; // cl
  unsigned int v8; // r11d
  __int64 v9; // r10
  __int64 v10; // r8
  char v11; // bp
  bool v12; // al
  __int16 v13; // si
  char *v14; // r15
  _QWORD *v15; // r12
  _DWORD *v16; // r13
  __int64 v17; // rdx
  int v18; // ecx
  __int64 v19; // rax
  __int64 v20; // rdi
  float v21; // xmm1_4
  float v22; // xmm2_4
  __int64 v23; // rax
  int v24; // edx
  int v25; // edi
  __int64 v26; // rcx
  float v27; // xmm1_4
  __int64 v28; // rcx
  unsigned __int64 v29; // rdx
  int v30; // r10d
  __int16 v31; // r8
  __int64 v32; // rdx
  __int16 v33; // ax
  int v34; // edx
  int v35; // ecx
  int v36; // ecx
  bool v37; // [rsp+60h] [rbp+8h]
  __int16 v38; // [rsp+70h] [rbp+18h]
  __int64 v39; // [rsp+78h] [rbp+20h]

  v4 = 0LL;
  v5 = (unsigned int)(*((_DWORD *)a1 + 2) - 1);
  v6 = 0LL;
  if ( *(_DWORD *)(*((_QWORD *)a1 + 3) + 4 * v5) != 3 )
    goto LABEL_2;
  v35 = *((_DWORD *)a1 + 12);
  if ( v35 == 3 )
  {
    v7 = *(_BYTE *)(v5 + *((_QWORD *)a1 + 5)) == 0;
  }
  else
  {
    v36 = v35 - 1;
    if ( v36 )
    {
      if ( v36 != 1 )
      {
LABEL_2:
        v7 = 0;
        goto LABEL_3;
      }
      v7 = *(_BYTE *)(v5 + *((_QWORD *)a1 + 5));
    }
    else
    {
      v7 = 1;
    }
  }
LABEL_3:
  v8 = 0;
  v38 = 0;
  if ( *((_QWORD *)a1 + 1) )
  {
    v9 = 0LL;
    while ( 1 )
    {
      v10 = *((_QWORD *)a1 + 4) + 32 * v9;
      if ( *(_DWORD *)(*((_QWORD *)a1 + 3) + 4 * v9) != 3 )
        break;
      v24 = *((_DWORD *)a1 + 12);
      if ( v24 == 3 )
      {
        v11 = *(_BYTE *)(v9 + *((_QWORD *)a1 + 5)) == 0;
      }
      else
      {
        v34 = v24 - 1;
        if ( v34 )
        {
          if ( v34 != 1 )
            break;
          v11 = *(_BYTE *)(v9 + *((_QWORD *)a1 + 5));
        }
        else
        {
          v11 = 1;
        }
      }
LABEL_7:
      v12 = *(float *)(v10 + 28) > 0.0 && (v7 || v11);
      v37 = v12;
      if ( *((_BYTE *)a1 + 53) || v12 )
      {
        v13 = v4;
        v14 = (char *)a2 + 16;
        v15 = (_QWORD *)((char *)a1 + 16);
        v39 = v4 + 1;
        v16 = (_DWORD *)((char *)a2 + 8);
        v17 = *((_QWORD *)a2 + 2) + *((_DWORD *)a2 + 6) * (unsigned __int16)v4;
        *(_QWORD *)v17 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 8 * v9);
        *(_DWORD *)(v17 + 8) = *(_DWORD *)(v10 + 16);
        *(_DWORD *)(v17 + 12) = 1065353216;
        v18 = *((_DWORD *)a2 + 2) * (unsigned __int16)v4;
        v19 = *((_QWORD *)a1 + 2);
        v20 = *(_QWORD *)a2;
        v21 = *(float *)(v19 + 8 * v9);
        v22 = *(float *)(v19 + 8 * v9 + 4);
        *(float *)(v18 + v20) = v21;
        *(float *)(v18 + v20 + 4) = v22;
        *(_DWORD *)(v18 + v20 + 8) = 1065353216;
        if ( *(float *)(v17 + 8) != 0.0 )
        {
          *(float *)(v18 + v20) = v21 + *(float *)(v10 + 8);
          *(float *)(v18 + v20 + 4) = v22 + *(float *)(v10 + 12);
        }
        if ( *((_BYTE *)a1 + 53) && v8 >= 2 )
        {
          if ( v6 >= *((_QWORD *)a2 + 5) )
            goto LABEL_32;
          v23 = *((_QWORD *)a2 + 6);
          v14 = (char *)a2 + 16;
          v15 = (_QWORD *)((char *)a1 + 16);
          v16 = (_DWORD *)((char *)a2 + 8);
          *(_WORD *)(v23 + 2 * v6) = 0;
          *(_WORD *)(v23 + 2 * v6 + 2) = v38;
          *(_WORD *)(v23 + 2 * v6 + 4) = v13;
          v6 += 3LL;
        }
        if ( v37 )
        {
          v25 = (unsigned __int16)v39++;
          v26 = *(_QWORD *)v14 + *((_DWORD *)v14 + 2) * v25;
          *(_QWORD *)v26 = *(_QWORD *)(*v15 + 8 * v9);
          *(_DWORD *)(v26 + 8) = *(_DWORD *)(v10 + 28);
          *(_DWORD *)(v26 + 12) = 0;
          v27 = *(float *)(*v15 + 8 * v9 + 4) + *(float *)(v10 + 24);
          v28 = *(_QWORD *)a2 + *v16 * v25;
          *(float *)v28 = *(float *)(v10 + 20) + *(float *)(*v15 + 8 * v9);
          *(float *)(v28 + 4) = v27;
          *(_DWORD *)(v28 + 8) = 1065353216;
          if ( v11 )
          {
            v29 = (unsigned __int64)(v8 + 1) % *((_QWORD *)a1 + 1);
            v30 = v29;
            if ( *(float *)(32LL * (unsigned int)v29 + *((_QWORD *)a1 + 4) + 28) > 0.0 )
            {
              v31 = v39;
              if ( !(_DWORD)v29 )
                v31 = 0;
              if ( v6 >= *((_QWORD *)a2 + 5) )
              {
LABEL_32:
                ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
                __debugbreak();
              }
              v32 = *((_QWORD *)a2 + 6);
              v33 = 1;
              if ( v30 )
                v33 = v31 + 1;
              *(_WORD *)(v32 + 2 * v6) = v25;
              *(_WORD *)(v32 + 2 * v6 + 2) = v33;
              *(_WORD *)(v32 + 2 * v6 + 4) = v31;
              *(_WORD *)(v32 + 2 * v6 + 6) = v25;
              *(_WORD *)(v32 + 2 * v6 + 8) = v31;
              *(_WORD *)(v32 + 2 * v6 + 10) = v13;
              v6 += 6LL;
            }
          }
        }
        v4 = v39;
        v38 = v13;
      }
      ++v8;
      v7 = v11;
      v9 = v8;
      if ( (unsigned __int64)v8 >= *((_QWORD *)a1 + 1) )
        goto LABEL_21;
    }
    v11 = 0;
    goto LABEL_7;
  }
LABEL_21:
  *((_QWORD *)a2 + 4) = v4;
  *((_QWORD *)a2 + 7) = v6;
}
