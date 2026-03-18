/*
 * XREFs of ??$_Find_lower_bound@UD2D_VECTOR_2F@@@?$_Tree@V?$_Tmap_traits@$$CBUD2D_VECTOR_2F@@UEdgeData@?$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAntialiasSink@@@@UCompareEdgeDirection@3@V?$allocator@U?$pair@$$CBUD2D_VECTOR_2F@@UEdgeData@?$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAntialiasSink@@@@@std@@@std@@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@$$CBUD2D_VECTOR_2F@@UEdgeData@?$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAntialiasSink@@@@@std@@PEAX@std@@@1@AEBUD2D_VECTOR_2F@@@Z @ 0x1801ADA60
 * Callers:
 *     ??$_Find_hint@UD2D_VECTOR_2F@@@?$_Tree@V?$_Tmap_traits@$$CBUD2D_VECTOR_2F@@UEdgeData@?$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAntialiasSink@@@@UCompareEdgeDirection@3@V?$allocator@U?$pair@$$CBUD2D_VECTOR_2F@@UEdgeData@?$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAntialiasSink@@@@@std@@@std@@$0A@@std@@@std@@IEBA?AU?$_Tree_find_hint_result@PEAU?$_Tree_node@U?$pair@$$CBUD2D_VECTOR_2F@@UEdgeData@?$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAntialiasSink@@@@@std@@PEAX@std@@@1@QEAU?$_Tree_node@U?$pair@$$CBUD2D_VECTOR_2F@@UEdgeData@?$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAntialiasSink@@@@@std@@PEAX@1@AEBUD2D_VECTOR_2F@@@Z @ 0x1801772B0 (--$_Find_hint@UD2D_VECTOR_2F@@@-$_Tree@V-$_Tmap_traits@$$CBUD2D_VECTOR_2F@@UEdgeDat_ea_1801772B0.c)
 * Callees:
 *     __security_check_cookie @ 0x1802508D0 (__security_check_cookie.c)
 */

float **__fastcall std::_Tree<std::_Tmap_traits<D2D_VECTOR_2F const,CConvexPolygonEdgeMap<CCpuClipAntialiasSink::SinkRoutingInfo>::EdgeData,CConvexPolygonEdgeMap<CCpuClipAntialiasSink::SinkRoutingInfo>::CompareEdgeDirection,std::allocator<std::pair<D2D_VECTOR_2F const,CConvexPolygonEdgeMap<CCpuClipAntialiasSink::SinkRoutingInfo>::EdgeData>>,0>>::_Find_lower_bound<D2D_VECTOR_2F>(
        __int64 a1,
        float **a2,
        float *a3)
{
  float *v5; // rdx
  float v6; // xmm1_4
  int *v7; // rcx
  float v8; // xmm0_4
  float v9; // xmm4_4
  float v10; // xmm3_4
  __int64 v11; // rax
  unsigned int v12; // r8d
  int *v13; // rcx
  __int64 v14; // rax
  int v16; // [rsp+0h] [rbp-28h] BYREF
  _DWORD v17[3]; // [rsp+4h] [rbp-24h] BYREF

  v5 = *(float **)(*(_QWORD *)a1 + 8LL);
  *a2 = v5;
  a2[1] = 0LL;
  a2[2] = *(float **)a1;
  if ( !*((_BYTE *)v5 + 25) )
  {
    v16 = 0;
    v17[0] = 1;
    v17[1] = 3;
    v17[2] = 2;
    do
    {
      *a2 = v5;
      v6 = v5[8];
      v7 = &v16;
      v8 = v5[7];
      v9 = a3[1];
      v10 = *a3;
      if ( v6 > 0.0 )
        v7 = v17;
      v11 = 2LL;
      if ( v8 >= 0.0 )
        v11 = 0LL;
      v12 = v7[v11];
      v13 = &v16;
      if ( v9 > 0.0 )
        v13 = v17;
      v14 = 2LL;
      if ( v10 >= 0.0 )
        v14 = 0LL;
      if ( v12 < v13[v14] || v12 == v13[v14] && (float)((float)(v8 * v9) - (float)(v6 * v10)) > 0.000081380211 )
      {
        *((_DWORD *)a2 + 2) = 0;
        v5 = (float *)*((_QWORD *)v5 + 2);
      }
      else
      {
        *((_DWORD *)a2 + 2) = 1;
        a2[2] = v5;
        v5 = *(float **)v5;
      }
    }
    while ( !*((_BYTE *)v5 + 25) );
  }
  return a2;
}
