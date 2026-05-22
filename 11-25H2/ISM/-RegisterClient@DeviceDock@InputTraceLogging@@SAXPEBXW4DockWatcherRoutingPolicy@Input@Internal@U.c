/*
 * XREFs of ?RegisterClient@DeviceDock@InputTraceLogging@@SAXPEBXW4DockWatcherRoutingPolicy@Input@Internal@UI@Windows@@@Z @ 0x18017F350
 * Callers:
 *     ?RegisterDeviceDockClient@DeviceDockServer@@UEAAJPEAVBamoDeviceDockServerStub@@PEAVBamoDeviceDockClientProxy@@W4DockWatcherRoutingPolicy@Input@Internal@UI@Windows@@@Z @ 0x18017F560 (-RegisterDeviceDockClient@DeviceDockServer@@UEAAJPEAVBamoDeviceDockServerStub@@PEAVBamoDeviceDoc.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@D@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@D@@@Z @ 0x180007268 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@D@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     ?Provider@InputTraceLogging@@SAPEBU_tlgProvider_t@@XZ @ 0x18001AA20 (-Provider@InputTraceLogging@@SAPEBU_tlgProvider_t@@XZ.c)
 *     _tlgKeywordOn @ 0x180031480 (_tlgKeywordOn.c)
 */

char __fastcall InputTraceLogging::DeviceDock::RegisterClient(__int64 a1, int a2)
{
  const struct _tlgProvider_t *v4; // rax
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  const char *v8; // rax
  const char *v10; // [rsp+50h] [rbp+18h] BYREF
  __int64 v11; // [rsp+58h] [rbp+20h] BYREF

  v4 = InputTraceLogging::Provider();
  if ( *(_DWORD *)v4 > 4u )
  {
    LOBYTE(v4) = tlgKeywordOn((__int64)v4, 512LL);
    if ( (_BYTE)v4 )
    {
      if ( a2 )
      {
        if ( a2 == 1 )
          v8 = "Exclusive";
        else
          v8 = "UNKNOWN";
      }
      else
      {
        v8 = "Default";
      }
      v10 = v8;
      v11 = a1;
      LOBYTE(v4) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<char>>(
                     v5,
                     (__int64)&unk_18021AA16,
                     v6,
                     v7,
                     (__int64)&v11,
                     (const unsigned __int16 **)&v10);
    }
  }
  return (char)v4;
}
