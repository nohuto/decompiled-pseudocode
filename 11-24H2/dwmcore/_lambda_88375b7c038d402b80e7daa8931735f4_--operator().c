/*
 * XREFs of _lambda_88375b7c038d402b80e7daa8931735f4_::operator() @ 0x1801693CC
 * Callers:
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180083CD0 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?IsFacingUser@CMILMatrix@@QEBA_NXZ @ 0x18016A364 (-IsFacingUser@CMILMatrix@@QEBA_NXZ.c)
 */

bool __fastcall lambda_88375b7c038d402b80e7daa8931735f4_::operator()(CMILMatrix **a1, char *a2)
{
  char v2; // al

  v2 = *a2;
  if ( !*a2 )
  {
    v2 = 2 * CMILMatrix::IsFacingUser(*a1) - 1;
    *a2 = v2;
  }
  return v2 == 1;
}
