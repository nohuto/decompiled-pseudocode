/*
 * XREFs of ?resize@?$vector_facade@W4D2D1_EDGE_FLAGS@@V?$buffer_impl@W4D2D1_EDGE_FLAGS@@$0CI@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAX_KAEBW4D2D1_EDGE_FLAGS@@@Z @ 0x1801917E8
 * Callers:
 *     ?AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@@Z @ 0x18008B5B0 (-AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAtt.c)
 *     ?TryGetMeshAAOffsets@CMeshCacheManager@@QEAAPEAVVertexAAOffsetsResource@Mesh@@AEBUMeshDesc@3@PEBVCShape@@AEBVMatrix3x2F@D2D1@@_N@Z @ 0x18008F360 (-TryGetMeshAAOffsets@CMeshCacheManager@@QEAAPEAVVertexAAOffsetsResource@Mesh@@AEBUMeshDesc@3@PEB.c)
 *     ?Initialize@CCpuClipAntialiasSink@@AEAAJGPEBV?$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAntialiasSink@@@@PEBVCShape@@AEBVCMILMatrix@@@Z @ 0x18016CE28 (-Initialize@CCpuClipAntialiasSink@@AEAAJGPEBV-$CConvexPolygonEdgeMap@USinkRoutingInfo@CCpuClipAn.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800E2400 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x1800E2490 (--_U@YAPEAX_K@Z.c)
 *     ?clear_region@?$vector_facade@W4D2D1_EDGE_FLAGS@@V?$buffer_impl@W4D2D1_EDGE_FLAGS@@$0CI@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x180191A40 (-clear_region@-$vector_facade@W4D2D1_EDGE_FLAGS@@V-$buffer_impl@W4D2D1_EDGE_FLAGS@@$0CI@$00Vlibe.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x1801924B0 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     ??$move_backward@V?$move_iterator@PEAW4D2D1_EDGE_FLAGS@@@std@@V?$checked_array_iterator@PEAW4D2D1_EDGE_FLAGS@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAW4D2D1_EDGE_FLAGS@@@stdext@@V?$move_iterator@PEAW4D2D1_EDGE_FLAGS@@@0@0V12@@Z @ 0x180238180 (--$move_backward@V-$move_iterator@PEAW4D2D1_EDGE_FLAGS@@@std@@V-$checked_array_iterator@PEAW4D2D.c)
 *     ??$_Get_unwrapped_n@AEAV?$checked_array_iterator@PEAW4Type@IRenderTarget@@@stdext@@_J@std@@YA?A_TAEAV?$checked_array_iterator@PEAW4Type@IRenderTarget@@@stdext@@_J@Z @ 0x1802522B0 (--$_Get_unwrapped_n@AEAV-$checked_array_iterator@PEAW4Type@IRenderTarget@@@stdext@@_J@std@@YA-A_.c)
 *     memmove_0 @ 0x1802E8980 (memmove_0.c)
 */

