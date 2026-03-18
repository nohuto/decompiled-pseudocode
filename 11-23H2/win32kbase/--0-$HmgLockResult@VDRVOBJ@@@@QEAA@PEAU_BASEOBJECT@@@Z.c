/*
 * XREFs of ??0?$HmgLockResult@VDRVOBJ@@@@QEAA@PEAU_BASEOBJECT@@@Z @ 0x1C00D2DC0
 * Callers:
 *     EngDeleteDriverObj @ 0x1C016B160 (EngDeleteDriverObj.c)
 *     EngLockDriverObj @ 0x1C016B280 (EngLockDriverObj.c)
 *     EngUnlockDriverObj @ 0x1C016B2E0 (EngUnlockDriverObj.c)
 * Callees:
 *     PushThreadGuardedObject @ 0x1C0049F70 (PushThreadGuardedObject.c)
 */

__int64 __fastcall HmgLockResult<DRVOBJ>::HmgLockResult<DRVOBJ>(__int64 a1, __int64 a2)
{
  *(_QWORD *)a1 = a2;
  *(_OWORD *)(a1 + 8) = 0LL;
  *(_OWORD *)(a1 + 24) = 0LL;
  PushThreadGuardedObject(
    (_QWORD *)(a1 + 8),
    a1 & ((unsigned __int128)-(__int128)(unsigned __int64)(a1 + 8) >> 64),
    (__int64)UnexpectedThreadTerminationHandler<HmgLockResult<DRVOBJ>>::OnUnexpectedThreadTerminationStatic);
  return a1;
}
