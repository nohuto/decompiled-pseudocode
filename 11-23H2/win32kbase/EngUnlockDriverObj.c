/*
 * XREFs of EngUnlockDriverObj @ 0x1C016B2E0
 * Callers:
 *     <none>
 * Callees:
 *     HmgLock @ 0x1C0042980 (HmgLock.c)
 *     ??0?$HmgLockResult@VDRVOBJ@@@@QEAA@PEAU_BASEOBJECT@@@Z @ 0x1C00D2DC0 (--0-$HmgLockResult@VDRVOBJ@@@@QEAA@PEAU_BASEOBJECT@@@Z.c)
 *     ??1?$HmgLockResult@VDRVOBJ@@@@QEAA@XZ @ 0x1C00D2E04 (--1-$HmgLockResult@VDRVOBJ@@@@QEAA@XZ.c)
 */

BOOL __stdcall EngUnlockDriverObj(HDRVOBJ hdo)
{
  __int64 v1; // rax
  BOOL v2; // ebx
  _QWORD v4[7]; // [rsp+20h] [rbp-38h] BYREF

  v1 = HmgLock((unsigned int)hdo, 28);
  HmgLockResult<DRVOBJ>::HmgLockResult<DRVOBJ>((__int64)v4, v1);
  v2 = 0;
  if ( v4[0] )
  {
    _InterlockedDecrement((volatile signed __int32 *)(v4[0] + 12LL));
    v2 = 1;
  }
  HmgLockResult<DRVOBJ>::~HmgLockResult<DRVOBJ>(v4);
  return v2;
}
