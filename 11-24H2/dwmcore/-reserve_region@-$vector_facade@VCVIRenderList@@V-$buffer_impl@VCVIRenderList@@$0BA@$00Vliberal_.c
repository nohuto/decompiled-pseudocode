/*
 * XREFs of ?reserve_region@?$vector_facade@VCVIRenderList@@V?$buffer_impl@VCVIRenderList@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAVCVIRenderList@@_K0@Z @ 0x1801F4364
 * Callers:
 *     ?AddCVIToPreRenderList@CDesktopTree@@UEAAXAEAVCVIRenderList@@@Z @ 0x1801F4310 (-AddCVIToPreRenderList@CDesktopTree@@UEAAXAEAVCVIRenderList@@@Z.c)
 * Callees:
 *     ?ensure_extra_capacity@?$buffer_impl@VCVIRenderList@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x1801F4490 (-ensure_extra_capacity@-$buffer_impl@VCVIRenderList@@$0BA@$00Vliberal_expansion_policy@detail@@@.c)
 *     ??$move_backward@V?$move_iterator@PEAVCVIRenderList@@@std@@V?$checked_array_iterator@PEAVCVIRenderList@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAVCVIRenderList@@@stdext@@V?$move_iterator@PEAVCVIRenderList@@@0@0V12@@Z @ 0x1802742B8 (--$move_backward@V-$move_iterator@PEAVCVIRenderList@@@std@@V-$checked_array_iterator@PEAVCVIRend.c)
 */

__int64 __fastcall detail::vector_facade<CVIRenderList,detail::buffer_impl<CVIRenderList,16,1,detail::liberal_expansion_policy>>::reserve_region(
        __int64 *a1,
        __int64 a2)
{
  __int64 v4; // rbx
  __int64 v5; // r9
  signed __int64 v6; // r8
  unsigned __int64 v7; // r10
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rdi
  unsigned __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // [rsp+20h] [rbp-40h] BYREF
  unsigned __int64 v16; // [rsp+28h] [rbp-38h]
  __int64 v17; // [rsp+30h] [rbp-30h]
  _BYTE v18[16]; // [rsp+40h] [rbp-20h] BYREF
  __int64 v19; // [rsp+50h] [rbp-10h]

  detail::buffer_impl<CVIRenderList,16,1,detail::liberal_expansion_policy>::ensure_extra_capacity(a1, 1LL);
  v4 = *a1;
  v17 = 0LL;
  v5 = a1[1];
  v16 = 1LL;
  v6 = 0xCCCCCCCCCCCCCCCDuLL * ((v5 - v4) >> 3);
  v19 = 0LL;
  v7 = v6 - a2;
  v15 = v4 + 8 * ((v5 - v4) >> 3);
  if ( !v15 )
    goto LABEL_8;
  v19 = 1LL;
  v8 = v6 - a2;
  if ( v7 > 1 )
    v8 = 1LL;
  v17 = 1LL;
  v9 = 40 * v8;
  v10 = v5 - v9;
  if ( v5 != v5 - v9 )
  {
    v13 = v17;
    v14 = v15 + 40;
    do
    {
      v5 -= 40LL;
      if ( !v15 )
        goto LABEL_8;
      if ( !v13 )
        goto LABEL_8;
      --v13;
      v14 -= 40LL;
      if ( v13 >= v16 )
        goto LABEL_8;
      *(_OWORD *)v14 = *(_OWORD *)v5;
      *(_OWORD *)(v14 + 16) = *(_OWORD *)(v5 + 16);
      *(_QWORD *)(v14 + 32) = *(_QWORD *)(v5 + 32);
    }
    while ( v5 != v10 );
  }
  if ( v7 > 1 )
  {
    if ( !v6 || v4 && v6 >= 0 )
    {
      v16 = v6;
      v17 = v6;
      v11 = 40 * a2;
      v15 = v4;
      ((void (__fastcall *)(_BYTE *, __int64, __int64, __int64 *))std::move_backward<std::move_iterator<CVIRenderList *>,stdext::checked_array_iterator<CVIRenderList *>>)(
        v18,
        v11 + v4,
        v4 + 40 * (v6 - 1),
        &v15);
      goto LABEL_7;
    }
LABEL_8:
    _invalid_parameter_noinfo_noreturn();
  }
  v11 = 40 * a2;
LABEL_7:
  a1[1] += 40LL;
  return v11 + v4;
}
