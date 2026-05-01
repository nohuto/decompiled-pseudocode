/*
 * XREFs of ??$Shell_IsGameManager_AddKGLGameToConfigStore@AEAPEBGAEAPEBGAEAPEBGAEAPEBG@GameDVRTraceProvider@@SAXAEAPEBG000@Z @ 0x18031A3F8
 * Callers:
 *     ?IsGameManager_AddKGLGameToConfigStore@GameDVRTraceProvider@@SAXPEBG000@Z @ 0x18031AD4C (-IsGameManager_AddKGLGameToConfigStore@GameDVRTraceProvider@@SAXPEBG000@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@G@@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@333@Z @ 0x1800024A0 (--$Write@U-$_tlgWrapSz@G@@U1@U1@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@.c)
 *     ?Provider@GameDVRTraceProvider@@SAPEBU_tlgProvider_t@@XZ @ 0x180059FE0 (-Provider@GameDVRTraceProvider@@SAPEBU_tlgProvider_t@@XZ.c)
 *     _tlgKeywordOn @ 0x1800CBCCC (_tlgKeywordOn.c)
 */

char __fastcall GameDVRTraceProvider::Shell_IsGameManager_AddKGLGameToConfigStore<unsigned short const * &,unsigned short const * &,unsigned short const * &,unsigned short const * &>(
        __int64 *a1,
        __int64 *a2,
        __int64 *a3,
        __int64 *a4)
{
  const struct _tlgProvider_t *v8; // rax
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // r10
  __int64 v12; // rcx
  __int64 v14; // [rsp+40h] [rbp-28h] BYREF
  __int64 v15; // [rsp+48h] [rbp-20h] BYREF
  __int64 v16; // [rsp+50h] [rbp-18h] BYREF
  __int64 v17; // [rsp+58h] [rbp-10h] BYREF

  v8 = GameDVRTraceProvider::Provider((__int64)a1);
  if ( *(_DWORD *)v8 > 5u )
  {
    LOBYTE(v8) = tlgKeywordOn((__int64)v8, 0x400000000000LL);
    if ( (_BYTE)v8 )
    {
      v12 = *a4;
      v16 = *a2;
      v17 = *a1;
      v14 = v12;
      v15 = *a3;
      LOBYTE(v8) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>>(
                     v11,
                     (__int64)&unk_1807E563D,
                     v9,
                     v10,
                     &v17,
                     &v16,
                     &v15,
                     &v14);
    }
  }
  return (char)v8;
}
