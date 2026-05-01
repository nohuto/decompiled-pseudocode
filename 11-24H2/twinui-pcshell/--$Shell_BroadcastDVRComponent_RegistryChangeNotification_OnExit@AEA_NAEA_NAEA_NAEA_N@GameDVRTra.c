/*
 * XREFs of ??$Shell_BroadcastDVRComponent_RegistryChangeNotification_OnExit@AEA_NAEA_NAEA_NAEA_N@GameDVRTraceProvider@@SAXAEA_N000@Z @ 0x1802C3FBC
 * Callers:
 *     ?BroadcastDVRComponent_RegistryChangeNotification_OnExit@GameDVRTraceProvider@@SAX_N000@Z @ 0x18005907C (-BroadcastDVRComponent_RegistryChangeNotification_OnExit@GameDVRTraceProvider@@SAX_N000@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$00@@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$00@@333@Z @ 0x180058948 (--$Write@U-$_tlgWrapperByVal@$00@@U1@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPE.c)
 *     ?Provider@GameDVRTraceProvider@@SAPEBU_tlgProvider_t@@XZ @ 0x180059FE0 (-Provider@GameDVRTraceProvider@@SAPEBU_tlgProvider_t@@XZ.c)
 */

int __fastcall GameDVRTraceProvider::Shell_BroadcastDVRComponent_RegistryChangeNotification_OnExit<bool &,bool &,bool &,bool &>(
        _BYTE *a1,
        char *a2,
        _BYTE *a3,
        _BYTE *a4)
{
  const struct _tlgProvider_t *v8; // rax
  __int64 v9; // r8
  __int64 v10; // r9
  char v11; // dl
  char v13; // [rsp+40h] [rbp-18h] BYREF
  char v14; // [rsp+41h] [rbp-17h] BYREF
  char v15; // [rsp+42h] [rbp-16h] BYREF
  _BYTE v16[21]; // [rsp+43h] [rbp-15h] BYREF

  v8 = GameDVRTraceProvider::Provider((__int64)a1);
  if ( *(_DWORD *)v8 > 5u )
  {
    v11 = *a2;
    LOBYTE(v10) = *a4;
    LOBYTE(v9) = *a3;
    v16[0] = *a1;
    v15 = v11;
    v13 = v10;
    v14 = v9;
    LODWORD(v8) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>>(
                    (__int64)v8,
                    byte_1807E516E,
                    v9,
                    v10,
                    (__int64)v16,
                    (__int64)&v15,
                    (__int64)&v14,
                    (__int64)&v13);
  }
  return (int)v8;
}
