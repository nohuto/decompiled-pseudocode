/*
 * XREFs of AslpFileGetExeWrapper @ 0x14080DDA4
 * Callers:
 *     AslpFileGetExeWrapperAttribute @ 0x14080DF30 (AslpFileGetExeWrapperAttribute.c)
 * Callees:
 *     AslpFileGetImageNtHeader @ 0x14080E6E4 (AslpFileGetImageNtHeader.c)
 *     AslpFileHasActiveMarkWrapper @ 0x14080F76C (AslpFileHasActiveMarkWrapper.c)
 *     AslpFileHasSecuromWrapper @ 0x14080F89C (AslpFileHasSecuromWrapper.c)
 *     AslpHasStarForceWrapper @ 0x140810508 (AslpHasStarForceWrapper.c)
 *     AslLogCallPrintf @ 0x140947C9C (AslLogCallPrintf.c)
 */

__int64 __fastcall AslpFileGetExeWrapper(_DWORD *a1, __int64 a2)
{
  int ImageNtHeader; // ebx
  __int64 v6; // rdi
  int v8; // [rsp+60h] [rbp+8h] BYREF
  __int64 v9; // [rsp+68h] [rbp+10h] BYREF

  v8 = 0;
  *a1 = 0;
  v9 = 0LL;
  if ( *(_QWORD *)(a2 + 24) >= 0x100000000uLL )
    return 0LL;
  ImageNtHeader = AslpFileGetImageNtHeader(&v9, a2);
  if ( ImageNtHeader >= 0 )
  {
    v6 = v9;
    if ( (unsigned int)AslpFileHasSecuromWrapper(v9) )
    {
      *a1 = 1;
    }
    else
    {
      ImageNtHeader = AslpFileHasActiveMarkWrapper(&v8, v6, a2);
      if ( ImageNtHeader < 0 )
      {
        if ( ImageNtHeader == -1073741275 )
          AslLogCallPrintf(
            2,
            (unsigned int)"AslpFileGetExeWrapper",
            3875,
            (unsigned int)"AslpFileHasActiveMarkWrapper failed (FileSize: %I64u) [%x]");
        else
          AslLogCallPrintf(
            1,
            (unsigned int)"AslpFileGetExeWrapper",
            3877,
            (unsigned int)"AslpFileHasActiveMarkWrapper failed [%x]");
        return (unsigned int)ImageNtHeader;
      }
      if ( v8 )
      {
        *a1 = 2;
      }
      else if ( *(_DWORD *)v6 == 17744 && *(_BYTE *)(v6 + 26) == 83 && *(_BYTE *)(v6 + 27) == 82 )
      {
        *a1 = 3;
      }
      else if ( (unsigned int)AslpHasStarForceWrapper(v6) )
      {
        *a1 = 4;
      }
    }
    return 0;
  }
  else
  {
    AslLogCallPrintf(
      1,
      (unsigned int)"AslpFileGetExeWrapper",
      3850,
      (unsigned int)"AslpFileGetImageNtHeader failed [%x]");
  }
  return (unsigned int)ImageNtHeader;
}
