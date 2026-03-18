/*
 * XREFs of ?insert@?$vector_facade@PEAVCOverlayContext@@V?$buffer_impl@PEAVCOverlayContext@@$01$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@PEAVCOverlayContext@@@2@V?$basic_iterator@QEAVCOverlayContext@@@2@AEBQEAVCOverlayContext@@@Z @ 0x18013D6E4
 * Callers:
 *     ?Compute@COcclusionContext@@IEAAJPEBVCVisualTree@@AEBV?$span@$$CBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@$0?0@gsl@@MAEBV?$span@PEAVCOverlayContext@@$0?0@4@@Z @ 0x1800829B0 (-Compute@COcclusionContext@@IEAAJPEBVCVisualTree@@AEBV-$span@$$CBV-$TMilRect_@MUD2D_RECT_F@@UD3D.c)
 * Callees:
 *     ??1?$unique_ptr@$$BY0A@U?$aligned_storage_for@UEffectInput@@@detail@@U?$default_delete@$$BY0A@U?$aligned_storage_for@UEffectInput@@@detail@@@std@@@std@@QEAA@XZ @ 0x1800703BC (--1-$unique_ptr@$$BY0A@U-$aligned_storage_for@UEffectInput@@@detail@@U-$default_delete@$$BY0A@U-.c)
 *     ??$_Get_unwrapped_n@AEAV?$checked_array_iterator@PEAV?$unique_ptr@VCCachedRealization@CCachedImageProducer@@U?$default_delete@VCCachedRealization@CCachedImageProducer@@@std@@@std@@@stdext@@_J@std@@YA?A_TAEAV?$checked_array_iterator@PEAV?$unique_ptr@VCCachedRealization@CCachedImageProducer@@U?$default_delete@VCCachedRealization@CCachedImageProducer@@@std@@@std@@@stdext@@_J@Z @ 0x1800C33AC (--$_Get_unwrapped_n@AEAV-$checked_array_iterator@PEAV-$unique_ptr@VCCachedRealization@CCachedIma.c)
 *     ??3@YAXPEAX@Z @ 0x1800E2400 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x1800E2490 (--_U@YAPEAX_K@Z.c)
 *     ??$uninitialized_copy@V?$move_iterator@PEAPEAVCBlurredBackdropCache@@@std@@V?$checked_array_iterator@PEAPEAVCBlurredBackdropCache@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAPEAVCBlurredBackdropCache@@@stdext@@V?$move_iterator@PEAPEAVCBlurredBackdropCache@@@0@0V12@@Z @ 0x18013CFC4 (--$uninitialized_copy@V-$move_iterator@PEAPEAVCBlurredBackdropCache@@@std@@V-$checked_array_iter.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x1801924B0 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     memmove_0 @ 0x1802E8980 (memmove_0.c)
 */

