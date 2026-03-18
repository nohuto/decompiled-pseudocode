/*
 * XREFs of PspDestroySyscallProvider @ 0x1407711F4
 * Callers:
 *     PspDereferenceSyscallProvider @ 0x1405E4998 (PspDereferenceSyscallProvider.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     PspAcquireSyscallProviderRegistrationLockExclusive @ 0x1405E4934 (PspAcquireSyscallProviderRegistrationLockExclusive.c)
 *     PspReleaseSyscallProviderRegistrationLockExclusive @ 0x1405E4AE8 (PspReleaseSyscallProviderRegistrationLockExclusive.c)
 *     VslRevokeSyscallProviderServiceTables @ 0x140710294 (VslRevokeSyscallProviderServiceTables.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __fastcall PspDestroySyscallProvider(PVOID **P)
{
  PVOID *v2; // rcx
  PVOID *v3; // rax

  PspAcquireSyscallProviderRegistrationLockExclusive();
  v2 = *P;
  if ( (*P)[1] != P || (v3 = P[1], *v3 != P) )
    __fastfail(3u);
  *v3 = v2;
  v2[1] = v3;
  PspReleaseSyscallProviderRegistrationLockExclusive();
  VslRevokeSyscallProviderServiceTables((__int64)P[4][3]);
  ObfDereferenceObjectWithTag(P[4], 0x63537350u);
  ExFreePoolWithTag(P, 0x63537350u);
}
