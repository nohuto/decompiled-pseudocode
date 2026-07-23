/*
 * XREFs of PspJobIoRateVolumeEntryRemove @ 0x1405E31AC
 * Callers:
 *     PspSetJobIoRateControlForVolume @ 0x140AB24C8 (PspSetJobIoRateControlForVolume.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusive @ 0x1402E6E40 (ExReleaseSpinLockExclusive.c)
 *     RtlRbRemoveNode @ 0x140365870 (RtlRbRemoveNode.c)
 *     PspIoRateEntryVolumeCompare @ 0x1404843F0 (PspIoRateEntryVolumeCompare.c)
 */

signed __int64 __fastcall PspJobIoRateVolumeEntryRemove(__int64 a1, unsigned __int64 a2)
{
  volatile LONG *v2; // r14
  __int64 v4; // rsi
  signed __int64 v5; // rdi
  KIRQL v6; // r15
  signed __int64 v7; // rbx
  int v8; // ebp
  int v9; // eax
  signed __int64 v10; // rax

  v2 = (volatile LONG *)(a1 + 1688);
  v4 = a1 + 1696;
  v5 = 0LL;
  v6 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 1688));
  v7 = *(_QWORD *)v4;
  if ( (*(_BYTE *)(v4 + 8) & 1) != 0 && v7 )
    v7 ^= v4;
  v8 = *(_BYTE *)(v4 + 8) & 1;
  while ( v7 )
  {
    v9 = PspIoRateEntryVolumeCompare(a2, v7);
    if ( v9 >= 0 )
    {
      if ( v9 <= 0 )
        break;
      v10 = *(_QWORD *)(v7 + 8);
    }
    else
    {
      v10 = *(_QWORD *)v7;
    }
    if ( v8 && v10 )
      v7 ^= v10;
    else
      v7 = v10;
  }
  if ( v7 )
  {
    RtlRbRemoveNode((PRTL_RB_TREE)v4, (PRTL_BALANCED_NODE)v7);
    *(_QWORD *)(v7 + 16) = -1LL;
    v5 = v7;
  }
  ExReleaseSpinLockExclusive(v2, v6);
  return v5;
}
