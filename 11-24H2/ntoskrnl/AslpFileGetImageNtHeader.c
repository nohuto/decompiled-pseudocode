/*
 * XREFs of AslpFileGetImageNtHeader @ 0x14080E6E4
 * Callers:
 *     AslFileMappingGetImageTypeEx @ 0x140809C00 (AslFileMappingGetImageTypeEx.c)
 *     AslpFileGetChecksumAttributes @ 0x14080D3E0 (AslpFileGetChecksumAttributes.c)
 *     AslpFileGetClrVersion @ 0x14080D638 (AslpFileGetClrVersion.c)
 *     AslpFileGetExeWrapper @ 0x14080DDA4 (AslpFileGetExeWrapper.c)
 *     AslpFileGetImageResourceDirectoryRoot @ 0x14080E7AC (AslpFileGetImageResourceDirectoryRoot.c)
 *     AslpFileGetNtHeaderAttributes @ 0x14080E994 (AslpFileGetNtHeaderAttributes.c)
 *     AslpFileGetVersionBlockFromResourceRoot @ 0x14080F25C (AslpFileGetVersionBlockFromResourceRoot.c)
 *     AslpFileIsArm64XBinary @ 0x14080F918 (AslpFileIsArm64XBinary.c)
 *     AslpFileQueryExportName @ 0x14080FFD8 (AslpFileQueryExportName.c)
 * Callees:
 *     AslLogCallPrintf @ 0x140947C9C (AslLogCallPrintf.c)
 */

__int64 __fastcall AslpFileGetImageNtHeader(_QWORD *a1, __int64 a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // r9
  unsigned __int64 v7; // rax

  if ( *(_DWORD *)(a2 + 64) == 6 )
  {
    v4 = *(_QWORD *)(a2 + 32);
    v5 = *(int *)(v4 + 60);
    v6 = v5 + v4;
    v7 = v5 + 264;
    if ( *(_QWORD *)(a2 + 24) < v7 || *(_QWORD *)(a2 + 40) < v7 )
    {
      v3 = -1073741701;
      AslLogCallPrintf(1, (unsigned int)"AslpFileGetImageNtHeader", 3798, (unsigned int)"File mapping invalid [%x]");
    }
    else
    {
      *a1 = v6;
      return 0;
    }
  }
  else
  {
    v3 = -1073741637;
    AslLogCallPrintf(1, (unsigned int)"AslpFileGetImageNtHeader", 3786, (unsigned int)"File mapping not a PE [%x]");
  }
  return v3;
}
