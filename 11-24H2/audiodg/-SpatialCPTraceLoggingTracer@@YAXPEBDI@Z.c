/*
 * XREFs of ?SpatialCPTraceLoggingTracer@@YAXPEBDI@Z @ 0x14008D684
 * Callers:
 *     CreateSpatialCrossProcessEndpointRT @ 0x14008C550 (CreateSpatialCrossProcessEndpointRT.c)
 *     ?Initialize@CSpatialCrossProcessClientEndpoint@@UEAAJPEAUICrossProcessMemory@@@Z @ 0x14008F6C0 (-Initialize@CSpatialCrossProcessClientEndpoint@@UEAAJPEAUICrossProcessMemory@@@Z.c)
 *     ?SetEventHandle@CSpatialCrossProcessClientEndpoint@@UEAAJPEAX@Z @ 0x14008F810 (-SetEventHandle@CSpatialCrossProcessClientEndpoint@@UEAAJPEAX@Z.c)
 *     ?Initialize@CSpatialCrossProcessServerEndpoint@@UEAAJPEAUSPATIAL_AUDIO_CP_SERVER_CREATE_PARAMS@@PEAPEAUICrossProcessMemory@@@Z @ 0x140090820 (-Initialize@CSpatialCrossProcessServerEndpoint@@UEAAJPEAUSPATIAL_AUDIO_CP_SERVER_CREATE_PARAMS@@.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1400026CC (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 */

void __fastcall SpatialCPTraceLoggingTracer(const char *a1, int a2, __int64 a3, __int64 a4)
{
  int v4; // [rsp+50h] [rbp+18h] BYREF
  const unsigned __int16 *v5; // [rsp+58h] [rbp+20h] BYREF

  if ( (unsigned int)dword_1400C34B0 > 5 )
  {
    v4 = a2;
    v5 = (const unsigned __int16 *)a1;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<4>>(
      (__int64)a1,
      (__int64)&unk_1400B13A9,
      a3,
      a4,
      &v5,
      (__int64)&v4);
  }
}
