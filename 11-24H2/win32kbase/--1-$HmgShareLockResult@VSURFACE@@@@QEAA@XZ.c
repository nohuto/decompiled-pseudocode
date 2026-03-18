/*
 * XREFs of ??1?$HmgShareLockResult@VSURFACE@@@@QEAA@XZ @ 0x1401C3104
 * Callers:
 *     bMigrateSurfaceForConversion @ 0x1400848F4 (bMigrateSurfaceForConversion.c)
 * Callees:
 *     PopThreadGuardedObject @ 0x1400260C0 (PopThreadGuardedObject.c)
 *     ?OnUnexpectedThreadTerminationStatic@?$UnexpectedThreadTerminationHandler@VXEPALOBJ2@@@@SAXPEAX@Z @ 0x1401C2540 (-OnUnexpectedThreadTerminationStatic@-$UnexpectedThreadTerminationHandler@VXEPALOBJ2@@@@SAXPEAX@.c)
 */

void __fastcall HmgShareLockResult<SURFACE>::~HmgShareLockResult<SURFACE>(__int64 a1)
{
  UnexpectedThreadTerminationHandler<XEPALOBJ2>::OnUnexpectedThreadTerminationStatic((struct _BASEOBJECT **)a1);
  PopThreadGuardedObject((_QWORD *)(a1 + 8));
}
