/*
 * XREFs of RtlpTpDeleteData @ 0x18003DF64
 * Callers:
 *     RtlpTpTimerRundown @ 0x18003B610 (RtlpTpTimerRundown.c)
 *     RtlCreateTimer @ 0x18003B9A0 (RtlCreateTimer.c)
 *     RtlpTpWorkUnposted @ 0x18003DA30 (RtlpTpWorkUnposted.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall RtlpTpDeleteData(void **a1)
{
  void *v1; // rcx
  NTSTATUS result; // eax

  v1 = *a1;
  if ( v1 )
    return NtClose(v1);
  return result;
}
