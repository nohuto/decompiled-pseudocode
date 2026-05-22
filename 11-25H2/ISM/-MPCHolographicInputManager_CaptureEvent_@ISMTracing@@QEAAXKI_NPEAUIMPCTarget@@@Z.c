/*
 * XREFs of ?MPCHolographicInputManager_CaptureEvent_@ISMTracing@@QEAAXKI_NPEAUIMPCTarget@@@Z @ 0x1800BCB48
 * Callers:
 *     ??$MPCHolographicInputManager_CaptureEvent@KI_NPEAUIMPCTarget@@@ISMTracing@@SAX$$QEAK$$QEAI$$QEA_N$$QEAPEAUIMPCTarget@@@Z @ 0x1800BB5D8 (--$MPCHolographicInputManager_CaptureEvent@KI_NPEAUIMPCTarget@@@ISMTracing@@SAX$$QEAK$$QEAI$$QEA.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$00@@U1@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$00@@34@Z @ 0x180002478 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$00@@U1@U2@@-$_tlgWriteTe.c)
 *     ?GetTypeOfTarget@ISMTracing@@SAPEBGPEAUIMPCTarget@@@Z @ 0x1800113C8 (-GetTypeOfTarget@ISMTracing@@SAPEBGPEAUIMPCTarget@@@Z.c)
 *     ?GetPIDOfMPCTarget@ISMTracing@@SAKPEAUIMPCTarget@@@Z @ 0x18001140C (-GetPIDOfMPCTarget@ISMTracing@@SAKPEAUIMPCTarget@@@Z.c)
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x180012810 (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     ?Provider@ISMTracing@@SAPEBU_tlgProvider_t@@XZ @ 0x180013A30 (-Provider@ISMTracing@@SAPEBU_tlgProvider_t@@XZ.c)
 *     _tlgKeywordOn @ 0x180031480 (_tlgKeywordOn.c)
 *     ?GetProviderType@ISMTracing@@SAPEBGI@Z @ 0x1800BC188 (-GetProviderType@ISMTracing@@SAPEBGI@Z.c)
 */

void __fastcall ISMTracing::MPCHolographicInputManager_CaptureEvent_(
        ISMTracing *this,
        int a2,
        unsigned int a3,
        char a4,
        struct IMPCTarget *a5)
{
  const struct _tlgProvider_t *v8; // rax
  __int64 v9; // rbx
  __int64 v10; // r8
  __int64 v11; // r9
  int PIDOfMPCTarget; // [rsp+50h] [rbp-28h] BYREF
  int v13; // [rsp+54h] [rbp-24h] BYREF
  const WCHAR *TypeOfTarget; // [rsp+58h] [rbp-20h] BYREF
  const WCHAR *ProviderType; // [rsp+60h] [rbp-18h] BYREF
  ISMTracing *v16; // [rsp+80h] [rbp+8h] BYREF

  v16 = this;
  if ( ISMTracing::IsEnabled() )
  {
    v8 = ISMTracing::Provider();
    v9 = (__int64)v8;
    if ( *(_DWORD *)v8 > 4u && tlgKeywordOn((__int64)v8, 1LL) )
    {
      TypeOfTarget = ISMTracing::GetTypeOfTarget(a5);
      PIDOfMPCTarget = ISMTracing::GetPIDOfMPCTarget(a5);
      LOBYTE(v16) = a4;
      ProviderType = ISMTracing::GetProviderType(a3);
      v13 = a2;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
        v9,
        (__int64)&unk_1802073FC,
        v10,
        v11,
        (__int64)&v13,
        &ProviderType,
        (__int64)&v16,
        (__int64)&PIDOfMPCTarget,
        &TypeOfTarget);
    }
  }
}
