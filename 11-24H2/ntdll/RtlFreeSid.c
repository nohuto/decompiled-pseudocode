/*
 * XREFs of RtlFreeSid @ 0x1800E5EB0
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap @ 0x1800533F0 (RtlFreeHeap.c)
 */

PVOID __cdecl RtlFreeSid(PSID Sid)
{
  PSID v1; // rbx

  v1 = Sid;
  if ( RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Sid) )
    return 0LL;
  return v1;
}
