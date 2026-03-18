/*
 * XREFs of ?SetParent@CSceneNode@@AEAAXPEAV1@@Z @ 0x1802A5C94
 * Callers:
 *     ?SetOrAppendChildren@?$CSceneNodeGeneratedT@VCSceneNode@@VCSceneObject@@@@AEAAJAEBV?$span@PEAVCSceneNode@@$0?0@gsl@@_N@Z @ 0x180278F90 (-SetOrAppendChildren@-$CSceneNodeGeneratedT@VCSceneNode@@VCSceneObject@@@@AEAAJAEBV-$span@PEAVCS.c)
 *     ??1CSceneNode@@MEAA@XZ @ 0x1802A5644 (--1CSceneNode@@MEAA@XZ.c)
 *     ?SetChildren@CSceneNode@@QEAAJAEBV?$span@PEAVCSceneNode@@$0?0@gsl@@@Z @ 0x1802A5A8C (-SetChildren@CSceneNode@@QEAAJAEBV-$span@PEAVCSceneNode@@$0-0@gsl@@@Z.c)
 * Callees:
 *     ?DehydrateSpectreResources@CSceneNode@@QEAAXXZ @ 0x1802A57DC (-DehydrateSpectreResources@CSceneNode@@QEAAXXZ.c)
 *     ?HydrateSpectreResources@CSceneNode@@QEAAJPEAVCSceneWorld@@@Z @ 0x1802A58A0 (-HydrateSpectreResources@CSceneNode@@QEAAJPEAVCSceneWorld@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802F6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CSceneNode::SetParent(CSceneNode *this, struct CSceneNode *a2)
{
  struct CSceneWorld **v4; // rdi
  __int64 v5; // rcx

  if ( *((struct CSceneNode **)this + 17) != a2 )
  {
    v4 = (struct CSceneWorld **)((char *)a2 + 128);
    if ( !a2 || *((struct CSceneWorld **)this + 16) != *v4 )
      CSceneNode::DehydrateSpectreResources(this);
    *((_QWORD *)this + 17) = a2;
    if ( a2 && *((_QWORD *)a2 + 18) )
    {
      v5 = *((_QWORD *)this + 18);
      if ( v5 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 24LL))(v5);
      else
        CSceneNode::HydrateSpectreResources(this, *v4);
    }
  }
}
