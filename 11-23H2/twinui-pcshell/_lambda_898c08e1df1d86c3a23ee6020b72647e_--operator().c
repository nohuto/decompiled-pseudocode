/*
 * XREFs of _lambda_898c08e1df1d86c3a23ee6020b72647e_::operator() @ 0x1803BA9A0
 * Callers:
 *     _lambda_898c08e1df1d86c3a23ee6020b72647e_::_lambda_invoker_cdecl_ @ 0x1803BA900 (_lambda_898c08e1df1d86c3a23ee6020b72647e_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall lambda_898c08e1df1d86c3a23ee6020b72647e_::operator()(__int64 a1, HWND a2, HWND *a3)
{
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF
  int pvAttribute; // [rsp+40h] [rbp+18h] BYREF

  v6 = a1;
  if ( (unsigned int)GetWindowBand(a2, &v6) )
  {
    if ( (_DWORD)v6 == 1
      || (_DWORD)v6 == 5
      || (_DWORD)v6 == 8
      || (_DWORD)v6 == 9
      || (_DWORD)v6 == 10
      || (unsigned int)(v6 - 11) < 2 )
    {
      return 0LL;
    }
    if ( (_DWORD)v6 == 13
      && GetPropW(a2, L"ConsiderByRealmActivationHistory") == HANDLE_FLAG_INHERIT
      && IsWindowVisible(a2)
      && DwmGetWindowAttribute(a2, 0xEu, &pvAttribute, 4u) >= 0
      && !pvAttribute )
    {
      *a3 = a2;
      return 0LL;
    }
  }
  return 1LL;
}
