/*
 * XREFs of xxxFillWindow @ 0x1C0082DBC
 * Callers:
 *     NtUserFillWindow @ 0x1C0012250 (NtUserFillWindow.c)
 *     xxxDWP_EraseBkgnd @ 0x1C0082D5C (xxxDWP_EraseBkgnd.c)
 * Callees:
 *     xxxPaintRect @ 0x1C00077C0 (xxxPaintRect.c)
 *     UT_GetParentDCClipBox @ 0x1C0082E44 (UT_GetParentDCClipBox.c)
 *     __security_check_cookie @ 0x1C01381F0 (__security_check_cookie.c)
 */

__int64 __fastcall xxxFillWindow(__int64 a1, __int64 a2, HDC a3, HBRUSH a4)
{
  __int64 v8; // rcx
  RECT v10; // [rsp+30h] [rbp-48h] BYREF

  v10 = 0LL;
  if ( !(unsigned int)UT_GetParentDCClipBox(a2, a3, &v10) )
    return 1LL;
  v8 = a2;
  if ( a1 )
    v8 = a1;
  return xxxPaintRect(v8, a2, a3, a4, &v10);
}
