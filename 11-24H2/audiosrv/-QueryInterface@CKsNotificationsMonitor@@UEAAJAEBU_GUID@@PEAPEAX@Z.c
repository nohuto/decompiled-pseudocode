/*
 * XREFs of ?QueryInterface@CKsNotificationsMonitor@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18011F1C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CKsNotificationsMonitor::QueryInterface(
        CKsNotificationsMonitor *this,
        const struct _GUID *a2,
        void **a3)
{
  __int64 v4; // rax
  __int64 v5; // rax

  if ( !a3 )
    return 2147500035LL;
  *a3 = 0LL;
  v4 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&winrt::impl::guid_v<winrt::Windows::Foundation::IUnknown>.Data1;
  if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&winrt::impl::guid_v<winrt::Windows::Foundation::IUnknown>.Data1 )
    v4 = *(_QWORD *)a2->Data4 - *(_QWORD *)winrt::impl::guid_v<winrt::Windows::Foundation::IUnknown>.Data4;
  if ( v4 )
  {
    v5 = *(_QWORD *)&a2->Data1 - *(_QWORD *)&GUID_a09513ed_c709_4d21_bd7b_5f34c47f3947.Data1;
    if ( *(_QWORD *)&a2->Data1 == *(_QWORD *)&GUID_a09513ed_c709_4d21_bd7b_5f34c47f3947.Data1 )
      v5 = *(_QWORD *)a2->Data4 - *(_QWORD *)GUID_a09513ed_c709_4d21_bd7b_5f34c47f3947.Data4;
    if ( v5 )
      return 2147500034LL;
  }
  *a3 = this;
  (*(void (__fastcall **)(CKsNotificationsMonitor *))(*(_QWORD *)this + 8LL))(this);
  return 0LL;
}
