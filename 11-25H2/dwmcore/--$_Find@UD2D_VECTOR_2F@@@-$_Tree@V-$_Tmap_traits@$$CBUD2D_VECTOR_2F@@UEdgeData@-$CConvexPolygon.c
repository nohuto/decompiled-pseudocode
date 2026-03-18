/*
 * XREFs of ??$_Find@UD2D_VECTOR_2F@@@?$_Tree@V?$_Tmap_traits@$$CBUD2D_VECTOR_2F@@UEdgeData@?$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAntialiasSink@@@@UCompareEdgeDirection@3@V?$allocator@U?$pair@$$CBUD2D_VECTOR_2F@@UEdgeData@?$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAntialiasSink@@@@@std@@@std@@$0A@@std@@@std@@AEBAPEAU?$_Tree_node@U?$pair@$$CBUD2D_VECTOR_2F@@UEdgeData@?$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAntialiasSink@@@@@std@@PEAX@1@AEBUD2D_VECTOR_2F@@@Z @ 0x18016D9B0
 * Callers:
 *     ?TryAddEdge@?$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAntialiasSink@@@@QEAA_NAEBUD2D_VECTOR_2F@@AEBUD2D_POINT_2F@@AEBUSinkRoutingInfo@CCpuClipAntialiasSink@@M@Z @ 0x18016D7CC (-TryAddEdge@-$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAntialiasSink@@@@QEAA_NAEBUD2D_VECT.c)
 * Callees:
 *     __security_check_cookie @ 0x18025BF00 (__security_check_cookie.c)
 */

float *__fastcall std::_Tree<std::_Tmap_traits<D2D_VECTOR_2F const,CConvexPolygonEdgeMap<CCpuClipAntialiasSink::SinkRoutingInfo>::EdgeData,CConvexPolygonEdgeMap<CCpuClipAntialiasSink::SinkRoutingInfo>::CompareEdgeDirection,std::allocator<std::pair<D2D_VECTOR_2F const,CConvexPolygonEdgeMap<CCpuClipAntialiasSink::SinkRoutingInfo>::EdgeData>>,0>>::_Find<D2D_VECTOR_2F>(
        float **a1,
        float *a2)
{
  float *v2; // r11
  float *v4; // r8
  __int64 v5; // r10
  float v6; // xmm4_4
  float v7; // xmm3_4
  int *v8; // rcx
  __int64 v9; // rax
  unsigned int v10; // r9d
  float v11; // xmm1_4
  float v12; // xmm0_4
  int *v13; // rcx
  __int64 v14; // rax
  float v15; // xmm3_4
  __int64 v16; // rcx
  float v17; // xmm4_4
  __int64 v18; // rdx
  float v19; // xmm0_4
  __int64 v20; // rax
  float v21; // xmm1_4
  unsigned int v22; // r8d
  int v24; // [rsp+0h] [rbp-38h] BYREF
  _DWORD v25[3]; // [rsp+4h] [rbp-34h] BYREF
  _DWORD v26[3]; // [rsp+10h] [rbp-28h] BYREF
  int v27; // [rsp+1Ch] [rbp-1Ch]

  v2 = *a1;
  v27 = 0;
  v4 = (float *)*((_QWORD *)v2 + 1);
  v5 = 2LL;
  if ( !*((_BYTE *)v4 + 25) )
  {
    v6 = a2[1];
    v7 = *a2;
    v8 = &v24;
    v24 = 0;
    v25[0] = 1;
    v25[1] = 3;
    v25[2] = 2;
    if ( v6 > 0.0 )
      v8 = v25;
    v9 = 2LL;
    if ( v7 >= 0.0 )
      v9 = 0LL;
    v10 = v8[v9];
    do
    {
      v11 = v4[8];
      v12 = v4[7];
      v13 = &v24;
      if ( v11 > 0.0 )
        v13 = v25;
      v14 = 2LL;
      if ( v12 >= 0.0 )
        v14 = 0LL;
      if ( v13[v14] < v10 || v13[v14] == v10 && (float)((float)(v12 * v6) - (float)(v11 * v7)) > 0.000081380211 )
      {
        v4 = (float *)*((_QWORD *)v4 + 2);
      }
      else
      {
        v2 = v4;
        v4 = *(float **)v4;
      }
    }
    while ( !*((_BYTE *)v4 + 25) );
  }
  if ( *((_BYTE *)v2 + 25) )
    return *a1;
  v15 = *a2;
  v16 = 2LL;
  v17 = a2[1];
  v18 = 1LL;
  v19 = v2[8];
  v20 = 1LL;
  v21 = v2[7];
  v26[0] = 0;
  v26[1] = 1;
  v26[2] = 3;
  v27 = 2;
  if ( v15 >= 0.0 )
    v16 = 0LL;
  if ( v17 <= 0.0 )
    v20 = 0LL;
  v22 = v26[v20 + v16];
  if ( v19 <= 0.0 )
    v18 = 0LL;
  if ( v21 >= 0.0 )
    v5 = 0LL;
  if ( v22 < v26[v5 + v18] || v22 == v26[v5 + v18] && (float)((float)(v19 * v15) - (float)(v21 * v17)) > 0.000081380211 )
    return *a1;
  else
    return v2;
}
