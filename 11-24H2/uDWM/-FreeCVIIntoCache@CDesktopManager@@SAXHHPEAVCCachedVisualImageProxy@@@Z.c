/*
 * XREFs of ?FreeCVIIntoCache@CDesktopManager@@SAXHHPEAVCCachedVisualImageProxy@@@Z @ 0x1800045F4
 * Callers:
 *     ??1CTransitionWindowSnapshot@@MEAA@XZ @ 0x18000420C (--1CTransitionWindowSnapshot@@MEAA@XZ.c)
 *     ??1CWindowSnapshot@@MEAA@XZ @ 0x18000445C (--1CWindowSnapshot@@MEAA@XZ.c)
 * Callees:
 *     ?_IsSameAsTargetCachedCVI@CDesktopManager@@CA_NHH@Z @ 0x180004668 (-_IsSameAsTargetCachedCVI@CDesktopManager@@CA_NHH@Z.c)
 *     ?AddRef@CMILRefCountBase@@UEAAKXZ @ 0x1800263E0 (-AddRef@CMILRefCountBase@@UEAAKXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180026560 (-Release@CBaseObject@@QEAAKXZ.c)
 */

void __fastcall CDesktopManager::FreeCVIIntoCache(int a1, int a2, struct CCachedVisualImageProxy *a3)
{
  __int64 v3; // rdi
  _QWORD *i; // rax
  CBaseObject *v6; // rcx

  if ( a3 )
  {
    v3 = 0LL;
    for ( i = (_QWORD *)((char *)CDesktopManager::s_pDesktopManagerInstance + 1240); *i; ++i )
    {
      v3 = (unsigned int)(v3 + 1);
      if ( (unsigned int)v3 >= 2 )
        return;
    }
    if ( CDesktopManager::_IsSameAsTargetCachedCVI(a1, a2) )
    {
      if ( CMILRefCountBase::AddRef(a3) == 2 )
        *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + v3 + 155) = a3;
      else
        CBaseObject::Release(v6);
    }
  }
}
