/*
 * XREFs of ??$TaskbarPinTrustedProcessChecked@PEAG_N@PinManagerTelemetry@@SAX$$QEAPEAG$$QEA_N@Z @ 0x180290294
 * Callers:
 *     _anonymous_namespace_::IsTrustedWindowsPinProcess @ 0x18028CC9C (_anonymous_namespace_--IsTrustedWindowsPinProcess.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$00@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$00@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x180171E58 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$00@@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate.c)
 *     ?Provider@PinManagerTelemetry@@SAPEBU_tlgProvider_t@@XZ @ 0x1802905EC (-Provider@PinManagerTelemetry@@SAPEBU_tlgProvider_t@@XZ.c)
 */

int __fastcall PinManagerTelemetry::TaskbarPinTrustedProcessChecked<unsigned short *,bool>(const WCHAR **a1, char *a2)
{
  const struct _tlgProvider_t *v4; // rax
  __int64 v5; // r8
  __int64 v6; // r9
  char v7; // dl
  const WCHAR *v9; // [rsp+40h] [rbp-18h] BYREF
  char v10; // [rsp+70h] [rbp+18h] BYREF
  __int64 v11; // [rsp+78h] [rbp+20h] BYREF

  v4 = PinManagerTelemetry::Provider();
  if ( *(_DWORD *)v4 > 5u )
  {
    v7 = *a2;
    v9 = *a1;
    v10 = v7;
    v11 = 0x1000000LL;
    LODWORD(v4) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>>(
                    (__int64)v4,
                    byte_180817AB0,
                    v5,
                    v6,
                    &v9,
                    (__int64)&v10,
                    (__int64)&v11);
  }
  return (int)v4;
}
