/*
 * XREFs of ??$Shell_IsGameManager_KGLUpdated@AEAIAEAHAEAI@GameDVRTraceProvider@@SAXAEAIAEAH0@Z @ 0x18023A308
 * Callers:
 *     ?IsGameManager_KGLUpdated@GameDVRTraceProvider@@SAXIHI@Z @ 0x1802BDCEC (-IsGameManager_KGLUpdated@GameDVRTraceProvider@@SAXIHI@Z.c)
 * Callees:
 *     ?Provider@GameDVRTraceProvider@@SAPEBU_tlgProvider_t@@XZ @ 0x180059FE0 (-Provider@GameDVRTraceProvider@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@33@Z @ 0x1800E9348 (--$Write@U-$_tlgWrapperByVal@$03@@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_.c)
 */

int __fastcall GameDVRTraceProvider::Shell_IsGameManager_KGLUpdated<unsigned int &,int &,unsigned int &>(
        _DWORD *a1,
        int *a2,
        unsigned int *a3)
{
  const struct _tlgProvider_t *v6; // rax
  __int64 v7; // r9
  int v8; // edx
  __int64 v9; // r8
  int v11; // [rsp+40h] [rbp-18h] BYREF
  _DWORD v12[5]; // [rsp+44h] [rbp-14h] BYREF
  int v13; // [rsp+78h] [rbp+20h] BYREF

  v6 = GameDVRTraceProvider::Provider((__int64)a1);
  if ( *(_DWORD *)v6 > 5u )
  {
    v8 = *a2;
    v9 = *a3;
    v12[0] = *a1;
    v11 = v8;
    v13 = v9;
    LODWORD(v6) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
                    (__int64)v6,
                    byte_1807E58D0,
                    v9,
                    v7,
                    (__int64)v12,
                    (__int64)&v11,
                    (__int64)&v13);
  }
  return (int)v6;
}
