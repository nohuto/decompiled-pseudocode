/*
 * XREFs of xxxFillWindow @ 0x140036A94
 * Callers:
 *     xxxDWP_EraseBkgnd @ 0x140036DD8 (xxxDWP_EraseBkgnd.c)
 *     NtUserFillWindow @ 0x1401C95B0 (NtUserFillWindow.c)
 * Callees:
 *     UT_GetParentDCClipBox @ 0x140036554 (UT_GetParentDCClipBox.c)
 *     xxxPaintRect @ 0x140036CDC (xxxPaintRect.c)
 *     __security_check_cookie @ 0x140340250 (__security_check_cookie.c)
 */

__int64 __fastcall xxxFillWindow(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v8; // rcx
  __int128 v10; // [rsp+30h] [rbp-48h] BYREF

  v10 = 0LL;
  if ( !(unsigned int)UT_GetParentDCClipBox(a2, a3, (int *)&v10) )
    return 1LL;
  v8 = a2;
  if ( a1 )
    v8 = a1;
  return xxxPaintRect(v8, a2, a3, a4, &v10);
}
