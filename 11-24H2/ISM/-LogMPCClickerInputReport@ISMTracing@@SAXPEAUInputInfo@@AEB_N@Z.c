/*
 * XREFs of ?LogMPCClickerInputReport@ISMTracing@@SAXPEAUInputInfo@@AEB_N@Z @ 0x180097F68
 * Callers:
 *     ?OnInputReport@MPCInputProviderBase@@UEAAJPEAUInputInfo@@@Z @ 0x180012EA0 (-OnInputReport@MPCInputProviderBase@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U?$_tlgWrapperByVal@$00@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33AEBU?$_tlgWrapperByVal@$00@@33@Z @ 0x1800028A4 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U-$_tlgWrapperByVal@$00@@U1@U1@@-$_tlgWriteTemplate@$$A6.c)
 *     ?Provider@ISMTracing@@SAPEBU_tlgProvider_t@@XZ @ 0x180013E5C (-Provider@ISMTracing@@SAPEBU_tlgProvider_t@@XZ.c)
 *     _tlgKeywordOn @ 0x180031A40 (_tlgKeywordOn.c)
 */

void __fastcall ISMTracing::LogMPCClickerInputReport(struct InputInfo *a1, const bool *a2)
{
  const struct _tlgProvider_t *v4; // rax
  __int64 v5; // r8
  __int64 v6; // r9
  void *v7; // rdx
  int *v8; // rax
  const struct _tlgProvider_t *v9; // rax
  int *v10; // [rsp+30h] [rbp-30h]
  int v11; // [rsp+50h] [rbp-10h] BYREF
  int v12; // [rsp+54h] [rbp-Ch] BYREF
  int v13; // [rsp+58h] [rbp-8h] BYREF
  char v14; // [rsp+80h] [rbp+20h] BYREF
  int v15; // [rsp+90h] [rbp+30h] BYREF
  int v16; // [rsp+98h] [rbp+38h] BYREF

  if ( *((_DWORD *)a1 + 17) == 3 || *((_DWORD *)a1 + 17) == 6 )
  {
    v9 = ISMTracing::Provider();
    if ( *(_DWORD *)v9 > 5u && tlgKeywordOn((__int64)v9, 1LL) )
    {
      v7 = &unk_1802110EE;
      v16 = *((_DWORD *)a1 + 18);
      v14 = *a2;
      v13 = *((_DWORD *)a1 + 2);
      v12 = *((_DWORD *)a1 + 1);
      v11 = *(_DWORD *)a1;
      v10 = &v13;
      v8 = &v11;
      goto LABEL_9;
    }
  }
  else
  {
    v4 = ISMTracing::Provider();
    if ( *(_DWORD *)v4 > 4u && tlgKeywordOn((__int64)v4, 1LL) )
    {
      v7 = &unk_180211176;
      v16 = *((_DWORD *)a1 + 18);
      v14 = *a2;
      v11 = *((_DWORD *)a1 + 2);
      v12 = *((_DWORD *)a1 + 1);
      v13 = *(_DWORD *)a1;
      v10 = &v11;
      v8 = &v13;
LABEL_9:
      v15 = *((_DWORD *)a1 + 17);
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v5,
        (__int64)v7,
        v5,
        v6,
        (__int64)v8,
        (__int64)&v12,
        (__int64)v10,
        (__int64)&v14,
        (__int64)&v16,
        (__int64)&v15);
    }
  }
}
