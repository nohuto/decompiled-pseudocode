/*
 * XREFs of ?ensure_extra_capacity@?$buffer_impl@VCTempOcclusionRect@COcclusionContext@@$09$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x180286370
 * Callers:
 *     ?reserve_region@?$vector_facade@VCTempOcclusionRect@COcclusionContext@@V?$buffer_impl@VCTempOcclusionRect@COcclusionContext@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAVCTempOcclusionRect@COcclusionContext@@_K0@Z @ 0x1802864AC (-reserve_region@-$vector_facade@VCTempOcclusionRect@COcclusionContext@@V-$buffer_impl@VCTempOccl.c)
 * Callees:
 *     ??1?$unique_ptr@$$BY0A@U?$aligned_storage_for@UEffectInput@@@detail@@U?$default_delete@$$BY0A@U?$aligned_storage_for@UEffectInput@@@detail@@@std@@@std@@QEAA@XZ @ 0x1800703BC (--1-$unique_ptr@$$BY0A@U-$aligned_storage_for@UEffectInput@@@detail@@U-$default_delete@$$BY0A@U-.c)
 *     ??3@YAXPEAX@Z @ 0x1800E2400 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x1800E2490 (--_U@YAPEAX_K@Z.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x1801924B0 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     ??$move@V?$move_iterator@PEAVCTempOcclusionRect@COcclusionContext@@@std@@V?$checked_array_iterator@PEAVCTempOcclusionRect@COcclusionContext@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAVCTempOcclusionRect@COcclusionContext@@@stdext@@V?$move_iterator@PEAVCTempOcclusionRect@COcclusionContext@@@0@0V12@@Z @ 0x18026FC68 (--$move@V-$move_iterator@PEAVCTempOcclusionRect@COcclusionContext@@@std@@V-$checked_array_iterat.c)
 */

void __fastcall detail::buffer_impl<COcclusionContext::CTempOcclusionRect,10,1,detail::liberal_expansion_policy>::ensure_extra_capacity(
        const void **a1,
        unsigned __int64 a2)
{
  unsigned __int64 v3; // r9
  _BYTE *v4; // rcx
  _BYTE *v5; // rsi
  unsigned __int64 v6; // rsi
  unsigned __int64 v7; // r8
  unsigned __int64 v8; // rdi
  const void *v9; // rax
  __int64 v10; // r8
  const void *v11; // rdx
  const void *v12; // rbx
  void *v13; // rcx
  bool v14; // zf
  char *v15; // rdx
  __int128 v16; // [rsp+20h] [rbp-58h] BYREF
  __int64 v17; // [rsp+30h] [rbp-48h]
  __int128 v18; // [rsp+40h] [rbp-38h] BYREF
  __int64 v19; // [rsp+50h] [rbp-28h]
  void *v20; // [rsp+80h] [rbp+8h] BYREF

  v3 = 0xCCCCCCCCCCCCCCCDuLL;
  v4 = a1[2];
  v5 = a1[1];
  if ( 0xCCCCCCCCCCCCCCCDuLL * ((v4 - v5) >> 2) < a2 )
  {
    v6 = 0xCCCCCCCCCCCCCCCDuLL * ((v5 - (_BYTE *)*a1) >> 2);
    v7 = v6 + a2;
    if ( v6 + a2 < v6 )
    {
      std::_Xoverflow_error("overflow");
      __debugbreak();
    }
    v8 = detail::liberal_expansion_policy::expand(
           (detail::liberal_expansion_policy *)(v3 * ((v4 - (_BYTE *)*a1) >> 2)),
           v3 * ((v4 - (_BYTE *)*a1) >> 2),
           v7);
    v9 = operator new[](saturated_mul(v8, 0x14uLL));
    v10 = (__int64)a1[1];
    v11 = *a1;
    *(_QWORD *)&v16 = v9;
    *((_QWORD *)&v16 + 1) = v6;
    v12 = v9;
    v17 = 0LL;
    v18 = v16;
    v19 = 0LL;
    std::move<std::move_iterator<COcclusionContext::CTempOcclusionRect *>,stdext::checked_array_iterator<COcclusionContext::CTempOcclusionRect *>>(
      (__int64)&v16,
      v11,
      v10,
      &v18);
    v13 = (void *)*a1;
    v14 = *a1 == a1 + 3;
    v20 = 0LL;
    *a1 = v12;
    if ( v14 )
      v13 = 0LL;
    operator delete(v13);
    v15 = (char *)*a1;
    a1[1] = (char *)*a1 + 20 * v6;
    a1[2] = &v15[20 * v8];
    std::unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>::~unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>(&v20);
  }
}
