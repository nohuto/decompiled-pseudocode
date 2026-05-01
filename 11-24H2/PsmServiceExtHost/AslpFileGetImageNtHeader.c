/*
 * XREFs of AslpFileGetImageNtHeader @ 0x1800A16A0
 * Callers:
 *     AslFileMappingGetImageTypeEx @ 0x18009F454 (AslFileMappingGetImageTypeEx.c)
 *     AslpFileGetChecksumAttributes @ 0x1800A0368 (AslpFileGetChecksumAttributes.c)
 *     AslpFileGetClrVersion @ 0x1800A05CC (AslpFileGetClrVersion.c)
 *     AslpFileGetExeWrapper @ 0x1800A0D5C (AslpFileGetExeWrapper.c)
 *     AslpFileGetImageResourceDirectoryRoot @ 0x1800A1774 (AslpFileGetImageResourceDirectoryRoot.c)
 *     AslpFileGetNtHeaderAttributes @ 0x1800A1954 (AslpFileGetNtHeaderAttributes.c)
 *     AslpFileGetVersionBlockFromResourceRoot @ 0x1800A22D0 (AslpFileGetVersionBlockFromResourceRoot.c)
 *     AslpFileIsArm64XBinary @ 0x1800A29D8 (AslpFileIsArm64XBinary.c)
 *     AslpFileQueryExportName @ 0x1800A30C0 (AslpFileQueryExportName.c)
 * Callees:
 *     AslLogCallPrintf @ 0x180071658 (AslLogCallPrintf.c)
 */

__int64 __fastcall AslpFileGetImageNtHeader(_QWORD *a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 v3; // rax
  __int64 v4; // r8
  unsigned __int64 v5; // rax
  __int64 v7; // [rsp+58h] [rbp+10h]

  if ( *(_DWORD *)(a2 + 56) == 6 )
  {
    v7 = *(_QWORD *)(a2 + 32);
    v3 = *(int *)(v7 + 60);
    v4 = v3 + v7;
    v5 = v3 + 264;
    if ( *(_QWORD *)(a2 + 24) < v5 || *(_QWORD *)(a2 + 40) < v5 )
    {
      v2 = -1073741701;
      AslLogCallPrintf(1LL);
    }
    else
    {
      *a1 = v4;
      return 0;
    }
  }
  else
  {
    v2 = -1073741637;
    AslLogCallPrintf(1LL);
  }
  return v2;
}
