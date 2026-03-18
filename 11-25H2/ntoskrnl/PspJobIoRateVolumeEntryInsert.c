/*
 * XREFs of PspJobIoRateVolumeEntryInsert @ 0x1405D9898
 * Callers:
 *     PspSetJobIoRateControlForVolume @ 0x140A3B0AC (PspSetJobIoRateControlForVolume.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x1402BEA90 (ExAcquireSpinLockExclusive.c)
 *     RtlRbInsertNodeEx @ 0x1402E2370 (RtlRbInsertNodeEx.c)
 *     ExReleaseSpinLockExclusive @ 0x1403A2D40 (ExReleaseSpinLockExclusive.c)
 *     PspIoRateEntryVolumeCompare @ 0x140489C00 (PspIoRateEntryVolumeCompare.c)
 */

void __fastcall PspJobIoRateVolumeEntryInsert(__int64 a1, unsigned __int64 a2)
{
  KIRQL v4; // al
  unsigned __int64 v5; // r12
  unsigned __int64 v6; // rbx
  bool v7; // di
  KIRQL v8; // r13
  int v9; // ebp
  unsigned __int64 v10; // rax

  v4 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 1688));
  v5 = *(_QWORD *)(a2 + 24);
  v6 = *(_QWORD *)(a1 + 1696);
  v7 = 0;
  v8 = v4;
  if ( (*(_BYTE *)(a1 + 1704) & 1) != 0 && v6 )
    v6 ^= a1 + 1696;
  v9 = *(_BYTE *)(a1 + 1704) & 1;
  if ( v6 )
  {
    while ( 1 )
    {
      if ( (int)PspIoRateEntryVolumeCompare(v5, v6) < 0 )
      {
        v10 = *(_QWORD *)v6;
        if ( v9 )
        {
          if ( !v10 )
            break;
          v10 ^= v6;
        }
        if ( !v10 )
          break;
      }
      else
      {
        v10 = *(_QWORD *)(v6 + 8);
        if ( v9 )
        {
          if ( !v10 )
            goto LABEL_10;
          v10 ^= v6;
        }
        if ( !v10 )
        {
LABEL_10:
          v7 = 1;
          break;
        }
      }
      v6 = v10;
    }
  }
  RtlRbInsertNodeEx((__int64 *)(a1 + 1696), v6, v7, a2);
  ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 1688), v8);
}
