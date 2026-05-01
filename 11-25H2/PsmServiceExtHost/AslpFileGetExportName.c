/*
 * XREFs of AslpFileGetExportName @ 0x1800A0CAC
 * Callers:
 *     AslpFileGetPeExportNameAttribute @ 0x1800A17C8 (AslpFileGetPeExportNameAttribute.c)
 * Callees:
 *     AslLogCallPrintf @ 0x1800717F0 (AslLogCallPrintf.c)
 *     AslStringAnsiToUnicode @ 0x18009E0C0 (AslStringAnsiToUnicode.c)
 *     AslpFileQueryExportName @ 0x1800A2DD0 (AslpFileQueryExportName.c)
 *     memset_0 @ 0x1800A781A (memset_0.c)
 *     __security_check_cookie @ 0x1800A7850 (__security_check_cookie.c)
 */

__int64 __fastcall AslpFileGetExportName(PWSTR *a1, __int64 a2)
{
  int ExportName; // eax
  int v5; // ebx
  char v7[256]; // [rsp+30h] [rbp-118h] BYREF

  memset_0(v7, 0, sizeof(v7));
  ExportName = AslpFileQueryExportName(v7, a2);
  v5 = ExportName;
  if ( ExportName >= 0 )
  {
    v5 = AslStringAnsiToUnicode(a1, v7);
    if ( v5 >= 0 )
      return 0;
    goto LABEL_4;
  }
  if ( ExportName != -1073741275 && ExportName != -1073741701 )
LABEL_4:
    AslLogCallPrintf(1LL);
  return (unsigned int)v5;
}
