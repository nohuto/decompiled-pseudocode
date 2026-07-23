/*
 * XREFs of MiPreventControlAreaDeletion @ 0x140302F10
 * Callers:
 *     MiTrimSharedPage @ 0x14025A33C (MiTrimSharedPage.c)
 *     MiLocateSharedPageViews @ 0x14067A2C0 (MiLocateSharedPageViews.c)
 *     MiPurgeBadFileOnlyPages @ 0x14067CB6C (MiPurgeBadFileOnlyPages.c)
 * Callees:
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x1402E6E94 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     MiRemoveUnusedSegment @ 0x14030303C (MiRemoveUnusedSegment.c)
 *     MiReferenceSubsection @ 0x140338AB0 (MiReferenceSubsection.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140338DA0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403394D0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 */

__int64 __fastcall MiPreventControlAreaDeletion(__int64 a1, ULONG_PTR *a2, _QWORD *a3)
{
  __int64 v3; // rax
  __int64 v4; // rbx
  ULONG_PTR v7; // rbx
  __int64 v8; // rdi
  int v9; // ecx
  __int64 *v10; // rcx
  __int64 *v12; // rdx
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  v3 = qword_140E2DCC0;
  v4 = *(_QWORD *)(a1 + 16);
  *a3 = 0LL;
  *a2 = 0LL;
  if ( v3 && (v4 & 0x10) == 0 )
    v4 &= ~v3;
  v7 = v4 >> 16;
  if ( (*(_DWORD *)(v7 + 32) & 0x20000) != 0 )
    return 0LL;
  v8 = *(_QWORD *)v7;
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(*(_QWORD *)v7 + 72LL));
  v9 = *(_DWORD *)(v8 + 56);
  if ( v9 & 1 | ((v9 & 2) != 0) )
    goto LABEL_16;
  if ( (v9 & 0x20) == 0 )
  {
    if ( (*(_DWORD *)(v7 + 32) & 0x10000) == 0 && *(_QWORD *)(v7 + 8) && !*(_DWORD *)(v7 + 108) )
    {
      MiReferenceSubsection(v7);
      *a2 = v7;
      goto LABEL_11;
    }
LABEL_16:
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v8 + 72));
    return 0LL;
  }
LABEL_11:
  v10 = *(__int64 **)(v8 + 80);
  if ( v10 )
  {
    do
    {
      v12 = (__int64 *)*v10;
      if ( (v10[1] & 4) != 0 )
        *((_DWORD *)v10 + 3) = 1;
      v10 = v12;
    }
    while ( v12 );
  }
  ++*(_DWORD *)(v8 + 76);
  *a3 = 0LL;
  MiRemoveUnusedSegment(v8);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
    *(_DWORD *)(v8 + 72) = 0;
  else
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented((_DWORD *)(v8 + 72), retaddr);
  return v8;
}
