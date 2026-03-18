/*
 * XREFs of RtlpImageDirectoryEntryToDataEx @ 0x140410020
 * Callers:
 *     RtlCaptureRetpolineImportRvas @ 0x140410524 (RtlCaptureRetpolineImportRvas.c)
 *     RtlpCaptureRetpolineBinaryInfoForImage @ 0x14069810C (RtlpCaptureRetpolineBinaryInfoForImage.c)
 * Callees:
 *     RtlpImageDirectoryEntryToData32 @ 0x1404101A4 (RtlpImageDirectoryEntryToData32.c)
 *     RtlAddressInSectionTable @ 0x140410250 (RtlAddressInSectionTable.c)
 */

__int64 __fastcall RtlpImageDirectoryEntryToDataEx(
        unsigned __int64 a1,
        unsigned __int8 a2,
        unsigned __int16 a3,
        _DWORD *a4,
        __int64 *a5)
{
  unsigned int v5; // ebx
  unsigned __int8 v6; // r10
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // r9
  __int16 v11; // ax
  __int64 v12; // rax
  __int64 v13; // r8
  __int64 v15; // rax
  unsigned __int64 v16; // rsi

  v5 = 0;
  v6 = a2;
  *a5 = 0LL;
  if ( (a1 & 3) != 0 )
  {
    v6 = 0;
    v9 = a1 & 1;
    a1 &= 0xFFFFFFFFFFFFFFFCuLL;
    if ( !v9 )
      v6 = a2;
  }
  if ( a1 - 1 > 0xFFFFFFFFFFFFFFFDuLL )
    return (unsigned int)-1073741811;
  if ( *(_WORD *)a1 != 23117 )
    return (unsigned int)-1073741701;
  v10 = a1 + *(unsigned int *)(a1 + 60);
  if ( v10 < a1 || a1 <= 0x7FFFFFFEFFFFLL && (v10 + 263 < v10 || v10 + 263 > 0x7FFFFFFEFFFFLL) )
    return (unsigned int)-1073741701;
  if ( *(_DWORD *)v10 != 17744 )
    return (unsigned int)-1073741701;
  v11 = *(_WORD *)(v10 + 24);
  if ( v11 == 267 )
    return (unsigned int)RtlpImageDirectoryEntryToData32(a1, v6, a3, (_DWORD)a4, v10, (__int64)a5);
  if ( v11 != 523 || (unsigned int)a3 >= *(_DWORD *)(v10 + 132) )
    return (unsigned int)-1073741811;
  v12 = a3;
  v13 = *(unsigned int *)(v10 + 8LL * a3 + 136);
  if ( (_DWORD)v13 )
  {
    if ( a1 <= 0x7FFFFFFEFFFFLL )
    {
      v16 = a1 + v13 - 1;
      if ( v16 > 0x7FFFFFFEFFFFLL || v16 < a1 )
        return (unsigned int)-1073741811;
    }
    *a4 = *(_DWORD *)(v10 + 8 * v12 + 140);
    if ( v6 || (unsigned int)v13 < *(_DWORD *)(v10 + 84) )
    {
      *a5 = v13 + a1;
    }
    else
    {
      v15 = RtlAddressInSectionTable(v10, a1);
      *a5 = v15;
      if ( !v15 )
        return (unsigned int)-1073741811;
    }
  }
  else
  {
    return (unsigned int)-1073741822;
  }
  return v5;
}
