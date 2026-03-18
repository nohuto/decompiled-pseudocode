/*
 * XREFs of ?UpdateTransform@InputSink@InputTraceLogging@@SAXPEBUCompositionInputObject@@PEAXAEBUtagINPUT_TRANSFORM@@@Z @ 0x14010A604
 * Callers:
 *     NtUpdateInputSinkTransforms @ 0x1400F0BF0 (NtUpdateInputSinkTransforms.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@3AEBU?$_tlgWrapperByVal@$03@@444444444444444@Z @ 0x14014CAB0 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U2@U2@U2@_ea_14014CAB0.c)
 */

void __fastcall InputTraceLogging::InputSink::UpdateTransform(
        const struct CompositionInputObject *a1,
        void *a2,
        const struct tagINPUT_TRANSFORM *a3,
        int a4)
{
  int v4; // [rsp+B0h] [rbp+7h] BYREF
  int v5; // [rsp+B4h] [rbp+Bh] BYREF
  int v6; // [rsp+B8h] [rbp+Fh] BYREF
  int v7; // [rsp+BCh] [rbp+13h] BYREF
  int v8; // [rsp+C0h] [rbp+17h] BYREF
  int v9; // [rsp+C4h] [rbp+1Bh] BYREF
  int v10; // [rsp+C8h] [rbp+1Fh] BYREF
  int v11; // [rsp+CCh] [rbp+23h] BYREF
  int v12; // [rsp+D0h] [rbp+27h] BYREF
  int v13; // [rsp+D4h] [rbp+2Bh] BYREF
  int v14; // [rsp+D8h] [rbp+2Fh] BYREF
  int v15; // [rsp+DCh] [rbp+33h] BYREF
  int v16; // [rsp+E0h] [rbp+37h] BYREF
  int v17; // [rsp+E4h] [rbp+3Bh] BYREF
  int v18; // [rsp+E8h] [rbp+3Fh] BYREF
  void *v19; // [rsp+F0h] [rbp+47h] BYREF
  const struct CompositionInputObject *v20; // [rsp+F8h] [rbp+4Fh] BYREF
  int v21; // [rsp+128h] [rbp+7Fh] BYREF

  if ( (unsigned int)dword_14029AE30 > 5 && (qword_14029AE40 & 4) != 0 && (qword_14029AE48 & 4) == qword_14029AE48 )
  {
    v21 = *((_DWORD *)a3 + 15);
    v4 = *((_DWORD *)a3 + 14);
    v5 = *((_DWORD *)a3 + 13);
    v6 = *((_DWORD *)a3 + 12);
    v7 = *((_DWORD *)a3 + 11);
    v8 = *((_DWORD *)a3 + 10);
    v9 = *((_DWORD *)a3 + 9);
    v10 = *((_DWORD *)a3 + 8);
    v11 = *((_DWORD *)a3 + 7);
    v12 = *((_DWORD *)a3 + 6);
    v13 = *((_DWORD *)a3 + 5);
    v14 = *((_DWORD *)a3 + 4);
    v15 = *((_DWORD *)a3 + 3);
    v16 = *((_DWORD *)a3 + 2);
    v17 = *((_DWORD *)a3 + 1);
    v18 = *(_DWORD *)a3;
    v19 = a2;
    v20 = a1;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (unsigned int)&dword_14029AE30,
      (unsigned int)&unk_14027FE5E,
      (_DWORD)a3,
      a4,
      (__int64)&v20,
      (__int64)&v19,
      (__int64)&v18,
      (__int64)&v17,
      (__int64)&v16,
      (__int64)&v15,
      (__int64)&v14,
      (__int64)&v13,
      (__int64)&v12,
      (__int64)&v11,
      (__int64)&v10,
      (__int64)&v9,
      (__int64)&v8,
      (__int64)&v7,
      (__int64)&v6,
      (__int64)&v5,
      (__int64)&v4,
      (__int64)&v21);
  }
}
