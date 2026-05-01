/*
 * XREFs of ?HampStoreIdReferenceTimeoutCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x180063B20
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@G@@U1@U?$_tlgWrapperByVal@$07@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@3AEBU?$_tlgWrapperByVal@$07@@4@Z @ 0x180063BC4 (--$Write@U-$_tlgWrapSz@G@@U1@U-$_tlgWrapperByVal@$07@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProv.c)
 */

void __fastcall HampStoreIdReferenceTimeoutCallback(struct _TP_CALLBACK_INSTANCE *a1, _QWORD *a2, struct _TP_TIMER *a3)
{
  unsigned __int64 v3; // r8
  char *v4; // [rsp+40h] [rbp-18h] BYREF
  unsigned __int64 v5; // [rsp+48h] [rbp-10h] BYREF
  __int64 v6; // [rsp+68h] [rbp+10h] BYREF
  __int64 v7; // [rsp+78h] [rbp+20h] BYREF

  v3 = a2[4] & 0xFFFFFFFFFFFFFFFCuLL;
  if ( (unsigned int)dword_1800E72B0 > 4
    && (qword_1800E72C0 & 0x400000000008LL) != 0
    && (qword_1800E72C8 & 0x400000000008LL) == qword_1800E72C8 )
  {
    v7 = a2[11];
    v4 = (char *)(a2 + 12);
    v6 = 0x1000000LL;
    v5 = v3 + 48;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
      (_DWORD)a1,
      (unsigned int)&unk_1800D6259,
      v3,
      8,
      (__int64)&v5,
      (__int64)&v4,
      (__int64)&v7,
      (__int64)&v6);
  }
}
