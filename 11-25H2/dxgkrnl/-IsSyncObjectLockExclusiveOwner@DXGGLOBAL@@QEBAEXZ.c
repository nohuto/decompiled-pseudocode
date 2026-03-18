/*
 * XREFs of ?IsSyncObjectLockExclusiveOwner@DXGGLOBAL@@QEBAEXZ @ 0x14004392C
 * Callers:
 *     ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z @ 0x14033DBDC (-DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall DXGGLOBAL::IsSyncObjectLockExclusiveOwner(PERESOURCE *this)
{
  return ExIsResourceAcquiredExclusiveLite(this[75]) != 0;
}
