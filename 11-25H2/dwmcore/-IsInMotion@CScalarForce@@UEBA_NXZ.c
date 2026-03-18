/*
 * XREFs of ?IsInMotion@CScalarForce@@UEBA_NXZ @ 0x180230E90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CScalarForce::IsInMotion(CScalarForce *this)
{
  return CScalarForceEvaluator::IsInMotion((CScalarForce *)((char *)this + 16));
}
