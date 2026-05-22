/*
 * XREFs of ?MPCCursorManager_MouseInterceptUpdate_@ISMTracing@@QEAAXAEB_N00@Z @ 0x1800BED98
 * Callers:
 *     ?UpdateMouseBinding@MPCCursorManager@@AEAAXXZ @ 0x1800BEF0C (-UpdateMouseBinding@MPCCursorManager@@AEAAXXZ.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$00@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$00@@33@Z @ 0x1800026E4 (--$Write@U-$_tlgWrapperByVal@$00@@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_.c)
 *     ?IsEnabled@ISMTracing@@SA_NE_K@Z @ 0x180012DD0 (-IsEnabled@ISMTracing@@SA_NE_K@Z.c)
 *     ?Provider@ISMTracing@@SAPEBU_tlgProvider_t@@XZ @ 0x180013E5C (-Provider@ISMTracing@@SAPEBU_tlgProvider_t@@XZ.c)
 *     _tlgKeywordOn @ 0x180031A40 (_tlgKeywordOn.c)
 */

void __fastcall ISMTracing::MPCCursorManager_MouseInterceptUpdate_(
        ISMTracing *this,
        const bool *a2,
        const bool *a3,
        const bool *a4)
{
  const struct _tlgProvider_t *v7; // rax
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // r10
  char v11; // cl
  char v12; // [rsp+40h] [rbp-18h] BYREF
  _BYTE v13[23]; // [rsp+41h] [rbp-17h] BYREF
  ISMTracing *v14; // [rsp+60h] [rbp+8h] BYREF

  v14 = this;
  if ( ISMTracing::IsEnabled() )
  {
    v7 = ISMTracing::Provider();
    if ( *(_DWORD *)v7 > 4u && tlgKeywordOn((__int64)v7, 1LL) )
    {
      v11 = *a4;
      v13[0] = *a2;
      LOBYTE(v14) = v11;
      v12 = *a3;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>>(
        v10,
        (__int64)&unk_180210D6B,
        v8,
        v9,
        (__int64)v13,
        (__int64)&v12,
        (__int64)&v14);
    }
  }
}
