/*
 * XREFs of MiProcessDeleteOnClose @ 0x14067374C
 * Callers:
 *     MiSegmentDereferenceWorker @ 0x1403EDB20 (MiSegmentDereferenceWorker.c)
 * Callees:
 *     MiDestroySection @ 0x140270330 (MiDestroySection.c)
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x140302160 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140338DA0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiUnlinkUnusedControlArea @ 0x140432D38 (MiUnlinkUnusedControlArea.c)
 *     MiDeleteDeleteOnCloseSubsections @ 0x140673338 (MiDeleteDeleteOnCloseSubsections.c)
 *     MiMoveUnusedSubsectionsToDeleteOnClose @ 0x14067357C (MiMoveUnusedSubsectionsToDeleteOnClose.c)
 */

__int64 __fastcall MiProcessDeleteOnClose(__int64 a1, __int64 a2)
{
  unsigned int v3; // r14d
  KIRQL v4; // al
  _QWORD **v5; // r13
  _QWORD *v6; // rdi
  _QWORD *v7; // rbx
  unsigned int v8; // eax
  KIRQL v9; // bp
  unsigned int i; // [rsp+60h] [rbp+8h]

  v3 = 0;
  MiDeleteDeleteOnCloseSubsections(a1, a2);
  v4 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 1728));
  v5 = (_QWORD **)(a1 + 1976);
LABEL_12:
  v7 = *v5;
  v9 = v4;
  v8 = *(_DWORD *)(a1 + 1732);
  for ( i = v8; v7 != v5; v8 = i )
  {
    ++v3;
    v6 = v7 - 1;
    if ( v3 > v8 )
      break;
    if ( (unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel((volatile signed __int32 *)v6 + 18) )
    {
      if ( (v6[7] & 0x20) != 0 || !v6[4] )
      {
        MiUnlinkUnusedControlArea((__int64)(v7 - 1));
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 1728));
        MiDestroySection((__int64)(v7 - 1), v9);
        goto LABEL_11;
      }
      if ( (unsigned int)MiMoveUnusedSubsectionsToDeleteOnClose(a1, (__int64)(v7 - 1)) )
      {
        ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 1728));
        MiReleaseSpinLockExclusive((_DWORD *)v6 + 18, v9);
        MiDeleteDeleteOnCloseSubsections(a1, a2);
LABEL_11:
        v3 = 0;
        v4 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 1728));
        goto LABEL_12;
      }
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)v6 + 18);
    }
    v7 = (_QWORD *)*v7;
  }
  return MiReleaseSpinLockExclusive((_DWORD *)(a1 + 1728), v9);
}
