/*
 * XREFs of KiAcquirePrcbLocksForPreemptionAttemptSlowPath @ 0x1402A6534
 * Callers:
 *     KiAcquirePrcbLocksForPreemptionAttempt @ 0x1402A2C70 (KiAcquirePrcbLocksForPreemptionAttempt.c)
 *     KiSelectCandidateProcessor @ 0x1402A2F00 (KiSelectCandidateProcessor.c)
 *     KiPopulateTrivialProcessorSelectionResult @ 0x1402A3180 (KiPopulateTrivialProcessorSelectionResult.c)
 *     KiHeteroSelectProcessorToPreempt @ 0x1402A45C0 (KiHeteroSelectProcessorToPreempt.c)
 *     KiEnterLongDpcProcessing @ 0x1402A7594 (KiEnterLongDpcProcessing.c)
 * Callees:
 *     KiAcquirePrcbLocksForIsolationUnit @ 0x1402A2D90 (KiAcquirePrcbLocksForIsolationUnit.c)
 *     KiReleasePrcbLocksForIsolationUnit @ 0x140318810 (KiReleasePrcbLocksForIsolationUnit.c)
 *     KiDowngradeIsolationUnitLockHandle @ 0x1403D78B0 (KiDowngradeIsolationUnitLockHandle.c)
 *     KiTryUpgradeIsolationUnitLockHandle @ 0x1405AE300 (KiTryUpgradeIsolationUnitLockHandle.c)
 */

__int64 __fastcall KiAcquirePrcbLocksForPreemptionAttemptSlowPath(__int64 a1, int a2, unsigned __int64 *a3)
{
  int i; // r9d
  unsigned int v7; // edi
  unsigned __int8 v8; // bl
  __int64 result; // rax

  for ( i = *(_DWORD *)a3 & 1; ; i = v7 )
  {
    v7 = a2;
    v8 = **(_BYTE **)(a1 + 56);
    result = v8 >> 7;
    if ( a2 < (int)result )
      v7 = v8 >> 7;
    if ( v7 == i )
      break;
    if ( (int)v7 < i )
      return KiDowngradeIsolationUnitLockHandle(a3, v7);
    result = KiTryUpgradeIsolationUnitLockHandle(a3, v7);
    if ( (_BYTE)result )
      return result;
    KiReleasePrcbLocksForIsolationUnit(a3);
    KiAcquirePrcbLocksForIsolationUnit(a1, v7, a3);
    result = *(_QWORD *)(a1 + 56);
    if ( ((*(_BYTE *)result ^ v8) & 0x80u) == 0 )
      return result;
  }
  return result;
}
