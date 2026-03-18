/*
 * XREFs of ?OnUnexpectedThreadTerminationStatic@?$UnexpectedThreadTerminationHandler@VXEPALOBJ2@@@@SAXPEAX@Z @ 0x1401C2540
 * Callers:
 *     ??1?$HmgShareLockResult@VSURFACE@@@@QEAA@XZ @ 0x1401C3104 (--1-$HmgShareLockResult@VSURFACE@@@@QEAA@XZ.c)
 *     ?OnUnexpectedThreadTerminationStatic@?$UnexpectedThreadTerminationHandler@V?$HmgShareLockResult@VSURFACE@@@@@@SAXPEAX@Z @ 0x1401C3160 (-OnUnexpectedThreadTerminationStatic@-$UnexpectedThreadTerminationHandler@V-$HmgShareLockResult@.c)
 * Callees:
 *     HmgDecrementShareReferenceCountEx @ 0x1400358E0 (HmgDecrementShareReferenceCountEx.c)
 */

unsigned int __fastcall UnexpectedThreadTerminationHandler<XEPALOBJ2>::OnUnexpectedThreadTerminationStatic(
        struct _BASEOBJECT **a1)
{
  struct _BASEOBJECT *v2; // rcx
  unsigned int result; // eax

  v2 = *a1;
  if ( v2 )
  {
    result = HmgDecrementShareReferenceCountEx(v2, 0LL);
    *a1 = 0LL;
  }
  return result;
}
