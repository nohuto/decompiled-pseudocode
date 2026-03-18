/*
 * XREFs of MiCountCommittedPages @ 0x140492104
 * Callers:
 *     MiCopyPagesIntoEnclave @ 0x1408DA288 (MiCopyPagesIntoEnclave.c)
 *     MiLoadSectionIntoVsmEnclave @ 0x1408DA8E0 (MiLoadSectionIntoVsmEnclave.c)
 *     MiLoadDataIntoVsmEnclave @ 0x1408DABA0 (MiLoadDataIntoVsmEnclave.c)
 * Callees:
 *     MiComputePageCommitment @ 0x140238A7C (MiComputePageCommitment.c)
 *     MiLockWorkingSetShared @ 0x1402DF970 (MiLockWorkingSetShared.c)
 *     MiUnlockWorkingSetShared @ 0x1402E0410 (MiUnlockWorkingSetShared.c)
 */

__int64 __fastcall MiCountCommittedPages(unsigned __int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  char v8; // di
  __int64 v9; // rbx

  v8 = MiLockWorkingSetShared(a4);
  v9 = MiComputePageCommitment(a1, a2, a3, v8, 0, 0LL, 0LL);
  MiUnlockWorkingSetShared(a4, v8);
  return v9;
}
