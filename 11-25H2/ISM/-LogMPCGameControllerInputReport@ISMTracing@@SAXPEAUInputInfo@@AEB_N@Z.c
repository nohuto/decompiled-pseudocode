/*
 * XREFs of ?LogMPCGameControllerInputReport@ISMTracing@@SAXPEAUInputInfo@@AEB_N@Z @ 0x180085704
 * Callers:
 *     ?OnInputReport@MPCInputProviderBase@@UEAAJPEAUInputInfo@@@Z @ 0x1800128E0 (-OnInputReport@MPCInputProviderBase@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x180001228 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$00@@@-$_tl.c)
 *     ?Provider@ISMTracing@@SAPEBU_tlgProvider_t@@XZ @ 0x180013A30 (-Provider@ISMTracing@@SAPEBU_tlgProvider_t@@XZ.c)
 */

void __fastcall ISMTracing::LogMPCGameControllerInputReport(struct InputInfo *a1, const bool *a2)
{
  const struct _tlgProvider_t *v4; // rax
  __int64 v5; // r9
  __int64 v6; // r8
  int v7; // [rsp+50h] [rbp-18h] BYREF
  __int64 v8; // [rsp+58h] [rbp-10h] BYREF
  char v9; // [rsp+70h] [rbp+8h] BYREF
  int v10; // [rsp+80h] [rbp+18h] BYREF
  int v11; // [rsp+88h] [rbp+20h] BYREF

  v4 = ISMTracing::Provider();
  if ( *(_DWORD *)v4 > 5u && (*((_BYTE *)v4 + 16) & 1) != 0 )
  {
    v6 = *((_QWORD *)v4 + 3) & 1LL;
    if ( v6 == *((_QWORD *)v4 + 3) )
    {
      v9 = *a2;
      v8 = *((_QWORD *)a1 + 2);
      v10 = *((_DWORD *)a1 + 2);
      v11 = *((_DWORD *)a1 + 1);
      v7 = *(_DWORD *)a1;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>>(
        (__int64)v4,
        (__int64)&unk_180208462,
        v6,
        v5,
        (__int64)&v7,
        (__int64)&v11,
        (__int64)&v10,
        (__int64)&v8,
        (__int64)&v9);
    }
  }
}
