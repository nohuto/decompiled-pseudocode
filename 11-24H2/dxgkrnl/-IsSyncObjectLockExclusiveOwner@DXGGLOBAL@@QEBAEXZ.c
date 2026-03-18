/*
 * XREFs of ?IsSyncObjectLockExclusiveOwner@DXGGLOBAL@@QEBAEXZ @ 0x14004360C
 * Callers:
 *     ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I_N@Z @ 0x1401F41B4 (-DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I_N@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall DXGGLOBAL::IsSyncObjectLockExclusiveOwner(PERESOURCE *this)
{
  return ExIsResourceAcquiredExclusiveLite(this[75]) != 0;
}
