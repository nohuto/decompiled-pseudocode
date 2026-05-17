/*
 * XREFs of RtlFreeSid @ 0x1800EBA00
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 */

__int64 __fastcall RtlFreeSid(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbx

  v4 = a1;
  if ( (unsigned int)RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, a1, a4) )
    return 0LL;
  return v4;
}
