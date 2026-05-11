/*
 * XREFs of _scope_exit__lambda_52b1e18fcf8da1273d068c7b8458e5b2____::_2_::scope_exit::_scope_exit @ 0x14001437C
 * Callers:
 *     ?StreamStart@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1400182C4 (-StreamStart@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall scope_exit__lambda_52b1e18fcf8da1273d068c7b8458e5b2____::_2_::scope_exit::_scope_exit(__int64 a1)
{
  if ( *(_BYTE *)(a1 + 8) )
    KsReleaseControl(**(PVOID **)a1);
}
