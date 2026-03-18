/*
 * XREFs of PsAttachSession @ 0x1405E6D20
 * Callers:
 *     <none>
 * Callees:
 *     KiStackAttachProcess @ 0x1403209E0 (KiStackAttachProcess.c)
 *     ObfReferenceObjectWithTag @ 0x1403403E0 (ObfReferenceObjectWithTag.c)
 *     PspUnlockProcessListExclusive @ 0x1403494CC (PspUnlockProcessListExclusive.c)
 *     PspLockProcessListExclusive @ 0x140349ACC (PspLockProcessListExclusive.c)
 */

__int64 __fastcall PsAttachSession(_KPROCESS *BugCheckParameter1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rbx
  unsigned __int64 CycleTime; // rsi

  CurrentThread = KeGetCurrentThread();
  CycleTime = BugCheckParameter1[1].CycleTime;
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
    ObfReferenceObjectWithTag(BugCheckParameter1, 0x73536D4Du);
    KiStackAttachProcess(BugCheckParameter1, 0, a2);
    return 0LL;
  }
}
