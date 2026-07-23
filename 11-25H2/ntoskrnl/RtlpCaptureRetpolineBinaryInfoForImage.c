/*
 * XREFs of RtlpCaptureRetpolineBinaryInfoForImage @ 0x14069810C
 * Callers:
 *     RtlPerformRetpolineRelocationsOnImageEx @ 0x140697B80 (RtlPerformRetpolineRelocationsOnImageEx.c)
 *     RtlUpdateImportRelocationsInImage @ 0x140697EC8 (RtlUpdateImportRelocationsInImage.c)
 * Callees:
 *     RtlpImageDirectoryEntryToDataEx @ 0x140410020 (RtlpImageDirectoryEntryToDataEx.c)
 *     LdrImageDirectoryEntryToLoadConfig @ 0x140A63300 (LdrImageDirectoryEntryToLoadConfig.c)
 */

__int64 __fastcall RtlpCaptureRetpolineBinaryInfoForImage(
        unsigned __int64 BaseOfImage,
        __int64 a2,
        unsigned int a3,
        __int64 a4,
        unsigned int *a5,
        __int64 a6)
{
  unsigned int v6; // ebx
  __int64 v7; // r15
  _DWORD *Config; // rax
  unsigned int *v12; // rdx
  __int64 v13; // rdi
  __int64 v14; // r8
  unsigned int v15; // ecx
  unsigned int v16; // eax
  unsigned int v17; // ecx
  unsigned int v18; // eax
  __int64 v19; // rcx
  unsigned int v21; // [rsp+30h] [rbp-28h] BYREF
  __int64 v22[4]; // [rsp+38h] [rbp-20h] BYREF

  v6 = 0;
  v7 = a3;
  v22[0] = 0LL;
  *(_OWORD *)a6 = 0LL;
  *(_OWORD *)(a6 + 16) = 0LL;
  *(_OWORD *)(a6 + 32) = 0LL;
  *(_QWORD *)(a6 + 48) = 0LL;
  Config = (_DWORD *)LdrImageDirectoryEntryToLoadConfig(BaseOfImage);
  if ( Config && *Config >= 0xC8u )
  {
    if ( *((_QWORD *)Config + 15) )
      *(_DWORD *)a6 = Config[30] - a2;
    RtlpImageDirectoryEntryToDataEx(BaseOfImage, 1, 0xCu, &v21, v22);
    if ( v22[0] )
      *(_DWORD *)(a6 + 4) = LODWORD(v22[0]) - BaseOfImage;
    if ( a4 )
    {
      v12 = a5;
      v13 = a4 - a2;
      v14 = 16LL;
      v15 = a5[17];
      if ( v15 <= a5[16] )
        v15 = a5[16];
      v16 = a5[18];
      if ( v16 <= v15 )
        v16 = v15;
      v17 = a5[19];
      if ( v17 <= v16 )
        v17 = v16;
      do
      {
        v18 = *v12++;
        if ( v18 <= v17 )
          v18 = v17;
        v17 = v18;
        --v14;
      }
      while ( v14 );
      v19 = v13 + v18;
      if ( v19 < v13 || v19 > 0x7FFFFFFF || v13 - v7 < (__int64)0xFFFFFFFF80000000uLL )
        return (unsigned int)-1073741776;
      else
        *(_DWORD *)(a6 + 48) = v13;
    }
  }
  else
  {
    return (unsigned int)-1073741637;
  }
  return v6;
}
