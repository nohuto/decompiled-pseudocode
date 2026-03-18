/*
 * XREFs of ?insert@?$vector_facade@PEAVCOverlayContext@@V?$buffer_impl@PEAVCOverlayContext@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@PEAVCOverlayContext@@@2@V?$basic_iterator@QEAVCOverlayContext@@@2@AEBQEAVCOverlayContext@@@Z @ 0x180101A90
 * Callers:
 *     ?ComputeOverlayConfiguration@COverlayContext@@SAJAEBV?$span@PEAVCOverlayContext@@$0?0@gsl@@@Z @ 0x180102130 (-ComputeOverlayConfiguration@COverlayContext@@SAJAEBV-$span@PEAVCOverlayContext@@$0-0@gsl@@@Z.c)
 *     ?CalcOcclusionAndCollectOverlayCandidates@CDesktopTree@@QEAAJXZ @ 0x180102540 (-CalcOcclusionAndCollectOverlayCandidates@CDesktopTree@@QEAAJXZ.c)
 * Callees:
 *     ??$_Get_unwrapped_n@AEAV?$checked_array_iterator@PEAV?$unique_ptr@VCCachedRealization@CCachedImageProducer@@U?$default_delete@VCCachedRealization@CCachedImageProducer@@@std@@@std@@@stdext@@_J@std@@YA?A_TAEAV?$checked_array_iterator@PEAV?$unique_ptr@VCCachedRealization@CCachedImageProducer@@U?$default_delete@VCCachedRealization@CCachedImageProducer@@@std@@@std@@@stdext@@_J@Z @ 0x180069194 (--$_Get_unwrapped_n@AEAV-$checked_array_iterator@PEAV-$unique_ptr@VCCachedRealization@CCachedIma.c)
 *     ??3@YAXPEAX@Z @ 0x1800BC0C0 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x1800BC150 (--_U@YAPEAX_K@Z.c)
 *     ??$uninitialized_copy@V?$move_iterator@PEAPEAVCBlurredBackdropCache@@@std@@V?$checked_array_iterator@PEAPEAVCBlurredBackdropCache@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAPEAVCBlurredBackdropCache@@@stdext@@V?$move_iterator@PEAPEAVCBlurredBackdropCache@@@0@0V12@@Z @ 0x1801017D8 (--$uninitialized_copy@V-$move_iterator@PEAPEAVCBlurredBackdropCache@@@std@@V-$checked_array_iter.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x1801751F8 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     memmove_0 @ 0x1802DF6E0 (memmove_0.c)
 */

_QWORD *__fastcall detail::vector_facade<COverlayContext *,detail::buffer_impl<COverlayContext *,4,1,detail::liberal_expansion_policy>>::insert(
        detail::liberal_expansion_policy *a1,
        _QWORD *a2,
        _QWORD *a3,
        _QWORD *a4)
{
  _QWORD *v4; // r15
  unsigned __int64 v7; // rbx
  __int64 v8; // rbp
  __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  _QWORD *v12; // r11
  __int64 v13; // rax
  _QWORD *v14; // r8
  signed __int64 v16; // rdi
  __int64 v17; // rax
  _QWORD *v18; // rbx
  unsigned __int64 v19; // rsi
  LPVOID v20; // rax
  __int64 v21; // r8
  _QWORD *v22; // rdx
  LPVOID v23; // rdi
  _QWORD *v24; // rcx
  bool v25; // zf
  __int128 v26; // [rsp+20h] [rbp-68h] BYREF
  __int64 v27; // [rsp+30h] [rbp-58h]
  __int128 v28; // [rsp+40h] [rbp-48h] BYREF
  __int64 v29; // [rsp+50h] [rbp-38h]

  v4 = *(_QWORD **)a1;
  v7 = *((_QWORD *)a1 + 1);
  v8 = (__int64)(*a3 - *(_QWORD *)a1) >> 3;
  if ( !((__int64)(*((_QWORD *)a1 + 2) - v7) >> 3) )
  {
    v7 = (__int64)(v7 - (_QWORD)v4) >> 3;
    if ( v7 + 1 >= v7 )
    {
      v19 = detail::liberal_expansion_policy::expand(a1, (__int64)(*((_QWORD *)a1 + 2) - (_QWORD)v4) >> 3, v7 + 1);
      v20 = operator new[](saturated_mul(v19, 8uLL));
      v21 = *((_QWORD *)a1 + 1);
      v22 = *(_QWORD **)a1;
      *(_QWORD *)&v26 = v20;
      *((_QWORD *)&v26 + 1) = v7;
      v23 = v20;
      v27 = 0LL;
      v28 = v26;
      v29 = 0LL;
      std::uninitialized_copy<std::move_iterator<CBlurredBackdropCache * *>,stdext::checked_array_iterator<CBlurredBackdropCache * *>>(
        (__int64)&v26,
        v22,
        v21,
        &v28);
      v24 = *(_QWORD **)a1;
      v25 = *(_QWORD *)a1 == (_QWORD)a1 + 24;
      *(_QWORD *)a1 = v23;
      if ( v25 )
        v24 = 0LL;
      operator delete(v24);
      v4 = *(_QWORD **)a1;
      v7 = *(_QWORD *)a1 + 8 * v7;
      *((_QWORD *)a1 + 2) = *(_QWORD *)a1 + 8 * v19;
      *((_QWORD *)a1 + 1) = v7;
    }
    else
    {
      std::_Xoverflow_error("overflow");
      __debugbreak();
    }
  }
  v10 = (__int64)(v7 - (_QWORD)v4) >> 3;
  v11 = v10 - v8;
  v12 = &v4[v10];
  if ( !v12 )
    goto LABEL_10;
  v13 = ((__int64)(v7 - (_QWORD)v4) >> 3) - v8;
  if ( v11 > 1 )
    v13 = 1LL;
  v14 = (_QWORD *)(v7 - 8 * v13);
  if ( (_QWORD *)v7 != v14 )
  {
    v18 = (_QWORD *)(v7 - 8);
    *v12 = *v18;
    if ( v18 != v14 )
LABEL_10:
      _invalid_parameter_noinfo_noreturn();
  }
  if ( v11 > 1 )
  {
    if ( v10 && (!v4 || v10 < 0) )
      goto LABEL_10;
    *((_QWORD *)&v26 + 1) = v10;
    v27 = v10;
    *(_QWORD *)&v26 = v4;
    v16 = 8 * v10 - 8 * v8 - 8;
    v17 = std::_Get_unwrapped_n<stdext::checked_array_iterator<std::unique_ptr<CCachedImageProducer::CCachedRealization> *> &,__int64>(
            &v26,
            -(v16 >> 3));
    memmove_0((void *)(v17 - v16), &v4[v8], v16);
  }
  *((_QWORD *)a1 + 1) += 8LL;
  v4[v8] = *a4;
  *a2 = *(_QWORD *)a1 + 8 * v8;
  return a2;
}
