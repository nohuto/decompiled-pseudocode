/*
 * XREFs of RtlpTpDeleteData @ 0x18008A1E0
 * Callers:
 *     RtlpTpTimerRundown @ 0x18008941C (RtlpTpTimerRundown.c)
 *     RtlCreateTimer @ 0x180089920 (RtlCreateTimer.c)
 *     RtlpTpWorkUnposted @ 0x18008BF40 (RtlpTpWorkUnposted.c)
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
