/*
 * XREFs of ??$StartXamlHostThreadStart@AEAY0BN@$$CBG@SharedVisualHostProvider@@SAXAEAY0BN@$$CBG@Z @ 0x180607BB4
 * Callers:
 *     ?StartXamlHostThread@SharedDesktopBackgroundVisualHost@@AEAA_NXZ @ 0x18060B3F0 (-StartXamlHostThread@SharedDesktopBackgroundVisualHost@@AEAA_NXZ.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@@Z @ 0x180164DB8 (--$Write@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 *     ?Provider@SharedVisualHostProvider@@SAPEBU_tlgProvider_t@@XZ @ 0x18060A898 (-Provider@SharedVisualHostProvider@@SAPEBU_tlgProvider_t@@XZ.c)
 */

int __fastcall SharedVisualHostProvider::StartXamlHostThreadStart<unsigned short const (&)[29]>(const WCHAR *a1)
{
  const struct _tlgProvider_t *v1; // rax
  __int64 v2; // r9
  const WCHAR *v4; // [rsp+40h] [rbp+8h] BYREF

  v4 = a1;
  v1 = SharedVisualHostProvider::Provider();
  if ( *(_DWORD *)v1 > 5u )
  {
    v4 = L"StartXamlHostThread Started.";
    LODWORD(v1) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>>(
                    (__int64)v1,
                    byte_18081A6FA,
                    0LL,
                    v2,
                    &v4);
  }
  return (int)v1;
}
