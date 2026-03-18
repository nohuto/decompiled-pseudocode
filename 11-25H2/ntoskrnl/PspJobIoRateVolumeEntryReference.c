/*
 * XREFs of PspJobIoRateVolumeEntryReference @ 0x1405D9978
 * Callers:
 *     PsIoRateControlReference @ 0x14034EA88 (PsIoRateControlReference.c)
 * Callees:
 *     ExAcquireSpinLockShared @ 0x1402BBA30 (ExAcquireSpinLockShared.c)
 *     PspIoRateEntryIoControlReference @ 0x14034EB50 (PspIoRateEntryIoControlReference.c)
 *     ExReleaseSpinLockShared @ 0x14035E450 (ExReleaseSpinLockShared.c)
 *     PspIoRateEntryVolumeCompare @ 0x140489C00 (PspIoRateEntryVolumeCompare.c)
 */

signed __int64 __fastcall PspJobIoRateVolumeEntryReference(__int64 a1, unsigned __int64 a2)
{
  volatile LONG *v2; // rbp
  signed __int64 v5; // rdi
  KIRQL v6; // al
  __int64 v7; // rcx
  KIRQL v8; // r14
  bool v9; // zf
  signed __int64 Count; // rbx
  int v11; // esi
  int v12; // eax
  struct _EX_RUNDOWN_REF v13; // rax

  v2 = (volatile LONG *)(a1 + 1688);
  v5 = 0LL;
  v6 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(a1 + 1688));
  v7 = a1 + 1696;
  v8 = v6;
  v9 = (*(_BYTE *)(a1 + 1704) & 1) == 0;
  Count = *(_QWORD *)(a1 + 1696);
  if ( !v9 && Count )
    Count ^= v7;
  v11 = *(_BYTE *)(v7 + 8) & 1;
  while ( Count )
  {
    v12 = PspIoRateEntryVolumeCompare(a2, Count);
    if ( v12 >= 0 )
    {
      if ( v12 <= 0 )
        break;
      v13.Count = *(_QWORD *)(Count + 8);
    }
    else
    {
      v13.Count = *(_QWORD *)Count;
    }
    if ( v11 && v13.Count )
      Count ^= v13.Count;
    else
      Count = v13.Count;
  }
  if ( Count )
  {
    v5 = Count;
    PspIoRateEntryIoControlReference((struct _EX_RUNDOWN_REF *)Count);
  }
  ExReleaseSpinLockShared(v2, v8);
  return v5;
}
