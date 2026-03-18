/*
 * XREFs of ??1CInputConfig@@AEAA@XZ @ 0x1401F39E8
 * Callers:
 *     ?UnInitialize@CInputConfig@@SAXXZ @ 0x1400D089C (-UnInitialize@CInputConfig@@SAXXZ.c)
 * Callees:
 *     ?UnLockExclusive@tagDomLock@@QEBAXXZ @ 0x1400B7840 (-UnLockExclusive@tagDomLock@@QEBAXXZ.c)
 *     ??0CEResourceLockExclusive@@QEAA@AEAVCEResourceLock@@@Z @ 0x1401F3990 (--0CEResourceLockExclusive@@QEAA@AEAVCEResourceLock@@@Z.c)
 *     ?_FreeInputSpace@CInputConfig@@AEAAXPEAU_LIST_ENTRY@@@Z @ 0x1401F4A54 (-_FreeInputSpace@CInputConfig@@AEAAXPEAU_LIST_ENTRY@@@Z.c)
 */

void __fastcall CInputConfig::~CInputConfig(struct _LIST_ENTRY **this)
{
  __int64 UserSessionState; // rax
  CInputConfig *v3; // rcx
  tagDomLock *v4; // [rsp+30h] [rbp+8h] BYREF

  UserSessionState = W32GetUserSessionState(this);
  CEResourceLockExclusive::CEResourceLockExclusive(
    (CEResourceLockExclusive *)&v4,
    (PERESOURCE *)(UserSessionState + 18696));
  while ( *this != (struct _LIST_ENTRY *)this )
    CInputConfig::_FreeInputSpace(v3, *this);
  tagDomLock::UnLockExclusive((PERESOURCE *)v4);
}
