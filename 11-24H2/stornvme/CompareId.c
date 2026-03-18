/*
 * XREFs of CompareId @ 0x140001F10
 * Callers:
 *     IoctlToNVMe @ 0x140003580 (IoctlToNVMe.c)
 *     ReadMultiSzRegistryValueAndCompareId @ 0x14002FDAC (ReadMultiSzRegistryValueAndCompareId.c)
 * Callees:
 *     GetStringLength @ 0x140001010 (GetStringLength.c)
 *     StringToULONG @ 0x140030160 (StringToULONG.c)
 */

bool __fastcall CompareId(__int64 a1, unsigned int a2, unsigned __int64 StringLength, __int64 a4, __int64 a5)
{
  unsigned int v5; // edi
  char *v6; // r11
  char *v9; // r10
  unsigned int v10; // edx
  _BYTE *v11; // r11
  char v12; // bl
  unsigned int i; // ecx
  char v14; // al
  char v15; // dl
  int v17; // eax
  __int64 v18; // r11

  v5 = a4;
  v6 = (char *)StringLength;
  v9 = (char *)StringLength;
  if ( !a1 || !StringLength )
    return 1;
LABEL_3:
  if ( *v6 || (v12 = 0, v6[1]) )
  {
    if ( a2 < (unsigned int)GetStringLength(v6, v5) )
      StringLength = a2;
    else
      StringLength = (unsigned int)GetStringLength(v11, v10);
    if ( !(_DWORD)StringLength )
      return 0;
    v12 = 1;
    a4 = a1 - (_QWORD)v9;
    for ( i = 0; i < (unsigned int)StringLength; ++i )
    {
      v14 = *v9;
      if ( *v9 == 42 )
      {
        ++v9;
        break;
      }
      v15 = v9[a4];
      if ( !v15 || !v14 || v15 != v14 && v14 != 63 )
      {
        v17 = GetStringLength(v11, v5);
        v6 = (char *)((unsigned int)(v17 + 1) + v18);
        v9 = v6;
        goto LABEL_3;
      }
      ++v9;
    }
  }
  if ( a5 && v12 == 1 && *v9 == 32 )
    return (unsigned __int8)StringToULONG(v9 + 1, a5, StringLength, a4) != 0;
  return v12;
}
