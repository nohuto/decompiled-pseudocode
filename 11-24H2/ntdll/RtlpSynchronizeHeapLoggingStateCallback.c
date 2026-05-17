/*
 * XREFs of RtlpSynchronizeHeapLoggingStateCallback @ 0x1800A5F30
 * Callers:
 *     <none>
 * Callees:
 *     RtlpHpHeapLoggingStateSync @ 0x1800A5F50 (RtlpHpHeapLoggingStateSync.c)
 */

__int64 __fastcall RtlpSynchronizeHeapLoggingStateCallback(__int64 a1)
{
  if ( *(_DWORD *)(a1 + 16) == -571548178 )
    RtlpHpHeapLoggingStateSync();
  return 0LL;
}
