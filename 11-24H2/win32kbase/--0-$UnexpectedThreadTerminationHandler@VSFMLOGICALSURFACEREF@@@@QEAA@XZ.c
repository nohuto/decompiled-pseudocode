/*
 * XREFs of ??0?$UnexpectedThreadTerminationHandler@VSFMLOGICALSURFACEREF@@@@QEAA@XZ @ 0x1401C30D0
 * Callers:
 *     bMigrateSurfaceForConversion @ 0x1400848F4 (bMigrateSurfaceForConversion.c)
 * Callees:
 *     PushThreadGuardedObject @ 0x140068920 (PushThreadGuardedObject.c)
 */

__int64 __fastcall UnexpectedThreadTerminationHandler<SFMLOGICALSURFACEREF>::UnexpectedThreadTerminationHandler<SFMLOGICALSURFACEREF>(
        __int64 a1)
{
  *(_OWORD *)a1 = 0LL;
  *(_OWORD *)(a1 + 16) = 0LL;
  PushThreadGuardedObject(
    (_QWORD *)a1,
    a1,
    (__int64)UnexpectedThreadTerminationHandler<SFMLOGICALSURFACEREF>::OnUnexpectedThreadTerminationStatic);
  return a1;
}
