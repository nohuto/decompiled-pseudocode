/*
 * XREFs of RtlpTpDeleteData @ 0x18006D900
 * Callers:
 *     RtlpTpTimerRundown @ 0x18006CB3C (RtlpTpTimerRundown.c)
 *     RtlCreateTimer @ 0x18006D040 (RtlCreateTimer.c)
 *     RtlpTpWorkUnposted @ 0x18006F660 (RtlpTpWorkUnposted.c)
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
