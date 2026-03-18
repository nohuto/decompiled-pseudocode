/*
 * XREFs of ??1?$HmgShareLockResult@VSURFACE@@@@QEAA@XZ @ 0x1C00D28D4
 * Callers:
 *     bMigrateSurfaceForConversion @ 0x1C015A180 (bMigrateSurfaceForConversion.c)
 * Callees:
 *     PopThreadGuardedObject @ 0x1C003CB00 (PopThreadGuardedObject.c)
 *     ?OnUnexpectedThreadTerminationStatic@?$UnexpectedThreadTerminationHandler@VXEPALOBJ2@@@@SAXPEAX@Z @ 0x1C00D24E0 (-OnUnexpectedThreadTerminationStatic@-$UnexpectedThreadTerminationHandler@VXEPALOBJ2@@@@SAXPEAX@.c)
 */

void __fastcall HmgShareLockResult<SURFACE>::~HmgShareLockResult<SURFACE>(__int64 a1)
{
  UnexpectedThreadTerminationHandler<XEPALOBJ2>::OnUnexpectedThreadTerminationStatic((struct OBJECT **)a1);
  PopThreadGuardedObject((_QWORD *)(a1 + 8));
}
