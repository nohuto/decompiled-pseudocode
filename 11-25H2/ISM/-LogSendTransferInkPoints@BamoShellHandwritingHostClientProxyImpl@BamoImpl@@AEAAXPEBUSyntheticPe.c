/*
 * XREFs of ?LogSendTransferInkPoints@BamoShellHandwritingHostClientProxyImpl@BamoImpl@@AEAAXPEBUSyntheticPenInfo@Input@Internal@UI@Windows@@I@Z @ 0x18015A84C
 * Callers:
 *     ?TransferInkPoints@BamoShellHandwritingHostClientProxyImpl@BamoImpl@@QEAAJPEBUSyntheticPenInfo@Input@Internal@UI@Windows@@I@Z @ 0x180080A74 (-TransferInkPoints@BamoShellHandwritingHostClientProxyImpl@BamoImpl@@QEAAJPEBUSyntheticPenInfo@I.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33@Z @ 0x180001E60 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_.c)
 *     _tlgKeywordOn @ 0x180031480 (_tlgKeywordOn.c)
 */

void __fastcall BamoImpl::BamoShellHandwritingHostClientProxyImpl::LogSendTransferInkPoints(
        BamoImpl::BamoShellHandwritingHostClientProxyImpl *this,
        const struct Windows::UI::Internal::Input::SyntheticPenInfo *a2)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // rax
  int v6; // edx
  _DWORD v7[6]; // [rsp+40h] [rbp-18h] BYREF
  const struct Windows::UI::Internal::Input::SyntheticPenInfo *v8; // [rsp+68h] [rbp+10h] BYREF
  int v9; // [rsp+78h] [rbp+20h] BYREF

  v8 = a2;
  if ( *(&ISMBamos_AutoBamos::BamoTraceLogging::s_providers + 1)
    && *(_DWORD *)*(&ISMBamos_AutoBamos::BamoTraceLogging::s_providers + 1) > 5u
    && tlgKeywordOn((__int64)*(&ISMBamos_AutoBamos::BamoTraceLogging::s_providers + 1), 1LL) )
  {
    v5 = *(_QWORD *)(v4 + 16);
    LODWORD(v8) = v3;
    v6 = *(_DWORD *)(v5 + 36);
    v7[0] = *(_DWORD *)(v4 + 24);
    v9 = v6;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v2,
      (__int64)&unk_180219240,
      v3,
      v4,
      (__int64)v7,
      (__int64)&v9,
      (__int64)&v8);
  }
}
