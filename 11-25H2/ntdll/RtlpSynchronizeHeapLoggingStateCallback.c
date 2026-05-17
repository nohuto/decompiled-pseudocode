/*
 * XREFs of RtlpSynchronizeHeapLoggingStateCallback @ 0x180034D70
 * Callers:
 *     <none>
 * Callees:
 *     RtlpHpHeapLoggingStateSync @ 0x180034D90 (RtlpHpHeapLoggingStateSync.c)
 */

__int64 __fastcall RtlpSynchronizeHeapLoggingStateCallback(__int64 a1)
{
  if ( *(_DWORD *)(a1 + 16) == -571548178 )
    RtlpHpHeapLoggingStateSync();
  return 0LL;
}
