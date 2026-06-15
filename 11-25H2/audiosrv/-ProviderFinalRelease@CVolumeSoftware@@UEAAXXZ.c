/*
 * XREFs of ?ProviderFinalRelease@CVolumeSoftware@@UEAAXXZ @ 0x18010D180
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18001EBF0 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?PersistVolumeState@CVolumeSoftware@@AEAAXXZ @ 0x18002DAC8 (-PersistVolumeState@CVolumeSoftware@@AEAAXXZ.c)
 *     ?Release@?$CComPtrBase@UIPart@@@ATL@@QEAAXXZ @ 0x18006FB98 (-Release@-$CComPtrBase@UIPart@@@ATL@@QEAAXXZ.c)
 */

void __fastcall CVolumeSoftware::ProviderFinalRelease(CVolumeSoftware *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // [rsp+30h] [rbp+8h] BYREF

  if ( *((_QWORD *)this + 7) )
  {
    CVolumeSoftware::PersistVolumeState(this);
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 256));
    v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 256);
    ATL::CComPtrBase<IPart>::Release((_QWORD *)this + 31);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v2);
  }
}
