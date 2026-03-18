/*
 * XREFs of PsAttachSession @ 0x1405DABA0
 * Callers:
 *     <none>
 * Callees:
 *     KiStackAttachProcess @ 0x140289A10 (KiStackAttachProcess.c)
 *     ObfReferenceObjectWithTag @ 0x14029B2A0 (ObfReferenceObjectWithTag.c)
 *     PspUnlockProcessListExclusive @ 0x1403D6E4C (PspUnlockProcessListExclusive.c)
 *     PspLockProcessListExclusive @ 0x1403D744C (PspLockProcessListExclusive.c)
 *     Feature_Servicing_Mm_SessionRef__private_IsEnabledNoReportingNoInline @ 0x1405D9F84 (Feature_Servicing_Mm_SessionRef__private_IsEnabledNoReportingNoInline.c)
 */

__int64 __fastcall PsAttachSession(_KPROCESS *BugCheckParameter1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rdi
  _KPROCESS *v3; // rbx
  unsigned __int64 CycleTime; // rbp
  _KPROCESS *Process; // rsi
  unsigned __int64 v7; // r14

  CurrentThread = KeGetCurrentThread();
  v3 = BugCheckParameter1;
  CycleTime = BugCheckParameter1[1].CycleTime;
  Process = CurrentThread->ApcState.Process;
  v7 = Process[1].CycleTime;
  PspLockProcessListExclusive((__int64)CurrentThread);
  if ( (*(_DWORD *)(CycleTime + 4) & 2) != 0 )
  {
    PspUnlockProcessListExclusive((__int64)CurrentThread);
    return 3221225738LL;
  }
  else
  {
    ++*(_DWORD *)(CycleTime + 52);
    PspUnlockProcessListExclusive((__int64)CurrentThread);
    if ( !(unsigned int)Feature_Servicing_Mm_SessionRef__private_IsEnabledNoReportingNoInline()
      && v7
      && (Process[3].ActiveGroupsMask.Masks[1] & 0x100000000000LL) == 0
      && v7 == CycleTime )
    {
      v3 = Process;
    }
    ObfReferenceObjectWithTag(v3, 0x73536D4Du);
    KiStackAttachProcess(v3, 0, a2);
    return 0LL;
  }
}
