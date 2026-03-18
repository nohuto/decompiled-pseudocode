/*
 * XREFs of ?SetChildren@CSceneNode@@QEAAJAEBV?$span@PEAVCSceneNode@@$0?0@gsl@@@Z @ 0x1802AF5CC
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x18014D130 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 *     ?OnRootChanged@CSceneVisual@@QEAAJXZ @ 0x180299890 (-OnRootChanged@CSceneVisual@@QEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800E7950 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetOrAppendChildren@?$CSceneNodeGeneratedT@VCSceneNode@@VCSceneObject@@@@AEAAJAEBV?$span@PEAVCSceneNode@@$0?0@gsl@@_N@Z @ 0x180283BB0 (-SetOrAppendChildren@-$CSceneNodeGeneratedT@VCSceneNode@@VCSceneObject@@@@AEAAJAEBV-$span@PEAVCS.c)
 *     ??$find@V?$span_iterator@PEAVCSceneNode@@@details@gsl@@PEAVCSceneNode@@@std@@YA?AV?$span_iterator@PEAVCSceneNode@@@details@gsl@@V123@V123@AEBQEAVCSceneNode@@@Z @ 0x1802AEFD8 (--$find@V-$span_iterator@PEAVCSceneNode@@@details@gsl@@PEAVCSceneNode@@@std@@YA-AV-$span_iterato.c)
 *     ?SetParent@CSceneNode@@AEAAXPEAV1@@Z @ 0x1802AF7D4 (-SetParent@CSceneNode@@AEAAXPEAV1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSceneNode::SetChildren(CResource *this, __int64 *a2)
{
  CSceneNode **v2; // rbx
  CSceneNode **v4; // r14
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rdx
  int appended; // eax
  unsigned int v10; // ebx
  __int64 v12; // [rsp+30h] [rbp-19h] BYREF
  __int64 v13; // [rsp+38h] [rbp-11h]
  __int64 v14; // [rsp+40h] [rbp-9h]
  _QWORD v15[4]; // [rsp+50h] [rbp+7h] BYREF
  _QWORD v16[4]; // [rsp+70h] [rbp+27h] BYREF
  CSceneNode *v17; // [rsp+B0h] [rbp+67h] BYREF

  v2 = (CSceneNode **)*((_QWORD *)this + 10);
  v4 = (CSceneNode **)*((_QWORD *)this + 11);
  while ( v2 != v4 )
  {
    v17 = *v2;
    if ( *((CResource **)v17 + 17) == this )
    {
      v6 = *a2;
      v12 = a2[1];
      v15[0] = v12;
      v15[2] = v12;
      v13 = v12 + 8 * v6;
      v14 = v13;
      v15[1] = v13;
      std::find<gsl::details::span_iterator<CSceneNode *>,CSceneNode *>(
        (__int64)v16,
        (__int64)v15,
        (__int64)&v12,
        (unsigned __int64 *)&v17);
      v7 = a2[1];
      v8 = v7 + 8 * *a2;
      if ( v16[0] != v7 || v16[1] != v8 )
      {
        ((void (__fastcall *)(__int64, __int64))`gsl::details::get_terminate_handler'::`2'::handler)(v7, v8);
        __debugbreak();
      }
      if ( v16[2] == v8 )
        CSceneNode::SetParent(v17, 0LL);
    }
    ++v2;
  }
  appended = CSceneNodeGeneratedT<CSceneNode,CSceneObject>::SetOrAppendChildren(
               (struct CResource ***)this,
               (__int64)a2,
               0);
  v10 = appended;
  if ( appended < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, appended, 0x7Cu, 0LL);
  else
    return 0;
  return v10;
}
