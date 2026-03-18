/*
 * XREFs of MmUpdateMdlTracker @ 0x1402D5878
 * Callers:
 *     IopProbeAndLockPages @ 0x1402D4D10 (IopProbeAndLockPages.c)
 *     IopAllocateAndPopulateWriteIrp @ 0x1402D4D60 (IopAllocateAndPopulateWriteIrp.c)
 *     IopProbeAndLockPages_0 @ 0x1402D55C4 (IopProbeAndLockPages_0.c)
 *     IopProbeAndLockPages_1 @ 0x1402D5614 (IopProbeAndLockPages_1.c)
 *     IopProbeAndLockPages_2 @ 0x1404A69A4 (IopProbeAndLockPages_2.c)
 *     NtQueryQuotaInformationFile @ 0x14070BB10 (NtQueryQuotaInformationFile.c)
 *     IopXxxControlFile @ 0x1408C3AD0 (IopXxxControlFile.c)
 *     IopWriteFileGather @ 0x140A9170C (IopWriteFileGather.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x1402BEA90 (ExAcquireSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14031F3B0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiReleaseSpinLockExclusive @ 0x140329B80 (MiReleaseSpinLockExclusive.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

__int64 __fastcall MmUpdateMdlTracker(unsigned __int64 a1, struct _LIST_ENTRY *a2, struct _LIST_ENTRY *a3)
{
  PEPROCESS v3; // r9
  unsigned int v4; // edi
  struct _LIST_ENTRY *Flink; // rbx
  struct _LIST_ENTRY **p_Blink; // rsi
  volatile LONG *v10; // rcx
  KIRQL v11; // r14
  __int64 v12; // rdx

  v3 = *(PEPROCESS *)(a1 + 16);
  v4 = 0;
  if ( !v3 )
    v3 = PsInitialSystemProcess;
  Flink = v3[2].Header.WaitListHead.Flink;
  if ( !Flink )
    return 0LL;
  p_Blink = &Flink[1].Blink;
  v10 = (volatile LONG *)&Flink[1].Blink;
  if ( KeGetCurrentIrql() == 2 )
  {
    v11 = 17;
    ExAcquireSpinLockExclusiveAtDpcLevel(v10);
  }
  else
  {
    v11 = ExAcquireSpinLockExclusive(v10);
  }
LABEL_6:
  for ( Flink = Flink->Flink; Flink; Flink = Flink->Blink )
  {
    if ( (struct _LIST_ENTRY *)a1 < Flink[1].Blink )
      goto LABEL_6;
    if ( (struct _LIST_ENTRY *)a1 <= Flink[1].Blink )
      break;
  }
  if ( Flink && (a2 || a3) )
  {
    Flink[4].Blink = a2;
    Flink[5].Flink = a3;
    memset_0(&Flink[5].Blink, 0, 0x60uLL);
  }
  LOBYTE(v12) = v11;
  MiReleaseSpinLockExclusive(p_Blink, v12);
  LOBYTE(v4) = Flink != 0LL;
  return v4;
}
