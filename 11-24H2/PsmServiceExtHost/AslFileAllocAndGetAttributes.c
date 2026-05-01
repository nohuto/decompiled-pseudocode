/*
 * XREFs of AslFileAllocAndGetAttributes @ 0x18009FB14
 * Callers:
 *     SdbpCheckAllAttributes @ 0x180096F1C (SdbpCheckAllAttributes.c)
 * Callees:
 *     AslLogCallPrintf @ 0x180071658 (AslLogCallPrintf.c)
 *     AslFileMappingEnsure @ 0x18009F0F0 (AslFileMappingEnsure.c)
 *     AslpFileGetChecksumAttributes @ 0x1800A0368 (AslpFileGetChecksumAttributes.c)
 *     AslpFileGetClrVersionAttribute @ 0x1800A07A0 (AslpFileGetClrVersionAttribute.c)
 *     AslpFileGetExeWrapperAttribute @ 0x1800A0EEC (AslpFileGetExeWrapperAttribute.c)
 *     AslpFileGetFileKindDetailAttribute @ 0x1800A1068 (AslpFileGetFileKindDetailAttribute.c)
 *     AslpFileGetHeaderAttributesNE @ 0x1800A10EC (AslpFileGetHeaderAttributesNE.c)
 *     AslpFileGetHeaderAttributesPE @ 0x1800A1294 (AslpFileGetHeaderAttributesPE.c)
 *     AslpFileGetPeExportNameAttribute @ 0x1800A1AB8 (AslpFileGetPeExportNameAttribute.c)
 *     AslpFileGetVersionAttributes @ 0x1800A1B9C (AslpFileGetVersionAttributes.c)
 *     AslpFileIsArm64XBinary @ 0x1800A29D8 (AslpFileIsArm64XBinary.c)
 *     Feature_Arm64XMatching__private_IsEnabledDeviceUsageNoInline @ 0x1800A3AD4 (Feature_Arm64XMatching__private_IsEnabledDeviceUsageNoInline.c)
 *     AslpFileLargeEnsureLargeFileMapping @ 0x1800A7110 (AslpFileLargeEnsureLargeFileMapping.c)
 */

