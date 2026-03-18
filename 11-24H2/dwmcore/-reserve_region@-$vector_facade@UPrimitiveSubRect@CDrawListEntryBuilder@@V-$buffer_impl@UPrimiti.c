/*
 * XREFs of ?reserve_region@?$vector_facade@UPrimitiveSubRect@CDrawListEntryBuilder@@V?$buffer_impl@UPrimitiveSubRect@CDrawListEntryBuilder@@$08$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUPrimitiveSubRect@CDrawListEntryBuilder@@_K0@Z @ 0x1801CBCDC
 * Callers:
 *     ?PartitionPrimitiveWithRoundedRectangleClip@CDrawListEntryBuilder@@CA_NIAEBUD2D_RECT_F@@W4D2D1_EDGE_FLAGS@@AEBUCRoundedRectangleGeometryData@@PEAV?$vector_facade@UPrimitiveSubRect@CDrawListEntryBuilder@@V?$buffer_impl@UPrimitiveSubRect@CDrawListEntryBuilder@@$08$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x1800707A0 (-PartitionPrimitiveWithRoundedRectangleClip@CDrawListEntryBuilder@@CA_NIAEBUD2D_RECT_F@@W4D2D1_E.c)
 * Callees:
 *     ??1?$unique_ptr@$$BY0A@U?$aligned_storage_for@UEffectInput@@@detail@@U?$default_delete@$$BY0A@U?$aligned_storage_for@UEffectInput@@@detail@@@std@@@std@@QEAA@XZ @ 0x180046790 (--1-$unique_ptr@$$BY0A@U-$aligned_storage_for@UEffectInput@@@detail@@U-$default_delete@$$BY0A@U-.c)
 *     ??3@YAXPEAX@Z @ 0x1800BC0C0 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x1800BC150 (--_U@YAPEAX_K@Z.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x1801751F8 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     ??$uninitialized_move@V?$move_iterator@PEAVMatrix3x2F@D2D1@@@std@@V?$checked_array_iterator@PEAVMatrix3x2F@D2D1@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAVMatrix3x2F@D2D1@@@stdext@@V?$move_iterator@PEAVMatrix3x2F@D2D1@@@0@0V12@@Z @ 0x1802257B8 (--$uninitialized_move@V-$move_iterator@PEAVMatrix3x2F@D2D1@@@std@@V-$checked_array_iterator@PEAV.c)
 *     ??$move_backward@V?$move_iterator@PEAVMatrix3x2F@D2D1@@@std@@V?$checked_array_iterator@PEAVMatrix3x2F@D2D1@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAVMatrix3x2F@D2D1@@@stdext@@V?$move_iterator@PEAVMatrix3x2F@D2D1@@@0@0V12@@Z @ 0x18024AED0 (--$move_backward@V-$move_iterator@PEAVMatrix3x2F@D2D1@@@std@@V-$checked_array_iterator@PEAVMatri.c)
 */

char *__fastcall detail::vector_facade<CDrawListEntryBuilder::PrimitiveSubRect,detail::buffer_impl<CDrawListEntryBuilder::PrimitiveSubRect,9,1,detail::liberal_expansion_policy>>::reserve_region(
        void **a1,
        __int64 a2,
        void *a3)
{
  char *v3; // rbx
  _BYTE *v4; // rsi
  _BYTE *v7; // rdx
  _BYTE *v8; // r8
  signed __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  __int64 v11; // r9
  __int64 v12; // rax
  _BYTE *v13; // r10
  __int64 v14; // rdi
  unsigned __int64 v16; // rsi
  _BYTE *v17; // rax
  unsigned __int64 v18; // rdi
  LPVOID v19; // rax
  void *v20; // r8
  void *v21; // rdx
  LPVOID v22; // rbx
  void *v23; // rcx
  bool v24; // zf
  char *v25; // rdx
  __int128 v26; // [rsp+20h] [rbp-40h] BYREF
  signed __int64 v27; // [rsp+30h] [rbp-30h]
  __int128 v28; // [rsp+40h] [rbp-20h] BYREF
  __int64 v29; // [rsp+50h] [rbp-10h]
  void *v30; // [rsp+A0h] [rbp+40h] BYREF

  v30 = a3;
  v4 = a1[1];
  v7 = a1[2];
  if ( 0xAAAAAAAAAAAAAAABuLL * ((v7 - v4) >> 3) )
    goto LABEL_2;
  v16 = 0xAAAAAAAAAAAAAAABuLL * ((v4 - (_BYTE *)*a1) >> 3);
  if ( v16 + 1 >= v16 )
  {
    v18 = detail::liberal_expansion_policy::expand(
            (detail::liberal_expansion_policy *)0xAAAAAAAAAAAAAAABLL,
            0xAAAAAAAAAAAAAAABuLL * ((v7 - (_BYTE *)*a1) >> 3),
            v16 + 1);
    v19 = operator new[](saturated_mul(v18, 0x18uLL));
    v20 = a1[1];
    v21 = *a1;
    *(_QWORD *)&v26 = v19;
    v22 = v19;
    *((_QWORD *)&v26 + 1) = v16;
    v27 = 0LL;
    v28 = v26;
    v29 = 0LL;
    std::uninitialized_move<std::move_iterator<D2D1::Matrix3x2F *>,stdext::checked_array_iterator<D2D1::Matrix3x2F *>>(
      &v26,
      v21,
      v20,
      &v28);
    v23 = *a1;
    v24 = *a1 == a1 + 3;
    v30 = 0LL;
    *a1 = v22;
    if ( v24 )
      v23 = 0LL;
    operator delete(v23);
    v25 = (char *)*a1;
    a1[1] = (char *)*a1 + 24 * v16;
    a1[2] = &v25[24 * v18];
    std::unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>::~unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>(&v30);
LABEL_2:
    v3 = (char *)*a1;
    v8 = a1[1];
    v9 = 0xAAAAAAAAAAAAAAABuLL * ((v8 - (_BYTE *)*a1) >> 3);
    v10 = v9 - a2;
    v11 = (__int64)*a1 + 8 * ((v8 - (_BYTE *)*a1) >> 3);
    if ( !v11 )
      goto LABEL_9;
    v12 = 0xAAAAAAAAAAAAAAABuLL * (((_BYTE *)a1[1] - (_BYTE *)*a1) >> 3) - a2;
    if ( v10 > 1 )
      v12 = 1LL;
    v13 = &v8[-24 * v12];
    if ( v8 == v13 )
      goto LABEL_6;
    goto LABEL_17;
  }
  std::_Xoverflow_error("overflow");
  __debugbreak();
LABEL_17:
  v17 = v8 - 24;
  *(_OWORD *)v11 = *(_OWORD *)v17;
  *(_QWORD *)(v11 + 16) = *((_QWORD *)v17 + 2);
  if ( v17 != v13 )
    goto LABEL_9;
LABEL_6:
  if ( v10 > 1 )
  {
    if ( !v9 || v3 && v9 >= 0 )
    {
      *((_QWORD *)&v26 + 1) = v9;
      v27 = v9;
      v14 = 24 * a2;
      *(_QWORD *)&v26 = v3;
      std::move_backward<std::move_iterator<D2D1::Matrix3x2F *>,stdext::checked_array_iterator<D2D1::Matrix3x2F *>>(
        &v28,
        &v3[24 * a2],
        &v3[24 * v9 - 24],
        &v26);
      goto LABEL_8;
    }
LABEL_9:
    _invalid_parameter_noinfo_noreturn();
  }
  v14 = 24 * a2;
LABEL_8:
  a1[1] = (char *)a1[1] + 24;
  return &v3[v14];
}
