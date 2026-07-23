/*
 * XREFs of MiReleaseControlAreaCharges @ 0x140432B78
 * Callers:
 *     MiInsertUnusedSegment @ 0x140432A98 (MiInsertUnusedSegment.c)
 *     MiSegmentDelete @ 0x140A0B944 (MiSegmentDelete.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140338DA0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiComputeCrossPartitionSectionCharges @ 0x1404C8FF8 (MiComputeCrossPartitionSectionCharges.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiReleaseControlAreaCharges(__int64 a1, int a2)
{
  __int64 v3; // rcx
  int v5; // eax
  int v6; // ebp
  __int64 v7; // r14
  KIRQL v8; // si
  char v9; // al
  __int64 v10; // rdx
  __int64 v11; // r8
  int v12; // r9d

  v3 = *(_QWORD *)(a1 + 64);
  if ( !v3 && !_bittest((const signed __int32 *)(a1 + 56), 0xAu) && (*(_DWORD *)(a1 + 92) & 0x20000) != 0 )
    return 0LL;
  v5 = *(_DWORD *)(a1 + 56);
  v6 = 1;
  if ( (v5 & 0x20) == 0 )
  {
    if ( (v5 & 0x400) != 0 || a1 == qword_140E2D848 || v3 )
      return 0LL;
    while ( !(_DWORD)v3 )
    {
      if ( a1 == unk_140E2D7E0 )
        return 0LL;
      LODWORD(v3) = 1;
    }
  }
  v7 = 0LL;
  if ( a2 )
    v8 = 17;
  else
    v8 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
  v9 = *(_BYTE *)(a1 + 62);
  if ( (v9 & 2) != 0 )
  {
    *(_BYTE *)(a1 + 62) = v9 & 0xFD;
    if ( (*(_DWORD *)(a1 + 56) & 0x20) == 0 && *(_QWORD *)(a1 + 64) )
      v6 = 0;
    v11 = a1 + 128;
    if ( a1 != -128 )
    {
      v12 = 0x3FFFFFFF;
      while ( 1 )
      {
        if ( (*(_DWORD *)(v11 + 32) & 0x10000) != 0 )
          goto LABEL_30;
        if ( (v12 & *(_DWORD *)(v11 + 48)) == v12 || v6 )
          break;
LABEL_31:
        v11 = *(_QWORD *)(v11 + 16);
        if ( !v11 )
          goto LABEL_15;
      }
      v7 += MiComputeCrossPartitionSectionCharges(v11);
LABEL_30:
      if ( v6 )
        goto LABEL_15;
      goto LABEL_31;
    }
  }
LABEL_15:
  if ( v8 != 17 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 72));
    if ( KiIrqlFlags )
    {
      LOBYTE(v10) = v8;
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v10);
    }
    __writecr8(v8);
  }
  return v7;
}
