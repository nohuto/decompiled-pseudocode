/*
 * XREFs of ?SetComponents@CSceneNode@@QEAAJAEBV?$span@PEAVCSceneComponent@@$0?0@gsl@@@Z @ 0x1802A5B94
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801114F0 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetOrAppendComponents@?$CSceneNodeGeneratedT@VCSceneNode@@VCSceneObject@@@@AEAAJAEBV?$span@PEAVCSceneComponent@@$0?0@gsl@@_N@Z @ 0x180279120 (-SetOrAppendComponents@-$CSceneNodeGeneratedT@VCSceneNode@@VCSceneObject@@@@AEAAJAEBV-$span@PEAV.c)
 *     ??$find@V?$span_iterator@PEAVCSceneNode@@@details@gsl@@PEAVCSceneNode@@@std@@YA?AV?$span_iterator@PEAVCSceneNode@@@details@gsl@@V123@V123@AEBQEAVCSceneNode@@@Z @ 0x1802A54A0 (--$find@V-$span_iterator@PEAVCSceneNode@@@details@gsl@@PEAVCSceneNode@@@std@@YA-AV-$span_iterato.c)
 *     ?DehydrateSpectreResources@CSceneComponent@@QEAAXPEAVCSceneNode@@@Z @ 0x1802ACCA8 (-DehydrateSpectreResources@CSceneComponent@@QEAAXPEAVCSceneNode@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSceneNode::SetComponents(CResource *this, __int64 *a2)
{
  CSceneComponent **v2; // rbx
  CSceneComponent **v4; // r14
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rdx
  int appended; // eax
  unsigned int v11; // ebx
  __int64 v13; // [rsp+30h] [rbp-19h] BYREF
  __int64 v14; // [rsp+38h] [rbp-11h]
  __int64 v15; // [rsp+40h] [rbp-9h]
  _QWORD v16[4]; // [rsp+50h] [rbp+7h] BYREF
  _QWORD v17[4]; // [rsp+70h] [rbp+27h] BYREF
  CSceneComponent *v18; // [rsp+B0h] [rbp+67h] BYREF

  v2 = (CSceneComponent **)*((_QWORD *)this + 13);
  v4 = (CSceneComponent **)*((_QWORD *)this + 14);
  while ( v2 != v4 )
  {
    v6 = a2[1];
    v18 = *v2;
    v7 = *a2;
    v13 = v6;
    v16[0] = v6;
    v16[2] = v6;
    v14 = v6 + 8 * v7;
    v15 = v14;
    v16[1] = v14;
    std::find<gsl::details::span_iterator<CSceneNode *>,CSceneNode *>(
      (__int64)v17,
      (__int64)v16,
      (__int64)&v13,
      (unsigned __int64 *)&v18);
    v8 = a2[1];
    v9 = v8 + 8 * *a2;
    if ( v17[0] != v8 || v17[1] != v9 )
    {
      ((void (__fastcall *)(__int64, __int64))`gsl::details::get_terminate_handler'::`2'::handler)(v8, v9);
      __debugbreak();
    }
    if ( v17[2] == v9 )
      CSceneComponent::DehydrateSpectreResources(v18, this);
    ++v2;
  }
  appended = CSceneNodeGeneratedT<CSceneNode,CSceneObject>::SetOrAppendComponents(
               (struct CResource ***)this,
               (__int64)a2,
               0);
  v11 = appended;
  if ( appended < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, appended, 0xA3u, 0LL);
  else
    return 0;
  return v11;
}
