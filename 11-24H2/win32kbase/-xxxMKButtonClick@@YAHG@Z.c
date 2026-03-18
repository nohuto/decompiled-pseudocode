/*
 * XREFs of ?xxxMKButtonClick@@YAHG@Z @ 0x1401F59D0
 * Callers:
 *     ?MouseKeys@@YAHPEAUtagKE@@KH@Z @ 0x1401099A0 (-MouseKeys@@YAHPEAUtagKE@@KH@Z.c)
 *     ?xxxMKButtonDoubleClick@@YAHG@Z @ 0x1401F5A20 (-xxxMKButtonDoubleClick@@YAHG@Z.c)
 * Callees:
 *     ?xxxMKButtonSetState@@YAHG@Z @ 0x1401F5A40 (-xxxMKButtonSetState@@YAHG@Z.c)
 */

__int64 __fastcall xxxMKButtonClick(__int64 a1)
{
  if ( (*(_DWORD *)(W32GetUserSessionState(a1) + 67056) & 0x2000) == 0 )
  {
    xxxMKButtonSetState(1u);
    xxxMKButtonSetState(0);
    xxxMKButtonSetState(1u);
  }
  return 0LL;
}
