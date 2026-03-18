/*
 * XREFs of ??1CHolographicInteropTaskQueue@@EEAA@XZ @ 0x1802D3DDC
 * Callers:
 *     ??_GCHolographicInteropTaskQueue@@EEAAPEAXI@Z @ 0x1802D3E20 (--_GCHolographicInteropTaskQueue@@EEAAPEAXI@Z.c)
 * Callees:
 *     ?ClearList@CHolographicInteropTaskQueue@@AEAAXPEAT_SLIST_HEADER@@@Z @ 0x1802D3E5C (-ClearList@CHolographicInteropTaskQueue@@AEAAXPEAT_SLIST_HEADER@@@Z.c)
 */

void __fastcall CHolographicInteropTaskQueue::~CHolographicInteropTaskQueue(CHolographicInteropTaskQueue *this)
{
  CHolographicInteropTaskQueue *v2; // rcx
  void *v3; // rdx

  *(_QWORD *)this = &CHolographicInteropTaskQueue::`vftable';
  CHolographicInteropTaskQueue::ClearList(this, (union _SLIST_HEADER *)this + 1);
  CHolographicInteropTaskQueue::ClearList(v2, (union _SLIST_HEADER *)this + 2);
  __1__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__QEAA_XZ(
    (wil::details **)this + 6,
    v3);
}
