/*
 * XREFs of RtlpGetPreviousProcessHeapDescriptor @ 0x180142674
 * Callers:
 *     RtlLockHeapManagerForCloning @ 0x180141950 (RtlLockHeapManagerForCloning.c)
 *     RtlUnlockHeapManagerForCloning @ 0x180141CA0 (RtlUnlockHeapManagerForCloning.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall RtlpGetPreviousProcessHeapDescriptor(__int64 a1)
{
  __int64 *result; // rax

  result = (__int64 *)qword_1801D3F88;
  if ( a1 )
    result = *(__int64 **)(a1 + 8);
  if ( result == &RtlpProcessHeaps )
    return 0LL;
  return result;
}
