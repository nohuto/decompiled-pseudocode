/*
 * XREFs of ??$_Insert_counted_range@PEAPEAVCBaseExpression@@@?$vector@PEAVCBaseExpression@@V?$allocator@PEAVCBaseExpression@@@std@@@std@@AEAAXV?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@PEAVCBaseExpression@@@std@@@std@@@1@PEAPEAVCBaseExpression@@_K@Z @ 0x180042910
 * Callers:
 *     ?SetOrAppendAnimations@?$CAnimationTriggerGeneratedT@VCAnimationTrigger@@VCPropertyChangeResource@@@@AEAAJAEBV?$span@PEAVCBaseExpression@@$0?0@gsl@@_N@Z @ 0x1802276F8 (-SetOrAppendAnimations@-$CAnimationTriggerGeneratedT@VCAnimationTrigger@@VCPropertyChangeResourc.c)
 *     ??$insert@PEAPEAVCCompositionTextLine@@$0A@@?$vector@PEAVCCompositionTextLine@@V?$allocator@PEAVCCompositionTextLine@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@PEAVCCompositionTextLine@@@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@PEAVCCompositionTextLine@@@std@@@std@@@1@PEAPEAVCCompositionTextLine@@1@Z @ 0x180274258 (--$insert@PEAPEAVCCompositionTextLine@@$0A@@-$vector@PEAVCCompositionTextLine@@V-$allocator@PEAV.c)
 *     ?SetOrAppendChildren@?$CSceneNodeGeneratedT@VCSceneNode@@VCSceneObject@@@@AEAAJAEBV?$span@PEAVCSceneNode@@$0?0@gsl@@_N@Z @ 0x180278F90 (-SetOrAppendChildren@-$CSceneNodeGeneratedT@VCSceneNode@@VCSceneObject@@@@AEAAJAEBV-$span@PEAVCS.c)
 *     ?SetOrAppendChildren@?$CTransform3DGroupGeneratedT@VCTransform3DGroup@@VCTransform3D@@@@AEAAJAEBV?$span@PEAVCTransform3D@@$0?0@gsl@@_N@Z @ 0x180279068 (-SetOrAppendChildren@-$CTransform3DGroupGeneratedT@VCTransform3DGroup@@VCTransform3D@@@@AEAAJAEB.c)
 *     ?SetOrAppendComponents@?$CSceneNodeGeneratedT@VCSceneNode@@VCSceneObject@@@@AEAAJAEBV?$span@PEAVCSceneComponent@@$0?0@gsl@@_N@Z @ 0x180279120 (-SetOrAppendComponents@-$CSceneNodeGeneratedT@VCSceneNode@@VCSceneObject@@@@AEAAJAEBV-$span@PEAV.c)
 *     ?SetOrAppendGlyphRuns@?$CTextVisualGeneratedT@VCTextVisual@@VCVisual@@@@AEAAJAEBV?$span@PEAVCCompositionGlyphRun@@$0?0@gsl@@_N@Z @ 0x1802791F8 (-SetOrAppendGlyphRuns@-$CTextVisualGeneratedT@VCTextVisual@@VCVisual@@@@AEAAJAEBV-$span@PEAVCCom.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180040040 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Get_size_of_n@$07@std@@YA_K_K@Z @ 0x180041D40 (--$_Get_size_of_n@$07@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180041DA0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     memmove_0 @ 0x1802DF6E0 (memmove_0.c)
 */

void __fastcall std::vector<CBaseExpression *>::_Insert_counted_range<CBaseExpression * *>(
        __int64 a1,
        _BYTE *a2,
        const void *a3,
        unsigned __int64 a4)
{
  _BYTE *v4; // r15
  _BYTE *v6; // r13
  __int64 v8; // rcx
  unsigned __int64 v11; // rbp
  __int64 v12; // rdx
  size_t v13; // r14
  unsigned __int64 v14; // rbp
  size_t v15; // r8
  const void *v16; // rdx
  char *v17; // rcx
  char *v18; // rsi
  unsigned __int64 v19; // r8
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // rdx
  SIZE_T size_of; // rax
  char *v23; // r14
  __int64 v24; // [rsp+78h] [rbp+10h]
  unsigned __int64 v26; // [rsp+88h] [rbp+20h]

  if ( a4 )
  {
    v4 = *(_BYTE **)(a1 + 8);
    v6 = *(_BYTE **)a1;
    v8 = *(_QWORD *)(a1 + 16);
    if ( a4 <= (v8 - (__int64)v4) >> 3 )
    {
      v13 = 8 * a4;
      v14 = (v4 - a2) >> 3;
      if ( a4 >= v14 )
      {
        v18 = &a2[v13];
        memmove_0(&a2[v13], a2, v4 - a2);
        *(_QWORD *)(a1 + 8) = &v18[8 * v14];
      }
      else
      {
        memmove_0(v4, &v4[-v13], 8 * a4);
        *(_QWORD *)(a1 + 8) = &v4[v13];
        memmove_0(&a2[8 * a4], a2, (size_t)&v4[-8LL * a4 - (_QWORD)a2]);
      }
      memmove_0(a2, a3, v13);
    }
    else
    {
      v11 = 0x1FFFFFFFFFFFFFFFLL;
      v12 = (v4 - v6) >> 3;
      if ( a4 > 0x1FFFFFFFFFFFFFFFLL - v12 )
        std::_Xlength_error("vector too long");
      v19 = v12 + a4;
      v20 = (v8 - (__int64)v6) >> 3;
      v26 = v12 + a4;
      v21 = v20 >> 1;
      if ( v20 <= 0x1FFFFFFFFFFFFFFFLL - (v20 >> 1) )
      {
        v11 = v21 + v20;
        if ( v21 + v20 < v19 )
          v11 = v19;
      }
      size_of = std::_Get_size_of_n<8>(v11);
      v23 = (char *)std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
      v24 = (a2 - v6) >> 3;
      memmove_0(&v23[8 * v24], a3, 8 * a4);
      if ( a4 == 1 && a2 == v4 )
      {
        v15 = v4 - v6;
        v16 = v6;
        v17 = v23;
      }
      else
      {
        memmove_0(v23, v6, a2 - v6);
        v15 = v4 - a2;
        v16 = a2;
        v17 = &v23[8 * a4 + 8 * v24];
      }
      memmove_0(v17, v16, v15);
      if ( *(_QWORD *)a1 )
        std::_Deallocate<16,0>(*(_QWORD **)a1, (*(_QWORD *)(a1 + 16) - *(_QWORD *)a1) & 0xFFFFFFFFFFFFFFF8uLL);
      *(_QWORD *)a1 = v23;
      *(_QWORD *)(a1 + 8) = &v23[8 * v26];
      *(_QWORD *)(a1 + 16) = &v23[8 * v11];
    }
  }
}
