/*
 * XREFs of MmUpdateMdlTracker @ 0x14042B0A4
 * Callers:
 *     IopProbeAndLockPages @ 0x14025F42C (IopProbeAndLockPages.c)
 *     IopProbeAndLockPages_0 @ 0x14042AF44 (IopProbeAndLockPages_0.c)
 *     IopProbeAndLockPages_1 @ 0x140468A3C (IopProbeAndLockPages_1.c)
 *     IopProbeAndLockPages_2 @ 0x1404A1C64 (IopProbeAndLockPages_2.c)
 *     NtQueryQuotaInformationFile @ 0x1407157A0 (NtQueryQuotaInformationFile.c)
 *     IopXxxControlFile @ 0x1408BF330 (IopXxxControlFile.c)
 *     IopWriteFileGather @ 0x140A920EC (IopWriteFileGather.c)
 * Callees:
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403394D0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall MmUpdateMdlTracker(unsigned __int64 a1, struct _LIST_ENTRY *a2, struct _LIST_ENTRY *a3)
{
  PEPROCESS v3; // r9
  unsigned int v4; // edi
  struct _LIST_ENTRY *Flink; // rbx
  struct _LIST_ENTRY **p_Blink; // rsi
  volatile LONG *v10; // rcx
  KIRQL v11; // r14

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
  MiReleaseSpinLockExclusive(p_Blink, v11);
  LOBYTE(v4) = Flink != 0LL;
  return v4;
}
