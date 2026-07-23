/*
 * XREFs of TtmpTraceLoggingCallback @ 0x14076F6E0
 * Callers:
 *     <none>
 * Callees:
 *     TtmiSessionsRundown @ 0x14076A17C (TtmiSessionsRundown.c)
 */

void __fastcall TtmpTraceLoggingCallback(__int64 a1, int a2)
{
  if ( a2 == 2 )
    TtmiSessionsRundown();
}
