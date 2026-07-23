/*
 * XREFs of IopQueueThreadIrp @ 0x140284270
 * Callers:
 *     MiIssueAsynchronousFlush @ 0x14025ADBC (MiIssueAsynchronousFlush.c)
 *     IoAsynchronousPageWrite @ 0x14025B12C (IoAsynchronousPageWrite.c)
 *     MiSynchronousPageWrite @ 0x14025B804 (MiSynchronousPageWrite.c)
 *     MiIssueSynchronousFlush @ 0x14025BAA8 (MiIssueSynchronousFlush.c)
 *     IoSynchronousPageWriteEx @ 0x14025BD80 (IoSynchronousPageWriteEx.c)
 *     IoPageReadEx @ 0x14025C000 (IoPageReadEx.c)
 *     IopBuildDeviceIoControlRequest @ 0x14025EF00 (IopBuildDeviceIoControlRequest.c)
 *     NtSetInformationFile @ 0x1403B2080 (NtSetInformationFile.c)
 *     IoQueueThreadIrp @ 0x1404AC420 (IoQueueThreadIrp.c)
 *     IoCancelFileOpen @ 0x1406F7A40 (IoCancelFileOpen.c)
 *     IoEnqueueIrp @ 0x140711BF0 (IoEnqueueIrp.c)
 *     IoSetInformation @ 0x1407123B0 (IoSetInformation.c)
 *     IopDeleteFile @ 0x14083E070 (IopDeleteFile.c)
 *     IopCloseFile @ 0x14083E330 (IopCloseFile.c)
 *     IopGetSetSecurityObject @ 0x14087DA20 (IopGetSetSecurityObject.c)
 *     IopParseDevice @ 0x1408A7F20 (IopParseDevice.c)
 *     IopSynchronousCall @ 0x1408B9564 (IopSynchronousCall.c)
 *     IopSynchronousServiceTail @ 0x1408C0CC0 (IopSynchronousServiceTail.c)
 *     IopQueryNameInternal @ 0x140950DC0 (IopQueryNameInternal.c)
 *     IopQueryXxxInformation @ 0x140952FC0 (IopQueryXxxInformation.c)
 *     IopGetFileInformation @ 0x140957CC0 (IopGetFileInformation.c)
 *     NtQueryInformationFile @ 0x140957E20 (NtQueryInformationFile.c)
 *     IopFilterResourceRequirementsCall @ 0x1409794B8 (IopFilterResourceRequirementsCall.c)
 *     PnpQueryInterface @ 0x140982B38 (PnpQueryInterface.c)
 *     IopBuildSynchronousFsdRequest @ 0x140A326E0 (IopBuildSynchronousFsdRequest.c)
 *     IopCreateArcName @ 0x140A6FCE0 (IopCreateArcName.c)
 *     IoVerifyVolume @ 0x140AB1440 (IoVerifyVolume.c)
 *     IopFreeBandwidthContract @ 0x140ABE044 (IopFreeBandwidthContract.c)
 * Callees:
 *     KiReleaseSpinLockInstrumented @ 0x14027E690 (KiReleaseSpinLockInstrumented.c)
 *     KiAcquireSpinLockInstrumented @ 0x1402851B0 (KiAcquireSpinLockInstrumented.c)
 *     KxWaitForSpinLockAndAcquire @ 0x140285280 (KxWaitForSpinLockAndAcquire.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall IopQueueThreadIrp(__int64 a1)
{
  __int64 v1; // rbx
  _QWORD *v2; // rsi
  __int64 *v3; // rdi
  volatile signed __int32 *v4; // rbx
  unsigned __int8 CurrentIrql; // bp
  __int64 v6; // rax
  __int64 result; // rax
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  v1 = *(_QWORD *)(a1 + 152);
  v2 = (_QWORD *)(a1 + 32);
  v3 = (__int64 *)(v1 + 1344);
  v4 = (volatile signed __int32 *)(v1 + 1560);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
  {
    if ( _interlockedbittestandset64(v4, 0LL) )
      KxWaitForSpinLockAndAcquire(v4);
  }
  else
  {
    KiAcquireSpinLockInstrumented(v4);
  }
  v6 = *v3;
  if ( *(__int64 **)(*v3 + 8) != v3 )
    __fastfail(3u);
  *v2 = v6;
  v2[1] = v3;
  *(_QWORD *)(v6 + 8) = v2;
  *v3 = (__int64)v2;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
    _InterlockedAnd64((volatile signed __int64 *)v4, 0LL);
  else
    KiReleaseSpinLockInstrumented((volatile signed __int64 *)v4, retaddr);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
