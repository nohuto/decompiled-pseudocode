/*
 * XREFs of ?ensure_extra_capacity@?$buffer_impl@VCVIRenderList@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x1801F4490
 * Callers:
 *     ?reserve_region@?$vector_facade@VCVIRenderList@@V?$buffer_impl@VCVIRenderList@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAVCVIRenderList@@_K0@Z @ 0x1801F4364 (-reserve_region@-$vector_facade@VCVIRenderList@@V-$buffer_impl@VCVIRenderList@@$0BA@$00Vliberal_.c)
 * Callees:
 *     ??1?$unique_ptr@$$BY0A@U?$aligned_storage_for@UEffectInput@@@detail@@U?$default_delete@$$BY0A@U?$aligned_storage_for@UEffectInput@@@detail@@@std@@@std@@QEAA@XZ @ 0x180046790 (--1-$unique_ptr@$$BY0A@U-$aligned_storage_for@UEffectInput@@@detail@@U-$default_delete@$$BY0A@U-.c)
 *     ??3@YAXPEAX@Z @ 0x1800BC0C0 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x1800BC150 (--_U@YAPEAX_K@Z.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x1801751F8 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     ??$uninitialized_move@V?$move_iterator@PEAVCVIRenderList@@@std@@V?$checked_array_iterator@PEAVCVIRenderList@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAVCVIRenderList@@@stdext@@V?$move_iterator@PEAVCVIRenderList@@@0@0V12@@Z @ 0x18024A690 (--$uninitialized_move@V-$move_iterator@PEAVCVIRenderList@@@std@@V-$checked_array_iterator@PEAVCV.c)
 */

void __fastcall detail::buffer_impl<CVIRenderList,16,1,detail::liberal_expansion_policy>::ensure_extra_capacity(
        void **a1,
        unsigned __int64 a2)
{
  _BYTE *v3; // rcx
  _BYTE *v4; // rsi
  unsigned __int64 v5; // rsi
  unsigned __int64 v6; // rdi
  LPVOID v7; // rax
  void *v8; // r8
  void *v9; // rdx
  LPVOID v10; // rbx
  void *v11; // rcx
  bool v12; // zf
  char *v13; // rdx
  __int128 v14; // [rsp+20h] [rbp-58h] BYREF
  __int64 v15; // [rsp+30h] [rbp-48h]
  __int128 v16; // [rsp+40h] [rbp-38h] BYREF
  __int64 v17; // [rsp+50h] [rbp-28h]
  void *v18; // [rsp+80h] [rbp+8h] BYREF

  v3 = a1[2];
  v4 = a1[1];
  if ( 0xCCCCCCCCCCCCCCCDuLL * ((v3 - v4) >> 3) < a2 )
  {
    v5 = 0xCCCCCCCCCCCCCCCDuLL * ((v4 - (_BYTE *)*a1) >> 3);
    if ( v5 + a2 < v5 )
    {
      std::_Xoverflow_error("overflow");
      __debugbreak();
      JUMPOUT(0x1801F450CLL);
    }
    v6 = detail::liberal_expansion_policy::expand(
           (detail::liberal_expansion_policy *)(0xCCCCCCCCCCCCCCCDuLL * ((v3 - (_BYTE *)*a1) >> 3)),
           0xCCCCCCCCCCCCCCCDuLL * ((v3 - (_BYTE *)*a1) >> 3),
           v5 + a2);
    v7 = operator new[](saturated_mul(v6, 0x28uLL));
    v8 = a1[1];
    v9 = *a1;
    *(_QWORD *)&v14 = v7;
    *((_QWORD *)&v14 + 1) = v5;
    v10 = v7;
    v15 = 0LL;
    v16 = v14;
    v17 = 0LL;
    ((void (__fastcall *)(__int128 *, void *, void *, __int128 *))std::uninitialized_move<std::move_iterator<CVIRenderList *>,stdext::checked_array_iterator<CVIRenderList *>>)(
      &v14,
      v9,
      v8,
      &v16);
    v11 = *a1;
    v12 = *a1 == a1 + 3;
    v18 = 0LL;
    *a1 = v10;
    if ( v12 )
      v11 = 0LL;
    operator delete(v11);
    v13 = (char *)*a1;
    a1[1] = (char *)*a1 + 40 * v5;
    a1[2] = &v13[40 * v6];
    std::unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>::~unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>(&v18);
  }
}
