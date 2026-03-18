/*
 * XREFs of AslpFileGetExeWrapper @ 0x1407FDAF4
 * Callers:
 *     AslpFileGetExeWrapperAttribute @ 0x1407FDC80 (AslpFileGetExeWrapperAttribute.c)
 * Callees:
 *     AslpFileGetImageNtHeader @ 0x1407FE434 (AslpFileGetImageNtHeader.c)
 *     AslpFileHasActiveMarkWrapper @ 0x1407FF4BC (AslpFileHasActiveMarkWrapper.c)
 *     AslpFileHasSecuromWrapper @ 0x1407FF5EC (AslpFileHasSecuromWrapper.c)
 *     AslpHasStarForceWrapper @ 0x140800258 (AslpHasStarForceWrapper.c)
 *     AslLogCallPrintf @ 0x140825A60 (AslLogCallPrintf.c)
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
