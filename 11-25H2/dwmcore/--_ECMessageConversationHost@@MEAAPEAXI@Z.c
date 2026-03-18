/*
 * XREFs of ??_ECMessageConversationHost@@MEAAPEAXI@Z @ 0x1802B8B30
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800E2400 (--3@YAXPEAX@Z.c)
 *     ?FinalRelease@?$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ @ 0x180217010 (-FinalRelease@-$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ.c)
 *     ?Disconnect@CMessageConversationHost@@UEAAXXZ @ 0x1802B8B90 (-Disconnect@CMessageConversationHost@@UEAAXXZ.c)
 */

CMessageConversationHost *__fastcall CMessageConversationHost::`vector deleting destructor'(
        CMessageConversationHost *this,
        char a2)
{
  *(_QWORD *)this = &CMessageConversationHost::`vftable';
  CMessageConversationHost::Disconnect(this);
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
      CMILRefCountBaseT<IUnknownWeakRef,CMilObjectDeleter>::FinalRelease();
    else
      operator delete(this);
  }
  return this;
}
