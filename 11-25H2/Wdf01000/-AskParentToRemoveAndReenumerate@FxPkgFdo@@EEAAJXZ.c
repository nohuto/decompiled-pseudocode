/*
 * XREFs of ?AskParentToRemoveAndReenumerate@FxPkgFdo@@EEAAJXZ @ 0x1400AA570
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400AC680 (_guard_dispatch_icall.c)
 */

__int64 __fastcall FxPkgFdo::AskParentToRemoveAndReenumerate(FxPkgFdo *this)
{
  void (__fastcall *SurpriseRemoveAndReenumerateSelf)(void *); // rax

  SurpriseRemoveAndReenumerateSelf = this->m_SurpriseRemoveAndReenumerateSelfInterface.SurpriseRemoveAndReenumerateSelf;
  if ( !SurpriseRemoveAndReenumerateSelf )
    return 3221225659LL;
  SurpriseRemoveAndReenumerateSelf(this->m_SurpriseRemoveAndReenumerateSelfInterface.Context);
  return 0LL;
}
