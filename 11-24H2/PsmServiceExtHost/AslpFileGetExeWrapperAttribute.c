/*
 * XREFs of AslpFileGetExeWrapperAttribute @ 0x1800A0EEC
 * Callers:
 *     AslFileAllocAndGetAttributes @ 0x18009FB14 (AslFileAllocAndGetAttributes.c)
 * Callees:
 *     AslLogCallPrintf @ 0x180071658 (AslLogCallPrintf.c)
 *     AslFileMappingEnsure @ 0x18009F0F0 (AslFileMappingEnsure.c)
 *     AslpFileGetExeWrapper @ 0x1800A0D5C (AslpFileGetExeWrapper.c)
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
    if ( *(_DWORD *)(a2 + 56) == 6 && (int)AslpFileGetExeWrapper(&v7, a2) >= 0 )
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
    AslLogCallPrintf(1LL);
  }
  return (unsigned int)v4;
}
