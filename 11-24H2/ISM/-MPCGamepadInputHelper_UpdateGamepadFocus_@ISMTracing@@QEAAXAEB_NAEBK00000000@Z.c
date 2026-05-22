/*
 * XREFs of ?MPCGamepadInputHelper_UpdateGamepadFocus_@ISMTracing@@QEAAXAEB_NAEBK00000000@Z @ 0x1800B27A8
 * Callers:
 *     ??$MPCGamepadInputHelper_UpdateGamepadFocus@AEA_NAEAK_N_NAEA_N_NAEA_NAEA_NAEA_NAEA_N@ISMTracing@@SAXAEA_NAEAK$$QEA_N2020000@Z @ 0x1800B26FC (--$MPCGamepadInputHelper_UpdateGamepadFocus@AEA_NAEAK_N_NAEA_N_NAEA_NAEA_NAEA_NAEA_N@ISMTracing@.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$00@@U?$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$00@@AEBU?$_tlgWrapperByVal@$03@@33333333@Z @ 0x180002250 (--$Write@U-$_tlgWrapperByVal@$00@@U-$_tlgWrapperByVal@$03@@U1@U1@U1@U1@U1@U1@U1@U1@@-$_tlgWriteT.c)
 *     ?Provider@ISMTracing@@SAPEBU_tlgProvider_t@@XZ @ 0x180013E5C (-Provider@ISMTracing@@SAPEBU_tlgProvider_t@@XZ.c)
 *     _tlgKeywordOn @ 0x180031A40 (_tlgKeywordOn.c)
 */

void __fastcall ISMTracing::MPCGamepadInputHelper_UpdateGamepadFocus_(
        ISMTracing *this,
        const bool *a2,
        const unsigned int *a3,
        const bool *a4,
        const bool *a5,
        const bool *a6,
        const bool *a7,
        const bool *a8,
        const bool *a9,
        const bool *a10,
        const bool *a11)
{
  const struct _tlgProvider_t *v14; // rax
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // r10
  char v18; // dl
  char v19; // cl
  char v20; // [rsp+70h] [rbp-10h] BYREF
  char v21; // [rsp+71h] [rbp-Fh] BYREF
  char v22; // [rsp+72h] [rbp-Eh] BYREF
  char v23; // [rsp+73h] [rbp-Dh] BYREF
  char v24; // [rsp+74h] [rbp-Ch] BYREF
  char v25; // [rsp+75h] [rbp-Bh] BYREF
  char v26; // [rsp+76h] [rbp-Ah] BYREF
  char v27; // [rsp+77h] [rbp-9h] BYREF
  int v28; // [rsp+78h] [rbp-8h] BYREF
  ISMTracing *v29; // [rsp+90h] [rbp+10h] BYREF

  v29 = this;
  v14 = ISMTracing::Provider();
  if ( *(_DWORD *)v14 > 4u && tlgKeywordOn((__int64)v14, 1LL) )
  {
    v18 = *a11;
    v20 = *a10;
    LOBYTE(v29) = v18;
    v21 = *a9;
    v22 = *a8;
    v23 = *a7;
    v24 = *a6;
    v19 = *a5;
    v26 = *a4;
    v28 = *a3;
    v27 = *a2;
    v25 = v19;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<1>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>>(
      v17,
      (__int64)&unk_18020FF6A,
      v15,
      v16,
      (__int64)&v27,
      (__int64)&v28,
      (__int64)&v26,
      (__int64)&v25,
      (__int64)&v24,
      (__int64)&v23,
      (__int64)&v22,
      (__int64)&v21,
      (__int64)&v20,
      (__int64)&v29);
  }
}
