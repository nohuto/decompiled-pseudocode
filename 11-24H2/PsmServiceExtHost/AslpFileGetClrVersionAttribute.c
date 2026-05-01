/*
 * XREFs of AslpFileGetClrVersionAttribute @ 0x1800A07A0
 * Callers:
 *     AslFileAllocAndGetAttributes @ 0x18009FB14 (AslFileAllocAndGetAttributes.c)
 * Callees:
 *     AslLogCallPrintf @ 0x180071658 (AslLogCallPrintf.c)
 *     AslStringAnsiToUnicode @ 0x18009E3B0 (AslStringAnsiToUnicode.c)
 *     AslStringXmlSanitize @ 0x18009EC48 (AslStringXmlSanitize.c)
 *     AslFileMappingEnsure @ 0x18009F0F0 (AslFileMappingEnsure.c)
 *     AslpFileGetClrVersion @ 0x1800A05CC (AslpFileGetClrVersion.c)
 *     AslpFileGetFileKindDetailAttribute @ 0x1800A1068 (AslpFileGetFileKindDetailAttribute.c)
 *     memset_0 @ 0x1800A7B0A (memset_0.c)
 *     __security_check_cookie @ 0x1800A7B40 (__security_check_cookie.c)
 */

__int64 __fastcall AslpFileGetClrVersionAttribute(__int64 a1, __int64 a2)
{
  int ClrVersion; // ebx
  __int64 v5; // r11
  __int64 v6; // rax
  PWSTR v8; // [rsp+30h] [rbp-138h] BYREF
  char v9[256]; // [rsp+40h] [rbp-128h] BYREF

  memset_0(v9, 0, sizeof(v9));
  v8 = 0LL;
  ClrVersion = AslFileMappingEnsure(a2);
  if ( ClrVersion < 0 )
    goto LABEL_2;
  if ( *(_DWORD *)(a2 + 56) != 6 )
    goto LABEL_4;
  if ( (*(_BYTE *)(a1 + 920) & 1) != 0 || (ClrVersion = AslpFileGetFileKindDetailAttribute(a1, a2), ClrVersion >= 0) )
  {
    if ( (unsigned int)(*(_DWORD *)(a1 + 912) - 12) > 3 )
    {
LABEL_4:
      *(_DWORD *)(a1 + 888) |= 2u;
      return 0;
    }
    ClrVersion = AslpFileGetClrVersion(v9, a2);
    if ( ClrVersion >= 0 )
    {
      ClrVersion = AslStringAnsiToUnicode(&v8, v9);
      if ( ClrVersion >= 0 )
      {
        ClrVersion = AslStringXmlSanitize(v8);
        if ( ClrVersion >= 0 )
        {
          *(_DWORD *)(a1 + 864) = 4;
          v6 = -1LL;
          do
            ++v6;
          while ( *(_WORD *)(v5 + 2 * v6) );
          *(_DWORD *)(a1 + 888) |= 5u;
          *(_QWORD *)(a1 + 872) = v6;
          *(_QWORD *)(a1 + 880) = v5;
          return 0;
        }
      }
    }
  }
LABEL_2:
  AslLogCallPrintf(1LL);
  return (unsigned int)ClrVersion;
}
