/*
 * XREFs of MiProcessDeleteOnClose @ 0x140666ACC
 * Callers:
 *     MiSegmentDereferenceWorker @ 0x140459230 (MiSegmentDereferenceWorker.c)
 * Callees:
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x140217CD0 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x1402BEA90 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14031F890 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiReleaseSpinLockExclusive @ 0x140329B80 (MiReleaseSpinLockExclusive.c)
 *     MiDestroySection @ 0x140419264 (MiDestroySection.c)
 *     MiUnlinkUnusedControlArea @ 0x140419C98 (MiUnlinkUnusedControlArea.c)
 *     MiDeleteDeleteOnCloseSubsections @ 0x1406666B8 (MiDeleteDeleteOnCloseSubsections.c)
 *     MiMoveUnusedSubsectionsToDeleteOnClose @ 0x1406668FC (MiMoveUnusedSubsectionsToDeleteOnClose.c)
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
    if ( (unsigned int)ExTryAcquireSpinLockExclusiveAtDpcLevel() )
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
