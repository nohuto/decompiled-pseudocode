/*
 * XREFs of ?TryAcquireGlobalLock@CBtAudioResourceManagerBase@@UEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@XZ @ 0x180088350
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct _RTL_CRITICAL_SECTION **__fastcall CBtAudioResourceManagerBase::TryAcquireGlobalLock(
        struct _RTL_CRITICAL_SECTION *a1,
        struct _RTL_CRITICAL_SECTION **a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx

  v2 = a1 + 4;
  EnterCriticalSection(a1 + 4);
  *a2 = v2;
  return a2;
}
