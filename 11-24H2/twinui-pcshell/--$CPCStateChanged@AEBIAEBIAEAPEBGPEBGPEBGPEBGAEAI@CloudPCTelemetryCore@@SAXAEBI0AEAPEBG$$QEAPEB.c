/*
 * XREFs of ??$CPCStateChanged@AEBIAEBIAEAPEBGPEBGPEBGPEBGAEAI@CloudPCTelemetryCore@@SAXAEBI0AEAPEBG$$QEAPEBG22AEAI@Z @ 0x180671078
 * Callers:
 *     ?FireCPCStateChangedEvent@CloudPCTelemetryCore@@SAXAEBIPEBGAEBUhstring@winrt@@AEBW4CloudPCState@Shell@Internal@Windows@3@30@Z @ 0x180671C00 (-FireCPCStateChangedEvent@CloudPCTelemetryCore@@SAXAEBIPEBGAEBUhstring@winrt@@AEBW4CloudPCState@.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapSz@G@@U2@U2@U2@U1@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapSz@G@@4443AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x180011CB4 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapSz@G@@U2@U2@U2@U1@U-$_tlgWrapperByVal@$07@@@-$_t.c)
 *     _tlgKeywordOn @ 0x1800CBCCC (_tlgKeywordOn.c)
 *     ?Provider@CloudPCTelemetryCore@@SAPEBU_tlgProvider_t@@XZ @ 0x1806417E8 (-Provider@CloudPCTelemetryCore@@SAPEBU_tlgProvider_t@@XZ.c)
 */

char __fastcall CloudPCTelemetryCore::CPCStateChanged<unsigned int const &,unsigned int const &,unsigned short const * &,unsigned short const *,unsigned short const *,unsigned short const *,unsigned int &>(
        int *a1,
        int *a2,
        __int64 *a3,
        __int64 *a4,
        __int64 *a5,
        __int64 *a6)
{
  const struct _tlgProvider_t *v10; // rax
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // r10
  __int64 v14; // rcx
  int v16; // [rsp+6Ch] [rbp+3h] BYREF
  int v17; // [rsp+70h] [rbp+7h] BYREF
  __int64 v18; // [rsp+78h] [rbp+Fh]
  __int64 v19; // [rsp+80h] [rbp+17h] BYREF
  __int64 v20; // [rsp+88h] [rbp+1Fh] BYREF
  __int64 v21; // [rsp+90h] [rbp+27h] BYREF
  __int64 v22; // [rsp+98h] [rbp+2Fh] BYREF

  v10 = CloudPCTelemetryCore::Provider((__int64)a1);
  if ( *(_DWORD *)v10 > 5u )
  {
    LOBYTE(v10) = tlgKeywordOn((__int64)v10, 0x800000000000LL);
    if ( (_BYTE)v10 )
    {
      v18 = 0x1000000LL;
      v19 = *a6;
      v14 = *a5;
      v21 = *a4;
      v22 = *a3;
      v16 = *a2;
      v17 = *a1;
      v20 = v14;
      LOBYTE(v10) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
                      v13,
                      (__int64)&unk_18081D018,
                      v11,
                      v12,
                      (__int64)&v17,
                      (__int64)&v16,
                      &v22,
                      &v21,
                      &v20,
                      &v19);
    }
  }
  return (char)v10;
}
