/*
 * XREFs of ??$Shell_BroadcastDVRComponent_ProcessCommandTask@AEAIAEAPEBG@GameDVRTraceProvider@@SAXAEAIAEAPEBG@Z @ 0x180057DE8
 * Callers:
 *     ?BroadcastDVRComponent_ProcessCommandTask@GameDVRTraceProvider@@SAXIPEBG@Z @ 0x180058334 (-BroadcastDVRComponent_ProcessCommandTask@GameDVRTraceProvider@@SAXIPEBG@Z.c)
 * Callees:
 *     ?Provider@GameDVRTraceProvider@@SAPEBU_tlgProvider_t@@XZ @ 0x180059FE0 (-Provider@GameDVRTraceProvider@@SAPEBU_tlgProvider_t@@XZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapSz@G@@@Z @ 0x18023045C (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 */

const struct _tlgProvider_t *__fastcall GameDVRTraceProvider::Shell_BroadcastDVRComponent_ProcessCommandTask<unsigned int &,unsigned short const * &>(
        int *a1,
        __int64 *a2)
{
  const struct _tlgProvider_t *result; // rax
  int v5; // r8d
  int v6; // r9d
  __int64 v7; // rdx
  int v8; // [rsp+50h] [rbp+18h] BYREF
  __int64 v9; // [rsp+58h] [rbp+20h] BYREF

  result = GameDVRTraceProvider::Provider();
  if ( *(_DWORD *)result > 5u )
  {
    v7 = *a2;
    v8 = *a1;
    v9 = v7;
    return (const struct _tlgProvider_t *)_tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>>(
                                            (_DWORD)result,
                                            (unsigned int)&unk_1807E53B7,
                                            v5,
                                            v6,
                                            (__int64)&v8,
                                            (__int64)&v9);
  }
  return result;
}
