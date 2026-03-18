/*
 * XREFs of IopQueueThreadIrp @ 0x140253C60
 * Callers:
 *     IopBuildDeviceIoControlRequest @ 0x140267920 (IopBuildDeviceIoControlRequest.c)
 *     MiIssueAsynchronousFlush @ 0x1403724FC (MiIssueAsynchronousFlush.c)
 *     IoAsynchronousPageWrite @ 0x14037286C (IoAsynchronousPageWrite.c)
 *     MiSynchronousPageWrite @ 0x140372F44 (MiSynchronousPageWrite.c)
 *     MiIssueSynchronousFlush @ 0x1403731E8 (MiIssueSynchronousFlush.c)
 *     IoSynchronousPageWriteEx @ 0x1403734C0 (IoSynchronousPageWriteEx.c)
 *     IoPageReadEx @ 0x140373740 (IoPageReadEx.c)
 *     NtSetInformationFile @ 0x1403C34C0 (NtSetInformationFile.c)
 *     IoQueueThreadIrp @ 0x1404B1B90 (IoQueueThreadIrp.c)
 *     IoCancelFileOpen @ 0x1406F9E00 (IoCancelFileOpen.c)
 *     IoEnqueueIrp @ 0x140714060 (IoEnqueueIrp.c)
 *     IoSetInformation @ 0x140714820 (IoSetInformation.c)
 *     IopDeleteFile @ 0x140841DB0 (IopDeleteFile.c)
 *     IopCloseFile @ 0x140842070 (IopCloseFile.c)
 *     IopGetSetSecurityObject @ 0x1408796F0 (IopGetSetSecurityObject.c)
 *     IopParseDevice @ 0x14089F880 (IopParseDevice.c)
 *     IopSynchronousCall @ 0x1408BBC08 (IopSynchronousCall.c)
 *     IopSynchronousServiceTail @ 0x1408C3300 (IopSynchronousServiceTail.c)
 *     IopQueryNameInternal @ 0x140968330 (IopQueryNameInternal.c)
 *     IopQueryXxxInformation @ 0x14096A530 (IopQueryXxxInformation.c)
 *     IopGetFileInformation @ 0x14096E140 (IopGetFileInformation.c)
 *     NtQueryInformationFile @ 0x14096F610 (NtQueryInformationFile.c)
 *     IopFilterResourceRequirementsCall @ 0x14098E480 (IopFilterResourceRequirementsCall.c)
 *     PnpQueryInterface @ 0x1409C4D84 (PnpQueryInterface.c)
 *     IopBuildSynchronousFsdRequest @ 0x140A3CDD0 (IopBuildSynchronousFsdRequest.c)
 *     IopCreateArcName @ 0x140A75840 (IopCreateArcName.c)
 *     IoVerifyVolume @ 0x140AB7170 (IoVerifyVolume.c)
 *     IopFreeBandwidthContract @ 0x140AC2D5C (IopFreeBandwidthContract.c)
 * Callees:
 *     KiReleaseSpinLockInstrumented @ 0x14024E080 (KiReleaseSpinLockInstrumented.c)
 *     KiAcquireSpinLockInstrumented @ 0x140254BA0 (KiAcquireSpinLockInstrumented.c)
 *     KxWaitForSpinLockAndAcquire @ 0x140254C70 (KxWaitForSpinLockAndAcquire.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall IopQueueThreadIrp(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  _QWORD *v4; // rsi
  __int64 *v5; // rdi
  volatile signed __int32 *v6; // rbx
  unsigned __int8 CurrentIrql; // bp
  __int64 v8; // rax
  __int64 result; // rax
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  v3 = *(_QWORD *)(a1 + 152);
  v4 = (_QWORD *)(a1 + 32);
  v5 = (__int64 *)(v3 + 1344);
  v6 = (volatile signed __int32 *)(v3 + 1560);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL, a3);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
  {
    if ( _interlockedbittestandset64(v6, 0LL) )
      KxWaitForSpinLockAndAcquire(v6);
  }
  else
  {
    KiAcquireSpinLockInstrumented(v6);
  }
  v8 = *v5;
  if ( *(__int64 **)(*v5 + 8) != v5 )
    __fastfail(3u);
  *v4 = v8;
  v4[1] = v5;
  *(_QWORD *)(v8 + 8) = v4;
  *v5 = (__int64)v4;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
    _InterlockedAnd64((volatile signed __int64 *)v6, 0LL);
  else
    KiReleaseSpinLockInstrumented((volatile signed __int64 *)v6, retaddr);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
