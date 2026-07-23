/*
 * XREFs of AslFileAllocAndGetAttributes @ 0x14080CB9C
 * Callers:
 *     SdbpCheckAllAttributes @ 0x140807A9C (SdbpCheckAllAttributes.c)
 * Callees:
 *     Feature_Arm64XMatching__private_IsEnabledDeviceUsageNoInline @ 0x140697BD8 (Feature_Arm64XMatching__private_IsEnabledDeviceUsageNoInline.c)
 *     AslFileMappingEnsure @ 0x14080989C (AslFileMappingEnsure.c)
 *     AslpFileGetChecksumAttributes @ 0x14080D3E0 (AslpFileGetChecksumAttributes.c)
 *     AslpFileGetClrVersionAttribute @ 0x14080D7FC (AslpFileGetClrVersionAttribute.c)
 *     AslpFileGetExeWrapperAttribute @ 0x14080DF30 (AslpFileGetExeWrapperAttribute.c)
 *     AslpFileGetFileKindDetailAttribute @ 0x14080E0AC (AslpFileGetFileKindDetailAttribute.c)
 *     AslpFileGetHeaderAttributesNE @ 0x14080E130 (AslpFileGetHeaderAttributesNE.c)
 *     AslpFileGetHeaderAttributesPE @ 0x14080E2D8 (AslpFileGetHeaderAttributesPE.c)
 *     AslpFileGetPeExportNameAttribute @ 0x14080EAF4 (AslpFileGetPeExportNameAttribute.c)
 *     AslpFileGetVersionAttributes @ 0x14080EBD8 (AslpFileGetVersionAttributes.c)
 *     AslpFileIsArm64XBinary @ 0x14080F918 (AslpFileIsArm64XBinary.c)
 *     AslpFileLargeEnsureLargeFileMapping @ 0x140810600 (AslpFileLargeEnsureLargeFileMapping.c)
 *     AslLogCallPrintf @ 0x140947C9C (AslLogCallPrintf.c)
 */

