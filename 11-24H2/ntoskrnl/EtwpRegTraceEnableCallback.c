/*
 * XREFs of EtwpRegTraceEnableCallback @ 0x1409899F0
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeString @ 0x1404241A0 (RtlInitUnicodeString.c)
 *     CmUnRegisterCallback @ 0x1407D1530 (CmUnRegisterCallback.c)
 *     CmpRegisterCallbackInternal @ 0x140989A9C (CmpRegisterCallbackInternal.c)
 */

void __fastcall EtwpRegTraceEnableCallback(
        LPCGUID SourceId,
        ULONG ControlCode,
        UCHAR Level,
        ULONGLONG MatchAnyKeyword,
        ULONGLONG MatchAllKeyword,
        PEVENT_FILTER_DESCRIPTOR FilterData)
{
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF

  DestinationString = 0LL;
  if ( FilterData && FilterData->Size == 4 )
    EtwpRegTraceOptions = *(unsigned int *)FilterData->Ptr;
  if ( ControlCode )
  {
    if ( ControlCode == 1 && !EtwpRegTracingEnabled )
    {
      RtlInitUnicodeString(&DestinationString, L"425500");
      if ( (int)CmpRegisterCallbackInternal(
                  (unsigned int)EtwpRegTraceCallback,
                  0,
                  (unsigned int)&DestinationString,
                  0,
                  0,
                  (__int64)&EtwpRegTraceCookie) >= 0 )
        EtwpRegTracingEnabled = 1;
    }
  }
  else if ( EtwpRegTracingEnabled )
  {
    CmUnRegisterCallback(EtwpRegTraceCookie);
    EtwpRegTracingEnabled = 0;
  }
}
