/*
 * XREFs of PspSynchronizeThreadIsolationDomains @ 0x14032C988
 * Callers:
 *     PsSetVmProcessorHostProcess @ 0x1407768BC (PsSetVmProcessorHostProcess.c)
 *     PspAssignPrimaryToken @ 0x140777290 (PspAssignPrimaryToken.c)
 *     PspCombineSecurityDomains @ 0x1408AB200 (PspCombineSecurityDomains.c)
 *     NtSetInformationProcess @ 0x1408EBA70 (NtSetInformationProcess.c)
 *     PspOneDirectionSecurityDomainCombine @ 0x1408F2544 (PspOneDirectionSecurityDomainCombine.c)
 *     PspDisablePrimaryTokenExchange @ 0x1409213E0 (PspDisablePrimaryTokenExchange.c)
 * Callees:
 *     KiAcquireThreadLockRaiseToDpc @ 0x1402D1150 (KiAcquireThreadLockRaiseToDpc.c)
 *     KiReleaseThreadLockLowerIrql @ 0x14032DD90 (KiReleaseThreadLockLowerIrql.c)
 *     KiAdjustUserIsolationDomainThread @ 0x1405BFC80 (KiAdjustUserIsolationDomainThread.c)
 *     PsGetNextProcessThread @ 0x1408EEC70 (PsGetNextProcessThread.c)
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
    KiReleaseThreadLockLowerIrql(v4);
    v2 = v4;
    a1 = v1;
  }
  return result;
}
