/*
 * XREFs of ?OnUnexpectedThreadTerminationStatic@?$UnexpectedThreadTerminationHandler@VDCOBJ@@@@SAXPEAX@Z @ 0x1401C31A0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportOverflow@OBJECT@@QEAAXK@Z @ 0x1401C1EE0 (-ReportOverflow@OBJECT@@QEAAXK@Z.c)
 */

void __fastcall UnexpectedThreadTerminationHandler<DCOBJ>::OnUnexpectedThreadTerminationStatic(OBJECT **a1)
{
  OBJECT *v2; // rcx

  v2 = *a1;
  if ( v2 )
  {
    if ( --*((_WORD *)v2 + 6) == 0xFFFF )
      OBJECT::ReportOverflow(v2, 4);
    *a1 = 0LL;
  }
}
