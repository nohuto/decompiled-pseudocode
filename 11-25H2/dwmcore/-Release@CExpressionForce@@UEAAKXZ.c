/*
 * XREFs of ?Release@CExpressionForce@@UEAAKXZ @ 0x180237360
 * Callers:
 *     ?Release@CExpressionForce@@WBA@EAAKXZ @ 0x1802B95D0 (-Release@CExpressionForce@@WBA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CExpressionForce::Release(__int64 this)
{
  return CMILRefCountBaseT<IAccelerator,CMilObjectDeleter>::InternalRelease(this);
}
