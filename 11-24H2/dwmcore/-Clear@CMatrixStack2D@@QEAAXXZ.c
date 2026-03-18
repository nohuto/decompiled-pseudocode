/*
 * XREFs of ?Clear@CMatrixStack2D@@QEAAXXZ @ 0x1801409D4
 * Callers:
 *     ?DrawShapes@CShapeTree@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z @ 0x180140BA0 (-DrawShapes@CShapeTree@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@@Z.c)
 * Callees:
 *     ??1?$unique_ptr@$$BY0A@U?$aligned_storage_for@UEffectInput@@@detail@@U?$default_delete@$$BY0A@U?$aligned_storage_for@UEffectInput@@@detail@@@std@@@std@@QEAA@XZ @ 0x180046790 (--1-$unique_ptr@$$BY0A@U-$aligned_storage_for@UEffectInput@@@detail@@U-$default_delete@$$BY0A@U-.c)
 *     ??3@YAXPEAX@Z @ 0x1800BC0C0 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x1800BC150 (--_U@YAPEAX_K@Z.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x1801751F8 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     ??$uninitialized_move@V?$move_iterator@PEAVMatrix3x2F@D2D1@@@std@@V?$checked_array_iterator@PEAVMatrix3x2F@D2D1@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAVMatrix3x2F@D2D1@@@stdext@@V?$move_iterator@PEAVMatrix3x2F@D2D1@@@0@0V12@@Z @ 0x1802257B8 (--$uninitialized_move@V-$move_iterator@PEAVMatrix3x2F@D2D1@@@std@@V-$checked_array_iterator@PEAV.c)
 *     ??$move_backward@V?$move_iterator@PEAVMatrix3x2F@D2D1@@@std@@V?$checked_array_iterator@PEAVMatrix3x2F@D2D1@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAVMatrix3x2F@D2D1@@@stdext@@V?$move_iterator@PEAVMatrix3x2F@D2D1@@@0@0V12@@Z @ 0x18024AED0 (--$move_backward@V-$move_iterator@PEAVMatrix3x2F@D2D1@@@std@@V-$checked_array_iterator@PEAVMatri.c)
 */

void __fastcall CMatrixStack2D::Clear(CMatrixStack2D *this)
{
  __int64 v1; // rbx
  __int64 v2; // rdx
  __int64 v4; // rsi
  __int64 v5; // rcx
  unsigned __int64 v6; // rsi
  __int64 v7; // r8
  signed __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  __int64 v10; // r9
  __int64 v11; // rax
  __int64 v12; // r10
  __int64 v13; // rax
  unsigned __int64 v14; // rdi
  LPVOID v15; // rax
  __int64 v16; // r8
  __int64 v17; // rdx
  LPVOID v18; // rbx
  void *v19; // rcx
  bool v20; // zf
  __int64 v21; // rdx
  __int128 v22; // [rsp+20h] [rbp-60h] BYREF
  signed __int64 v23; // [rsp+30h] [rbp-50h]
  __int128 v24; // [rsp+40h] [rbp-40h] BYREF
  __int64 v25; // [rsp+50h] [rbp-30h]
  void *v26; // [rsp+B0h] [rbp+30h] BYREF

  v2 = *((_QWORD *)this + 1);
  if ( 0xAAAAAAAAAAAAAAABuLL * ((v2 - *(_QWORD *)this) >> 3) )
  {
    v2 -= 8 * ((__int64)(*((_QWORD *)this + 1) - *(_QWORD *)this) >> 3);
    *((_QWORD *)this + 1) = v2;
  }
  v4 = v2 - *(_QWORD *)this;
  v5 = *((_QWORD *)this + 2);
  v6 = 0xAAAAAAAAAAAAAAABuLL * (v4 >> 3);
  if ( 0xAAAAAAAAAAAAAAABuLL * ((v5 - v2) >> 3) )
  {
LABEL_4:
    v1 = *(_QWORD *)this;
    v7 = *((_QWORD *)this + 1);
    v8 = 0xAAAAAAAAAAAAAAABuLL * ((v7 - *(_QWORD *)this) >> 3);
    v9 = v8 - v6;
    v10 = *(_QWORD *)this + 8 * ((v7 - *(_QWORD *)this) >> 3);
    if ( !v10 )
      goto LABEL_10;
    v11 = 0xAAAAAAAAAAAAAAABuLL * ((__int64)(*((_QWORD *)this + 1) - *(_QWORD *)this) >> 3) - v6;
    if ( v9 > 1 )
      v11 = 1LL;
    v12 = v7 - 24 * v11;
    if ( v7 == v12 )
      goto LABEL_8;
    goto LABEL_13;
  }
  if ( v6 + 1 >= v6 )
  {
    v14 = detail::liberal_expansion_policy::expand(
            (detail::liberal_expansion_policy *)(0xAAAAAAAAAAAAAAABuLL * ((v5 - *(_QWORD *)this) >> 3)),
            0xAAAAAAAAAAAAAAABuLL * ((v5 - *(_QWORD *)this) >> 3),
            v6 + 1);
    v15 = operator new[](saturated_mul(v14, 0x18uLL));
    v16 = *((_QWORD *)this + 1);
    v17 = *(_QWORD *)this;
    *(_QWORD *)&v22 = v15;
    v18 = v15;
    *((_QWORD *)&v22 + 1) = v6;
    v23 = 0LL;
    v24 = v22;
    v25 = 0LL;
    std::uninitialized_move<std::move_iterator<D2D1::Matrix3x2F *>,stdext::checked_array_iterator<D2D1::Matrix3x2F *>>(
      &v22,
      v17,
      v16,
      &v24);
    v19 = *(void **)this;
    v20 = *(_QWORD *)this == (_QWORD)this + 24;
    v26 = 0LL;
    *(_QWORD *)this = v18;
    if ( v20 )
      v19 = 0LL;
    operator delete(v19);
    v21 = *(_QWORD *)this;
    *((_QWORD *)this + 1) = *(_QWORD *)this + 24 * v6;
    *((_QWORD *)this + 2) = v21 + 24 * v14;
    std::unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>::~unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>(&v26);
    goto LABEL_4;
  }
  std::_Xoverflow_error("overflow");
  __debugbreak();
LABEL_13:
  *(_OWORD *)v10 = *(_OWORD *)(v7 - 24);
  *(_QWORD *)(v10 + 16) = *(_QWORD *)(v7 - 24 + 16);
  if ( v7 - 24 != v12 )
    goto LABEL_10;
LABEL_8:
  if ( v9 > 1 )
  {
    if ( !v8 || v1 && v8 >= 0 )
    {
      *((_QWORD *)&v22 + 1) = v8;
      v23 = v8;
      *(_QWORD *)&v22 = v1;
      std::move_backward<std::move_iterator<D2D1::Matrix3x2F *>,stdext::checked_array_iterator<D2D1::Matrix3x2F *>>(
        &v24,
        v1 + 24 * v6,
        v1 + 24 * (v8 - 1),
        &v22);
      goto LABEL_9;
    }
LABEL_10:
    _invalid_parameter_noinfo_noreturn();
  }
LABEL_9:
  *((_QWORD *)this + 1) += 24LL;
  v13 = 3 * v6;
  *(_OWORD *)(v1 + 8 * v13) = _xmm;
  *(_QWORD *)(v1 + 8 * v13 + 16) = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
}
