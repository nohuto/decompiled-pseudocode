/*
 * XREFs of ?OnBluetoothBroadcastCapabilityChanged@BluetoothBroadcastProvider@@AEAAJAEBW4BluetoothLEAudioSupportedState@Internal@Audio@Bluetooth@Microsoft@@@Z @ 0x1800E1790
 * Callers:
 *     std::_Func_impl_no_alloc__lambda_87eef03b40d5bb222c8cf5623be8d594__void_::_Do_call @ 0x1800E2FC0 (std--_Func_impl_no_alloc__lambda_87eef03b40d5bb222c8cf5623be8d594__void_--_Do_call.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x18000178C (--$Write@U-$_tlgWrapperByVal@$00@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x18000F7B0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18001EBF0 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?NotifyMulticastManager@BluetoothBroadcastProvider@@AEAAXXZ @ 0x1800E1774 (-NotifyMulticastManager@BluetoothBroadcastProvider@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall BluetoothBroadcastProvider::OnBluetoothBroadcastCapabilityChanged(
        BluetoothBroadcastProvider *this,
        const enum Microsoft::Bluetooth::Audio::Internal::BluetoothLEAudioSupportedState *a2)
{
  struct _RTL_CRITICAL_SECTION *v4; // rbx
  char v5; // al
  _DWORD *v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  char v10; // [rsp+40h] [rbp+8h] BYREF
  struct _RTL_CRITICAL_SECTION *v11; // [rsp+48h] [rbp+10h] BYREF

  v4 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 24);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 24));
  v11 = v4;
  v5 = (*(_BYTE *)a2 & 2) != 0;
  if ( v5 != *((_BYTE *)this + 16) )
  {
    *((_BYTE *)this + 16) = v5;
    v6 = (_DWORD *)*((_QWORD *)AudioSrvTelemetryProvider::Instance() + 1);
    if ( *v6 > 4u )
    {
      v10 = *((_BYTE *)this + 16);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<1>>(
        (int)v6,
        (int)&unk_1801A0F48,
        v7,
        v8,
        (__int64)&v10);
    }
    BluetoothBroadcastProvider::NotifyMulticastManager(this);
  }
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v11);
  return 0LL;
}
