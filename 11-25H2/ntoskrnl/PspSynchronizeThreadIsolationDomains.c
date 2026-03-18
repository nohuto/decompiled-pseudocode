/*
 * XREFs of PspSynchronizeThreadIsolationDomains @ 0x140489530
 * Callers:
 *     PsSetVmProcessorHostProcess @ 0x140766CCC (PsSetVmProcessorHostProcess.c)
 *     PspAssignPrimaryToken @ 0x1407676A0 (PspAssignPrimaryToken.c)
 *     NtSetInformationProcess @ 0x1408BA860 (NtSetInformationProcess.c)
 *     PspCombineSecurityDomains @ 0x1408EDED8 (PspCombineSecurityDomains.c)
 *     PspDisablePrimaryTokenExchange @ 0x14090B050 (PspDisablePrimaryTokenExchange.c)
 *     PspOneDirectionSecurityDomainCombine @ 0x140920D58 (PspOneDirectionSecurityDomainCombine.c)
 * Callees:
 *     KiAcquireThreadLockRaiseToDpc @ 0x140204DB0 (KiAcquireThreadLockRaiseToDpc.c)
 *     KiReleaseThreadLockLowerIrql @ 0x140204FF0 (KiReleaseThreadLockLowerIrql.c)
 *     KiAdjustUserIsolationDomainThread @ 0x1405BE5D0 (KiAdjustUserIsolationDomainThread.c)
 *     PsGetNextProcessThread @ 0x1408BD940 (PsGetNextProcessThread.c)
 */

__int64 __fastcall PspSynchronizeThreadIsolationDomains(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v2; // rdx
  __int64 result; // rax
  __int64 v4; // rbx
  __int64 v5; // r8
  unsigned __int8 v6; // [rsp+38h] [rbp+10h] BYREF

  v1 = a1;
  v2 = 0LL;
  while ( 1 )
  {
    result = PsGetNextProcessThread(a1, v2);
    v4 = result;
    if ( !result )
      break;
    v6 = -1;
    KiAcquireThreadLockRaiseToDpc(result, &v6);
    if ( (*(_BYTE *)(v4 + 1121) & 3) != 0 )
    {
      LOBYTE(v5) = 1;
      KiAdjustUserIsolationDomainThread(v4, *(_QWORD *)(*(_QWORD *)(v4 + 544) + 1888LL), v5);
    }
    KiReleaseThreadLockLowerIrql(v4, v6);
    v2 = v4;
    a1 = v1;
  }
  return result;
}
