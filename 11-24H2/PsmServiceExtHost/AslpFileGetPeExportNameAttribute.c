/*
 * XREFs of AslpFileGetPeExportNameAttribute @ 0x1800A1AB8
 * Callers:
 *     AslFileAllocAndGetAttributes @ 0x18009FB14 (AslFileAllocAndGetAttributes.c)
 * Callees:
 *     AslLogCallPrintf @ 0x180071658 (AslLogCallPrintf.c)
 *     AslStringXmlSanitize @ 0x18009EC48 (AslStringXmlSanitize.c)
 *     AslFileMappingEnsure @ 0x18009F0F0 (AslFileMappingEnsure.c)
 *     AslpFileGetExportName @ 0x1800A0F9C (AslpFileGetExportName.c)
 */

__int64 __fastcall AslpFileGetPeExportNameAttribute(__int64 a1, __int64 a2)
{
  int v4; // ebx
  __int64 v5; // r11
  __int64 v6; // rax
  PWSTR v8; // [rsp+50h] [rbp+18h] BYREF

  v8 = 0LL;
  v4 = AslFileMappingEnsure(a2);
  if ( v4 < 0 )
    goto LABEL_2;
  if ( *(_DWORD *)(a2 + 56) != 6 || (int)AslpFileGetExportName(&v8, a2) < 0 )
  {
    *(_DWORD *)(a1 + 760) |= 2u;
    return 0;
  }
  v4 = AslStringXmlSanitize(v8);
  if ( v4 >= 0 )
  {
    *(_DWORD *)(a1 + 736) = 4;
    v6 = -1LL;
    do
      ++v6;
    while ( *(_WORD *)(v5 + 2 * v6) );
    *(_DWORD *)(a1 + 760) |= 5u;
    *(_QWORD *)(a1 + 744) = v6;
    *(_QWORD *)(a1 + 752) = v5;
    return 0;
  }
LABEL_2:
  AslLogCallPrintf(1LL);
  return (unsigned int)v4;
}