__int64 __fastcall AslFileAllocAndGetAttributes(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  int FileKindDetailAttribute; // ebx
  int v6; // edx
  int *i; // rax
  int v8; // ecx
  int v9; // ecx
  unsigned int v10; // edx
  _DWORD *v11; // r8
  bool v12; // zf
  unsigned int v13; // ecx
  unsigned int v14; // ecx
  unsigned int v15; // ecx
  bool v16; // zf
  unsigned int v17; // ecx
  int v18; // eax
  const char *v19; // r9
  int v20; // r8d
  int v21; // ebp
  __int64 j; // r13
  int VersionAttributes; // eax
  __int64 v24; // rax
  int IsArm64XBinary; // eax
  __int64 v26; // rax
  __int64 v27; // rax
  unsigned __int8 v30; // [rsp+88h] [rbp+20h] BYREF

  if ( a3 )
  {
    if ( *(_DWORD *)(a2 + 64) == 1 )
    {
      v6 = 0;
      for ( i = (int *)(a1 + 24); ; i += 8 )
      {
        v8 = *i;
        if ( !v6 || v6 == 17 )
          break;
        if ( v6 == 28 )
        {
          *((_QWORD *)i - 1) = 1LL;
LABEL_11:
          *(i - 6) = 2;
          v9 = v8 | 1;
          *((_QWORD *)i - 2) = 4LL;
          goto LABEL_12;
        }
        v9 = v8 | 2;
LABEL_12:
        *i = v9;
        if ( ++v6 >= 36 )
          return 0;
      }
      *((_QWORD *)i - 1) = 0LL;
      goto LABEL_11;
    }
    if ( *(_DWORD *)(a2 + 80) )
    {
      v10 = 0;
      v11 = (_DWORD *)(a1 + 24);
      do
      {
        if ( v10 > 0x10 )
        {
          if ( v10 > 0x1C )
          {
            if ( v10 != 29 && v10 != 30 && v10 != 31 )
            {
              v17 = v10 - 33;
              v16 = v10 == 33;
              goto LABEL_37;
            }
          }
          else if ( v10 != 28 && v10 != 17 && v10 != 18 && v10 != 19 )
          {
            v17 = v10 - 22;
            v16 = v10 == 22;
            goto LABEL_37;
          }
        }
        else if ( v10 != 16 )
        {
          if ( v10 > 9 )
          {
            v12 = v10 == 10;
            v13 = v10 - 10;
          }
          else
          {
            if ( v10 == 9 || v10 == 1 )
              goto LABEL_40;
            v13 = v10 - 3;
            v12 = v10 == 3;
          }
          if ( !v12 )
          {
            v14 = v13 - 1;
            if ( v14 )
            {
              v15 = v14 - 1;
              if ( v15 )
              {
                v17 = v15 - 1;
                v16 = v17 == 0;
LABEL_37:
                if ( !v16 && v17 - 1 >= 2 )
                  *v11 |= 2u;
              }
            }
          }
        }
LABEL_40:
        ++v10;
        v11 += 8;
      }
      while ( (int)v10 < 36 );
    }
    v18 = AslFileMappingEnsure(a2);
    FileKindDetailAttribute = v18;
    if ( v18 == -1073741801 )
    {
      if ( !*(_DWORD *)(a2 + 80) )
      {
        FileKindDetailAttribute = AslpFileLargeEnsureLargeFileMapping(a1, a2);
        if ( FileKindDetailAttribute < 0 )
        {
          v19 = "AslpFileLargeEnsureLargeFileMapping failed [%x]";
          v20 = 678;
LABEL_45:
          AslLogCallPrintf(1, (unsigned int)"AslFileAllocAndGetAttributes", v20, (_DWORD)v19);
          return (unsigned int)FileKindDetailAttribute;
        }
        goto LABEL_48;
      }
    }
    else if ( v18 >= 0 )
    {
LABEL_48:
      v21 = 0;
      for ( j = 0LL; ; j += 32LL )
      {
        if ( v21 >= 36 )
          return 0;
        if ( ((a3 >> v21) & 1) != 0 && (*(_DWORD *)(a1 + j + 24) & 3) == 0 )
        {
          if ( v21 > 18 )
          {
            if ( v21 > 27 )
            {
              switch ( v21 )
              {
                case 28:
                  FileKindDetailAttribute = AslpFileGetFileKindDetailAttribute(a1, a2);
                  if ( FileKindDetailAttribute < 0 )
                  {
                    v19 = "AslpFileGetFileKindDetailAttribute failed [%x]";
                    v20 = 773;
                    goto LABEL_45;
                  }
                  break;
                case 29:
                case 30:
                case 31:
                  goto LABEL_115;
                case 32:
LABEL_114:
                  v27 = *(_QWORD *)(a2 + 24);
                  *(_DWORD *)(a1 + 1048) |= 1u;
                  *(_DWORD *)(a1 + 24) |= 1u;
                  *(_QWORD *)(a1 + 16) = (unsigned int)v27;
                  *(_DWORD *)(a1 + 1024) = 3;
                  *(_QWORD *)(a1 + 1032) = 8LL;
                  *(_QWORD *)(a1 + 1040) = v27;
                  *(_DWORD *)a1 = 2;
                  *(_QWORD *)(a1 + 8) = 4LL;
                  break;
                case 33:
                  goto LABEL_115;
                case 34:
                  goto LABEL_91;
                default:
                  if ( !(unsigned int)Feature_Arm64XMatching__private_IsEnabledDeviceUsageNoInline() )
                    goto LABEL_109;
                  v30 = 0;
                  IsArm64XBinary = AslpFileIsArm64XBinary(&v30, a2);
                  if ( IsArm64XBinary < 0 )
                  {
                    if ( IsArm64XBinary != -2147483614 )
                      AslLogCallPrintf(
                        1,
                        (unsigned int)"AslFileAllocAndGetAttributes",
                        809,
                        (unsigned int)"AslpFileIsArm64XBinary failed [%x]");
LABEL_109:
                    *(_DWORD *)(a1 + 1144) |= 2u;
                    break;
                  }
                  *(_DWORD *)(a1 + 1120) = 0;
                  v26 = v30;
                  *(_DWORD *)(a1 + 1144) |= 1u;
                  *(_QWORD *)(a1 + 1136) = v26;
                  *(_QWORD *)(a1 + 1128) = 1LL;
                  break;
              }
            }
            else
            {
              switch ( v21 )
              {
                case 27:
                  FileKindDetailAttribute = AslpFileGetClrVersionAttribute(a1, a2);
                  if ( FileKindDetailAttribute < 0 )
                  {
                    v19 = "AslpFileGetClrVersionAttribute failed [%x]";
                    v20 = 844;
                    goto LABEL_45;
                  }
                  break;
                case 19:
                  goto LABEL_115;
                case 20:
                case 21:
                  FileKindDetailAttribute = AslpFileGetHeaderAttributesNE(a1, a2);
                  if ( FileKindDetailAttribute < 0 )
                  {
                    v19 = "AslpFileGetHeaderAttributesNE failed [%x]";
                    v20 = 854;
                    goto LABEL_45;
                  }
                  break;
                case 22:
                  goto LABEL_115;
                case 23:
                  FileKindDetailAttribute = AslpFileGetPeExportNameAttribute(a1, a2);
                  if ( FileKindDetailAttribute < 0 )
                  {
                    v19 = "AslpFileGetPeExportNameAttribute failed [%x]";
                    v20 = 835;
                    goto LABEL_45;
                  }
                  break;
                case 24:
                  goto LABEL_64;
                case 25:
                  FileKindDetailAttribute = AslpFileGetExeWrapperAttribute(a1, a2);
                  if ( FileKindDetailAttribute < 0 )
                  {
                    v19 = "AslpFileGetExeWrapperAttribute failed [%x]";
                    v20 = 826;
                    goto LABEL_45;
                  }
                  break;
                default:
                  goto LABEL_91;
              }
            }
          }
          else
          {
            if ( v21 == 18 )
              goto LABEL_115;
            if ( v21 <= 9 )
            {
              if ( v21 == 9 )
                goto LABEL_64;
              if ( !v21 )
                goto LABEL_114;
              if ( v21 != 1 )
              {
                if ( v21 != 2 )
                {
                  if ( v21 != 3 && v21 != 4 && v21 != 5 && v21 != 6 && (unsigned int)(v21 - 7) > 1 )
                    return (unsigned int)-1073741595;
LABEL_64:
                  VersionAttributes = AslpFileGetVersionAttributes(a1, a2);
                  if ( VersionAttributes <= -1073741688 || (unsigned int)(VersionAttributes + 1073741684) <= 0x3FFFFF73 )
                    AslLogCallPrintf(
                      1,
                      (unsigned int)"AslFileAllocAndGetAttributes",
                      745,
                      (unsigned int)"AslpFileGetVersionAttributes failed [%x]");
                  goto LABEL_118;
                }
LABEL_91:
                FileKindDetailAttribute = AslpFileGetChecksumAttributes(a1, a2);
                if ( FileKindDetailAttribute < 0 )
                {
                  v19 = "AslpFileGetChecksumAttributes failed [%x]";
                  v20 = 865;
                  goto LABEL_45;
                }
                goto LABEL_118;
              }
LABEL_115:
              FileKindDetailAttribute = AslpFileGetHeaderAttributesPE(a1, a2);
              if ( FileKindDetailAttribute < 0 )
              {
                v19 = "AslpFileGetHeaderAttributesPE failed [%x]";
                v20 = 789;
                goto LABEL_45;
              }
              goto LABEL_118;
            }
            if ( v21 == 10 || v21 == 11 || v21 == 12 || v21 == 13 || v21 == 14 || v21 == 15 || v21 == 16 )
              goto LABEL_64;
            switch ( *(_DWORD *)(a2 + 64) )
            {
              case 4:
                v24 = 1LL;
                break;
              case 5:
                v24 = 2LL;
                break;
              case 6:
                v24 = 3LL;
                break;
              default:
                v24 = 0LL;
                break;
            }
            *(_DWORD *)(a1 + 568) |= 1u;
            *(_DWORD *)(a1 + 544) = 2;
            *(_QWORD *)(a1 + 552) = 4LL;
            *(_QWORD *)(a1 + 560) = v24;
          }
        }
LABEL_118:
        ++v21;
      }
    }
    v19 = "AslFileMappingEnsure failed [%x]";
    v20 = 682;
    goto LABEL_45;
  }
  return 0;
}
