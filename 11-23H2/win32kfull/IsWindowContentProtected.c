/*
 * XREFs of IsWindowContentProtected @ 0x1C00B5400
 * Callers:
 *     _VisrgnFromWindow @ 0x1C00209E8 (_VisrgnFromWindow.c)
 *     zzzComposeDesktop @ 0x1C0022F04 (zzzComposeDesktop.c)
 *     CreateOrGetRedirectionBitmap @ 0x1C0024A64 (CreateOrGetRedirectionBitmap.c)
 *     CreateSprite @ 0x1C00AB4E4 (CreateSprite.c)
 *     ProtectedContentAccessCheck @ 0x1C00AD4A8 (ProtectedContentAccessCheck.c)
 * Callees:
 *     _GetProp @ 0x1C00B6E24 (_GetProp.c)
 */

__int64 __fastcall IsWindowContentProtected(__int64 a1)
{
  return GetProp(a1, (unsigned __int16)atomDispAffinity, 1LL) & 1;
}
