/*
 * XREFs of ?StartActivity@PresentWindow@CFramePresentationTelemetry@@QEAAXIPEAUHWND__@@0@Z @ 0x1800357A4
 * Callers:
 *     ?PresentWindow@CFrameApplicationPresentation@@UEAAJPEAUITaskWindow@@@Z @ 0x180035550 (-PresentWindow@CFrameApplicationPresentation@@UEAAJPEAUITaskWindow@@@Z.c)
 * Callees:
 *     ?zInternalRelatedId@?$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEBAPEBU_GUID@@XZ @ 0x180024560 (-zInternalRelatedId@-$ActivityBase@VCortanaProactiveLogging@@$00$0A@$03$0BAAAAAA@U_TlgReflectorT.c)
 *     ?zInternalStart@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x18003287C (-zInternalStart@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04$0A@U_TlgReflectorTag_Param0IsPro.c)
 *     ?Provider@CAppManagerLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x180032AC4 (-Provider@CAppManagerLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@433@Z @ 0x1800CC654 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U1@U1@@-$_tlgWriteTemplate@$$A6AJP.c)
 */

void __fastcall CFramePresentationTelemetry::PresentWindow::StartActivity(
        CFramePresentationTelemetry::PresentWindow *this,
        int a2,
        HWND a3,
        HWND a4)
{
  const struct _tlgProvider_t *v8; // rax
  int v9; // edi
  int v10; // eax
  DWORD CurrentThreadId; // [rsp+50h] [rbp-38h] BYREF
  HWND v12; // [rsp+58h] [rbp-30h] BYREF
  HWND v13; // [rsp+60h] [rbp-28h] BYREF
  __int64 v14; // [rsp+68h] [rbp-20h] BYREF
  int v15; // [rsp+90h] [rbp+8h] BYREF

  wil::ActivityBase<CAppManagerLogging,0,0,5,0,_TlgReflectorTag_Param0IsProviderType>::zInternalStart((__int64)this);
  v8 = CAppManagerLogging::Provider();
  v9 = (int)v8;
  if ( *(_DWORD *)v8 > 5u )
  {
    v12 = a4;
    v13 = a3;
    v15 = a2;
    v14 = 0LL;
    CurrentThreadId = GetCurrentThreadId();
    v10 = wil::ActivityBase<CortanaProactiveLogging,1,0,4,16777216,_TlgReflectorTag_Param0IsProviderType>::zInternalRelatedId((__int64)this);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
      v9,
      (unsigned int)&unk_1807E3B5E,
      *((_QWORD *)this + 34) + 8,
      v10,
      (__int64)&v14,
      (__int64)&CurrentThreadId,
      (__int64)&v15,
      (__int64)&v13,
      (__int64)&v12);
  }
  wil::ActivityBase<WindowManagementLogging,1,70368744177664,5,2197815296,_TlgReflectorTag_Param0IsProviderType>::EnsureWatchingCurrentThread((__int64)this);
}
