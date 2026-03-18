/*
 * XREFs of ??_ECMessageConversationHost@@MEAAPEAXI@Z @ 0x1802AEF40
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800BC0C0 (--3@YAXPEAX@Z.c)
 *     ?FinalRelease@?$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ @ 0x18020AD40 (-FinalRelease@-$CMILRefCountBaseT@VIUnknownWeakRef@@VCMilObjectDeleter@@@@MEAAXXZ.c)
 *     ?Disconnect@CMessageConversationHost@@UEAAXXZ @ 0x1802AEFA0 (-Disconnect@CMessageConversationHost@@UEAAXXZ.c)
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
