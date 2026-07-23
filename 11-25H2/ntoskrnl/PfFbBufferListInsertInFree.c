/*
 * XREFs of PfFbBufferListInsertInFree @ 0x140477A20
 * Callers:
 *     PfFbBufferListAllocateTemporary @ 0x140477910 (PfFbBufferListAllocateTemporary.c)
 *     PfFbBufferListFlushStandby @ 0x140477984 (PfFbBufferListFlushStandby.c)
 *     PfTFullEventListAdd @ 0x14048924C (PfTFullEventListAdd.c)
 *     PfFbBufferListAllocate @ 0x1405C859C (PfFbBufferListAllocate.c)
 *     PfTCleanup @ 0x14073A548 (PfTCleanup.c)
 *     PfpFlushEventBuffers @ 0x14092352C (PfpFlushEventBuffers.c)
 *     PfpRepurposeNameLoggingTrace @ 0x140A8729C (PfpRepurposeNameLoggingTrace.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140324280 (ExReleaseRundownProtection_0.c)
 *     RtlpInterlockedPushEntrySList @ 0x1406A8600 (RtlpInterlockedPushEntrySList.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall PfFbBufferListInsertInFree(_SLIST_ENTRY *RunRef, _SLIST_ENTRY *P, int a3, int a4, int a5)
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
    v7 = (_SLIST_ENTRY *)((char *)P + a3);
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
