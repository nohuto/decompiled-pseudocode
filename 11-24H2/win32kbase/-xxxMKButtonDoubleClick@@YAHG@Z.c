/*
 * XREFs of ?xxxMKButtonDoubleClick@@YAHG@Z @ 0x1401F5A20
 * Callers:
 *     ?MouseKeys@@YAHPEAUtagKE@@KH@Z @ 0x1401099A0 (-MouseKeys@@YAHPEAUtagKE@@KH@Z.c)
 * Callees:
 *     ?xxxMKButtonClick@@YAHG@Z @ 0x1401F59D0 (-xxxMKButtonClick@@YAHG@Z.c)
 */

__int64 __fastcall xxxMKButtonDoubleClick()
{
  xxxMKButtonClick(0LL);
  xxxMKButtonClick(0LL);
  return 0LL;
}
