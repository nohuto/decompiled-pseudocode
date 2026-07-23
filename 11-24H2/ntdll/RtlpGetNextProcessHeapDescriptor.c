/*
 * XREFs of RtlpGetNextProcessHeapDescriptor @ 0x1800E5F90
 * Callers:
 *     RtlpQueryExtendedHeapInformation @ 0x1801144DC (RtlpQueryExtendedHeapInformation.c)
 *     RtlLockHeapManagerForCloning @ 0x18013FB40 (RtlLockHeapManagerForCloning.c)
 *     RtlUnlockHeapManagerForCloning @ 0x18013FE80 (RtlUnlockHeapManagerForCloning.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall RtlpGetNextProcessHeapDescriptor(__int64 **a1)
{
  __int64 *result; // rax

  result = (__int64 *)RtlpProcessHeaps;
  if ( a1 )
    result = *a1;
  if ( result == &RtlpProcessHeaps )
    return 0LL;
  return result;
}
