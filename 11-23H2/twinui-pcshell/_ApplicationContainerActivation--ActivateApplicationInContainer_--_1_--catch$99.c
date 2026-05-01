/*
 * XREFs of _ApplicationContainerActivation::ActivateApplicationInContainer_::_1_::catch$99 @ 0x180630269
 * Callers:
 *     <none>
 * Callees:
 *     ?ResultFromCaughtException@wil@@YAJXZ @ 0x180392010 (-ResultFromCaughtException@wil@@YAJXZ.c)
 */

__int64 __fastcall ApplicationContainerActivation::ActivateApplicationInContainer_::_1_::catch_99(wil *a1, __int64 a2)
{
  *(_DWORD *)(a2 + 64) = wil::ResultFromCaughtException(a1);
  return 0LL;
}
