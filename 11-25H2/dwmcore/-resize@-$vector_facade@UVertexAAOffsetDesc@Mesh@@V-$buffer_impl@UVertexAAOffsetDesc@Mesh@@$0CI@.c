/*
 * XREFs of ?resize@?$vector_facade@UVertexAAOffsetDesc@Mesh@@V?$buffer_impl@UVertexAAOffsetDesc@Mesh@@$0CI@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAX_K@Z @ 0x180190CA0
 * Callers:
 *     ?AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@@Z @ 0x18008B5B0 (-AppendHWPrimitive@CDrawListEntryBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAtt.c)
 *     ?AppendHWGeometry@CDrawListEntryBuilder@@AEAAXAEBUMeshDesc@Mesh@@PEBUPrimitiveVertexAttributesDesc@@@Z @ 0x18016A110 (-AppendHWGeometry@CDrawListEntryBuilder@@AEAAXAEBUMeshDesc@Mesh@@PEBUPrimitiveVertexAttributesDe.c)
 *     ?GenerateGeometry@Mesh@@SAXAEBUMeshDesc@1@PEAUGeometryBuffers@1@@Z @ 0x18016BE70 (-GenerateGeometry@Mesh@@SAXAEBUMeshDesc@1@PEAUGeometryBuffers@1@@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800E2400 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x1800E2490 (--_U@YAPEAX_K@Z.c)
 *     ?clear_region@?$vector_facade@UVertexAAOffsetDesc@Mesh@@V?$buffer_impl@UVertexAAOffsetDesc@Mesh@@$0CI@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x180190F08 (-clear_region@-$vector_facade@UVertexAAOffsetDesc@Mesh@@V-$buffer_impl@UVertexAAOffsetDesc@Mesh@.c)
 *     ??$_Get_unwrapped_n@AEAV?$checked_array_iterator@PEAUVertexAAOffsetDesc@Mesh@@@stdext@@_J@std@@YA?A_TAEAV?$checked_array_iterator@PEAUVertexAAOffsetDesc@Mesh@@@stdext@@_J@Z @ 0x1801917A0 (--$_Get_unwrapped_n@AEAV-$checked_array_iterator@PEAUVertexAAOffsetDesc@Mesh@@@stdext@@_J@std@@Y.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x1801924B0 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     ??$move_backward@V?$move_iterator@PEAUVertexAAOffsetDesc@Mesh@@@std@@V?$checked_array_iterator@PEAUVertexAAOffsetDesc@Mesh@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUVertexAAOffsetDesc@Mesh@@@stdext@@V?$move_iterator@PEAUVertexAAOffsetDesc@Mesh@@@0@0V12@@Z @ 0x180290B4C (--$move_backward@V-$move_iterator@PEAUVertexAAOffsetDesc@Mesh@@@std@@V-$checked_array_iterator@P.c)
 *     memmove_0 @ 0x1802E8980 (memmove_0.c)
 */

