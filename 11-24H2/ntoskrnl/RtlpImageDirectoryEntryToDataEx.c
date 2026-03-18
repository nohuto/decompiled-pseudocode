/*
 * XREFs of RtlpImageDirectoryEntryToDataEx @ 0x14042CC7C
 * Callers:
 *     RtlCaptureRetpolineImportRvas @ 0x14042C560 (RtlCaptureRetpolineImportRvas.c)
 *     RtlpCaptureRetpolineBinaryInfoForImage @ 0x1406A32EC (RtlpCaptureRetpolineBinaryInfoForImage.c)
 * Callees:
 *     RtlpImageDirectoryEntryToData32 @ 0x14042CE00 (RtlpImageDirectoryEntryToData32.c)
 *     RtlAddressInSectionTable @ 0x14042CEAC (RtlAddressInSectionTable.c)
 */

__int64 __fastcall RtlpImageDirectoryEntryToDataEx(
        unsigned __int64 a1,
        char a2,
        unsigned __int16 a3,
        _DWORD *a4,
        __int64 *a5)
{
  unsigned int v5; // r10d
  char v6; // bl
  unsigned __int64 v8; // r11
  unsigned __int64 v9; // rcx
  __int16 v10; // ax
  int v11; // edx
  __int64 v12; // r9
  __int64 v13; // r8
  unsigned __int64 v15; // rax
  __int64 v16; // rax

  v5 = 0;
  v6 = a2;
  v8 = a1;
  *a5 = 0LL;
  if ( (a1 & 3) != 0 )
  {
    v8 = a1 & 0xFFFFFFFFFFFFFFFCuLL;
    v6 = 0;
    if ( (a1 & 1) == 0 )
      v6 = a2;
  }
  if ( v8 - 1 > 0xFFFFFFFFFFFFFFFDuLL )
    return (unsigned int)-1073741811;
  if ( *(_WORD *)v8 == 23117
    && (v9 = v8 + *(unsigned int *)(v8 + 60), v9 >= v8)
    && (v8 > 0x7FFFFFFEFFFFLL || v9 + 263 >= v9 && v9 + 263 <= 0x7FFFFFFEFFFFLL)
    && *(_DWORD *)v9 == 17744 )
  {
    v10 = *(_WORD *)(v9 + 24);
    v11 = 267;
    if ( v10 == 267 )
    {
      LOBYTE(v11) = v6;
      return (unsigned int)RtlpImageDirectoryEntryToData32(v8, v11, a3, (_DWORD)a4, v9, (__int64)a5);
    }
    if ( v10 != 523 || (unsigned int)a3 >= *(_DWORD *)(v9 + 132) )
      return (unsigned int)-1073741811;
    v12 = a3;
    v13 = *(unsigned int *)(v9 + 8LL * a3 + 136);
    if ( (_DWORD)v13 )
    {
      if ( v8 <= 0x7FFFFFFEFFFFLL )
      {
        v15 = v8 + v13 - 1;
        if ( v15 > 0x7FFFFFFEFFFFLL || v15 < v8 )
          return (unsigned int)-1073741811;
      }
      *a4 = *(_DWORD *)(v9 + 8 * v12 + 140);
      if ( v6 || (unsigned int)v13 < *(_DWORD *)(v9 + 84) )
      {
        *a5 = v13 + v8;
      }
      else
      {
        v16 = RtlAddressInSectionTable(v9, v8);
        *a5 = v16;
        return v16 == 0 ? 0xC000000D : 0;
      }
    }
    else
    {
      return (unsigned int)-1073741822;
    }
  }
  else
  {
    return (unsigned int)-1073741701;
  }
  return v5;
}
