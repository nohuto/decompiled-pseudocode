/*
 * XREFs of ?LockForStreamGroupConnectionDisconnection@CDeviceGraphObjectsStore@@UEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@XZ @ 0x180064C60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_QWORD *__fastcall CDeviceGraphObjectsStore::LockForStreamGroupConnectionDisconnection(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rbx

  v2 = a1 + 216;
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 216));
  *a2 = v2;
  return a2;
}
