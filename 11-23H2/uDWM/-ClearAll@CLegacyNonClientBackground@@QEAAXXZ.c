/*
 * XREFs of ?ClearAll@CLegacyNonClientBackground@@QEAAXXZ @ 0x180010AF4
 * Callers:
 *     ?InitializeVisualTreeClone@CTopLevelWindow@@AEAAJPEAV1@W4CloneOptions@@@Z @ 0x180010468 (-InitializeVisualTreeClone@CTopLevelWindow@@AEAAJPEAV1@W4CloneOptions@@@Z.c)
 *     ?UpdateNCAreaBackground@CTopLevelWindow@@AEAAJXZ @ 0x18003B874 (-UpdateNCAreaBackground@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18004CDD0 (-Release@CBaseObject@@QEAAKXZ.c)
 */

void __fastcall CLegacyNonClientBackground::ClearAll(CLegacyNonClientBackground *this)
{
  CBaseObject *v2; // rcx
  CBaseObject *v3; // rcx

  v2 = (CBaseObject *)*((_QWORD *)this + 40);
  *((_QWORD *)this + 40) = 0LL;
  if ( v2 )
    CBaseObject::Release(v2);
  v3 = (CBaseObject *)*((_QWORD *)this + 39);
  *((_QWORD *)this + 39) = 0LL;
  if ( v3 )
    CBaseObject::Release(v3);
  CLegacyNonClientBackground::DirtyForRebuild(this);
}
