/*
 * XREFs of AslpImageRvaToVa @ 0x140810584
 * Callers:
 *     AslFileMappingGetImageTypeEx @ 0x140809C00 (AslFileMappingGetImageTypeEx.c)
 *     AslpFileGetClrVersion @ 0x14080D638 (AslpFileGetClrVersion.c)
 *     AslpFileGetCrcChecksumBoot @ 0x14080DA84 (AslpFileGetCrcChecksumBoot.c)
 *     AslpFileGetImageResourceDirectoryRoot @ 0x14080E7AC (AslpFileGetImageResourceDirectoryRoot.c)
 *     AslpFileGetVersionBlockFromResourceRoot @ 0x14080F25C (AslpFileGetVersionBlockFromResourceRoot.c)
 *     AslpFileIsArm64XBinary @ 0x14080F918 (AslpFileIsArm64XBinary.c)
 *     AslpFileQueryExportName @ 0x14080FFD8 (AslpFileQueryExportName.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall AslpImageRvaToVa(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v5; // r11d
  _DWORD *v6; // rdx
  unsigned int i; // r10d
  unsigned int v8; // ecx
  unsigned __int64 v9; // rdx

  if ( a3 )
  {
    if ( *(_BYTE *)(a2 + 51) )
    {
      if ( (unsigned __int64)a3 < *(_QWORD *)(a2 + 32) )
        return a3 + *(_QWORD *)(a2 + 24);
    }
    else
    {
      v5 = *(unsigned __int16 *)(a1 + 6);
      v6 = (_DWORD *)(a1 + *(unsigned __int16 *)(a1 + 20) + 24LL);
      for ( i = 0; i < v5; ++i )
      {
        v8 = v6[3];
        if ( a3 >= v8 && a3 < v6[4] + v8 )
        {
          if ( v6 )
          {
            v9 = a3 + v6[5] - v6[3];
            if ( v9 < *(_QWORD *)(a2 + 16) )
              return v9 + *(_QWORD *)(a2 + 24);
          }
          return 0LL;
        }
        v6 += 10;
      }
    }
  }
  return 0LL;
}
