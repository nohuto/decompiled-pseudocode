/*
 * XREFs of AslpFileGetExportName @ 0x14080D8A0
 * Callers:
 *     AslpFileGetPeExportNameAttribute @ 0x14080E3B4 (AslpFileGetPeExportNameAttribute.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     AslStringAnsiToUnicode @ 0x140808394 (AslStringAnsiToUnicode.c)
 *     AslpFileQueryExportName @ 0x14080F898 (AslpFileQueryExportName.c)
 *     AslLogCallPrintf @ 0x1409601DC (AslLogCallPrintf.c)
 */

__int64 __fastcall AslpFileGetExportName(wchar_t **a1)
{
  int ExportName; // eax
  int v3; // ebx
  const char *v4; // r9
  int v5; // r8d
  char pszDest[256]; // [rsp+30h] [rbp-118h] BYREF

  memset_0(pszDest, 0, sizeof(pszDest));
  ExportName = AslpFileQueryExportName(pszDest);
  v3 = ExportName;
  if ( ExportName >= 0 )
  {
    v3 = AslStringAnsiToUnicode(a1, pszDest);
    if ( v3 >= 0 )
      return 0;
    v4 = "AslStringAnsiToUnicode failed [%x]";
    v5 = 4167;
    goto LABEL_5;
  }
  if ( ExportName != -1073741275 && ExportName != -1073741701 )
  {
    v4 = "AslpFileQueryExportName failed [%x]";
    v5 = 4160;
LABEL_5:
    AslLogCallPrintf(1, (unsigned int)"AslpFileGetExportName", v5, (_DWORD)v4);
  }
  return (unsigned int)v3;
}
