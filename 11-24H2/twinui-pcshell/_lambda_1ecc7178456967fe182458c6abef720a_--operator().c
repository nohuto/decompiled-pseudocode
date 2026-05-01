/*
 * XREFs of _lambda_1ecc7178456967fe182458c6abef720a_::operator() @ 0x180202658
 * Callers:
 *     _lambda_1ecc7178456967fe182458c6abef720a_::_lambda_invoker_cdecl_ @ 0x1805867B0 (_lambda_1ecc7178456967fe182458c6abef720a_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 */

__int64 __fastcall lambda_1ecc7178456967fe182458c6abef720a_::operator()(__int64 a1, HWND a2, HWND *a3)
{
  unsigned int v5; // ebx
  struct tagRECT Rect; // [rsp+20h] [rbp-28h] BYREF

  if ( (GetWindowLongPtrW(a2, -20) & 8) != 0 )
  {
    Rect = 0LL;
    v5 = 1;
    if ( IsWindowVisible(a2) && GetWindowRect(a2, &Rect) && !IsRectEmpty(&Rect) )
      *a3 = a2;
  }
  else
  {
    return 0;
  }
  return v5;
}
