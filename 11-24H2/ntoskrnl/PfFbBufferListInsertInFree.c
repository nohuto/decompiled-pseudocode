/*
 * XREFs of PfFbBufferListInsertInFree @ 0x140477680
 * Callers:
 *     PfFbBufferListAllocateTemporary @ 0x140477570 (PfFbBufferListAllocateTemporary.c)
 *     PfFbBufferListFlushStandby @ 0x1404775E4 (PfFbBufferListFlushStandby.c)
 *     PfTFullEventListAdd @ 0x140488B58 (PfTFullEventListAdd.c)
 *     PfFbBufferListAllocate @ 0x1405CCB6C (PfFbBufferListAllocate.c)
 *     PfTCleanup @ 0x140746568 (PfTCleanup.c)
 *     PfpFlushEventBuffers @ 0x14094F57C (PfpFlushEventBuffers.c)
 *     PfpRepurposeNameLoggingTrace @ 0x140A8C29C (PfpRepurposeNameLoggingTrace.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140245670 (ExReleaseRundownProtection_0.c)
 *     RtlpInterlockedPushEntrySList @ 0x1406B38D0 (RtlpInterlockedPushEntrySList.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __fastcall PfFbBufferListInsertInFree(_SLIST_ENTRY *RunRef, struct _SLIST_ENTRY *P, int a3, int a4, int a5)
{
  _SLIST_ENTRY *v7; // r8
  __int64 Next_low; // rcx
  char *v9; // rcx

  if ( (a4 & 1) != 0 && LOWORD(RunRef[1].Next) + (unsigned int)LOWORD(RunRef[2].Next) >= (int)KeNumberProcessors_0 + 1 )
  {
    _InterlockedAdd((volatile signed __int32 *)&RunRef[7], -a3);
    ExFreePoolWithTag(P, HIDWORD(RunRef[4].Next));
  }
  else
  {
    v7 = (struct _SLIST_ENTRY *)((char *)P + a3);
    P[1].Next = RunRef;
    P[2].Next = v7;
    Next_low = LODWORD(RunRef[5].Next);
    *((_DWORD *)&P[2].Next + 2) = 0;
    v9 = (char *)P + Next_low;
    *((_QWORD *)&P[1].Next + 1) = v9;
    *((_DWORD *)&P[2].Next + 3) = a4;
    memset_0(v9, 0, (char *)v7 - v9);
    RtlpInterlockedPushEntrySList((PSLIST_HEADER)&RunRef[1], P);
  }
  if ( a5 )
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)RunRef);
}
