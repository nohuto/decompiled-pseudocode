/*
 * XREFs of ?HydrateSpectreResources@CSceneComponent@@QEAAJPEAVCSceneNode@@@Z @ 0x1802ACD40
 * Callers:
 *     ?SetOrAppendComponents@?$CSceneNodeGeneratedT@VCSceneNode@@VCSceneObject@@@@AEAAJAEBV?$span@PEAVCSceneComponent@@$0?0@gsl@@_N@Z @ 0x180279120 (-SetOrAppendComponents@-$CSceneNodeGeneratedT@VCSceneNode@@VCSceneObject@@@@AEAAJAEBV-$span@PEAV.c)
 *     ?HydrateSpectreResources@CSceneNode@@QEAAJPEAVCSceneWorld@@@Z @ 0x1802A58A0 (-HydrateSpectreResources@CSceneNode@@QEAAJPEAVCSceneWorld@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??$_Find@PEAVCSceneNode@@@?$_Tree@V?$_Tmap_traits@PEAVCSceneNode@@PEAXU?$less@PEAVCSceneNode@@@std@@V?$allocator@U?$pair@QEAVCSceneNode@@PEAX@std@@@3@$0A@@std@@@std@@AEBAPEAU?$_Tree_node@U?$pair@QEAVCSceneNode@@PEAX@std@@PEAX@1@AEBQEAVCSceneNode@@@Z @ 0x18020FF84 (--$_Find@PEAVCSceneNode@@@-$_Tree@V-$_Tmap_traits@PEAVCSceneNode@@PEAXU-$less@PEAVCSceneNode@@@s.c)
 *     ??$_Try_emplace@AEBQEAVCSceneNode@@$$V@?$map@PEAVCSceneNode@@PEAXU?$less@PEAVCSceneNode@@@std@@V?$allocator@U?$pair@QEAVCSceneNode@@PEAX@std@@@3@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@QEAVCSceneNode@@PEAX@std@@PEAX@std@@_N@1@AEBQEAVCSceneNode@@@Z @ 0x1802ACAF0 (--$_Try_emplace@AEBQEAVCSceneNode@@$$V@-$map@PEAVCSceneNode@@PEAXU-$less@PEAVCSceneNode@@@std@@V.c)
 *     ?DehydrateSpectreResources@CSceneComponent@@QEAAXPEAVCSceneNode@@@Z @ 0x1802ACCA8 (-DehydrateSpectreResources@CSceneComponent@@QEAAXPEAVCSceneNode@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSceneComponent::HydrateSpectreResources(__int64 **this, struct CSceneNode *a2)
{
  __int64 *v2; // rbp
  __int64 *v5; // rdx
  __int64 v6; // rdi
  __int64 (__fastcall *v7)(__int64, __int64, struct CSceneNode **); // rbx
  __int64 v8; // rax
  int v9; // ebx
  struct CSceneNode *v10; // rbx
  unsigned int v11; // eax
  _BYTE v13[40]; // [rsp+30h] [rbp-28h] BYREF
  struct CSceneNode *v14; // [rsp+60h] [rbp+8h] BYREF
  struct CSceneNode *v15; // [rsp+68h] [rbp+10h] BYREF

  v15 = a2;
  v2 = (__int64 *)(this + 9);
  v14 = a2;
  if ( std::_Tree<std::_Tmap_traits<CSceneNode *,void *,std::less<CSceneNode *>,std::allocator<std::pair<CSceneNode * const,void *>>,0>>::_Find<CSceneNode *>(
         this + 9,
         &v14) != this[9] )
    return 0;
  v5 = *this;
  v14 = 0LL;
  v6 = *((_QWORD *)a2 + 18);
  v7 = *(__int64 (__fastcall **)(__int64, __int64, struct CSceneNode **))(*(_QWORD *)v6 + 48LL);
  v8 = ((__int64 (__fastcall *)(__int64 **))v5[24])(this);
  v9 = v7(v6, v8, &v14);
  if ( v9 < 0 )
  {
    v11 = 39;
    goto LABEL_6;
  }
  v10 = v14;
  *(_QWORD *)(*(_QWORD *)std::map<CSceneNode *,void *>::_Try_emplace<CSceneNode * const &,>(
                           v2,
                           (__int64)v13,
                           (__int64 *)&v15)
            + 40LL) = v10;
  v9 = ((__int64 (__fastcall *)(__int64 **, struct CSceneNode *))(*this)[25])(this, v14);
  if ( v9 >= 0 )
    return 0;
  v11 = 42;
LABEL_6:
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v9, v11, 0LL);
  CSceneComponent::DehydrateSpectreResources(this, v15);
  return (unsigned int)v9;
}
