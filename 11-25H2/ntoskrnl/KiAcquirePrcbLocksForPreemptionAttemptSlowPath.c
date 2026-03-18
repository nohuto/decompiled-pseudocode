/*
 * XREFs of KiAcquirePrcbLocksForPreemptionAttemptSlowPath @ 0x1403312E4
 * Callers:
 *     KiEnterLongDpcProcessing @ 0x140314FA4 (KiEnterLongDpcProcessing.c)
 *     KiAcquirePrcbLocksForPreemptionAttempt @ 0x14032DDB0 (KiAcquirePrcbLocksForPreemptionAttempt.c)
 *     KiSelectCandidateProcessor @ 0x14032DF70 (KiSelectCandidateProcessor.c)
 *     KiPopulateTrivialProcessorSelectionResult @ 0x14032E204 (KiPopulateTrivialProcessorSelectionResult.c)
 *     KiHeteroSelectProcessorToPreempt @ 0x140330300 (KiHeteroSelectProcessorToPreempt.c)
 * Callees:
 *     KiReleasePrcbLocksForIsolationUnit @ 0x1402780C0 (KiReleasePrcbLocksForIsolationUnit.c)
 *     KiAcquirePrcbLocksForIsolationUnit @ 0x14032DCE0 (KiAcquirePrcbLocksForIsolationUnit.c)
 *     KiDowngradeIsolationUnitLockHandle @ 0x1403E05A0 (KiDowngradeIsolationUnitLockHandle.c)
 *     KiTryUpgradeIsolationUnitLockHandle @ 0x1405ADA00 (KiTryUpgradeIsolationUnitLockHandle.c)
 */

__int64 __fastcall KiAcquirePrcbLocksForPreemptionAttemptSlowPath(__int64 a1, int a2, __int64 *a3)
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
    KiAcquirePrcbLocksForIsolationUnit(a1, v7, (unsigned __int64 *)a3);
    result = *(_QWORD *)(a1 + 56);
    if ( ((*(_BYTE *)result ^ v8) & 0x80u) == 0 )
      return result;
  }
  return result;
}
