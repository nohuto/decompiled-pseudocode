/*
 * XREFs of RtlFreeSid @ 0x1800EBA00
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 */

PVOID __cdecl RtlFreeSid(PSID Sid)
{
  PSID v1; // rbx

  v1 = Sid;
  if ( RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Sid) )
    return 0LL;
  return v1;
}