_QWORD *__fastcall detail::vector_facade<COverlayContext *,detail::buffer_impl<COverlayContext *,2,1,detail::liberal_expansion_policy>>::insert(
        detail::liberal_expansion_policy *a1,
        _QWORD *a2,
        _QWORD *a3,
        _QWORD *a4)
{
  _QWORD *v4; // rbx
  __int64 v7; // r14
  __int64 v8; // r15
  unsigned __int64 v10; // r14
  _QWORD *v11; // r9
  __int64 v12; // rcx
  unsigned __int64 v13; // r8
  __int64 v14; // r11
  __int64 v15; // rax
  _QWORD *v16; // r10
  _QWORD *result; // rax
  signed __int64 v18; // rdi
  __int64 v19; // rax
  _QWORD *v20; // r9
  unsigned __int64 v21; // rdi
  LPVOID v22; // rax
  __int64 v23; // r8
  LPVOID v24; // rbx
  _QWORD *v25; // rdx
  _QWORD *v26; // rcx
  _QWORD *v27; // rcx
  __int128 v28; // [rsp+20h] [rbp-40h] BYREF
  __int64 v29; // [rsp+30h] [rbp-30h]
  __int128 v30; // [rsp+40h] [rbp-20h] BYREF
  __int64 v31; // [rsp+50h] [rbp-10h]
  void *v32; // [rsp+90h] [rbp+30h] BYREF

  v7 = *((_QWORD *)a1 + 1);
  v8 = (__int64)(*a3 - *(_QWORD *)a1) >> 3;
  if ( (*((_QWORD *)a1 + 2) - v7) >> 3 )
    goto LABEL_2;
  v10 = (v7 - *(_QWORD *)a1) >> 3;
  if ( v10 + 1 >= v10 )
  {
    v21 = detail::liberal_expansion_policy::expand(a1, (__int64)(*((_QWORD *)a1 + 2) - *(_QWORD *)a1) >> 3, v10 + 1);
    v22 = operator new[](saturated_mul(v21, 8uLL));
    v29 = 0LL;
    v23 = *((_QWORD *)a1 + 1);
    v24 = v22;
    v25 = *(_QWORD **)a1;
    *(_QWORD *)&v28 = v22;
    *((_QWORD *)&v28 + 1) = v10;
    v31 = 0LL;
    v30 = v28;
    std::uninitialized_copy<std::move_iterator<CBlurredBackdropCache * *>,stdext::checked_array_iterator<CBlurredBackdropCache * *>>(
      (__int64)&v28,
      v25,
      v23,
      &v30);
    v26 = *(_QWORD **)a1;
    *(_QWORD *)a1 = v24;
    v32 = 0LL;
    if ( v26 == (_QWORD *)((char *)a1 + 24) )
      v26 = 0LL;
    operator delete(v26);
    v27 = *(_QWORD **)a1;
    *((_QWORD *)a1 + 1) = *(_QWORD *)a1 + 8 * v10;
    *((_QWORD *)a1 + 2) = &v27[v21];
    std::unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>::~unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>(&v32);
LABEL_2:
    v10 = *(_QWORD *)a1;
    v11 = (_QWORD *)*((_QWORD *)a1 + 1);
    v12 = ((__int64)v11 - *(_QWORD *)a1) >> 3;
    v13 = v12 - v8;
    v14 = 8 * v12;
    v4 = (_QWORD *)(8 * v12 + *(_QWORD *)a1);
    if ( !v4 )
      goto LABEL_8;
    v15 = ((__int64)(*((_QWORD *)a1 + 1) - *(_QWORD *)a1) >> 3) - v8;
    if ( v13 > 1 )
      v15 = 1LL;
    v16 = &v11[-v15];
    if ( v11 == v16 )
      goto LABEL_6;
    goto LABEL_15;
  }
  std::_Xoverflow_error("overflow");
  __debugbreak();
LABEL_15:
  v20 = v11 - 1;
  *v4 = *v20;
  if ( v20 != v16 )
    goto LABEL_8;
LABEL_6:
  if ( v13 > 1 )
  {
    if ( !v12 || v10 && v12 >= 0 )
    {
      *((_QWORD *)&v28 + 1) = v12;
      v29 = v12;
      *(_QWORD *)&v28 = v10;
      v18 = v14 - 8 * v8 - 8;
      v19 = std::_Get_unwrapped_n<stdext::checked_array_iterator<std::unique_ptr<CCachedImageProducer::CCachedRealization> *> &,__int64>(
              &v28,
              -(v18 >> 3));
      memmove_0((void *)(v19 - v18), (const void *)(v10 + 8 * v8), v18);
      goto LABEL_7;
    }
LABEL_8:
    _invalid_parameter_noinfo_noreturn();
  }
LABEL_7:
  *((_QWORD *)a1 + 1) += 8LL;
  *(_QWORD *)(v10 + 8 * v8) = *a4;
  result = a2;
  *a2 = *(_QWORD *)a1 + 8 * v8;
  return result;
}
