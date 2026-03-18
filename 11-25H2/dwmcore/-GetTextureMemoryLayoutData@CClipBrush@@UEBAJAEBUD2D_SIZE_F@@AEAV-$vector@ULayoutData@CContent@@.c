/*
 * XREFs of ?GetTextureMemoryLayoutData@CClipBrush@@UEBAJAEBUD2D_SIZE_F@@AEAV?$vector@ULayoutData@CContent@@V?$allocator@ULayoutData@CContent@@@std@@@std@@@Z @ 0x18029F9B0
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180069F90 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$insert@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@ULayoutData@CContent@@@std@@@std@@@std@@$0A@@?$vector@ULayoutData@CContent@@V?$allocator@ULayoutData@CContent@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@ULayoutData@CContent@@@std@@@std@@@1@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@ULayoutData@CContent@@@std@@@std@@@1@V21@1@Z @ 0x18029F3F0 (--$insert@V-$_Vector_iterator@V-$_Vector_val@U-$_Simple_types@ULayoutData@CContent@@@std@@@std@@.c)
 *     ??4?$vector@ULayoutData@CContent@@V?$allocator@ULayoutData@CContent@@@std@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x18029F4AC (--4-$vector@ULayoutData@CContent@@V-$allocator@ULayoutData@CContent@@@std@@@std@@QEAAAEAV01@AEBV.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CClipBrush::GetTextureMemoryLayoutData(__int64 a1, __int64 a2, __int64 a3)
{
  char *v3; // rax
  _QWORD *v4; // rdi
  __int64 v5; // rbx
  unsigned int v6; // r14d
  __int64 v8; // rcx
  int v9; // eax
  __int128 v11; // [rsp+30h] [rbp-30h] BYREF
  __int64 v12; // [rsp+40h] [rbp-20h]
  _QWORD v13[2]; // [rsp+48h] [rbp-18h] BYREF
  __int64 v14; // [rsp+58h] [rbp-8h]
  __int64 v15; // [rsp+80h] [rbp+20h] BYREF

  v3 = *(char **)a3;
  v4 = 0LL;
  v13[1] = 0LL;
  v5 = 0LL;
  v6 = 0;
  v13[0] = 0LL;
  v14 = 0LL;
  if ( v3 != *(char **)(a3 + 8) )
    *(_QWORD *)(a3 + 8) = v3;
  v8 = *(_QWORD *)(a1 + 104);
  if ( !v8 )
    goto LABEL_7;
  v12 = 0LL;
  v11 = 0LL;
  v9 = (*(__int64 (__fastcall **)(__int64, __int64, __int128 *))(*(_QWORD *)v8 + 288LL))(v8, a2, &v11);
  v6 = v9;
  if ( v9 >= 0 )
  {
    std::vector<CContent::LayoutData>::insert<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<CContent::LayoutData>>>,0>(
      v13,
      &v15,
      0LL,
      (const void *)v11,
      *((__int64 *)&v11 + 1));
    if ( (_QWORD)v11 )
      std::_Deallocate<16,0>((_QWORD *)v11, 8 * ((v12 - (__int64)v11) >> 3));
LABEL_7:
    std::vector<CContent::LayoutData>::operator=((char **)a3, (__int64)v13);
    v5 = v14;
    v4 = (_QWORD *)v13[0];
    goto LABEL_8;
  }
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v9, 0x4Eu, 0LL);
  if ( (_QWORD)v11 )
    std::_Deallocate<16,0>((_QWORD *)v11, 8 * ((v12 - (__int64)v11) >> 3));
LABEL_8:
  if ( v4 )
    std::_Deallocate<16,0>(v4, 8 * ((v5 - (__int64)v4) >> 3));
  return v6;
}
