/*
 * XREFs of _lambda_b90ba3034bff2a6798db754b0e1f537a_::operator() @ 0x1801C1E44
 * Callers:
 *     EnumWindowsHelpers::LambdaEnumWindowsProc__lambda_b90ba3034bff2a6798db754b0e1f537a___ @ 0x1801C1E20 (EnumWindowsHelpers--LambdaEnumWindowsProc__lambda_b90ba3034bff2a6798db754b0e1f537a___.c)
 * Callees:
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ?DoesWindowOverlapPrimaryOrEmptyRegion@XamlSnapAssistViewHost@@AEAA_NPEAUHWND__@@@Z @ 0x1806A71B4 (-DoesWindowOverlapPrimaryOrEmptyRegion@XamlSnapAssistViewHost@@AEAA_NPEAUHWND__@@@Z.c)
 */

char __fastcall lambda_b90ba3034bff2a6798db754b0e1f537a_::operator()(__int64 a1, HWND a2)
{
  __int64 v4; // rcx
  __int64 i; // rax
  LONG *v6; // rcx
  LONG left; // edx
  LONG top; // r8d
  LONG right; // eax
  LONG bottom; // r9d
  int v12; // [rsp+20h] [rbp-20h] BYREF
  int pvAttribute; // [rsp+24h] [rbp-1Ch] BYREF
  struct tagRECT Rect; // [rsp+28h] [rbp-18h] BYREF

  if ( !IsWindowVisible(a2) )
    return 1;
  if ( IsIconic(a2) )
    return 1;
  v12 = 0;
  if ( (unsigned int)GetWindowBand(a2, &v12) )
  {
    if ( v12 != 1 )
      return 1;
  }
  pvAttribute = 0;
  if ( DwmGetWindowAttribute(a2, 0xEu, &pvAttribute, 4u) >= 0 )
  {
    if ( pvAttribute )
      return 1;
  }
  Rect = 0LL;
  if ( DwmGetWindowAttribute(a2, 9u, &Rect, 0x10u) < 0 )
    GetWindowRect(a2, &Rect);
  if ( Rect.right - Rect.left == 1 && Rect.bottom - Rect.top == 1 )
    return 1;
  v4 = *(_QWORD *)(*(_QWORD *)a1 + 688LL);
  for ( i = *(_QWORD *)(*(_QWORD *)a1 + 680LL); i != v4 && (*(_DWORD *)(i + 24) != 2 || *(HWND *)i != a2); i += 32LL )
    ;
  if ( i == v4 )
  {
    v6 = *(LONG **)(a1 + 8);
    left = *v6;
    top = v6[1];
    if ( Rect.left > *v6 )
      left = Rect.left;
    right = v6[2];
    if ( Rect.top > top )
      top = Rect.top;
    bottom = v6[3];
    if ( Rect.right < right )
      right = Rect.right;
    if ( Rect.bottom < bottom )
      bottom = Rect.bottom;
    if ( left >= right || top >= bottom )
      return 1;
  }
  else if ( !XamlSnapAssistViewHost::DoesWindowOverlapPrimaryOrEmptyRegion(*(XamlSnapAssistViewHost **)a1, a2) )
  {
    **(_QWORD **)(a1 + 24) = a2;
    return 1;
  }
  **(_QWORD **)(a1 + 16) = a2;
  return 0;
}
