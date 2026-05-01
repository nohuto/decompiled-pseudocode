/*
 * XREFs of ??$RequestContextCreatedFromProcessThread@KAEAKPEBGPEBGPEBGPEBG@PinManagerTelemetry@@SAX$$QEAKAEAK$$QEAPEBG222@Z @ 0x180290084
 * Callers:
 *     ?FromProcessThread@PinRequestContext@@SA?AV?$shared_ptr@VPinRequestContext@@@std@@PEAXK@Z @ 0x180184F2C (-FromProcessThread@PinRequestContext@@SA-AV-$shared_ptr@VPinRequestContext@@@std@@PEAXK@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapSz@G@@U2@U2@U2@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapSz@G@@444AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x180010470 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapSz@G@@U2@U2@U2@U-$_tlgWrapperByVal@$07@@@-$_tlgW.c)
 *     ?Provider@PinManagerTelemetry@@SAPEBU_tlgProvider_t@@XZ @ 0x1802905EC (-Provider@PinManagerTelemetry@@SAPEBU_tlgProvider_t@@XZ.c)
 */

const struct _tlgProvider_t *__fastcall PinManagerTelemetry::RequestContextCreatedFromProcessThread<unsigned long,unsigned long &,unsigned short const *,unsigned short const *,unsigned short const *,unsigned short const *>(
        int *a1,
        int *a2,
        __int64 *a3,
        __int64 *a4,
        __int64 *a5,
        __int64 *a6)
{
  const struct _tlgProvider_t *result; // rax
  __int64 v11; // r9
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // r11
  __int64 v15; // rcx
  int v16; // [rsp+68h] [rbp+7h] BYREF
  int v17; // [rsp+6Ch] [rbp+Bh] BYREF
  __int64 v18; // [rsp+70h] [rbp+Fh]
  __int64 v19; // [rsp+78h] [rbp+17h] BYREF
  __int64 v20; // [rsp+80h] [rbp+1Fh] BYREF
  __int64 v21; // [rsp+88h] [rbp+27h] BYREF
  __int64 v22; // [rsp+90h] [rbp+2Fh] BYREF

  result = PinManagerTelemetry::Provider();
  if ( *(_DWORD *)result > 5u )
  {
    v12 = *a4;
    v16 = *a2;
    v13 = *a5;
    v14 = *a6;
    v17 = *a1;
    v21 = v12;
    v15 = *a3;
    v20 = v13;
    v22 = v15;
    v18 = 0x1000000LL;
    v19 = v14;
    return (const struct _tlgProvider_t *)_tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>>(
                                            (__int64)result,
                                            (__int64)&unk_180817D13,
                                            (__int64)a5,
                                            v11,
                                            (__int64)&v17,
                                            (__int64)&v16,
                                            &v22,
                                            &v21,
                                            &v20,
                                            &v19);
  }
  return result;
}
