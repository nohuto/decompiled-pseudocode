/*
 * XREFs of CmpTryAcquireKcbIXLocks @ 0x14096360C
 * Callers:
 *     CmpSaveBootControlSet @ 0x1407CCC54 (CmpSaveBootControlSet.c)
 *     CmRestoreKey @ 0x1407CD414 (CmRestoreKey.c)
 *     CmRenameKey @ 0x1407D95B8 (CmRenameKey.c)
 *     CmpPrepareForSubtreeInvalidationWorker @ 0x1407DB6E0 (CmpPrepareForSubtreeInvalidationWorker.c)
 *     CmSetLastWriteTimeKey @ 0x140962C40 (CmSetLastWriteTimeKey.c)
 *     CmSetKeyFlags @ 0x140963680 (CmSetKeyFlags.c)
 *     CmpPerformUnloadKey @ 0x140963D3C (CmpPerformUnloadKey.c)
 * Callees:
 *     CmpTryAcquireIXLockWithRollbackPacket @ 0x1409633CC (CmpTryAcquireIXLockWithRollbackPacket.c)
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
