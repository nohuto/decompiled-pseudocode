/*
 * XREFs of ?Unsubscribe@SubscriptionList@details_abi@wil@@QEAAXAEAVsrwlock@3@PEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@@Z @ 0x18009D92C
 * Callers:
 *     ??1FeatureStateManager@details@wil@@QEAA@XZ @ 0x18009A790 (--1FeatureStateManager@details@wil@@QEAA@XZ.c)
 *     ?WilApiImpl_UnsubscribeFeatureStateChangeNotification@details@wil@@YAXPEAUFEATURE_STATE_CHANGE_SUBSCRIPTION__@@@Z @ 0x18009D9D0 (-WilApiImpl_UnsubscribeFeatureStateChangeNotification@details@wil@@YAXPEAUFEATURE_STATE_CHANGE_S.c)
 * Callees:
 *     ?EnterCriticalSection@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_CRITICAL_SECTION@@@Z @ 0x18002E12C (-EnterCriticalSection@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRI.c)
 */

void __fastcall wil::details_abi::SubscriptionList::Unsubscribe(
        struct _RTL_CRITICAL_SECTION *this,
        RTL_SRWLOCK *a2,
        struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ *a3)
{
  PRTL_CRITICAL_SECTION_DEBUG DebugInfo; // rcx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+40h] [rbp+18h] BYREF

  if ( a3 )
  {
    wil::EnterCriticalSection(&lpCriticalSection, this);
    AcquireSRWLockExclusive(a2);
    DebugInfo = this[1].DebugInfo;
    if ( (unsigned __int64)a3 - 1 < (*(_QWORD *)&this[1].LockCount - (_QWORD)DebugInfo) >> 4 )
      *((_OWORD *)&DebugInfo->Type + (unsigned __int64)a3 - 1) = 0LL;
    if ( a2 )
      ReleaseSRWLockExclusive(a2);
    if ( lpCriticalSection )
      LeaveCriticalSection(lpCriticalSection);
  }
}