__int64 __fastcall detail::vector_facade<Mesh::VertexAAOffsetDesc,detail::buffer_impl<Mesh::VertexAAOffsetDesc,40,1,detail::liberal_expansion_policy>>::resize(
        void **a1,
        unsigned __int64 a2)
{
  __int64 v2; // r8
  char *v4; // rdi
  unsigned __int64 v5; // r12
  _BYTE *v6; // rcx
  unsigned __int64 v7; // r15
  __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  char *v10; // r10
  unsigned __int64 v11; // rax
  _OWORD *v12; // r9
  __int64 result; // rax
  char *v14; // rsi
  unsigned __int64 v15; // r14
  LPVOID v16; // rax
  char *v17; // rdi
  _BYTE *v18; // rsi
  LPVOID v19; // rbx
  signed __int64 v20; // rsi
  void *v21; // rax
  void *v22; // rcx
  bool v23; // zf
  __int64 v24; // r14
  _OWORD *v25; // r8
  unsigned __int64 v26; // rsi
  char *v27; // rax
  __int128 v28; // [rsp+20h] [rbp-40h] BYREF
  __int64 v29; // [rsp+30h] [rbp-30h]
  __int128 v30; // [rsp+40h] [rbp-20h] BYREF
  __int64 v31; // [rsp+50h] [rbp-10h]

  v2 = (__int64)a1[1];
  v4 = (char *)*a1;
  v5 = (v2 - (__int64)*a1) >> 5;
  if ( a2 <= v5 )
    return detail::vector_facade<Mesh::VertexAAOffsetDesc,detail::buffer_impl<Mesh::VertexAAOffsetDesc,40,1,detail::liberal_expansion_policy>>::clear_region(
             a1,
             (__int64)(32 * a2) >> 5,
             (__int64)(v2 - (_QWORD)v4 - 32 * a2) >> 5);
  v6 = a1[2];
  v7 = a2 - v5;
  if ( (__int64)&v6[-v2] >> 5 < a2 - v5 )
  {
    v15 = detail::liberal_expansion_policy::expand(
            (detail::liberal_expansion_policy *)((v6 - v4) >> 5),
            (v6 - v4) >> 5,
            a2);
    v16 = operator new[](saturated_mul(v15, 0x20uLL));
    v17 = (char *)*a1;
    v18 = a1[1];
    v19 = v16;
    v29 = 0LL;
    v20 = v18 - v17;
    *(_QWORD *)&v28 = v16;
    *((_QWORD *)&v28 + 1) = v5;
    v31 = 0LL;
    v30 = v28;
    v21 = (void *)std::_Get_unwrapped_n<stdext::checked_array_iterator<Mesh::VertexAAOffsetDesc *> &,__int64>(
                    &v30,
                    v20 >> 5);
    memmove_0(v21, v17, v20);
    v22 = *a1;
    v23 = *a1 == a1 + 3;
    *a1 = v19;
    if ( v23 )
      v22 = 0LL;
    operator delete(v22);
    v4 = (char *)*a1;
    v2 = (__int64)*a1 + 32 * v5;
    v24 = (__int64)*a1 + 32 * v15;
    a1[1] = (void *)v2;
    a1[2] = (void *)v24;
  }
  v8 = (v2 - (__int64)v4) >> 5;
  v9 = v8 - v5;
  v10 = &v4[32 * v8];
  if ( v7 && (!v10 || (v7 & 0x8000000000000000uLL) != 0LL) )
    goto LABEL_5;
  v11 = ((v2 - (__int64)v4) >> 5) - v5;
  if ( v7 < v9 )
    v11 = v7;
  v12 = (_OWORD *)(v2 - 32 * v11);
  if ( (_OWORD *)v2 != v12 )
  {
    v25 = (_OWORD *)(v2 - 32);
    v26 = v7;
    v27 = &v10[32 * v7];
    if ( v10 )
    {
      while ( v26 )
      {
        --v26;
        v27 -= 32;
        if ( v26 >= v7 )
          break;
        *(_OWORD *)v27 = *v25;
        *((_OWORD *)v27 + 1) = v25[1];
        if ( v25 == v12 )
          goto LABEL_10;
        v25 -= 2;
      }
    }
    goto LABEL_5;
  }
LABEL_10:
  if ( v9 <= v7 )
    goto LABEL_11;
  if ( v8 && (!v4 || v8 < 0) )
LABEL_5:
    _invalid_parameter_noinfo_noreturn();
  *((_QWORD *)&v28 + 1) = v8;
  v29 = v8;
  *(_QWORD *)&v28 = v4;
  std::move_backward<std::move_iterator<Mesh::VertexAAOffsetDesc *>,stdext::checked_array_iterator<Mesh::VertexAAOffsetDesc *>>(
    &v30,
    &v4[32 * v5],
    &v4[32 * (v8 - v7)],
    &v28);
LABEL_11:
  result = 32 * v7;
  a1[1] = (char *)a1[1] + 32 * v7;
  v14 = &v4[32 * v5];
  if ( v7 )
  {
    *(_OWORD *)v14 = 0LL;
    *((_OWORD *)v14 + 1) = 0LL;
    qmemcpy(v14 + 32, v14, 8 * ((32 * v7 - 25) >> 3));
  }
  return result;
}
