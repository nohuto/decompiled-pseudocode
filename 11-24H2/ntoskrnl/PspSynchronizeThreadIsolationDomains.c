/*
 * XREFs of PspSynchronizeThreadIsolationDomains @ 0x1402053A8
 * Callers:
 *     PsSetVmProcessorHostProcess @ 0x14077669C (PsSetVmProcessorHostProcess.c)
 *     PspAssignPrimaryToken @ 0x140777070 (PspAssignPrimaryToken.c)
 *     PspDisablePrimaryTokenExchange @ 0x1408FEB00 (PspDisablePrimaryTokenExchange.c)
 *     PspCombineSecurityDomains @ 0x14094706C (PspCombineSecurityDomains.c)
 *     NtSetInformationProcess @ 0x140947500 (NtSetInformationProcess.c)
 *     PspOneDirectionSecurityDomainCombine @ 0x14094DFD4 (PspOneDirectionSecurityDomainCombine.c)
 * Callees:
 *     KiReleaseThreadLockLowerIrql @ 0x1402067B0 (KiReleaseThreadLockLowerIrql.c)
 *     KiAcquireThreadLockRaiseToDpc @ 0x1402A1A20 (KiAcquireThreadLockRaiseToDpc.c)
 *     KiAdjustUserIsolationDomainThread @ 0x1405C26B0 (KiAdjustUserIsolationDomainThread.c)
 *     PsGetNextProcessThread @ 0x14094A700 (PsGetNextProcessThread.c)
 */

__int64 __fastcall PspSynchronizeThreadIsolationDomains(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v2; // rdx
  __int64 result; // rax
  __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // r8
  char v7; // [rsp+38h] [rbp+10h] BYREF

  v1 = a1;
  v2 = 0LL;
  while ( 1 )
  {
    result = PsGetNextProcessThread(a1, v2);
    v4 = result;
    if ( !result )
      break;
    v7 = -1;
    KiAcquireThreadLockRaiseToDpc(result, &v7);
    if ( (*(_BYTE *)(v4 + 1121) & 3) != 0 )
    {
      LOBYTE(v6) = 1;
      KiAdjustUserIsolationDomainThread(v4, *(_QWORD *)(*(_QWORD *)(v4 + 544) + 1888LL), v6);
    }
    LOBYTE(v5) = v7;
    KiReleaseThreadLockLowerIrql(v4, v5);
    v2 = v4;
    a1 = v1;
  }
  return result;
}
