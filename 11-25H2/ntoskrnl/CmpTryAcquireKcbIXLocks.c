/*
 * XREFs of CmpTryAcquireKcbIXLocks @ 0x140865768
 * Callers:
 *     CmpSaveBootControlSet @ 0x1407BCF4C (CmpSaveBootControlSet.c)
 *     CmRestoreKey @ 0x1407BD70C (CmRestoreKey.c)
 *     CmRenameKey @ 0x1407C98A4 (CmRenameKey.c)
 *     CmpPrepareForSubtreeInvalidationWorker @ 0x1407CB9D0 (CmpPrepareForSubtreeInvalidationWorker.c)
 *     CmSetLastWriteTimeKey @ 0x1408639C0 (CmSetLastWriteTimeKey.c)
 *     CmSetKeyFlags @ 0x1408640B0 (CmSetKeyFlags.c)
 *     CmpPerformUnloadKey @ 0x140864C24 (CmpPerformUnloadKey.c)
 * Callees:
 *     CmpTryAcquireIXLockWithRollbackPacket @ 0x140863E20 (CmpTryAcquireIXLockWithRollbackPacket.c)
 */

__int64 __fastcall CmpTryAcquireKcbIXLocks(__int64 a1, char a2, __int64 a3, unsigned int *a4)
{
  int v6; // esi
  int v7; // ecx
  __int64 result; // rax

  v6 = CmpTryAcquireIXLockWithRollbackPacket((unsigned int *)(a1 + 248), a2, a4);
  v7 = CmpTryAcquireIXLockWithRollbackPacket((unsigned int *)(a1 + 264), 1, a4);
  result = 3221226029LL;
  if ( v6 >= 0 )
  {
    if ( v7 >= 0 )
      return 0LL;
    goto LABEL_6;
  }
  if ( v6 != -1073741267 )
    return (unsigned int)v6;
  if ( v7 < 0 )
  {
LABEL_6:
    if ( v7 != -1073741267 )
      return (unsigned int)v7;
  }
  return result;
}
