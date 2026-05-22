/*
 * XREFs of ?LogInitialMPCSpatialControllerInputReport@ISMTracing@@SAXPEAUInputInfo@@AEB_N@Z @ 0x18007EB0C
 * Callers:
 *     ?OnInputReport@MPCInputProviderBase@@UEAAJPEAUInputInfo@@@Z @ 0x180012EA0 (-OnInputReport@MPCInputProviderBase@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$00@@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$00@@3333@Z @ 0x180010284 (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$00@@U1@U1@U1@U1@@-$_tlgWriteTemplate@$$A6.c)
 *     ?IsVerboseEnabled@ISMTracing@@SA_N_K@Z @ 0x180013528 (-IsVerboseEnabled@ISMTracing@@SA_N_K@Z.c)
 *     ?Provider@ISMTracing@@SAPEBU_tlgProvider_t@@XZ @ 0x180013E5C (-Provider@ISMTracing@@SAPEBU_tlgProvider_t@@XZ.c)
 *     _tlgKeywordOn @ 0x180031A40 (_tlgKeywordOn.c)
 */

void __fastcall ISMTracing::LogInitialMPCSpatialControllerInputReport(struct InputInfo *a1, const bool *a2)
{
  const struct _tlgProvider_t *v4; // rax
  __int64 v5; // r8
  __int64 v6; // r9
  void *v7; // rdx
  int *v8; // rax
  const struct _tlgProvider_t *v9; // rax
  int *v10; // [rsp+30h] [rbp-30h]
  int *v11; // [rsp+38h] [rbp-28h]
  int *v12; // [rsp+40h] [rbp-20h]
  int v13; // [rsp+50h] [rbp-10h] BYREF
  int v14; // [rsp+54h] [rbp-Ch] BYREF
  int v15; // [rsp+58h] [rbp-8h] BYREF
  int v16; // [rsp+5Ch] [rbp-4h] BYREF
  char v17; // [rsp+80h] [rbp+20h] BYREF
  int v18; // [rsp+88h] [rbp+28h] BYREF

  if ( ISMTracing::IsVerboseEnabled((__int64)a1) )
  {
    if ( *((_DWORD *)a1 + 16) == 6 || *((_DWORD *)a1 + 17) == 3 || *((_DWORD *)a1 + 17) == 6 )
    {
      v9 = ISMTracing::Provider();
      if ( *(_DWORD *)v9 > 5u && tlgKeywordOn((__int64)v9, 1LL) )
      {
        v7 = &unk_1802118C0;
        v16 = *((_DWORD *)a1 + 16);
        v15 = *((_DWORD *)a1 + 18);
        v14 = *((_DWORD *)a1 + 2);
        v17 = *a2;
        v13 = *((_DWORD *)a1 + 1);
        v12 = &v16;
        v11 = &v15;
        v10 = &v14;
        v8 = &v13;
        goto LABEL_11;
      }
    }
    else
    {
      v4 = ISMTracing::Provider();
      if ( *(_DWORD *)v4 > 4u && tlgKeywordOn((__int64)v4, 1LL) )
      {
        v7 = &unk_18021195F;
        v13 = *((_DWORD *)a1 + 16);
        v14 = *((_DWORD *)a1 + 18);
        v15 = *((_DWORD *)a1 + 2);
        v17 = *a2;
        v16 = *((_DWORD *)a1 + 1);
        v12 = &v13;
        v11 = &v14;
        v10 = &v15;
        v8 = &v16;
LABEL_11:
        v18 = *((_DWORD *)a1 + 17);
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          v5,
          (__int64)v7,
          v5,
          v6,
          (__int64)v8,
          (__int64)&v17,
          (__int64)v10,
          (__int64)v11,
          (__int64)v12,
          (__int64)&v18);
      }
    }
  }
}
