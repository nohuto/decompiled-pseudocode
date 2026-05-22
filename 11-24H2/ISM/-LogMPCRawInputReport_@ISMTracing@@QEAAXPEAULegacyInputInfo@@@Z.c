/*
 * XREFs of ?LogMPCRawInputReport_@ISMTracing@@QEAAXPEAULegacyInputInfo@@@Z @ 0x1800CFAD4
 * Callers:
 *     ?QueueInput@MPCRawInputProvider@@QEAAJAEAULegacyInputInfo@@@Z @ 0x1800CFEB0 (-QueueInput@MPCRawInputProvider@@QEAAJAEAULegacyInputInfo@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33333@Z @ 0x180003530 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@.c)
 *     ?IsVerboseEnabled@ISMTracing@@SA_N_K@Z @ 0x180013528 (-IsVerboseEnabled@ISMTracing@@SA_N_K@Z.c)
 *     ?Provider@ISMTracing@@SAPEBU_tlgProvider_t@@XZ @ 0x180013E5C (-Provider@ISMTracing@@SAPEBU_tlgProvider_t@@XZ.c)
 *     _tlgKeywordOn @ 0x180031A40 (_tlgKeywordOn.c)
 */

void __fastcall ISMTracing::LogMPCRawInputReport_(ISMTracing *this, struct LegacyInputInfo *a2)
{
  const struct _tlgProvider_t *v3; // rax
  __int64 v4; // r8
  __int64 v5; // r9
  void *v6; // rdx
  int *v7; // rax
  const struct _tlgProvider_t *v8; // rax
  int *v9; // [rsp+30h] [rbp-30h]
  int v10; // [rsp+50h] [rbp-10h] BYREF
  int v11; // [rsp+54h] [rbp-Ch] BYREF
  int v12; // [rsp+58h] [rbp-8h] BYREF
  ISMTracing *v13; // [rsp+70h] [rbp+10h] BYREF
  int v14; // [rsp+80h] [rbp+20h] BYREF
  int v15; // [rsp+88h] [rbp+28h] BYREF

  v13 = this;
  if ( ISMTracing::IsVerboseEnabled((__int64)this) )
  {
    if ( ((*((_DWORD *)a2 + 16) - 6) & 0xFFFFFFFD) != 0 )
    {
      v3 = ISMTracing::Provider();
      if ( *(_DWORD *)v3 > 4u && tlgKeywordOn((__int64)v3, 1LL) )
      {
        v6 = &unk_1802121AA;
        v14 = *((_DWORD *)a2 + 16);
        v15 = *((_DWORD *)a2 + 18);
        v10 = *((_DWORD *)a2 + 2);
        v11 = *((_DWORD *)a2 + 1);
        v12 = *(_DWORD *)a2;
        v9 = &v10;
        v7 = &v12;
LABEL_9:
        LODWORD(v13) = *((_DWORD *)a2 + 17);
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
          v4,
          (__int64)v6,
          v4,
          v5,
          (__int64)v7,
          (__int64)&v11,
          (__int64)v9,
          (__int64)&v15,
          (__int64)&v14,
          (__int64)&v13);
      }
    }
    else
    {
      v8 = ISMTracing::Provider();
      if ( *(_DWORD *)v8 > 5u && tlgKeywordOn((__int64)v8, 1LL) )
      {
        v6 = &unk_180212228;
        v14 = *((_DWORD *)a2 + 16);
        v15 = *((_DWORD *)a2 + 18);
        v12 = *((_DWORD *)a2 + 2);
        v11 = *((_DWORD *)a2 + 1);
        v10 = *(_DWORD *)a2;
        v9 = &v12;
        v7 = &v10;
        goto LABEL_9;
      }
    }
  }
}
