/*
 * XREFs of ObDereferenceObjectDeferDelete @ 0x1403C5CE0
 * Callers:
 *     ObpCreateSymbolicLinkName @ 0x1406F8670 (ObpCreateSymbolicLinkName.c)
 *     NtAlpcImpersonateClientContainerOfPort @ 0x1407418D0 (NtAlpcImpersonateClientContainerOfPort.c)
 *     ObpDeleteSymbolicLinkName @ 0x14084281C (ObpDeleteSymbolicLinkName.c)
 *     CmpReportNotifyHelper @ 0x140868820 (CmpReportNotifyHelper.c)
 *     CmpFreePostBlock @ 0x14086A740 (CmpFreePostBlock.c)
 *     ObpLookupObjectName @ 0x14089D210 (ObpLookupObjectName.c)
 *     NtNotifyChangeMultipleKeys @ 0x1408BF750 (NtNotifyChangeMultipleKeys.c)
 *     IopSynchronousServiceTail @ 0x1408C3300 (IopSynchronousServiceTail.c)
 *     NtQueryInformationFile @ 0x14096F610 (NtQueryInformationFile.c)
 *     CmpRunDownCmRM @ 0x140A04740 (CmpRunDownCmRM.c)
 *     CmpCleanupTransactionState @ 0x140A05204 (CmpCleanupTransactionState.c)
 *     CmpDelayedDerefKeys @ 0x140A17C38 (CmpDelayedDerefKeys.c)
 *     ObpDeleteDirectoryObject @ 0x140A5D800 (ObpDeleteDirectoryObject.c)
 *     PfpServiceMainThreadBoostPrep @ 0x140AB2FAC (PfpServiceMainThreadBoostPrep.c)
 *     PfpScenCtxScenarioSet @ 0x140B6D510 (PfpScenCtxScenarioSet.c)
 * Callees:
 *     ObpPushStackInfo @ 0x1403407AC (ObpPushStackInfo.c)
 *     ObpDeferObjectDeletion @ 0x1403C485C (ObpDeferObjectDeletion.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
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
