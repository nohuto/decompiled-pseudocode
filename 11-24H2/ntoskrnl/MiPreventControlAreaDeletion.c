/*
 * XREFs of MiPreventControlAreaDeletion @ 0x14022F600
 * Callers:
 *     MiTrimSharedPage @ 0x140370B4C (MiTrimSharedPage.c)
 *     MiLocateSharedPageViews @ 0x1406790E0 (MiLocateSharedPageViews.c)
 *     MiPurgeBadFileOnlyPages @ 0x14067B98C (MiPurgeBadFileOnlyPages.c)
 * Callees:
 *     MiReferenceSubsection @ 0x14020F750 (MiReferenceSubsection.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14020FA40 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140210170 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiRemoveUnusedSegment @ 0x14022F72C (MiRemoveUnusedSegment.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140379F24 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

__int64 __fastcall MiPreventControlAreaDeletion(__int64 a1, __int64 *a2, _QWORD *a3)
{
  __int64 v3; // rax
  __int64 v4; // rbx
  __int64 v7; // rbx
  __int64 v8; // rdi
  int v9; // ecx
  __int64 *v10; // rcx
  __int64 *v12; // rdx
  void *retaddr; // [rsp+38h] [rbp+0h]

  v3 = qword_140E2DB80;
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
      MiReferenceSubsection((__int64 *)v7, 0);
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
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v8 + 72, retaddr);
  return v8;
}
