/*
 * XREFs of AslpFileGetPeExportNameAttribute @ 0x14080EAF4
 * Callers:
 *     AslFileAllocAndGetAttributes @ 0x14080CB9C (AslFileAllocAndGetAttributes.c)
 * Callees:
 *     AslFileMappingEnsure @ 0x14080989C (AslFileMappingEnsure.c)
 *     AslpFileGetExportName @ 0x14080DFE0 (AslpFileGetExportName.c)
 *     AslLogCallPrintf @ 0x140947C9C (AslLogCallPrintf.c)
 *     AslStringXmlSanitize @ 0x140AAE348 (AslStringXmlSanitize.c)
 */

__int64 __fastcall AslpFileGetPeExportNameAttribute(__int64 a1, __int64 a2)
{
  int v4; // ebx
  const char *v5; // r9
  int v6; // r8d
  __int64 v7; // r11
  __int64 v8; // rax
  wchar_t *v10; // [rsp+50h] [rbp+18h] BYREF

  v10 = 0LL;
  v4 = AslFileMappingEnsure(a2);
  if ( v4 >= 0 )
  {
    if ( *(_DWORD *)(a2 + 64) == 6 && (int)AslpFileGetExportName(&v10) >= 0 )
    {
      v4 = AslStringXmlSanitize(v10);
      if ( v4 < 0 )
      {
        v5 = "AslStringXmlSanitize failed [%x]";
        v6 = 3355;
        goto LABEL_3;
      }
      *(_DWORD *)(a1 + 736) = 4;
      v8 = -1LL;
      do
        ++v8;
      while ( *(_WORD *)(v7 + 2 * v8) );
      *(_DWORD *)(a1 + 760) |= 5u;
      *(_QWORD *)(a1 + 744) = v8;
      *(_QWORD *)(a1 + 752) = v7;
    }
    else
    {
      *(_DWORD *)(a1 + 760) |= 2u;
    }
    return 0;
  }
  v5 = "AslFileMappingEnsure failed [%x]";
  v6 = 3336;
LABEL_3:
  AslLogCallPrintf(1, (unsigned int)"AslpFileGetPeExportNameAttribute", v6, (_DWORD)v5);
  return (unsigned int)v4;
}
