/*
 * XREFs of TtmpTraceLoggingCallback @ 0x14076F4C0
 * Callers:
 *     <none>
 * Callees:
 *     TtmiSessionsRundown @ 0x140769F5C (TtmiSessionsRundown.c)
 */

void __fastcall TtmpTraceLoggingCallback(__int64 a1, int a2)
{
  if ( a2 == 2 )
    TtmiSessionsRundown();
}
