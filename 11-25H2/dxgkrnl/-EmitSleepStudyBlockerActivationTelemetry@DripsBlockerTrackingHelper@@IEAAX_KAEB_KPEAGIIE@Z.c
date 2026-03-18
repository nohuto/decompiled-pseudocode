/*
 * XREFs of ?EmitSleepStudyBlockerActivationTelemetry@DripsBlockerTrackingHelper@@IEAAX_KAEB_KPEAGIIE@Z @ 0x1401C5D80
 * Callers:
 *     ?EmitSleepStudyBlockerDataEvents@DripsBlockerTrackingHelper@@QEAAX_KIPEA_K@Z @ 0x1401C5EF0 (-EmitSleepStudyBlockerDataEvents@DripsBlockerTrackingHelper@@QEAAX_KIPEA_K@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U1@U?$_tlgWrapSz@G@@U1@U1@U1@U1@U1@U1@U1@U1@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@33AEBU?$_tlgWrapSz@G@@33333333AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x140003220 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U1@U-$_tlgWrapSz@G@@U1@U1@U1@U1@U1@U1@U1@U1@U-$_tlgWrapperB.c)
 *     _tlgKeywordOn @ 0x140047784 (_tlgKeywordOn.c)
 */

void __fastcall DripsBlockerTrackingHelper::EmitSleepStudyBlockerActivationTelemetry(
        DripsBlockerTrackingHelper *this,
        __int64 a2,
        const unsigned __int64 *a3,
        unsigned __int16 *a4,
        unsigned int a5,
        unsigned int a6,
        char a7)
{
  __int64 v8; // rcx
  void *v9; // r9
  __int64 *v10; // r10
  __int64 v11; // r11
  char *v12; // rdx
  __int64 v13; // [rsp+90h] [rbp-21h] BYREF
  __int64 v14; // [rsp+98h] [rbp-19h] BYREF
  __int64 v15; // [rsp+A0h] [rbp-11h] BYREF
  __int64 v16; // [rsp+A8h] [rbp-9h] BYREF
  __int64 v17; // [rsp+B0h] [rbp-1h] BYREF
  __int64 v18; // [rsp+B8h] [rbp+7h] BYREF
  __int64 v19; // [rsp+C0h] [rbp+Fh] BYREF
  __int64 v20; // [rsp+C8h] [rbp+17h] BYREF
  void *v21; // [rsp+D0h] [rbp+1Fh] BYREF
  __int64 v22; // [rsp+D8h] [rbp+27h] BYREF
  __int64 v23; // [rsp+E0h] [rbp+2Fh] BYREF
  __int64 v24; // [rsp+E8h] [rbp+37h] BYREF

  if ( (unsigned int)dword_14015B660 > 5 )
  {
    if ( tlgKeywordOn((__int64)&dword_14015B660, 0x400000002000LL) )
    {
      v12 = (char *)this + 4720 * a5;
      a7 = 1;
      v13 = 50331648LL;
      v21 = v9;
      v23 = v11;
      v14 = *(unsigned int *)&v12[72 * a6 + 176];
      v15 = *(unsigned int *)&v12[72 * a6 + 168];
      v16 = *(_QWORD *)&v12[72 * a6 + 160];
      v17 = *(_QWORD *)&v12[72 * a6 + 152];
      v18 = *(unsigned int *)&v12[72 * a6 + 148];
      v19 = *(_QWORD *)&v12[72 * a6 + 136];
      v20 = *(_QWORD *)&v12[72 * a6 + 128];
      v22 = *v10;
      v24 = 17LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>>(
        v8,
        (__int64)&unk_140139DCE,
        9LL * a6,
        (__int64)v9,
        (__int64)&v24,
        (__int64)&v23,
        (__int64)&v22,
        &v21,
        (__int64)&v20,
        (__int64)&v19,
        (__int64)&v18,
        (__int64)&v17,
        (__int64)&v16,
        (__int64)&v15,
        (__int64)&v14,
        (__int64)&v13,
        (__int64)&a7);
    }
  }
}
