/*
 * XREFs of ?StartActivity@TMAppResize@TabletModeTelemetry@@QEAAXPEAUIAppLayout@@@Z @ 0x1805303F4
 * Callers:
 *     ?Show@AppResizeView@@UEAAJAEBUtagPOINT@@@Z @ 0x180530240 (-Show@AppResizeView@@UEAAJAEBUtagPOINT@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?zInternalRelatedId@?$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x180024560 (-zInternalRelatedId@-$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorT.c)
 *     ?zInternalStart@?$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x1800B7240 (-zInternalStart@-$ActivityBase@VWindowManagementLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflector.c)
 *     ?Provider@WindowManagementLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x1800B8D54 (-Provider@WindowManagementLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     _tlgKeywordOn @ 0x1800CBCCC (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x1800E3E94 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall TabletModeTelemetry::TMAppResize::StartActivity(
        TabletModeTelemetry::TMAppResize *this,
        struct IAppLayout *a2)
{
  int v4; // ebx
  int v5; // edi
  int v6; // eax
  int (__fastcall *v7)(struct IAppLayout *, _QWORD, GUID *, __int64 *); // rbx
  const struct _tlgProvider_t *v8; // rax
  __int64 v9; // rbx
  const GUID *v10; // rax
  __int64 v11; // [rsp+60h] [rbp+8h] BYREF
  DWORD CurrentThreadId; // [rsp+68h] [rbp+10h] BYREF
  __int64 v13; // [rsp+70h] [rbp+18h] BYREF

  v4 = (*(__int64 (__fastcall **)(struct IAppLayout *, __int64))(*(_QWORD *)a2 + 80LL))(a2, 1LL);
  v5 = 4;
  v6 = (*(__int64 (__fastcall **)(struct IAppLayout *, __int64))(*(_QWORD *)a2 + 80LL))(a2, 4LL);
  if ( v4 == 1 )
  {
    if ( v6 )
    {
      v5 = 3;
      v11 = 0LL;
      v7 = *(int (__fastcall **)(struct IAppLayout *, _QWORD, GUID *, __int64 *))(*(_QWORD *)a2 + 96LL);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v11);
      if ( v7(a2, 0LL, &GUID_ab0cda95_cad6_4882_a8c7_7c2905752b98, &v11) >= 0
        && (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v11 + 24LL))(v11) == 1 )
      {
        v5 = 2;
      }
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v11);
    }
    else
    {
      v5 = 1;
    }
  }
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStart((__int64)this);
  v8 = WindowManagementLogging::Provider();
  v9 = (__int64)v8;
  if ( *(_DWORD *)v8 > 5u && tlgKeywordOn((__int64)v8, 0x400000000000LL) )
  {
    LODWORD(v11) = v5;
    CurrentThreadId = GetCurrentThreadId();
    v13 = 0LL;
    v10 = (const GUID *)wil::ActivityBase<CortanaProactiveLogging,1,0,4,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId((__int64)this);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v9,
      byte_18080E2E5,
      (const GUID *)(*((_QWORD *)this + 34) + 8LL),
      v10,
      (__int64)&v13,
      (__int64)&CurrentThreadId,
      (__int64)&v11);
  }
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,2197815296,_TlgReflectorTag_Param0IsProviderType>::EnsureWatchingCurrentThread((__int64)this);
}
