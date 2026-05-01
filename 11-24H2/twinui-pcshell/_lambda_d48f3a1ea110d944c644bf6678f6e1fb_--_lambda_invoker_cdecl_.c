/*
 * XREFs of _lambda_d48f3a1ea110d944c644bf6678f6e1fb_::_lambda_invoker_cdecl_ @ 0x18020B040
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall lambda_d48f3a1ea110d944c644bf6678f6e1fb_::_lambda_invoker_cdecl_(HWND a1, __int64 a2)
{
  if ( !IsHungAppWindow(a1) && GetPropW(a1, *(LPCWSTR *)(a2 + 16)) )
  {
    if ( *(_QWORD *)a2 )
      *(_BYTE *)(a2 + 8) = 1;
    *(_QWORD *)a2 = a1;
  }
  return 1LL;
}
