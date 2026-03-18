/*
 * XREFs of EngGetFilePath @ 0x1403000D0
 * Callers:
 *     ?UmfdEscEngGetFilePath@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x140330538 (-UmfdEscEngGetFilePath@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 * Callees:
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1400BFAE4 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 */

BOOL __stdcall EngGetFilePath(HANDLE h, WCHAR (*pDest)[261])
{
  char *v2; // r8

  v2 = (char *)*((_QWORD *)h + 10);
  return v2 && (int)StringCchCopyW((char *)pDest, 261LL, v2) >= 0;
}
