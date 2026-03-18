/*
 * XREFs of ??B?$SGACCESSIBILITYgbMKMouseMode@E@@QEBA_NXZ @ 0x1401F519C
 * Callers:
 *     ?MouseKeys@@YAHPEAUtagKE@@KH@Z @ 0x1401099A0 (-MouseKeys@@YAHPEAUtagKE@@KH@Z.c)
 *     ?xxxMKToggleMouseKeys@@YAHG@Z @ 0x1401F5EB0 (-xxxMKToggleMouseKeys@@YAHG@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall SGACCESSIBILITYgbMKMouseMode<unsigned char>::operator bool(__int64 a1)
{
  return *(_BYTE *)(W32GetUserSessionState(a1) + 20943) != 0;
}
