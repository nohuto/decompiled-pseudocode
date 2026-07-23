/*
 * XREFs of ObDereferenceObjectDeferDelete @ 0x1403B48A0
 * Callers:
 *     NtAlpcImpersonateClientContainerOfPort @ 0x14073F800 (NtAlpcImpersonateClientContainerOfPort.c)
 *     ObpCreateSymbolicLinkName @ 0x1407421D0 (ObpCreateSymbolicLinkName.c)
 *     ObpDeleteSymbolicLinkName @ 0x14083EADC (ObpDeleteSymbolicLinkName.c)
 *     CmpReportNotifyHelper @ 0x14086CB10 (CmpReportNotifyHelper.c)
 *     CmpFreePostBlock @ 0x14086EA70 (CmpFreePostBlock.c)
 *     ObpLookupObjectName @ 0x1408A58B0 (ObpLookupObjectName.c)
 *     NtNotifyChangeMultipleKeys @ 0x1408BD110 (NtNotifyChangeMultipleKeys.c)
 *     IopSynchronousServiceTail @ 0x1408C0CC0 (IopSynchronousServiceTail.c)
 *     NtQueryInformationFile @ 0x140957E20 (NtQueryInformationFile.c)
 *     FsRtlpOplockFsctrlInternal @ 0x1409E0F60 (FsRtlpOplockFsctrlInternal.c)
 *     CmpRunDownCmRM @ 0x140A00C70 (CmpRunDownCmRM.c)
 *     CmpCleanupTransactionState @ 0x140A01734 (CmpCleanupTransactionState.c)
 *     CmpDelayedDerefKeys @ 0x140A10DA8 (CmpDelayedDerefKeys.c)
 *     ObpDeleteDirectoryObject @ 0x140A55C20 (ObpDeleteDirectoryObject.c)
 *     PfpServiceMainThreadBoostPrep @ 0x140AADF1C (PfpServiceMainThreadBoostPrep.c)
 *     PfpScenCtxScenarioSet @ 0x140B6EDB0 (PfpScenCtxScenarioSet.c)
 * Callees:
 *     ObpPushStackInfo @ 0x14031FC8C (ObpPushStackInfo.c)
 *     ObpDeferObjectDeletion @ 0x1403B341C (ObpDeferObjectDeletion.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 */

void __stdcall ObDereferenceObjectDeferDelete(PVOID Object)
{
  signed __int64 v2; // rax
  bool v3; // cc
  signed __int64 BugCheckParameter4; // rax

  if ( ObpTraceFlags )
    ObpPushStackInfo((__int64)Object - 48, 0, 1u, 0x746C6644u);
  v2 = _InterlockedExchangeAdd64((volatile signed __int64 *)Object - 6, 0xFFFFFFFFFFFFFFFFuLL);
  v3 = v2 <= 1;
  BugCheckParameter4 = v2 - 1;
  if ( v3 )
  {
    if ( *((_QWORD *)Object - 5) )
      KeBugCheckEx(
        0x18u,
        ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)*((char *)Object - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)Object - 48) >> 8)],
        (ULONG_PTR)Object,
        3uLL,
        *((_QWORD *)Object - 5));
    if ( BugCheckParameter4 < 0 )
      KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)Object, 4uLL, BugCheckParameter4);
    ObpDeferObjectDeletion((signed __int64)Object - 48);
  }
}
