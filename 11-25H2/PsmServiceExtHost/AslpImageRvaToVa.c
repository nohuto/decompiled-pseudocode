/*
 * XREFs of AslpImageRvaToVa @ 0x1800A36AC
 * Callers:
 *     AslFileMappingGetImageTypeEx @ 0x18009F164 (AslFileMappingGetImageTypeEx.c)
 *     AslpFileGetClrVersion @ 0x1800A02DC (AslpFileGetClrVersion.c)
 *     AslpFileGetCrcChecksumBoot @ 0x1800A0744 (AslpFileGetCrcChecksumBoot.c)
 *     AslpFileGetImageResourceDirectoryRoot @ 0x1800A1484 (AslpFileGetImageResourceDirectoryRoot.c)
 *     AslpFileGetVersionBlockFromResourceRoot @ 0x1800A1FE0 (AslpFileGetVersionBlockFromResourceRoot.c)
 *     AslpFileIsArm64XBinary @ 0x1800A26E8 (AslpFileIsArm64XBinary.c)
 *     AslpFileQueryExportName @ 0x1800A2DD0 (AslpFileQueryExportName.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AslpImageRvaToVa(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned __int64 v4; // rcx
  __int64 v5; // rax
  unsigned int v7; // r11d
  _DWORD *v8; // rdx
  unsigned int i; // r10d
  unsigned int v10; // ecx

  if ( !a3 )
    return 0LL;
  if ( !*(_BYTE *)(a2 + 43) )
  {
    v7 = *(unsigned __int16 *)(a1 + 6);
    v8 = (_DWORD *)(a1 + *(unsigned __int16 *)(a1 + 20) + 24LL);
    for ( i = 0; i < v7; ++i )
    {
      v10 = v8[3];
      if ( a3 >= v10 && a3 < v8[4] + v10 )
      {
        if ( v8 )
        {
          v4 = a3 + v8[5] - v8[3];
          if ( v4 < *(_QWORD *)(a2 + 16) )
          {
            v5 = *(_QWORD *)(a2 + 24);
            return v4 + v5;
          }
        }
        return 0LL;
      }
      v8 += 10;
    }
    return 0LL;
  }
  v4 = a3;
  if ( (unsigned __int64)a3 >= *(_QWORD *)(a2 + 32) )
    return 0LL;
  v5 = *(_QWORD *)(a2 + 24);
  return v4 + v5;
}
