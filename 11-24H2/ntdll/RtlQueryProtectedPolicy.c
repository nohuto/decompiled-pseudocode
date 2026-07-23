/*
 * XREFs of RtlQueryProtectedPolicy @ 0x1800EF520
 * Callers:
 *     <none>
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x18003CC20 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x18003CC80 (RtlReleaseSRWLockShared.c)
 *     bsearch @ 0x180121F70 (bsearch.c)
 */

NTSTATUS __cdecl RtlQueryProtectedPolicy(PGUID PolicyGuid, PULONG_PTR PolicyValue)
{
  NTSTATUS v4; // ebx
  _QWORD *v6; // rax

  v4 = -1073741275;
  if ( RtlpProtectedPolicies )
  {
    RtlAcquireSRWLockShared(&RtlpProtectedPoliciesSRWLock);
    v6 = bsearch(
           PolicyGuid,
           RtlpProtectedPolicies,
           (unsigned int)RtlpProtectedPoliciesActiveCount,
           0x18uLL,
           (_CoreCrtNonSecureSearchSortCompareFunction)RtlpCompareProtectedPolicyEntry);
    if ( v6 )
    {
      v4 = 0;
      *PolicyValue = v6[2];
    }
    RtlReleaseSRWLockShared(&RtlpProtectedPoliciesSRWLock);
  }
  return v4;
}
