/*
 * XREFs of wistd::__function::__func__lambda_9780493e976c2d083521351cc76993ec__void___cdecl(unsigned_long_const_&)_::operator() @ 0x1800679F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall wistd::__function::__func__lambda_9780493e976c2d083521351cc76993ec__void___cdecl_unsigned_long_const____::operator()(
        __int64 a1,
        _DWORD *a2)
{
  TouchGestureSettings *v2; // rcx

  v2 = *(TouchGestureSettings **)(a1 + 8);
  if ( *a2 == 1 )
    TouchGestureSettings::DisableTouchGestures(v2);
  else
    TouchGestureSettings::EnableTouchGestures(v2);
}
