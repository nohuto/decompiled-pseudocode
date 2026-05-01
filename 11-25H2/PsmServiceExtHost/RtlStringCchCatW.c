/*
 * XREFs of RtlStringCchCatW @ 0x180091B18
 * Callers:
 *     SdbpGetCustomSdbFileName @ 0x180095F6C (SdbpGetCustomSdbFileName.c)
 *     AslpFileQueryVersionString @ 0x1800A3010 (AslpFileQueryVersionString.c)
 *     AslPathCombine @ 0x1800A3EA8 (AslPathCombine.c)
 *     AslPathToSystemPathBuf @ 0x1800A411C (AslPathToSystemPathBuf.c)
 *     AslpEnvResolveVars @ 0x1800A6B34 (AslpEnvResolveVars.c)
 * Callees:
 *     RtlStringCopyWorkerW @ 0x1800665AC (RtlStringCopyWorkerW.c)
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
