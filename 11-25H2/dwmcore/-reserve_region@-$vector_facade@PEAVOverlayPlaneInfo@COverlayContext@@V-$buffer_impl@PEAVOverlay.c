/*
 * XREFs of ?reserve_region@?$vector_facade@PEAVOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@PEAVOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAPEAVOverlayPlaneInfo@COverlayContext@@_K0@Z @ 0x1801E79D8
 * Callers:
 *     ?insert@?$vector_facade@PEAVOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@PEAVOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@PEAVOverlayPlaneInfo@COverlayContext@@@2@V?$basic_iterator@QEAVOverlayPlaneInfo@COverlayContext@@@2@AEBQEAVOverlayPlaneInfo@COverlayContext@@@Z @ 0x1801E7900 (-insert@-$vector_facade@PEAVOverlayPlaneInfo@COverlayContext@@V-$buffer_impl@PEAVOverlayPlaneInf.c)
 *     ?GetContextCandidates@COverlayContext@@CAXPEAV1@AEBV?$span@PEAVOverlayPlaneInfo@COverlayContext@@$0?0@gsl@@PEAV?$vector_facade@PEAVOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@PEAVOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x1801E7960 (-GetContextCandidates@COverlayContext@@CAXPEAV1@AEBV-$span@PEAVOverlayPlaneInfo@COverlayContext@.c)
 *     ?InitCheckCandidatesList@COverlayContext@@CA_NAEBV?$span@PEAVCOverlayContext@@$0?0@gsl@@PEAV?$vector_facade@PEAVOverlayPlaneInfo@COverlayContext@@V?$buffer_impl@PEAVOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x18023D308 (-InitCheckCandidatesList@COverlayContext@@CA_NAEBV-$span@PEAVCOverlayContext@@$0-0@gsl@@PEAV-$ve.c)
 * Callees:
 *     ?ensure_extra_capacity@?$buffer_impl@PEAVOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x1801E7B20 (-ensure_extra_capacity@-$buffer_impl@PEAVOverlayPlaneInfo@COverlayContext@@$0BA@$00Vliberal_expa.c)
 *     memmove_0 @ 0x1802E8980 (memmove_0.c)
 */

__int64 __fastcall detail::vector_facade<COverlayContext::OverlayPlaneInfo *,detail::buffer_impl<COverlayContext::OverlayPlaneInfo *,16,1,detail::liberal_expansion_policy>>::reserve_region(
        __int64 *a1,
        __int64 a2)
{
  __int64 v4; // rbx
  _QWORD *v5; // rdx
  __int64 v6; // r8
  unsigned __int64 v7; // r10
  __int64 v8; // r9
  _QWORD *v9; // r14
  __int64 v10; // rax
  _QWORD *v11; // r11
  __int64 v12; // rdi
  _QWORD *v14; // rdx

  detail::buffer_impl<COverlayContext::OverlayPlaneInfo *,16,1,detail::liberal_expansion_policy>::ensure_extra_capacity(
    a1,
    1LL);
  v4 = *a1;
  v5 = (_QWORD *)a1[1];
  v6 = ((__int64)v5 - *a1) >> 3;
  v7 = v6 - a2;
  v8 = 8 * v6;
  v9 = (_QWORD *)(8 * v6 + *a1);
  if ( !v9 )
    goto LABEL_2;
  v10 = ((a1[1] - *a1) >> 3) - a2;
  if ( v7 > 1 )
    v10 = 1LL;
  v11 = &v5[-v10];
  if ( v5 != v11 )
  {
    v14 = v5 - 1;
    *v9 = *v14;
    if ( v14 != v11 )
LABEL_2:
      _invalid_parameter_noinfo_noreturn();
  }
  if ( v7 <= 1 )
  {
    v12 = 8 * a2;
  }
  else
  {
    if ( v6 && (!v4 || v6 < 0) )
      goto LABEL_2;
    v12 = 8 * a2;
    if ( (v8 - v12 - 8) >> 3 <= 0 )
    {
      if ( (v8 - v12 - 8) >> 3 < 0 )
        goto LABEL_2;
    }
    else if ( v6 < (unsigned __int64)((v8 - v12 - 8) >> 3) )
    {
      goto LABEL_2;
    }
    memmove_0((void *)(v4 + v12 + 8), (const void *)(v12 + v4), v8 - v12 - 8);
  }
  a1[1] += 8LL;
  return v12 + v4;
}
