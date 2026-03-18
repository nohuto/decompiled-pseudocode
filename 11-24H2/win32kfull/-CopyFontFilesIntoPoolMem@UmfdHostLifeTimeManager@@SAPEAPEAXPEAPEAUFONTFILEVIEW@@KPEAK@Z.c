/*
 * XREFs of ?CopyFontFilesIntoPoolMem@UmfdHostLifeTimeManager@@SAPEAPEAXPEAPEAUFONTFILEVIEW@@KPEAK@Z @ 0x1403361F8
 * Callers:
 *     ?CaptureLiveDumpWithFontFiles@UmfdHostLifeTimeManager@@SAXPEAUExtendedContext@1@@Z @ 0x140336144 (-CaptureLiveDumpWithFontFiles@UmfdHostLifeTimeManager@@SAXPEAUExtendedContext@1@@Z.c)
 * Callees:
 *     PALLOCMEM @ 0x1400FEC9C (PALLOCMEM.c)
 *     ComputeFileviewCheckSum @ 0x140114610 (ComputeFileviewCheckSum.c)
 *     EngMapFile @ 0x140304DB0 (EngMapFile.c)
 *     ??1FontFileBackupMapper@UmfdHostLifeTimeManager@@QEAA@XZ @ 0x1403360E8 (--1FontFileBackupMapper@UmfdHostLifeTimeManager@@QEAA@XZ.c)
 *     memmove @ 0x140340480 (memmove.c)
 */

void **__fastcall UmfdHostLifeTimeManager::CopyFontFilesIntoPoolMem(
        struct FONTFILEVIEW **a1,
        unsigned int a2,
        unsigned int *a3)
{
  void **result; // rax
  void **v7; // rsi
  __int64 i; // rdi
  struct FONTFILEVIEW *v9; // r9
  ULONG_PTR v10; // r12
  ULONG v11; // edx
  PVOID v12; // rax
  void *v13; // rax
  _DWORD *v14; // rcx
  ULONG_PTR ViewSize[3]; // [rsp+20h] [rbp-68h] BYREF
  PVOID MappedBase; // [rsp+38h] [rbp-50h] BYREF
  ULONG_PTR piFile; // [rsp+40h] [rbp-48h] BYREF
  bool v18; // [rsp+48h] [rbp-40h]

  result = (void **)PALLOCMEM(8 * a2, 1886221383LL);
  v7 = result;
  ViewSize[1] = (ULONG_PTR)result;
  if ( result )
  {
    if ( a3 )
      *a3 = 0;
    for ( i = 0LL; ; i = (unsigned int)(i + 1) )
    {
      if ( (unsigned int)i >= a2 )
        return v7;
      v9 = a1[i];
      v10 = *((unsigned int *)v9 + 6);
      ViewSize[2] = v10;
      MappedBase = 0LL;
      piFile = 0LL;
      v18 = 0;
      v11 = *((_DWORD *)v9 + 6);
      ViewSize[0] = v11;
      v12 = (PVOID)*((_QWORD *)v9 + 2);
      if ( !v12 )
      {
        if ( *((_QWORD *)v9 + 4) )
        {
          v18 = MmMapViewInSessionSpace(*((PVOID *)v9 + 4), &MappedBase, ViewSize) >= 0;
          goto LABEL_11;
        }
        v12 = EngMapFile(*((LPWSTR *)v9 + 10), v11, &piFile);
      }
      MappedBase = v12;
LABEL_11:
      if ( MappedBase )
      {
        v13 = (void *)PALLOCMEM(v10, 1886221383LL);
        v7[i] = v13;
        if ( v13 )
          memmove(v13, MappedBase, v10);
        if ( a3 )
        {
          v14 = MappedBase;
          if ( v7[i] )
            v14 = v7[i];
          *a3 += ComputeFileviewCheckSum(v14, v10);
        }
      }
      UmfdHostLifeTimeManager::FontFileBackupMapper::~FontFileBackupMapper((UmfdHostLifeTimeManager::FontFileBackupMapper *)&MappedBase);
    }
  }
  return result;
}
