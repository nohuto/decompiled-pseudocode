/*
 * XREFs of SdbpGetPathCustomSdb @ 0x140806BF0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     SdbpGetPathAppPatch @ 0x1408069A0 (SdbpGetPathAppPatch.c)
 *     AslPathCombine @ 0x140809C70 (AslPathCombine.c)
 *     AslLogCallPrintf @ 0x1409601DC (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbpGetPathCustomSdb(wchar_t *a1, size_t a2)
{
  int v5; // ebx
  wchar_t pszSrc[280]; // [rsp+30h] [rbp-258h] BYREF

  wcscpy(pszSrc, L"\\CustomSDB");
  if ( a2 < 0xB )
    return 3221225507LL;
  *a1 = 0;
  pszSrc[16] = 0;
  v5 = AslPathCombine(pszSrc);
  if ( v5 >= 0 )
    return (unsigned int)SdbpGetPathAppPatch(a1, a2);
  else
    AslLogCallPrintf(1, (unsigned int)"SdbpGetPathCustomSdb", 1190, (unsigned int)"AslPathCombine failed [%x]");
  return (unsigned int)v5;
}
