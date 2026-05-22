/*
 * XREFs of ?LogMPCMouseInputReport@ISMTracing@@SAXPEAUInputInfo@@AEB_N@Z @ 0x180099D6C
 * Callers:
 *     ?OnInputReport@MPCInputProviderBase@@UEAAJPEAUInputInfo@@@Z @ 0x180012EA0 (-OnInputReport@MPCInputProviderBase@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U?$_tlgWrapperByVal@$00@@U2@U2@U2@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33AEBU?$_tlgWrapperByVal@$00@@444333@Z @ 0x180002A30 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U-$_tlgWrapperByVal@$00@@U2@U2@U2@U1@U1@U1@@-$_tlgWriteT.c)
 *     ?Provider@ISMTracing@@SAPEBU_tlgProvider_t@@XZ @ 0x180013E5C (-Provider@ISMTracing@@SAPEBU_tlgProvider_t@@XZ.c)
 *     _tlgKeywordOn @ 0x180031A40 (_tlgKeywordOn.c)
 */

void __fastcall ISMTracing::LogMPCMouseInputReport(struct InputInfo *a1, const bool *a2)
{
  const struct _tlgProvider_t *v4; // rax
  __int64 v5; // r8
  __int64 v6; // r9
  int v7; // ecx
  _BYTE v8[4]; // [rsp+70h] [rbp+27h] BYREF
  int v9; // [rsp+74h] [rbp+2Bh] BYREF
  int v10; // [rsp+78h] [rbp+2Fh] BYREF
  int v11; // [rsp+7Ch] [rbp+33h] BYREF
  int v12; // [rsp+80h] [rbp+37h] BYREF
  int v13; // [rsp+84h] [rbp+3Bh] BYREF
  _DWORD v14[6]; // [rsp+88h] [rbp+3Fh] BYREF
  char v15; // [rsp+B0h] [rbp+67h] BYREF
  char v16; // [rsp+C0h] [rbp+77h] BYREF
  char v17; // [rsp+C8h] [rbp+7Fh] BYREF

  v4 = ISMTracing::Provider();
  if ( *(_DWORD *)v4 > 5u && tlgKeywordOn((__int64)v4, 1LL) )
  {
    v7 = *((_DWORD *)a1 + 26);
    v11 = *((_DWORD *)a1 + 24);
    v15 = *((_BYTE *)a1 + 120);
    v16 = *((_BYTE *)a1 + 125);
    v17 = *((_BYTE *)a1 + 121);
    v8[0] = *a2;
    v12 = *((_DWORD *)a1 + 2);
    v13 = *((_DWORD *)a1 + 1);
    v14[0] = *(_DWORD *)a1;
    v9 = v7;
    v10 = *((_DWORD *)a1 + 25);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v5,
      (__int64)&unk_18021142B,
      v5,
      v6,
      (__int64)v14,
      (__int64)&v13,
      (__int64)&v12,
      (__int64)v8,
      (__int64)&v17,
      (__int64)&v16,
      (__int64)&v15,
      (__int64)&v11,
      (__int64)&v10,
      (__int64)&v9);
  }
}
