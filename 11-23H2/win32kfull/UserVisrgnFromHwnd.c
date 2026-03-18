/*
 * XREFs of UserVisrgnFromHwnd @ 0x1C0020B04
 * Callers:
 *     GreUpdateSpriteVisRgn @ 0x1C0020B48 (GreUpdateSpriteVisRgn.c)
 * Callees:
 *     _VisrgnFromWindow @ 0x1C00209E8 (_VisrgnFromWindow.c)
 *     HMValidateHandleNoSecure @ 0x1C00B02D0 (HMValidateHandleNoSecure.c)
 */

const struct tagWND *__fastcall UserVisrgnFromHwnd(_QWORD *a1, __int64 a2, int a3)
{
  __int64 v4; // rcx
  const struct tagWND *result; // rax

  v4 = a2;
  LOBYTE(a2) = 1;
  result = (const struct tagWND *)HMValidateHandleNoSecure(v4, a2);
  if ( result )
    return (const struct tagWND *)VisrgnFromWindow(result, a3, a1);
  return result;
}
