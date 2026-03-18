/*
 * XREFs of ??1CSceneNode@@MEAA@XZ @ 0x1802A5644
 * Callers:
 *     ??_GCSceneNode@@MEAAPEAXI@Z @ 0x1802A56B0 (--_GCSceneNode@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180040010 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?SetParent@CSceneNode@@AEAAXPEAV1@@Z @ 0x1802A5C94 (-SetParent@CSceneNode@@AEAAXPEAV1@@Z.c)
 */

void __fastcall CSceneNode::~CSceneNode(CSceneNode *this)
{
  CSceneNode **v2; // rsi
  CSceneNode **i; // rdi

  *(_QWORD *)this = &CSceneNode::`vftable';
  v2 = (CSceneNode **)*((_QWORD *)this + 11);
  for ( i = (CSceneNode **)*((_QWORD *)this + 10); i != v2; ++i )
  {
    if ( *((CSceneNode **)*i + 17) == this )
      CSceneNode::SetParent(*i, 0LL);
  }
  wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)this + 18);
  CSceneNodeGeneratedT<CSceneNode,CSceneObject>::~CSceneNodeGeneratedT<CSceneNode,CSceneObject>(this);
}
