/*
 * XREFs of ??$PinConsentPromptCompleted@_N_N@PinManagerTelemetry@@SAX$$QEA_N0@Z @ 0x1805E04F8
 * Callers:
 *     _anonymous_namespace_::PinConsentPromptManager::RequestPinConsent$_ResumeCoro$1 @ 0x1805E8230 (_anonymous_namespace_--PinConsentPromptManager--RequestPinConsent$_ResumeCoro$1.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$00@@U1@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$00@@3AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x180168A64 (--$Write@U-$_tlgWrapperByVal@$00@@U1@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 *     ?Provider@PinManagerTelemetry@@SAPEBU_tlgProvider_t@@XZ @ 0x1802905EC (-Provider@PinManagerTelemetry@@SAPEBU_tlgProvider_t@@XZ.c)
 */

int __fastcall PinManagerTelemetry::PinConsentPromptCompleted<bool,bool>(char *a1, char *a2)
{
  const struct _tlgProvider_t *v4; // rax
  __int64 v5; // r8
  __int64 v6; // r9
  char v7; // dl
  __int64 v9[3]; // [rsp+40h] [rbp-18h] BYREF
  char v10; // [rsp+70h] [rbp+18h] BYREF
  char v11; // [rsp+78h] [rbp+20h] BYREF

  v4 = PinManagerTelemetry::Provider((__int64)a1);
  if ( *(_DWORD *)v4 > 5u )
  {
    v7 = *a2;
    v11 = *a1;
    v10 = v7;
    v9[0] = 0x2000000LL;
    LODWORD(v4) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>>(
                    (__int64)v4,
                    byte_180817A23,
                    v5,
                    v6,
                    (__int64)&v11,
                    (__int64)&v10,
                    (__int64)v9);
  }
  return (int)v4;
}
