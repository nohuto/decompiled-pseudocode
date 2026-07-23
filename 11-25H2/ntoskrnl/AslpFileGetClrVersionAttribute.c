/*
 * XREFs of AslpFileGetClrVersionAttribute @ 0x1407FD54C
 * Callers:
 *     AslFileAllocAndGetAttributes @ 0x1407FC8EC (AslFileAllocAndGetAttributes.c)
 * Callees:
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     AslStringAnsiToUnicode @ 0x1407F8824 (AslStringAnsiToUnicode.c)
 *     AslFileMappingEnsure @ 0x1407F95EC (AslFileMappingEnsure.c)
 *     AslpFileGetClrVersion @ 0x1407FD388 (AslpFileGetClrVersion.c)
 *     AslpFileGetFileKindDetailAttribute @ 0x1407FDDFC (AslpFileGetFileKindDetailAttribute.c)
 *     AslLogCallPrintf @ 0x140825A60 (AslLogCallPrintf.c)
 *     AslStringXmlSanitize @ 0x140AAE338 (AslStringXmlSanitize.c)
 */

__int64 __fastcall AslpFileGetClrVersionAttribute(__int64 a1, __int64 a2)
{
  int FileKindDetailAttribute; // ebx
  const char *v5; // r9
  int v6; // r8d
  __int64 v7; // r11
  __int64 v8; // rax
  wchar_t *v10; // [rsp+30h] [rbp-138h] BYREF
  CHAR v11[256]; // [rsp+40h] [rbp-128h] BYREF

  memset_0(v11, 0, sizeof(v11));
  v10 = 0LL;
  FileKindDetailAttribute = AslFileMappingEnsure(a2);
  if ( FileKindDetailAttribute >= 0 )
  {
    if ( *(_DWORD *)(a2 + 64) != 6 )
      goto LABEL_5;
    if ( (*(_DWORD *)(a1 + 920) & 1) == 0 )
    {
      FileKindDetailAttribute = AslpFileGetFileKindDetailAttribute(a1, a2);
      if ( FileKindDetailAttribute < 0 )
      {
        v5 = "AslpFileGetFileKindDetailAttribute failed [%x]";
        v6 = 5220;
        goto LABEL_3;
      }
    }
    if ( (unsigned int)(*(_DWORD *)(a1 + 912) - 12) <= 3 )
    {
      FileKindDetailAttribute = AslpFileGetClrVersion(v11, a2);
      if ( FileKindDetailAttribute < 0 )
      {
        v5 = "AslpFileGetClrVersion failed [%x]";
        v6 = 5239;
        goto LABEL_3;
      }
      FileKindDetailAttribute = AslStringAnsiToUnicode(&v10, v11);
      if ( FileKindDetailAttribute < 0 )
      {
        v5 = "AslStringAnsiToUnicode failed [%x]";
        v6 = 5245;
        goto LABEL_3;
      }
      FileKindDetailAttribute = AslStringXmlSanitize(v10);
      if ( FileKindDetailAttribute < 0 )
      {
        v5 = "AslStringXmlSanitize failed [%x]";
        v6 = 5251;
        goto LABEL_3;
      }
      *(_DWORD *)(a1 + 864) = 4;
      v8 = -1LL;
      do
        ++v8;
      while ( *(_WORD *)(v7 + 2 * v8) );
      *(_DWORD *)(a1 + 888) |= 5u;
      *(_QWORD *)(a1 + 872) = v8;
      *(_QWORD *)(a1 + 880) = v7;
    }
    else
    {
LABEL_5:
      *(_DWORD *)(a1 + 888) |= 2u;
    }
    return 0;
  }
  v5 = "AslFileMappingEnsure failed [%x]";
  v6 = 5203;
LABEL_3:
  AslLogCallPrintf(1, (unsigned int)"AslpFileGetClrVersionAttribute", v6, (_DWORD)v5);
  return (unsigned int)FileKindDetailAttribute;
}
