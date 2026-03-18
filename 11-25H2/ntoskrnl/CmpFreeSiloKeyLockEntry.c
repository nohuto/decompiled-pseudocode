/*
 * XREFs of CmpFreeSiloKeyLockEntry @ 0x1407CE688
 * Callers:
 *     CmLockKeyForWrite @ 0x1409E3164 (CmLockKeyForWrite.c)
 *     CmpStopSiloKeyLockTracker @ 0x140A82CB8 (CmpStopSiloKeyLockTracker.c)
 * Callees:
 *     CmpFreeTransientPoolWithTag @ 0x140442030 (CmpFreeTransientPoolWithTag.c)
 *     CmpGlobalUnlockKeyForWrite @ 0x1407CE6D0 (CmpGlobalUnlockKeyForWrite.c)
 *     CmpDereferenceKeyControlBlock @ 0x140849FE0 (CmpDereferenceKeyControlBlock.c)
 */

void __fastcall CmpFreeSiloKeyLockEntry(ULONG_PTR *a1)
{
  if ( a1[3] )
    CmpGlobalUnlockKeyForWrite(a1[2]);
  CmpDereferenceKeyControlBlock(a1[2]);
  CmpFreeTransientPoolWithTag(a1, 0x34374D43u);
}
