/*
 * XREFs of TtmiPublishDeviceEnumerationEvents @ 0x1407689AC
 * Callers:
 *     TtmiWriteEnumerationEventsToQueue @ 0x14076A2B0 (TtmiWriteEnumerationEventsToQueue.c)
 * Callees:
 *     TtmpPublishDeviceEvent @ 0x1407694B8 (TtmpPublishDeviceEvent.c)
 *     TtmiLogError @ 0x140903A9C (TtmiLogError.c)
 */

__int64 __fastcall TtmiPublishDeviceEnumerationEvents(__int64 a1, __int64 a2)
{
  __int64 *v2; // rsi
  __int64 *i; // rdi
  int v6; // eax
  unsigned int v7; // ebx

  v2 = (__int64 *)(a1 + 96);
  for ( i = *(__int64 **)(a1 + 96); i != v2; i = (__int64 *)*i )
  {
    if ( (i[75] & 0xA) == 2 )
    {
      v6 = TtmpPublishDeviceEvent(a1, a2, i, 0LL);
      v7 = v6;
      if ( v6 < 0 )
      {
        TtmiLogError("TtmiPublishDeviceEnumerationEvents", 1054LL, (unsigned int)v6, (unsigned int)v6);
        return v7;
      }
    }
  }
  return 0;
}
