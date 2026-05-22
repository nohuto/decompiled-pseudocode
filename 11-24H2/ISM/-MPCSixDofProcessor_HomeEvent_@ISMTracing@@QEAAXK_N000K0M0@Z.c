/*
 * XREFs of ?MPCSixDofProcessor_HomeEvent_@ISMTracing@@QEAAXK_N000K0M0@Z @ 0x1801BC318
 * Callers:
 *     ??$MPCSixDofProcessor_HomeEvent@K_N_NAEA_NAEA_NAEBIAEA_NM_N@ISMTracing@@SAX$$QEAK$$QEA_N1AEA_N2AEBI2$$QEAM1@Z @ 0x1801B9CEC (--$MPCSixDofProcessor_HomeEvent@K_N_NAEA_NAEA_NAEBIAEA_NM_N@ISMTracing@@SAX$$QEAK$$QEA_N1AEA_N2A.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$00@@U3@U3@U3@U2@U3@U2@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$00@@5554545@Z @ 0x1800092D4 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$00@@U3@U3@U3@U2@.c)
 *     ?Provider@ISMTracing@@SAPEBU_tlgProvider_t@@XZ @ 0x180013E5C (-Provider@ISMTracing@@SAPEBU_tlgProvider_t@@XZ.c)
 *     _tlgKeywordOn @ 0x180031A40 (_tlgKeywordOn.c)
 */

void __fastcall ISMTracing::MPCSixDofProcessor_HomeEvent_(
        ISMTracing *this,
        int a2,
        char a3,
        char a4,
        bool a5,
        bool a6,
        unsigned int a7,
        bool a8,
        float a9,
        bool a10)
{
  const struct _tlgProvider_t *v13; // rax
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // r10
  bool v17; // [rsp+78h] [rbp+7h] BYREF
  bool v18; // [rsp+79h] [rbp+8h] BYREF
  bool v19; // [rsp+7Ah] [rbp+9h] BYREF
  char v20; // [rsp+7Bh] [rbp+Ah] BYREF
  _BYTE v21[4]; // [rsp+7Ch] [rbp+Bh] BYREF
  float v22; // [rsp+80h] [rbp+Fh] BYREF
  unsigned int v23; // [rsp+84h] [rbp+13h] BYREF
  int v24; // [rsp+88h] [rbp+17h] BYREF
  __int64 v25; // [rsp+90h] [rbp+1Fh] BYREF
  ISMTracing *v26; // [rsp+A8h] [rbp+37h] BYREF

  v26 = this;
  v13 = ISMTracing::Provider();
  if ( *(_DWORD *)v13 > 4u && tlgKeywordOn((__int64)v13, 0x400000000001LL) )
  {
    v17 = a8;
    v23 = a7;
    v18 = a6;
    v19 = a5;
    LOBYTE(v26) = a10;
    v22 = a9;
    v20 = a4;
    v21[0] = a3;
    v24 = a2;
    v25 = 50331648LL;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>>(
      v16,
      (__int64)&unk_180226DBF,
      v14,
      v15,
      (__int64)&v25,
      (__int64)&v24,
      (__int64)v21,
      (__int64)&v20,
      (__int64)&v19,
      (__int64)&v18,
      (__int64)&v23,
      (__int64)&v17,
      (__int64)&v22,
      (__int64)&v26);
  }
}
