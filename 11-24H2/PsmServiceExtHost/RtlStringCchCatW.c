/*
 * XREFs of RtlStringCchCatW @ 0x180091F78
 * Callers:
 *     SdbpGetCustomSdbFileName @ 0x1800963CC (SdbpGetCustomSdbFileName.c)
 *     AslpFileQueryVersionString @ 0x1800A3300 (AslpFileQueryVersionString.c)
 *     AslPathCombine @ 0x1800A4198 (AslPathCombine.c)
 *     AslPathToSystemPathBuf @ 0x1800A440C (AslPathToSystemPathBuf.c)
 *     AslpEnvResolveVars @ 0x1800A6E24 (AslpEnvResolveVars.c)
 * Callees:
 *     RtlStringCopyWorkerW @ 0x18006652C (RtlStringCopyWorkerW.c)
 */

__int64 __fastcall RtlStringCchCatW(_WORD *a1, __int64 a2, __int64 a3)
{
  __int64 v5; // r9
  _WORD *v6; // rax
  unsigned int v7; // edx
  __int64 v8; // r8

  if ( (unsigned __int64)(a2 - 1) > 0x7FFFFFFE )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    v5 = a2;
    v6 = a1;
    do
    {
      if ( !*v6 )
        break;
      ++v6;
      --v5;
    }
    while ( v5 );
    v7 = v5 == 0 ? 0xC000000D : 0;
    if ( v5 )
    {
      v8 = (a2 - v5) & -(__int64)(v5 != 0);
      return (unsigned int)RtlStringCopyWorkerW(&a1[v8], a2 - v8, v8, a3);
    }
  }
  return v7;
}
