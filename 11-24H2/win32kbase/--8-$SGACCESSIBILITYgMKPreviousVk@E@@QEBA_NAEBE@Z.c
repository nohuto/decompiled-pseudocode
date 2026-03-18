/*
 * XREFs of ??8?$SGACCESSIBILITYgMKPreviousVk@E@@QEBA_NAEBE@Z @ 0x1401F516C
 * Callers:
 *     ?MouseKeys@@YAHPEAUtagKE@@KH@Z @ 0x1401099A0 (-MouseKeys@@YAHPEAUtagKE@@KH@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall SGACCESSIBILITYgMKPreviousVk<unsigned char>::operator==(__int64 a1, _BYTE *a2)
{
  return *(_BYTE *)(W32GetUserSessionState(a1) + 20942) == *a2;
}
