/*
 * XREFs of _lambda_2b89108f8e380a56e0b1b303a75ceab9_::_lambda_invoker_cdecl_ @ 0x1402DC850
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_2b89108f8e380a56e0b1b303a75ceab9_::operator() @ 0x140149520 (_lambda_2b89108f8e380a56e0b1b303a75ceab9_--operator().c)
 */

bool __fastcall lambda_2b89108f8e380a56e0b1b303a75ceab9_::_lambda_invoker_cdecl_(__int64 a1, __int64 a2)
{
  int v2; // r8d

  v2 = a2;
  LOBYTE(a2) = a1;
  return lambda_2b89108f8e380a56e0b1b303a75ceab9_::operator()(a1, a2, v2);
}
