/*
 * XREFs of ObDereferenceObjectDeferDelete @ 0x1403F2E60
 * Callers:
 *     NtAlpcImpersonateClientContainerOfPort @ 0x1407358B0 (NtAlpcImpersonateClientContainerOfPort.c)
 *     ObpDeleteSymbolicLinkName @ 0x1408462DC (ObpDeleteSymbolicLinkName.c)
 *     ObpLookupObjectName @ 0x14085CB70 (ObpLookupObjectName.c)
 *     CmpRunDownCmRM @ 0x140865B50 (CmpRunDownCmRM.c)
 *     CmpCleanupTransactionState @ 0x1408666A8 (CmpCleanupTransactionState.c)
 *     CmpFreePostBlock @ 0x14086CC80 (CmpFreePostBlock.c)
 *     CmpReportNotifyHelper @ 0x14086F9E0 (CmpReportNotifyHelper.c)
 *     IopSynchronousServiceTail @ 0x1408C5420 (IopSynchronousServiceTail.c)
 *     NtNotifyChangeMultipleKeys @ 0x140937870 (NtNotifyChangeMultipleKeys.c)
 *     NtQueryInformationFile @ 0x140987790 (NtQueryInformationFile.c)
 *     CmpDelayedDerefKeys @ 0x140A0F1E8 (CmpDelayedDerefKeys.c)
 *     ObpDeleteDirectoryObject @ 0x140A5BEE0 (ObpDeleteDirectoryObject.c)
 *     PfpServiceMainThreadBoostPrep @ 0x140AADF0C (PfpServiceMainThreadBoostPrep.c)
 *     ObpCreateSymbolicLinkName @ 0x140AC15D4 (ObpCreateSymbolicLinkName.c)
 *     PfpScenCtxScenarioSet @ 0x140B5E460 (PfpScenCtxScenarioSet.c)
 * Callees:
 *     ObpPushStackInfo @ 0x14029C310 (ObpPushStackInfo.c)
 *     ObpDeferObjectDeletion @ 0x14036FDD8 (ObpDeferObjectDeletion.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
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