__int64 __fastcall AslFileAllocAndGetAttributes(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  int ClrVersionAttribute; // ebx
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
  int v19; // ebp
  __int64 j; // r13
  int VersionAttributes; // eax
  __int64 v22; // rax
  int IsArm64XBinary; // eax
  __int64 v24; // rax
  __int64 v25; // rax
  unsigned __int8 v28; // [rsp+88h] [rbp+20h] BYREF

  if ( a3 )
  {
    if ( *(_DWORD *)(a2 + 56) == 1 )
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
    if ( *(_DWORD *)(a2 + 72) )
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
    ClrVersionAttribute = v18;
    if ( v18 == -1073741801 )
    {
      if ( *(_DWORD *)(a2 + 72) )
        goto LABEL_44;
      ClrVersionAttribute = AslpFileLargeEnsureLargeFileMapping(a1, a2);
      if ( ClrVersionAttribute < 0 )
        goto LABEL_44;
    }
    else if ( v18 < 0 )
    {
LABEL_44:
      AslLogCallPrintf(1LL);
      return (unsigned int)ClrVersionAttribute;
    }
    v19 = 0;
    for ( j = 0LL; ; j += 32LL )
    {
      if ( ((a3 >> v19) & 1) == 0 || (*(_BYTE *)(a1 + j + 24) & 3) != 0 )
        goto LABEL_116;
      if ( v19 <= 18 )
      {
        if ( v19 == 18 )
          goto LABEL_113;
        if ( v19 > 9 )
        {
          if ( v19 != 10 && v19 != 11 && v19 != 12 && v19 != 13 && v19 != 14 && v19 != 15 && v19 != 16 )
          {
            switch ( *(_DWORD *)(a2 + 56) )
            {
              case 4:
                v22 = 1LL;
                break;
              case 5:
                v22 = 2LL;
                break;
              case 6:
                v22 = 3LL;
                break;
              default:
                v22 = 0LL;
                break;
            }
            *(_DWORD *)(a1 + 568) |= 1u;
            *(_DWORD *)(a1 + 544) = 2;
            *(_QWORD *)(a1 + 552) = 4LL;
            *(_QWORD *)(a1 + 560) = v22;
            goto LABEL_116;
          }
          goto LABEL_62;
        }
        if ( v19 == 9 )
          goto LABEL_62;
        if ( v19 )
        {
          if ( v19 == 1 )
            goto LABEL_113;
          if ( v19 == 2 )
            goto LABEL_89;
          if ( v19 != 3 && v19 != 4 && v19 != 5 && v19 != 6 && (unsigned int)(v19 - 7) > 1 )
            return (unsigned int)-1073741595;
LABEL_62:
          VersionAttributes = AslpFileGetVersionAttributes(a1, a2);
          if ( VersionAttributes <= -1073741688 || (unsigned int)(VersionAttributes + 1073741684) <= 0x3FFFFF73 )
            AslLogCallPrintf(1LL);
          goto LABEL_116;
        }
LABEL_112:
        v25 = *(_QWORD *)(a2 + 24);
        *(_DWORD *)(a1 + 1048) |= 1u;
        *(_DWORD *)(a1 + 24) |= 1u;
        *(_QWORD *)(a1 + 16) = (unsigned int)v25;
        *(_DWORD *)(a1 + 1024) = 3;
        *(_QWORD *)(a1 + 1032) = 8LL;
        *(_QWORD *)(a1 + 1040) = v25;
        *(_DWORD *)a1 = 2;
        *(_QWORD *)(a1 + 8) = 4LL;
        goto LABEL_116;
      }
      if ( v19 <= 27 )
      {
        switch ( v19 )
        {
          case 27:
            ClrVersionAttribute = AslpFileGetClrVersionAttribute(a1, a2);
            if ( ClrVersionAttribute < 0 )
              goto LABEL_44;
            goto LABEL_116;
          case 19:
            goto LABEL_113;
          case 20:
          case 21:
            ClrVersionAttribute = AslpFileGetHeaderAttributesNE(a1, a2);
            if ( ClrVersionAttribute < 0 )
              goto LABEL_44;
            goto LABEL_116;
          case 22:
            goto LABEL_113;
          case 23:
            ClrVersionAttribute = AslpFileGetPeExportNameAttribute(a1, a2);
            if ( ClrVersionAttribute < 0 )
              goto LABEL_44;
            goto LABEL_116;
        }
        if ( v19 != 24 )
        {
          if ( v19 == 25 )
          {
            ClrVersionAttribute = AslpFileGetExeWrapperAttribute(a1, a2);
            if ( ClrVersionAttribute < 0 )
              goto LABEL_44;
            goto LABEL_116;
          }
LABEL_89:
          ClrVersionAttribute = AslpFileGetChecksumAttributes(a1, a2);
          if ( ClrVersionAttribute < 0 )
            goto LABEL_44;
          goto LABEL_116;
        }
        goto LABEL_62;
      }
      switch ( v19 )
      {
        case 28:
          ClrVersionAttribute = AslpFileGetFileKindDetailAttribute(a1, a2);
          if ( ClrVersionAttribute < 0 )
            goto LABEL_44;
          goto LABEL_116;
        case 29:
        case 30:
        case 31:
LABEL_113:
          ClrVersionAttribute = AslpFileGetHeaderAttributesPE(a1, a2);
          if ( ClrVersionAttribute < 0 )
            goto LABEL_44;
          goto LABEL_116;
        case 32:
          goto LABEL_112;
        case 33:
          goto LABEL_113;
        case 34:
          goto LABEL_89;
      }
      if ( (unsigned int)Feature_Arm64XMatching__private_IsEnabledDeviceUsageNoInline((unsigned int)(v19 - 34)) )
      {
        v28 = 0;
        IsArm64XBinary = AslpFileIsArm64XBinary(&v28, a2);
        if ( IsArm64XBinary >= 0 )
        {
          *(_DWORD *)(a1 + 1120) = 0;
          v24 = v28;
          *(_DWORD *)(a1 + 1144) |= 1u;
          *(_QWORD *)(a1 + 1136) = v24;
          *(_QWORD *)(a1 + 1128) = 1LL;
          goto LABEL_116;
        }
        if ( IsArm64XBinary != -2147483614 )
          AslLogCallPrintf(1LL);
      }
      *(_DWORD *)(a1 + 1144) |= 2u;
LABEL_116:
      if ( ++v19 >= 36 )
        return 0;
    }
  }
  return 0;
}
