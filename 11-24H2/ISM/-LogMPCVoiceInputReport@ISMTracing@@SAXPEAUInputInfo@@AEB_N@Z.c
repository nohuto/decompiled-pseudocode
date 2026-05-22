/*
 * XREFs of ?LogMPCVoiceInputReport@ISMTracing@@SAXPEAUInputInfo@@AEB_N@Z @ 0x1800C59E4
 * Callers:
 *     ?OnInputReport@MPCInputProviderBase@@UEAAJPEAUInputInfo@@@Z @ 0x180012EA0 (-OnInputReport@MPCInputProviderBase@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U?$_tlgWrapperByVal@$00@@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33AEBU?$_tlgWrapperByVal@$00@@3333@Z @ 0x180002958 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U-$_tlgWrapperByVal@$00@@U1@U1@U1@U1@@-$_tlgWriteTemplat.c)
 *     ?Provider@ISMTracing@@SAPEBU_tlgProvider_t@@XZ @ 0x180013E5C (-Provider@ISMTracing@@SAPEBU_tlgProvider_t@@XZ.c)
 *     _tlgKeywordOn @ 0x180031A40 (_tlgKeywordOn.c)
 */

void __fastcall ISMTracing::LogMPCVoiceInputReport(struct InputInfo *a1, const bool *a2)
{
  const struct _tlgProvider_t *v4; // rax
  __int64 v5; // r8
  __int64 v6; // r9
  int v7; // ecx
  int v8; // [rsp+60h] [rbp-20h] BYREF
  int v9; // [rsp+64h] [rbp-1Ch] BYREF
  int v10; // [rsp+68h] [rbp-18h] BYREF
  int v11; // [rsp+6Ch] [rbp-14h] BYREF
  _DWORD v12[4]; // [rsp+70h] [rbp-10h] BYREF
  char v13; // [rsp+A0h] [rbp+20h] BYREF
  int v14; // [rsp+B0h] [rbp+30h] BYREF
  int v15; // [rsp+B8h] [rbp+38h] BYREF

  v4 = ISMTracing::Provider();
  if ( *(_DWORD *)v4 > 4u && tlgKeywordOn((__int64)v4, 1LL) )
  {
    v7 = *((_DWORD *)a1 + 626);
    v8 = *((_DWORD *)a1 + 16);
    v9 = *((_DWORD *)a1 + 18);
    v13 = *a2;
    v10 = *((_DWORD *)a1 + 2);
    v11 = *((_DWORD *)a1 + 1);
    v12[0] = *(_DWORD *)a1;
    v14 = v7;
    v15 = *((_DWORD *)a1 + 17);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v5,
      (__int64)&unk_180211050,
      v5,
      v6,
      (__int64)v12,
      (__int64)&v11,
      (__int64)&v10,
      (__int64)&v13,
      (__int64)&v9,
      (__int64)&v8,
      (__int64)&v15,
      (__int64)&v14);
  }
}
