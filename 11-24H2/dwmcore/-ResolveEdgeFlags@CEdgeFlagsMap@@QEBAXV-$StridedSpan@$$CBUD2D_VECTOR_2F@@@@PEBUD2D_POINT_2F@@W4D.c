/*
 * XREFs of ?ResolveEdgeFlags@CEdgeFlagsMap@@QEBAXV?$StridedSpan@$$CBUD2D_VECTOR_2F@@@@PEBUD2D_POINT_2F@@W4D2D1_EDGE_FLAGS@@PEAUResolveEdgeFlagsResult@1@M@Z @ 0x1801A9E40
 * Callers:
 *     ?AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@@Z @ 0x1800C7090 (-AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAtt.c)
 * Callees:
 *     ??$_Find@UD2D_VECTOR_2F@@@?$_Tree@V?$_Tmap_traits@$$CBUD2D_VECTOR_2F@@UEdgeData@?$CConvexPolygonEdgeMap@I@@UCompareEdgeDirection@3@V?$allocator@U?$pair@$$CBUD2D_VECTOR_2F@@UEdgeData@?$CConvexPolygonEdgeMap@I@@@std@@@std@@$0A@@std@@@std@@AEBAPEAU?$_Tree_node@U?$pair@$$CBUD2D_VECTOR_2F@@UEdgeData@?$CConvexPolygonEdgeMap@I@@@std@@PEAX@1@AEBUD2D_VECTOR_2F@@@Z @ 0x180151DFC (--$_Find@UD2D_VECTOR_2F@@@-$_Tree@V-$_Tmap_traits@$$CBUD2D_VECTOR_2F@@UEdgeData@-$CConvexPolygon.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CEdgeFlagsMap::ResolveEdgeFlags(__int64 a1, __int64 a2, __int64 a3, char a4, __int64 a5, float a6)
{
  int v6; // r12d
  __int64 v7; // r14
  unsigned __int64 v8; // rax
  __int64 v9; // r9
  __int64 v10; // rbp
  unsigned __int64 v11; // rbx
  float *v12; // r15
  int v13; // xmm4_4
  float v14; // xmm5_4
  int v15; // esi
  float v16; // xmm1_4
  float v17; // xmm0_4
  float v18; // xmm0_4
  int v19; // eax
  int v20; // eax
  int v21; // eax
  unsigned int v22; // r13d
  __int64 v23; // rax
  _QWORD *v25; // [rsp+80h] [rbp+8h]

  v25 = (_QWORD *)a1;
  v6 = a4 & 3;
  v7 = a2;
  LOBYTE(v8) = *(_BYTE *)(a1 + 24);
  v9 = a1;
  if ( !(_BYTE)v8 )
  {
    a3 = a5;
    LOBYTE(v8) = v6 == 3;
    v22 = 0;
    *(_BYTE *)(a5 + 32) = 1;
    for ( *(_BYTE *)(a5 + 33) = v6 == 3; v22 < *(_DWORD *)(a2 + 12); *(_BYTE *)(a1 + v8) = 0 )
    {
      a1 = v22;
      if ( (unsigned __int64)v22 >= *(_QWORD *)a5
        || (*(_DWORD *)(*(_QWORD *)(a5 + 8) + 4LL * v22) = v6, (unsigned __int64)v22 >= *(_QWORD *)(a5 + 16)) )
      {
LABEL_41:
        ((void (__fastcall *)(__int64, __int64, __int64, __int64))`gsl::details::get_terminate_handler'::`2'::handler)(
          a1,
          a2,
          a3,
          v9);
        __debugbreak();
      }
      v8 = *(_QWORD *)(a5 + 24);
      ++v22;
    }
    return v8;
  }
  if ( (_BYTE)v8 == 1 )
  {
    v10 = a1;
  }
  else
  {
    v10 = 0LL;
    if ( (_BYTE)v8 == 2 )
      goto LABEL_5;
  }
  v9 = 0LL;
  v25 = 0LL;
LABEL_5:
  v11 = 0LL;
  *(_WORD *)(a5 + 32) = 0;
  if ( *(_DWORD *)(a2 + 12) )
  {
    v12 = (float *)(a3 + 4);
    v13 = _xmm;
    v14 = 0.0;
    do
    {
      LOBYTE(a1) = 0;
      v15 = v6;
      if ( v10 )
      {
        a1 = *(_QWORD *)v7 + *(_DWORD *)(v7 + 8) * (int)v11;
        v16 = *(float *)a1;
        if ( *(float *)a1 == v14 && *(float *)(a1 + 4) == v14 )
          goto LABEL_18;
        if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(COERCE_FLOAT(LODWORD(v16) & v13) - 1.0) & v13) >= 0.000081380211 )
        {
          if ( COERCE_FLOAT(COERCE_UNSIGNED_INT(COERCE_FLOAT(*(_DWORD *)(a1 + 4) & v13) - 1.0) & v13) >= 0.000081380211 )
            goto LABEL_18;
          v18 = *(v12 - 1);
          if ( *(float *)(a1 + 4) <= v14 )
          {
            if ( a6 < COERCE_FLOAT(COERCE_UNSIGNED_INT(v18 - *(float *)v10) & v13) )
              goto LABEL_18;
            v20 = *(_DWORD *)(v10 + 16) & 0x3000000;
            if ( v20 == 50331648 )
            {
              v15 = 3;
            }
            else
            {
              if ( v20 != 0x1000000 )
              {
                v15 = 2;
                LOBYTE(a1) = 1;
                if ( v20 != 0x2000000 )
                  v15 = 0;
                goto LABEL_19;
              }
              v15 = 1;
            }
LABEL_36:
            LOBYTE(a1) = 1;
            goto LABEL_19;
          }
          if ( a6 < COERCE_FLOAT(COERCE_UNSIGNED_INT(v18 - *(float *)(v10 + 8)) & v13) )
            goto LABEL_18;
          v19 = *(_DWORD *)(v10 + 16) & 0x300;
          if ( v19 == 768 )
            goto LABEL_30;
          if ( v19 != 256 )
          {
            v15 = 2;
            LOBYTE(a1) = 1;
            if ( v19 != 512 )
              v15 = 0;
            goto LABEL_19;
          }
        }
        else
        {
          v17 = *v12;
          if ( v16 <= v14 )
          {
            if ( a6 < COERCE_FLOAT(COERCE_UNSIGNED_INT(v17 - *(float *)(v10 + 12)) & v13) )
              goto LABEL_18;
            v21 = *(_DWORD *)(v10 + 16) & 0x30000;
            if ( v21 == 196608 )
            {
LABEL_30:
              v15 = 3;
              LOBYTE(a1) = 1;
              goto LABEL_19;
            }
            if ( v21 != 0x10000 )
            {
              v15 = 2;
              LOBYTE(a1) = 1;
              if ( v21 != 0x20000 )
                v15 = 0;
              goto LABEL_19;
            }
          }
          else
          {
            if ( a6 < COERCE_FLOAT(COERCE_UNSIGNED_INT(v17 - *(float *)(v10 + 4)) & v13) )
              goto LABEL_18;
            a1 = *(_DWORD *)(v10 + 16) & 3;
            if ( (_DWORD)a1 == 3 )
              goto LABEL_30;
            a1 = (unsigned int)(a1 - 1);
            if ( (_DWORD)a1 )
            {
              if ( (_DWORD)a1 == 1 )
                v15 = 2;
              else
                v15 = 0;
              LOBYTE(a1) = 1;
              goto LABEL_19;
            }
          }
        }
        v15 = 1;
        a1 = 1LL;
      }
      else if ( v9 )
      {
        a2 = *(_QWORD *)v7 + *(_DWORD *)(v7 + 8) * (int)v11;
        if ( *(float *)a2 == v14 && *(float *)(a2 + 4) == v14
          || (v23 = std::_Tree<std::_Tmap_traits<D2D_VECTOR_2F const,CConvexPolygonEdgeMap<unsigned int>::EdgeData,CConvexPolygonEdgeMap<unsigned int>::CompareEdgeDirection,std::allocator<std::pair<D2D_VECTOR_2F const,CConvexPolygonEdgeMap<unsigned int>::EdgeData>>,0>>::_Find<D2D_VECTOR_2F>(
                      v9,
                      a2),
              v9 = (__int64)v25,
              v23 == *v25)
          || a6 <= COERCE_FLOAT(COERCE_UNSIGNED_INT(
                                  (float)((float)(*v12 - *(float *)(v23 + 40)) * *(float *)(v23 + 28))
                                - (float)((float)(*(v12 - 1) - *(float *)(v23 + 36)) * *(float *)(v23 + 32))) & v13) )
        {
LABEL_18:
          LOBYTE(a1) = 0;
          goto LABEL_19;
        }
        v15 = *(_DWORD *)(v23 + 44);
        goto LABEL_36;
      }
LABEL_19:
      if ( v11 >= *(_QWORD *)a5 )
        goto LABEL_41;
      *(_DWORD *)(*(_QWORD *)(a5 + 8) + 4 * v11) = v15;
      if ( v11 >= *(_QWORD *)(a5 + 16) )
        goto LABEL_41;
      *(_BYTE *)(v11 + *(_QWORD *)(a5 + 24)) = a1;
      if ( v15 == 3 )
        *(_BYTE *)(a5 + 33) = 1;
      if ( !(_BYTE)a1 )
        *(_BYTE *)(a5 + 32) = 1;
      v8 = *(unsigned int *)(v7 + 12);
      ++v11;
      v12 += 2;
    }
    while ( v11 < v8 );
  }
  return v8;
}
