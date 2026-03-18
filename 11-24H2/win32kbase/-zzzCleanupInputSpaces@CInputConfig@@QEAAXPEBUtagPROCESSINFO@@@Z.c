/*
 * XREFs of ?zzzCleanupInputSpaces@CInputConfig@@QEAAXPEBUtagPROCESSINFO@@@Z @ 0x1401F4F34
 * Callers:
 *     xxxDestroyThreadInfo @ 0x14015F444 (xxxDestroyThreadInfo.c)
 * Callees:
 *     ?Entry@Iter@CInputConfig@@QEAAPEAU_LIST_ENTRY@@XZ @ 0x1401F3D14 (-Entry@Iter@CInputConfig@@QEAAPEAU_LIST_ENTRY@@XZ.c)
 *     ?_EnsureInputSpace@CInputConfig@@AEAAXXZ @ 0x1401F471C (-_EnsureInputSpace@CInputConfig@@AEAAXXZ.c)
 *     ?_FreeInputSpace@CInputConfig@@AEAAXPEAU_LIST_ENTRY@@@Z @ 0x1401F4A54 (-_FreeInputSpace@CInputConfig@@AEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?_zzzNotifyExternalComponents@CInputConfig@@AEAAXXZ @ 0x1401F4E58 (-_zzzNotifyExternalComponents@CInputConfig@@AEAAXXZ.c)
 */

void __fastcall CInputConfig::zzzCleanupInputSpaces(CInputConfig **this, const struct tagPROCESSINFO *a2)
{
  __int64 UserSessionState; // rbx
  __int64 v5; // rcx
  PERESOURCE *v6; // r14
  struct _ERESOURCE *v7; // rcx
  CInputConfig *v8; // rdx
  CInputConfig *i; // rdi
  char *v10; // rcx
  __int64 v11; // rcx
  struct _LIST_ENTRY *v12; // rax
  CInputConfig *v13; // rcx
  _QWORD v14[5]; // [rsp+20h] [rbp-28h] BYREF

  UserSessionState = W32GetUserSessionState(this);
  ExEnterCriticalRegionAndAcquireResourceExclusive(*(PERESOURCE *)(UserSessionState + 18696));
  v6 = (PERESOURCE *)(W32GetUserSessionState(v5) + 18696);
  v7 = *v6;
  v14[0] = v6;
  ExEnterCriticalRegionAndAcquireResourceShared(v7);
  v8 = *this;
  v14[1] = this;
  for ( i = *(CInputConfig **)v8; ; i = *(CInputConfig **)i )
  {
    v10 = 0LL;
    v14[3] = i;
    v14[2] = v8;
    if ( v8 != (CInputConfig *)this )
      v10 = (char *)v8 + 16;
    if ( !v10 )
      break;
    v11 = 16LL;
    if ( v8 != (CInputConfig *)this )
      v11 = (__int64)v8 + 32;
    if ( *(const struct tagPROCESSINFO **)v11 == a2 )
    {
      v12 = CInputConfig::Iter::Entry((CInputConfig::Iter *)v14);
      CInputConfig::_FreeInputSpace(v13, v12);
    }
    v8 = i;
  }
  ExReleaseResourceAndLeaveCriticalRegion(*v6);
  CInputConfig::_EnsureInputSpace((CInputConfig *)this);
  ExReleaseResourceAndLeaveCriticalRegion(*(PERESOURCE *)(UserSessionState + 18696));
  CInputConfig::_zzzNotifyExternalComponents((CInputConfig *)this);
}
