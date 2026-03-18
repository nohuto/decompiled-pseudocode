/*
 * XREFs of ExprOp1 @ 0x14002E650
 * Callers:
 *     <none>
 * Callees:
 *     IsCompatableDSDTRevision @ 0x140008AC0 (IsCompatableDSDTRevision.c)
 *     ExprOp1_32 @ 0x14002DB10 (ExprOp1_32.c)
 *     ExprOp1_64 @ 0x14002E690 (ExprOp1_64.c)
 */

__int64 __fastcall ExprOp1(__int64 a1, _QWORD *a2)
{
  if ( IsCompatableDSDTRevision() )
    return ExprOp1_64(a1, a2);
  else
    return ExprOp1_32(a1, a2);
}
