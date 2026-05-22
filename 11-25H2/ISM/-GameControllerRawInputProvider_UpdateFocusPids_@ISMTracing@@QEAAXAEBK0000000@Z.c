/*
 * XREFs of ?GameControllerRawInputProvider_UpdateFocusPids_@ISMTracing@@QEAAXAEBK0000000@Z @ 0x1800CB4A0
 * Callers:
 *     ??$GameControllerRawInputProvider_UpdateFocusPids@AEAKAEAKAEAKAEBKAEAKAEAKAEAKAEAK@ISMTracing@@SAXAEAK00AEBK0000@Z @ 0x1800CB0E0 (--$GameControllerRawInputProvider_UpdateFocusPids@AEAKAEAKAEAKAEBKAEAKAEAKAEAKAEAK@ISMTracing@@S.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3333333@Z @ 0x180003268 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvid.c)
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x180012810 (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     ?Provider@ISMTracing@@SAPEBU_tlgProvider_t@@XZ @ 0x180013A30 (-Provider@ISMTracing@@SAPEBU_tlgProvider_t@@XZ.c)
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
        const unsigned int *a9)
{
  __int64 v12; // r8
  __int64 v13; // r9
  const struct _tlgProvider_t *v14; // r10
  int v15; // ecx
  int v16; // [rsp+60h] [rbp-20h] BYREF
  int v17; // [rsp+64h] [rbp-1Ch] BYREF
  int v18; // [rsp+68h] [rbp-18h] BYREF
  int v19; // [rsp+6Ch] [rbp-14h] BYREF
  int v20; // [rsp+70h] [rbp-10h] BYREF
  int v21; // [rsp+74h] [rbp-Ch] BYREF
  int v22; // [rsp+78h] [rbp-8h] BYREF
  ISMTracing *v23; // [rsp+90h] [rbp+10h] BYREF

  v23 = this;
  if ( ISMTracing::IsEnabled() )
  {
    v14 = ISMTracing::Provider();
    if ( *(_DWORD *)v14 > 4u )
    {
      LODWORD(v23) = *a9;
      v16 = *a8;
      v17 = *a7;
      v18 = *a6;
      v15 = *a5;
      v20 = *a4;
      v21 = *a3;
      v22 = *a2;
      v19 = v15;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (__int64)v14,
        (__int64)&unk_180208B32,
        v12,
        v13,
        (__int64)&v22,
        (__int64)&v21,
        (__int64)&v20,
        (__int64)&v19,
        (__int64)&v18,
        (__int64)&v17,
        (__int64)&v16,
        (__int64)&v23);
    }
  }
}
