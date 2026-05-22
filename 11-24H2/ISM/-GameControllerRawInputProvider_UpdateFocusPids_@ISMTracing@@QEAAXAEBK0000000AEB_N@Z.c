/*
 * XREFs of ?GameControllerRawInputProvider_UpdateFocusPids_@ISMTracing@@QEAAXAEBK0000000AEB_N@Z @ 0x1800CDB10
 * Callers:
 *     ??$GameControllerRawInputProvider_UpdateFocusPids@AEAKAEAKAEAKAEBKAEAKAEAKAEAKAEAKAEA_N@ISMTracing@@SAXAEAK00AEBK0000AEA_N@Z @ 0x1800CD750 (--$GameControllerRawInputProvider_UpdateFocusPids@AEAKAEAKAEAKAEBKAEAKAEAKAEAKAEAKAEA_N@ISMTraci.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@U1@U1@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3333333AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x180003448 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@U1@U1@U-$_tlgWrapperByVal@$00@@@-$_tlgWriteTemp.c)
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x180012DD0 (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     ?Provider@ISMTracing@@SAPEBU_tlgProvider_t@@XZ @ 0x180013E5C (-Provider@ISMTracing@@SAPEBU_tlgProvider_t@@XZ.c)
 */

void __fastcall ISMTracing::GameControllerRawInputProvider_UpdateFocusPids_(
        ISMTracing *this,
        const unsigned int *a2,
        const unsigned int *a3,
        const unsigned int *a4,
        const unsigned int *a5,
        const unsigned int *a6,
        const unsigned int *a7,
        const unsigned int *a8,
        const unsigned int *a9,
        const bool *a10)
{
  __int64 v13; // r8
  __int64 v14; // r9
  const struct _tlgProvider_t *v15; // r10
  int v16; // ecx
  int v17; // [rsp+78h] [rbp+7h] BYREF
  int v18; // [rsp+7Ch] [rbp+Bh] BYREF
  int v19; // [rsp+80h] [rbp+Fh] BYREF
  int v20; // [rsp+84h] [rbp+13h] BYREF
  int v21; // [rsp+88h] [rbp+17h] BYREF
  int v22; // [rsp+8Ch] [rbp+1Bh] BYREF
  int v23; // [rsp+90h] [rbp+1Fh] BYREF
  int v24; // [rsp+94h] [rbp+23h] BYREF
  ISMTracing *v25; // [rsp+A8h] [rbp+37h] BYREF

  v25 = this;
  if ( ISMTracing::IsEnabled() )
  {
    v15 = ISMTracing::Provider();
    if ( *(_DWORD *)v15 > 4u )
    {
      LOBYTE(v25) = *a10;
      v17 = *a9;
      v18 = *a8;
      v19 = *a7;
      v20 = *a6;
      v16 = *a5;
      v22 = *a4;
      v23 = *a3;
      v24 = *a2;
      v21 = v16;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>>(
        (__int64)v15,
        (__int64)&unk_1802120A5,
        v13,
        v14,
        (__int64)&v24,
        (__int64)&v23,
        (__int64)&v22,
        (__int64)&v21,
        (__int64)&v20,
        (__int64)&v19,
        (__int64)&v18,
        (__int64)&v17,
        (__int64)&v25);
    }
  }
}
