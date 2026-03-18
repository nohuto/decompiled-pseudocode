/*
 * XREFs of ??$emplace_back@UD2D_RECT_F@@W4D2D1_EDGE_FLAGS@@_N@?$vector_facade@UPrimitiveSubRect@CDrawListEntryBuilder@@V?$buffer_impl@UPrimitiveSubRect@CDrawListEntryBuilder@@$08$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXUD2D_RECT_F@@W4D2D1_EDGE_FLAGS@@_N@Z @ 0x1801CD930
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

__int64 __fastcall detail::vector_facade<CDrawListEntryBuilder::PrimitiveSubRect,detail::buffer_impl<CDrawListEntryBuilder::PrimitiveSubRect,9,1,detail::liberal_expansion_policy>>::emplace_back<D2D_RECT_F,enum D2D1_EDGE_FLAGS,bool>(
        _QWORD *a1,
        __int128 *a2,
        int a3,
        char a4)
{
  _QWORD *v4; // rbx
  unsigned __int64 v7; // rsi
  unsigned __int64 v8; // r11
  __int64 v11; // r8
  signed __int64 v12; // rcx
  unsigned __int64 v13; // rdx
  __int64 v14; // r9
  __int64 v15; // rax
  __int64 v16; // r10
  __int64 result; // rax
  __int128 v18; // xmm0
  __int64 v19; // rax
  __int64 v20; // r9
  unsigned __int64 v21; // r8
  unsigned __int64 v22; // rdi
  LPVOID v23; // rax
  __int64 v24; // r8
  LPVOID v25; // rbx
  _QWORD *v26; // rdx
  _QWORD *v27; // rcx
  _QWORD *v28; // rdx
  __int128 v29; // [rsp+20h] [rbp-40h] BYREF
  signed __int64 v30; // [rsp+30h] [rbp-30h]
  __int128 v31; // [rsp+40h] [rbp-20h] BYREF
  __int64 v32; // [rsp+50h] [rbp-10h]
  void *v33; // [rsp+90h] [rbp+30h] BYREF

  v7 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(a1[1] - *a1) >> 3);
  v8 = 1LL;
  if ( !(0xAAAAAAAAAAAAAAABuLL * ((__int64)(a1[2] - a1[1]) >> 3)) )
  {
    if ( v7 + 1 < v7 )
    {
      std::_Xoverflow_error("overflow");
      __debugbreak();
LABEL_16:
      v19 = v11 - 24;
      v20 = v14 + 24;
      v21 = v8;
      do
      {
        v21 -= v8;
        v20 -= 24LL;
        if ( v21 >= v8 )
          break;
        *(_OWORD *)v20 = *(_OWORD *)v19;
        *(_QWORD *)(v20 + 16) = *(_QWORD *)(v19 + 16);
        if ( v19 == v16 )
          goto LABEL_6;
        v19 -= 24LL;
      }
      while ( v21 );
      goto LABEL_8;
    }
    v22 = detail::liberal_expansion_policy::expand(
            (detail::liberal_expansion_policy *)0xAAAAAAAAAAAAAAABLL,
            0xAAAAAAAAAAAAAAABuLL * ((__int64)(a1[2] - *a1) >> 3),
            v7 + 1);
    v23 = operator new[](saturated_mul(v22, 0x18uLL));
    v30 = 0LL;
    v24 = a1[1];
    v25 = v23;
    v26 = (_QWORD *)*a1;
    *(_QWORD *)&v29 = v23;
    *((_QWORD *)&v29 + 1) = v7;
    v32 = 0LL;
    v31 = v29;
    std::uninitialized_move<std::move_iterator<D2D1::Matrix3x2F *>,stdext::checked_array_iterator<D2D1::Matrix3x2F *>>(
      &v29,
      v26,
      v24,
      &v31);
    v27 = (_QWORD *)*a1;
    *a1 = v25;
    v33 = 0LL;
    if ( v27 == a1 + 3 )
      v27 = 0LL;
    operator delete(v27);
    v28 = (_QWORD *)*a1;
    a1[1] = *a1 + 24 * v7;
    a1[2] = &v28[3 * v22];
    std::unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>::~unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>(&v33);
    v8 = 1LL;
  }
  v4 = (_QWORD *)*a1;
  v11 = a1[1];
  v12 = 0xAAAAAAAAAAAAAAABuLL * ((v11 - *a1) >> 3);
  v13 = v12 - v7;
  v14 = *a1 + 8 * ((v11 - *a1) >> 3);
  if ( !v14 )
    goto LABEL_8;
  v15 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(a1[1] - *a1) >> 3) - v7;
  if ( v13 > 1 )
    v15 = 1LL;
  v16 = v11 - 24 * v15;
  if ( v11 != v16 )
    goto LABEL_16;
LABEL_6:
  if ( v13 > v8 )
  {
    if ( !v12 || v4 && v12 >= 0 )
    {
      *((_QWORD *)&v29 + 1) = v12;
      v30 = v12;
      *(_QWORD *)&v29 = v4;
      std::move_backward<std::move_iterator<D2D1::Matrix3x2F *>,stdext::checked_array_iterator<D2D1::Matrix3x2F *>>(
        &v31,
        &v4[3 * v7],
        &v4[3 * v12 - 3],
        &v29);
      goto LABEL_7;
    }
LABEL_8:
    _invalid_parameter_noinfo_noreturn();
  }
LABEL_7:
  a1[1] += 24LL;
  result = 3 * v7;
  v18 = *a2;
  LODWORD(v4[result + 2]) = a3;
  *(_OWORD *)&v4[result] = v18;
  BYTE4(v4[result + 2]) = a4;
  return result;
}
