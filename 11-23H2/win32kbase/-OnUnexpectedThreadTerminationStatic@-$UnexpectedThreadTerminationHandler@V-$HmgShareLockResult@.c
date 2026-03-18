/*
 * XREFs of ?OnUnexpectedThreadTerminationStatic@?$UnexpectedThreadTerminationHandler@V?$HmgShareLockResult@VSURFACE@@@@@@SAXPEAX@Z @ 0x1C00D29A0
 * Callers:
 *     <none>
 * Callees:
 *     ?OnUnexpectedThreadTerminationStatic@?$UnexpectedThreadTerminationHandler@VXEPALOBJ2@@@@SAXPEAX@Z @ 0x1C00D24E0 (-OnUnexpectedThreadTerminationStatic@-$UnexpectedThreadTerminationHandler@VXEPALOBJ2@@@@SAXPEAX@.c)
 */

__int64 __fastcall UnexpectedThreadTerminationHandler<HmgShareLockResult<SURFACE>>::OnUnexpectedThreadTerminationStatic(
        struct OBJECT **a1)
{
  return UnexpectedThreadTerminationHandler<XEPALOBJ2>::OnUnexpectedThreadTerminationStatic(a1);
}
