/*
 * XREFs of ?ClearBorder@CLegacyNonClientBackground@@QEAAXXZ @ 0x18002E76C
 * Callers:
 *     ?UpdateNCAreaGeometry@CTopLevelWindow@@AEAAJXZ @ 0x18002DB50 (-UpdateNCAreaGeometry@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180026560 (-Release@CBaseObject@@QEAAKXZ.c)
 */

void __fastcall CLegacyNonClientBackground::ClearBorder(CLegacyNonClientBackground *this)
{
  CBaseObject *v2; // rcx

  v2 = (CBaseObject *)*((_QWORD *)this + 34);
  if ( v2 )
  {
    *((_QWORD *)this + 34) = 0LL;
    CBaseObject::Release(v2);
    CLegacyNonClientBackground::DirtyForRebuild(this);
  }
}
