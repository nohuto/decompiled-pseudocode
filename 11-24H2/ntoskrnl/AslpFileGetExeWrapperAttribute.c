/*
 * XREFs of AslpFileGetExeWrapperAttribute @ 0x14080DF30
 * Callers:
 *     AslFileAllocAndGetAttributes @ 0x14080CB9C (AslFileAllocAndGetAttributes.c)
 * Callees:
 *     AslFileMappingEnsure @ 0x14080989C (AslFileMappingEnsure.c)
 *     AslpFileGetExeWrapper @ 0x14080DDA4 (AslpFileGetExeWrapper.c)
 *     AslLogCallPrintf @ 0x140947C9C (AslLogCallPrintf.c)
 */

__int64 __fastcall AslpFileGetExeWrapperAttribute(__int64 a1, __int64 a2)
{
  int v4; // edi
  int v5; // ecx
  unsigned int v7; // [rsp+50h] [rbp+18h] BYREF

  v7 = 0;
  v4 = AslFileMappingEnsure(a2);
  if ( v4 >= 0 )
  {
    if ( *(_DWORD *)(a2 + 64) == 6 && (int)AslpFileGetExeWrapper(&v7, a2) >= 0 )
    {
      v5 = 1;
      *(_QWORD *)(a1 + 816) = v7;
      *(_DWORD *)(a1 + 800) = 2;
      *(_QWORD *)(a1 + 808) = 4LL;
    }
    else
    {
      v5 = 2;
    }
    *(_DWORD *)(a1 + 824) |= v5;
    return 0;
  }
  else
  {
    AslLogCallPrintf(
      1,
      (unsigned int)"AslpFileGetExeWrapperAttribute",
      3276,
      (unsigned int)"AslFileMappingEnsure failed [%x]");
  }
  return (unsigned int)v4;
}
