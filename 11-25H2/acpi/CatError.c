/*
 * XREFs of CatError @ 0x14006DA70
 * Callers:
 *     AMLIAddNamespaceOverride @ 0x14006C0C4 (AMLIAddNamespaceOverride.c)
 * Callees:
 *     ConPrintf @ 0x1400067DC (ConPrintf.c)
 *     RtlStringCchCatA @ 0x140030320 (RtlStringCchCatA.c)
 *     RtlStringCchVPrintfA @ 0x14003FC98 (RtlStringCchVPrintfA.c)
 *     AMLIDebugger @ 0x1400564EC (AMLIDebugger.c)
 */

ULONG CatError(const char *a1, ...)
{
  __int64 v1; // rax
  ULONG result; // eax
  va_list argList; // [rsp+58h] [rbp+10h] BYREF

  va_start(argList, a1);
  RtlStringCchCatA(pszDest, 0x100uLL, "\n");
  v1 = -1LL;
  do
    ++v1;
  while ( pszDest[v1] );
  RtlStringCchVPrintfA(&pszDest[v1], 256 - v1, a1, argList);
  ConPrintf(pszDest);
  result = ConPrintf("\n");
  if ( (gDebugger & 0x4000) != 0 )
    return AMLIDebugger();
  return result;
}
