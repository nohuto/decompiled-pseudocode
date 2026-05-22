/*
 * XREFs of ?MPCMouseProcessor_PopulateTargetingDataForMouseDelta_@ISMTracing@@QEAAXIMMMMMMJJHJJMM@Z @ 0x1801C243C
 * Callers:
 *     ??$MPCMouseProcessor_PopulateTargetingDataForMouseDelta@AEAKAEAMAEAMAEAMAEAMAEAMAEAMAEAJAEAJAEAHAEAJAEAJAEAMAEAM@ISMTracing@@SAXAEAKAEAM11111AEAJ2AEAH2211@Z @ 0x1801C0E78 (--$MPCMouseProcessor_PopulateTargetingDataForMouseDelta@AEAKAEAMAEAMAEAMAEAMAEAMAEAMAEAJAEAJAEAH.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3333333333333@Z @ 0x1800093D0 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@@-$_tlgWriteTemplate@$$.c)
 *     ?Provider@ISMTracing@@SAPEBU_tlgProvider_t@@XZ @ 0x180013E5C (-Provider@ISMTracing@@SAPEBU_tlgProvider_t@@XZ.c)
 *     _tlgKeywordOn @ 0x180031A40 (_tlgKeywordOn.c)
 */

void __fastcall ISMTracing::MPCMouseProcessor_PopulateTargetingDataForMouseDelta_(
        ISMTracing *this,
        int a2,
        float a3,
        float a4,
        float a5,
        float a6,
        float a7,
        float a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        float a14,
        float a15)
{
  const struct _tlgProvider_t *v16; // rax
  __int64 v17; // r8
  __int64 v18; // r9
  float v19; // [rsp+98h] [rbp-39h] BYREF
  int v20; // [rsp+9Ch] [rbp-35h] BYREF
  int v21; // [rsp+A0h] [rbp-31h] BYREF
  int v22; // [rsp+A4h] [rbp-2Dh] BYREF
  int v23; // [rsp+A8h] [rbp-29h] BYREF
  int v24; // [rsp+ACh] [rbp-25h] BYREF
  float v25; // [rsp+B0h] [rbp-21h] BYREF
  float v26; // [rsp+B4h] [rbp-1Dh] BYREF
  float v27; // [rsp+B8h] [rbp-19h] BYREF
  float v28; // [rsp+BCh] [rbp-15h] BYREF
  float v29; // [rsp+C0h] [rbp-11h] BYREF
  float v30; // [rsp+C4h] [rbp-Dh] BYREF
  _DWORD v31[4]; // [rsp+C8h] [rbp-9h] BYREF
  ISMTracing *v32; // [rsp+E8h] [rbp+17h] BYREF
  float v33; // [rsp+F8h] [rbp+27h]
  float v34; // [rsp+100h] [rbp+2Fh]

  v34 = a4;
  v33 = a3;
  v32 = this;
  v16 = ISMTracing::Provider();
  if ( *(_DWORD *)v16 > 5u && tlgKeywordOn((__int64)v16, 1LL) )
  {
    v20 = a13;
    v21 = a12;
    v22 = a11;
    v23 = a10;
    v24 = a9;
    v25 = a8;
    v26 = a7;
    v27 = a6;
    v28 = a5;
    *(float *)&v32 = a15;
    v19 = a14;
    v29 = v34;
    v30 = v33;
    v31[0] = a2;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v17,
      (__int64)&unk_180227357,
      v17,
      v18,
      (__int64)v31,
      (__int64)&v30,
      (__int64)&v29,
      (__int64)&v28,
      (__int64)&v27,
      (__int64)&v26,
      (__int64)&v25,
      (__int64)&v24,
      (__int64)&v23,
      (__int64)&v22,
      (__int64)&v21,
      (__int64)&v20,
      (__int64)&v19,
      (__int64)&v32);
  }
}
