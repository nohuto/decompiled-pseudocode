/*
 * XREFs of PsInsertPermanentSiloContextEx @ 0x1409DBE54
 * Callers:
 *     ObCreateSiloRootDirectory @ 0x14082B404 (ObCreateSiloRootDirectory.c)
 *     PsInsertPermanentSiloContext @ 0x1409DBA40 (PsInsertPermanentSiloContext.c)
 *     CmpAttachContextToSilo @ 0x1409DBE28 (CmpAttachContextToSilo.c)
 * Callees:
 *     PspJobHasChildren @ 0x1406F9694 (PspJobHasChildren.c)
 *     PspUnlockJob @ 0x14085EB90 (PspUnlockJob.c)
 *     PspLockJobShared @ 0x14085EE04 (PspLockJobShared.c)
 *     PspIsSiloContext @ 0x1409DBF38 (PspIsSiloContext.c)
 *     PspStorageInsertObject @ 0x1409DC050 (PspStorageInsertObject.c)
 */

__int64 __fastcall PsInsertPermanentSiloContextEx(__int64 a1, unsigned int a2, __int64 a3, int a4)
{
  __int64 v7; // rbp
  __int64 v8; // r8
  char v9; // r9
  struct _KTHREAD *CurrentThread; // rdi
  unsigned int inserted; // esi
  _QWORD *v13; // rax

  if ( (a4 & 0xFFFFFFFE) != 0 )
    return 3221225485LL;
  v7 = qword_140FCFE30;
  if ( a1 )
    v7 = *(_QWORD *)(a1 + 1536);
  if ( (unsigned __int8)PspIsSiloContext(a3) )
  {
    v13 = (*(_BYTE *)(v8 - 48 + 26) & 0x40) != 0
        ? (_QWORD *)(*(_QWORD *)(v8 - 48 - ObpInfoMaskToOffset[*(_BYTE *)(v8 - 48 + 26) & 0x7F]) + 32LL)
        : 0LL;
    if ( *v13 != a1 )
      return 3221225485LL;
  }
  if ( (v9 & 1) != 0 )
  {
    if ( !a1 )
      return 3221225520LL;
    CurrentThread = KeGetCurrentThread();
    PspLockJobShared(a1, (__int64)CurrentThread);
    if ( PspJobHasChildren(a1) )
    {
      inserted = -1073740529;
      goto LABEL_8;
    }
  }
  else
  {
    CurrentThread = 0LL;
  }
  LOBYTE(v8) = 1;
  inserted = PspStorageInsertObject(v7, a2, v8, a3);
LABEL_8:
  if ( CurrentThread )
    PspUnlockJob(a1, (__int64)CurrentThread);
  return inserted;
}
