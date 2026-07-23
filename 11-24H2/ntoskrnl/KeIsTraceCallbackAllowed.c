/*
 * XREFs of KeIsTraceCallbackAllowed @ 0x1402D0E7C
 * Callers:
 *     EtwpLogKernelEvent @ 0x140287790 (EtwpLogKernelEvent.c)
 *     EtwpTraceMessageVa @ 0x1402CF490 (EtwpTraceMessageVa.c)
 *     EtwpLogSystemEventUnsafe @ 0x1402D0080 (EtwpLogSystemEventUnsafe.c)
 *     EtwpInvokeEventCallback @ 0x1404A71B4 (EtwpInvokeEventCallback.c)
 *     KiTrackSystemCallEntry @ 0x14073B390 (KiTrackSystemCallEntry.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeIsTraceCallbackAllowed(char a1)
{
  unsigned int v1; // r8d
  unsigned __int64 SecureHandle; // rax

  v1 = 0;
  if ( (KiDynamicTraceEnabled & 2) != 0 )
    return 1LL;
  if ( (KiDynamicTraceEnabled & 1) == 0 )
    return 0LL;
  if ( !a1 )
    return 0LL;
  SecureHandle = KeGetCurrentThread()->Process->SecureState.SecureHandle;
  if ( (SecureHandle & 1) != 0 )
    return 0LL;
  LOBYTE(v1) = SecureHandle == 0;
  return v1;
}
