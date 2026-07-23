/*
 * XREFs of CmpTryAcquireIXLockWithRollbackPacket @ 0x1409633CC
 * Callers:
 *     CmpTryAcquireKcbIXLocks @ 0x14096360C (CmpTryAcquireKcbIXLocks.c)
 * Callees:
 *     CmpSnapshotTxOwnerArrayToRollbackPacket @ 0x1407E0898 (CmpSnapshotTxOwnerArrayToRollbackPacket.c)
 */

__int64 __fastcall CmpTryAcquireIXLockWithRollbackPacket(unsigned int *a1, char a2, unsigned int *a3)
{
  int v3; // eax
  unsigned int v4; // ebx
  int v6; // eax

  v3 = *a1;
  v4 = 0;
  if ( a2 )
  {
    if ( !v3 )
      return v4;
  }
  else if ( v3 >= 0 )
  {
    return v4;
  }
  if ( a3 )
  {
    v6 = CmpSnapshotTxOwnerArrayToRollbackPacket(a1, a3);
    if ( v6 >= 0 )
      return (unsigned int)-1073741267;
    return (unsigned int)v6;
  }
  else
  {
    return (unsigned int)-1072103423;
  }
}
