/*
 * XREFs of ParseString @ 0x1400014BC
 * Callers:
 *     ParsePackage @ 0x140001230 (ParsePackage.c)
 *     ParseArg @ 0x14000DB50 (ParseArg.c)
 * Callees:
 *     ConPrintf @ 0x1400067DC (ConPrintf.c)
 *     HeapAlloc @ 0x140008CA0 (HeapAlloc.c)
 *     LogError @ 0x14000FE74 (LogError.c)
 *     AcpiDiagTraceAmlError @ 0x14000FF1C (AcpiDiagTraceAmlError.c)
 *     PrintDebugMessage @ 0x140010060 (PrintDebugMessage.c)
 *     memmove @ 0x140070C40 (memmove.c)
 */

__int64 __fastcall ParseString(__int64 a1, const void **a2, __int64 a3, char a4)
{
  unsigned int v4; // ebx
  __int64 v8; // rax
  _BYTE *v9; // rdx
  void *v10; // rax

  v4 = 0;
  if ( *(_BYTE *)*a2 == 13 )
  {
    *a2 = (char *)*a2 + 1;
    v8 = -1LL;
    *(_WORD *)(a3 + 2) = 2;
    v9 = *a2;
    do
      ++v8;
    while ( v9[v8] );
    *(_DWORD *)(a3 + 24) = v8 + 1;
    if ( (gDebugger & 0xD0) != 0 )
      ConPrintf("\"%s\"");
    v10 = (void *)HeapAlloc(gpheapGlobal, 1381258056LL, *(unsigned int *)(a3 + 24));
    *(_QWORD *)(a3 + 32) = v10;
    if ( v10 )
    {
      memmove(v10, *a2, *(unsigned int *)(a3 + 24));
    }
    else
    {
      LogError(3221225626LL);
      AcpiDiagTraceAmlError(a1, 3221225626LL);
      PrintDebugMessage(139, 0, 0, 0, 0LL);
      v4 = -1073741670;
    }
    *a2 = (char *)*a2 + *(unsigned int *)(a3 + 24);
  }
  else
  {
    if ( !a4 )
    {
      LogError(3222536193LL);
      AcpiDiagTraceAmlError(a1, 3222536193LL);
      PrintDebugMessage(140, *(unsigned __int8 *)*a2, (unsigned int)*a2, 0, 0LL);
    }
    return (unsigned int)-1072431103;
  }
  return v4;
}