__int64 __fastcall detail::vector_facade<enum D2D1_EDGE_FLAGS,detail::buffer_impl<enum D2D1_EDGE_FLAGS,40,1,detail::liberal_expansion_policy>>::resize(
        const void **a1,
        unsigned __int64 a2,
        unsigned int *a3)
{
  char *v3; // rdi
  unsigned int *v4; // rsi
  __int64 v5; // r8
  const void **v6; // rbx
  unsigned __int64 v7; // r13
  _BYTE *v8; // rcx
  unsigned __int64 v9; // r15
  unsigned __int64 v10; // r12
  __int64 v11; // rcx
  unsigned __int64 v12; // r9
  char *v13; // r11
  unsigned __int64 v14; // rax
  _DWORD *v15; // r10
  __int64 result; // rax
  unsigned int *v17; // r8
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rdx
  char *v20; // rdi
  unsigned __int64 i; // rcx
  unsigned __int64 v22; // r15
  unsigned __int64 v23; // r14
  const void *v24; // rax
  _BYTE *v25; // rbx
  const void *v26; // rsi
  signed __int64 v27; // rdi
  void *v28; // rax
  void *v29; // rcx
  bool v30; // zf
  __int64 v31; // rax
  _DWORD *v32; // r8
  unsigned __int64 v33; // rdx
  __int128 v34; // [rsp+20h] [rbp-40h] BYREF
  __int64 v35; // [rsp+30h] [rbp-30h]
  __int128 v36; // [rsp+40h] [rbp-20h] BYREF
  __int64 v37; // [rsp+50h] [rbp-10h]

  v3 = (char *)*a1;
  v4 = a3;
  v5 = (__int64)a1[1];
  v6 = a1;
  v7 = (v5 - (__int64)*a1) >> 2;
  if ( a2 <= v7 )
    return detail::vector_facade<enum D2D1_EDGE_FLAGS,detail::buffer_impl<enum D2D1_EDGE_FLAGS,40,1,detail::liberal_expansion_policy>>::clear_region(
             a1,
             (__int64)(4 * a2) >> 2,
             (__int64)(v5 - (_QWORD)v3 - 4 * a2) >> 2);
  v8 = a1[2];
  v9 = a2 - v7;
  v10 = 0LL;
  if ( (__int64)&v8[-v5] >> 2 < a2 - v7 )
  {
    v23 = detail::liberal_expansion_policy::expand(
            (detail::liberal_expansion_policy *)((v8 - v3) >> 2),
            (v8 - v3) >> 2,
            a2);
    v24 = operator new[](saturated_mul(v23, 4uLL));
    v25 = *v6;
    v26 = v24;
    *(_QWORD *)&v34 = v24;
    *((_QWORD *)&v34 + 1) = v7;
    v27 = (_BYTE *)a1[1] - v25;
    v35 = 0LL;
    v36 = v34;
    v37 = 0LL;
    v28 = (void *)std::_Get_unwrapped_n<stdext::checked_array_iterator<enum IRenderTarget::Type *> &,__int64>(
                    &v36,
                    v27 >> 2);
    memmove_0(v28, v25, v27);
    v6 = a1;
    v29 = (void *)*a1;
    v30 = *a1 == a1 + 3;
    *a1 = v26;
    if ( v30 )
      v29 = 0LL;
    operator delete(v29);
    v3 = (char *)*a1;
    v4 = a3;
    v5 = (__int64)*a1 + 4 * v7;
    v31 = (__int64)*a1 + 4 * v23;
    a1[1] = (const void *)v5;
    a1[2] = (const void *)v31;
  }
  v11 = (v5 - (__int64)v3) >> 2;
  v12 = v11 - v7;
  v13 = &v3[4 * v11];
  if ( v9 && (!v13 || (v9 & 0x8000000000000000uLL) != 0LL) )
    goto LABEL_6;
  v14 = ((v5 - (__int64)v3) >> 2) - v7;
  if ( v9 < v12 )
    v14 = v9;
  v15 = (_DWORD *)(v5 - 4 * v14);
  if ( (_DWORD *)v5 != v15 )
  {
    v32 = (_DWORD *)(v5 - 4);
    v33 = v9;
    if ( v13 )
    {
      while ( v33 )
      {
        if ( --v33 >= v9 )
          break;
        *(_DWORD *)&v13[4 * v33] = *v32;
        if ( v32 == v15 )
          goto LABEL_10;
        --v32;
      }
    }
LABEL_6:
    _invalid_parameter_noinfo_noreturn();
  }
LABEL_10:
  if ( v12 > v9 )
  {
    if ( v11 && (!v3 || v11 < 0) )
      goto LABEL_6;
    *((_QWORD *)&v34 + 1) = v11;
    v35 = v11;
    *(_QWORD *)&v34 = v3;
    std::move_backward<std::move_iterator<enum D2D1_EDGE_FLAGS *>,stdext::checked_array_iterator<enum D2D1_EDGE_FLAGS *>>(
      &v36,
      &v3[4 * v7],
      &v3[4 * (v11 - v9)],
      &v34);
  }
  result = (__int64)v6[1];
  v17 = (unsigned int *)&v3[4 * v7];
  v6[1] = (const void *)(result + 4 * v9);
  if ( v9 )
  {
    if ( v9 < 4 || v17 <= v4 && &v17[v9 - 1] >= v4 )
      goto LABEL_21;
    v18 = v9 & 0x7FFFFFFFFFFFFFFCLL;
    do
      v10 += 4LL;
    while ( v10 < v18 );
    v19 = 4 * v18;
    result = (int)*v4;
    v20 = &v3[4 * v7];
    for ( i = v19 >> 2; i; --i )
    {
      *(_DWORD *)v20 = result;
      v20 += 4;
    }
    v17 = (unsigned int *)((char *)v17 + v19);
    if ( v10 < v9 )
    {
LABEL_21:
      v22 = v9 - v10;
      do
      {
        result = *v4;
        *v17++ = result;
        --v22;
      }
      while ( v22 );
    }
  }
  return result;
}
