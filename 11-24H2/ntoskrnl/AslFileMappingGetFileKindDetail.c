/*
 * XREFs of AslFileMappingGetFileKindDetail @ 0x140809A3C
 * Callers:
 *     AslpFileGetFileKindDetailAttribute @ 0x14080E0AC (AslpFileGetFileKindDetailAttribute.c)
 *     AslpFileIsArm64XBinary @ 0x14080F918 (AslpFileIsArm64XBinary.c)
 * Callees:
 *     AslFileMappingEnsure @ 0x14080989C (AslFileMappingEnsure.c)
 *     AslFileMappingGetImageTypeEx @ 0x140809C00 (AslFileMappingGetImageTypeEx.c)
 *     AslLogCallPrintf @ 0x140947C9C (AslLogCallPrintf.c)
 */

__int64 __fastcall AslFileMappingGetFileKindDetail(int *a1, __int64 a2)
{
  bool v3; // zf
  int v5; // ebx
  int ImageType; // edi
  const char *v7; // r9
  int v8; // r8d
  __int16 v10; // [rsp+70h] [rbp+38h] BYREF
  unsigned __int16 v11; // [rsp+78h] [rbp+40h] BYREF
  int v12; // [rsp+80h] [rbp+48h] BYREF
  int v13; // [rsp+88h] [rbp+50h] BYREF

  v3 = *(_DWORD *)(a2 + 64) == 1;
  v5 = 0;
  v11 = 0;
  v10 = 0;
  v13 = 0;
  v12 = 0;
  if ( !v3 )
  {
    ImageType = AslFileMappingEnsure(a2);
    if ( ImageType >= 0 )
    {
      switch ( *(_DWORD *)(a2 + 64) )
      {
        case 3:
          v5 = 2;
          goto LABEL_36;
        case 4:
          v5 = 3;
          goto LABEL_36;
        case 5:
          v5 = 4;
          goto LABEL_36;
        case 6:
          ImageType = AslFileMappingGetImageTypeEx(
                        (unsigned int)&v11,
                        (unsigned int)&v10,
                        (unsigned int)&v12,
                        (unsigned int)&v13,
                        a2);
          if ( ImageType >= 0 )
          {
            if ( v12 )
            {
              if ( v10 == 523 )
              {
                v5 = 15;
              }
              else if ( (v13 & 0x20002) == 0x20002 )
              {
                v5 = 14;
              }
              else
              {
                v5 = 13 - ((v13 & 0x20003) != 1);
              }
            }
            else if ( v10 == 523 )
            {
              if ( v11 == 512 )
              {
                v5 = 11;
              }
              else if ( v11 == 34404 )
              {
                v5 = 9;
              }
              else
              {
                v5 = 10;
                if ( v11 != 43620 )
                  v5 = 8;
              }
            }
            else if ( v11 == 332 )
            {
              v5 = 6;
            }
            else if ( v11 == 448 || v11 == 452 )
            {
              v5 = 7;
            }
            else
            {
              v5 = 5;
            }
            goto LABEL_36;
          }
          v7 = "AslFileMappingGetImageTypeEx failed [%x]";
          v8 = 1405;
          break;
        default:
          ImageType = -1073741823;
          v7 = "Unhandled ASL_FILE_KIND: %d";
          v8 = 1395;
          break;
      }
    }
    else
    {
      v7 = "AslFileMappingEnsure failed [%x]";
      v8 = 1360;
    }
    AslLogCallPrintf(1, (unsigned int)"AslFileMappingGetFileKindDetail", v8, (_DWORD)v7);
    goto LABEL_37;
  }
  v5 = 1;
LABEL_36:
  ImageType = 0;
LABEL_37:
  if ( a1 )
    *a1 = v5;
  return (unsigned int)ImageType;
}
