/*
 * XREFs of ?StartActivity@PinManagerUpdatePinnedTaskbarItem@PinManagerTelemetry@@QEAAXPEBG0@Z @ 0x1805E9638
 * Callers:
 *     ?UpdatePinnedTaskbarItem@PinManager@implementation@Shell@Internal@Windows@winrt@@UEAAJPEFBU_ITEMIDLIST@@0W4PINNEDLISTMODIFYCALLER@@@Z @ 0x1805EC010 (-UpdatePinnedTaskbarItem@PinManager@implementation@Shell@Internal@Windows@winrt@@UEAAJPEFBU_ITEM.c)
 * Callees:
 *     ?zInternalRelatedId@?$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x180024560 (-zInternalRelatedId@-$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorT.c)
 *     _tlgKeywordOn @ 0x1800CBCCC (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@5@Z @ 0x1801652B8 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@U3@@-$_tlgWriteTempl.c)
 *     ?zInternalStart@?$ActivityBase@VPinManagerTelemetry@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x18028F5CC (-zInternalStart@-$ActivityBase@VPinManagerTelemetry@@$00$0EAAAAAAAAAAA@$04$0CAAAAAA@U_TlgReflect.c)
 *     ?Provider@PinManagerTelemetry@@SAPEBU_tlgProvider_t@@XZ @ 0x1802905EC (-Provider@PinManagerTelemetry@@SAPEBU_tlgProvider_t@@XZ.c)
 */

void __fastcall PinManagerTelemetry::PinManagerUpdatePinnedTaskbarItem::StartActivity(
        PinManagerTelemetry::PinManagerUpdatePinnedTaskbarItem *this,
        const unsigned __int16 *a2,
        const unsigned __int16 *a3)
{
  __int64 v6; // rcx
  const struct _tlgProvider_t *v7; // rax
  __int64 v8; // rdi
  const GUID *v9; // rax
  const WCHAR *v10; // [rsp+40h] [rbp-28h] BYREF
  __int64 v11[4]; // [rsp+48h] [rbp-20h] BYREF
  DWORD CurrentThreadId; // [rsp+70h] [rbp+8h] BYREF
  const WCHAR *v13; // [rsp+88h] [rbp+20h] BYREF

  wil::ActivityBase<PinManagerTelemetry,1,70368744177664,5,33554432,_TlgReflectorTag_Param0IsProviderType>::zInternalStart((__int64)this);
  v7 = PinManagerTelemetry::Provider(v6);
  v8 = (__int64)v7;
  if ( *(_DWORD *)v7 > 5u && tlgKeywordOn((__int64)v7, 0x400000000000LL) )
  {
    v13 = a3;
    v10 = a2;
    v11[0] = 0x2000000LL;
    CurrentThreadId = GetCurrentThreadId();
    v9 = (const GUID *)wil::ActivityBase<CortanaProactiveLogging,1,0,4,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId((__int64)this);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>>(
      v8,
      byte_18081764B,
      (const GUID *)(*((_QWORD *)this + 34) + 8LL),
      v9,
      (__int64)v11,
      (__int64)&CurrentThreadId,
      &v10,
      &v13);
  }
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,2197815296,_TlgReflectorTag_Param0IsProviderType>::EnsureWatchingCurrentThread((__int64)this);
}
