/*
 * XREFs of ?LogAsarUsageReporting@CSpatialCrossProcessEndpointTraceLogger@@QEAAXII@Z @ 0x14003A7A8
 * Callers:
 *     ?SetObjectUsageCounts@CSpatialCrossProcessBaseEndpoint@@UEAAJII@Z @ 0x14003A720 (-SetObjectUsageCounts@CSpatialCrossProcessBaseEndpoint@@UEAAJII@Z.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$03@@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$03@@4@Z @ 0x140031E2C (--$Write@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapperByVal@$03@@U2@@-$_tlgWriteTemplate@$$A6AJPEBU_.c)
 */

void __fastcall CSpatialCrossProcessEndpointTraceLogger::LogAsarUsageReporting(
        CSpatialCrossProcessEndpointTraceLogger *this,
        unsigned int a2,
        unsigned int a3,
        __int64 a4)
{
  unsigned int *v4; // rbx
  unsigned int v8; // [rsp+60h] [rbp+8h] BYREF
  unsigned int v9; // [rsp+68h] [rbp+10h] BYREF
  char *v10; // [rsp+78h] [rbp+20h] BYREF

  v4 = (unsigned int *)((char *)this + 500);
  if ( *((_DWORD *)this + 124) != a2 || *v4 != a3 )
  {
    if ( (unsigned int)dword_1400C34B0 > 5 )
    {
      v9 = a3;
      v10 = (char *)this + 8;
      v8 = a2;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<16>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        (__int64)this,
        (__int64)&unk_1400B13A5,
        0LL,
        a4,
        &v10,
        (__int64)&v8,
        (__int64)&v9);
    }
    *((_DWORD *)this + 124) = a2;
    *v4 = a3;
  }
  CSpatialCrossProcessEndpointTraceLogger::RegisterObjectCount(this, a2, a3);
}
