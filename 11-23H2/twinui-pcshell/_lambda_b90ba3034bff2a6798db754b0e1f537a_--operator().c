/*
 * XREFs of _lambda_b90ba3034bff2a6798db754b0e1f537a_::operator() @ 0x18076A8BC
 * Callers:
 *     EnumWindowsHelpers::LambdaEnumWindowsProc__lambda_b90ba3034bff2a6798db754b0e1f537a___ @ 0x1802ECD30 (EnumWindowsHelpers--LambdaEnumWindowsProc__lambda_b90ba3034bff2a6798db754b0e1f537a___.c)
 * Callees:
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ?Intersects@CRect@Geometry@@QEAA_NAEBUtagRECT@@@Z @ 0x1802D4AE2 (-Intersects@CRect@Geometry@@QEAA_NAEBUtagRECT@@@Z.c)
 *     ?DoesWindowOverlapPrimaryOrEmptyRegion@XamlSnapAssistViewHost@@AEAA_NPEAUHWND__@@@Z @ 0x18076C644 (-DoesWindowOverlapPrimaryOrEmptyRegion@XamlSnapAssistViewHost@@AEAA_NPEAUHWND__@@@Z.c)
 */

char __fastcall lambda_b90ba3034bff2a6798db754b0e1f537a_::operator()(__int64 a1, HWND a2)
{
  __int64 v4; // rcx
  __int64 i; // rax
  int v7; // [rsp+20h] [rbp-20h] BYREF
  int pvAttribute; // [rsp+24h] [rbp-1Ch] BYREF
  struct tagRECT Rect; // [rsp+28h] [rbp-18h] BYREF

  if ( IsWindowVisible(a2)
    && !IsIconic(a2)
    && (!(unsigned int)GetWindowBand(a2, &v7) || v7 == 1)
    && (DwmGetWindowAttribute(a2, 0xEu, &pvAttribute, 4u) < 0 || !pvAttribute) )
  {
    Rect = 0LL;
    if ( DwmGetWindowAttribute(a2, 9u, &Rect, 0x10u) < 0 )
      GetWindowRect(a2, &Rect);
    if ( Rect.right - Rect.left != 1 || Rect.bottom - Rect.top != 1 )
    {
      v4 = *(_QWORD *)(*(_QWORD *)a1 + 672LL);
      for ( i = *(_QWORD *)(*(_QWORD *)a1 + 664LL); i != v4 && (*(_DWORD *)(i + 24) != 2 || *(HWND *)i != a2); i += 32LL )
        ;
      if ( i == v4 )
      {
        if ( Geometry::CRect::Intersects((Geometry::CRect *)&Rect, *(const struct tagRECT **)(a1 + 8)) )
        {
LABEL_18:
          **(_QWORD **)(a1 + 16) = a2;
          return 0;
        }
      }
      else
      {
        if ( XamlSnapAssistViewHost::DoesWindowOverlapPrimaryOrEmptyRegion(*(XamlSnapAssistViewHost **)a1, a2) )
          goto LABEL_18;
        **(_QWORD **)(a1 + 24) = a2;
      }
    }
  }
  return 1;
}
