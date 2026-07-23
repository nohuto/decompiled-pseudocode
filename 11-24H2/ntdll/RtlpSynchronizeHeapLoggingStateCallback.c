/*
 * XREFs of RtlpSynchronizeHeapLoggingStateCallback @ 0x180026640
 * Callers:
 *     <none>
 * Callees:
 *     RtlpHpHeapLoggingStateSync @ 0x1800265D4 (RtlpHpHeapLoggingStateSync.c)
 */

__int64 __fastcall RtlpSynchronizeHeapLoggingStateCallback(__int64 a1)
{
  if ( *(_DWORD *)(a1 + 16) == -571548178 )
    RtlpHpHeapLoggingStateSync(a1);
  return 0LL;
}
