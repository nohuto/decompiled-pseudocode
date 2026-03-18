/*
 * XREFs of ?GetTextureMemoryLayoutData@CMaskBrush@@UEBAJAEBUD2D_SIZE_F@@AEAV?$vector@ULayoutData@CContent@@V?$allocator@ULayoutData@CContent@@@std@@@std@@@Z @ 0x18029F760
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180040040 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$insert@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@ULayoutData@CContent@@@std@@@std@@@std@@$0A@@?$vector@ULayoutData@CContent@@V?$allocator@ULayoutData@CContent@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@ULayoutData@CContent@@@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@ULayoutData@CContent@@@std@@@std@@@1@V21@1@Z @ 0x180293AA0 (--$insert@V-$_Vector_iterator@V-$_Vector_val@U-$_Simple_types@ULayoutData@CContent@@@std@@@std@@.c)
 *     ??4?$vector@ULayoutData@CContent@@V?$allocator@ULayoutData@CContent@@@std@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x180293B5C (--4-$vector@ULayoutData@CContent@@V-$allocator@ULayoutData@CContent@@@std@@@std@@QEAAAEAV01@AEBV.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CMaskBrush::GetTextureMemoryLayoutData(__int64 a1, __int64 a2, __int64 a3)
{
  char *v3; // rax
  _QWORD *v4; // rbx
  unsigned int v5; // edi
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // rcx
  int v12; // eax
  _QWORD *v14; // [rsp+30h] [rbp-30h] BYREF
  _BYTE *v15; // [rsp+38h] [rbp-28h]
  __int64 v16; // [rsp+40h] [rbp-20h]
  __int128 v17; // [rsp+48h] [rbp-18h] BYREF
  __int64 v18; // [rsp+58h] [rbp-8h]
  __int64 v19; // [rsp+90h] [rbp+30h] BYREF

  v3 = *(char **)a3;
  v4 = 0LL;
  v15 = 0LL;
  v5 = 0;
  v16 = 0LL;
  v14 = 0LL;
  if ( v3 != *(char **)(a3 + 8) )
    *(_QWORD *)(a3 + 8) = v3;
  v9 = *(_QWORD *)(a1 + 120);
  if ( v9 )
  {
    v18 = 0LL;
    v17 = 0LL;
    v10 = (*(__int64 (__fastcall **)(__int64, __int64, __int128 *))(*(_QWORD *)v9 + 288LL))(v9, a2, &v17);
    v5 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v10, 0x7Au, 0LL);
      goto LABEL_17;
    }
    std::vector<CContent::LayoutData>::insert<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<CContent::LayoutData>>>,0>(
      &v14,
      &v19,
      0LL,
      (const void *)v17,
      *((__int64 *)&v17 + 1));
    if ( (_QWORD)v17 )
      std::_Deallocate<16,0>((_QWORD *)v17, 8 * ((v18 - (__int64)v17) >> 3));
    v4 = v14;
  }
  v11 = *(_QWORD *)(a1 + 112);
  if ( !v11 )
  {
LABEL_12:
    std::vector<CContent::LayoutData>::operator=((char **)a3, (__int64)&v14);
    v4 = v14;
    goto LABEL_13;
  }
  v18 = 0LL;
  v17 = 0LL;
  v12 = (*(__int64 (__fastcall **)(__int64, __int64, __int128 *))(*(_QWORD *)v11 + 288LL))(v11, a2, &v17);
  v5 = v12;
  if ( v12 >= 0 )
  {
    std::vector<CContent::LayoutData>::insert<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<CContent::LayoutData>>>,0>(
      &v14,
      &v19,
      v15,
      (const void *)v17,
      *((__int64 *)&v17 + 1));
    if ( (_QWORD)v17 )
      std::_Deallocate<16,0>((_QWORD *)v17, 8 * ((v18 - (__int64)v17) >> 3));
    goto LABEL_12;
  }
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v12, 0x81u, 0LL);
LABEL_17:
  if ( (_QWORD)v17 )
    std::_Deallocate<16,0>((_QWORD *)v17, 8 * ((v18 - (__int64)v17) >> 3));
LABEL_13:
  if ( v4 )
    std::_Deallocate<16,0>(v4, 8 * ((v16 - (__int64)v4) >> 3));
  return v5;
}
