/*
 * XREFs of LdrpGetDllPath @ 0x180005DA0
 * Callers:
 *     LdrpComputeLazyDllPath @ 0x180005C40 (LdrpComputeLazyDllPath.c)
 *     LdrGetDllPath @ 0x180005D70 (LdrGetDllPath.c)
 * Callees:
 *     RtlDetermineDosPathNameType_U @ 0x180005BA0 (RtlDetermineDosPathNameType_U.c)
 *     LdrpLogDllStateEx2 @ 0x180006024 (LdrpLogDllStateEx2.c)
 *     RtlpGetCachedPath @ 0x180006160 (RtlpGetCachedPath.c)
 *     LdrpLogRelativePathWithAlteredSearchError @ 0x1800062D4 (LdrpLogRelativePathWithAlteredSearchError.c)
 */

__int64 __fastcall LdrpGetDllPath(
        PCWSTR DosFileName,
        int a2,
        _QWORD *a3,
        _QWORD *a4,
        _DWORD *a5,
        _OWORD *a6,
        _QWORD *a7)
{
  int v8; // edx
  bool v11; // r12
  unsigned int v12; // ebx
  __int64 v13; // r15
  char v14; // cl
  PCWSTR v15; // rbp
  char v16; // al
  PCWSTR v17; // r9
  __int64 (__fastcall *v18)(); // rdx
  PCWSTR v19; // r8
  __int64 *v20; // rcx
  __int64 CachedPath; // rax
  _QWORD *v22; // rcx
  RTL_PATH_TYPE v24; // eax
  bool v25; // [rsp+20h] [rbp-48h]
  char v26; // [rsp+78h] [rbp+10h]

  v8 = a2 & 0x2000;
  v11 = 0;
  v12 = a2 & 0xFFFFDFFF;
  v25 = v8 != 0;
  v13 = 0LL;
  if ( (v12 & 8) != 0 )
  {
    if ( v12 != 8 )
      return 3221225485LL;
    v14 = 1;
    v12 = 0;
    v26 = 1;
  }
  else
  {
    v14 = 0;
    v26 = 0;
    if ( v12 )
      goto LABEL_4;
  }
  v25 = v8 != 0;
  if ( LdrpDefaultDllDirectories )
  {
    v25 = v8 || (LdrpDefaultDllDirectories & 0x2000) != 0;
    v12 = LdrpDefaultDllDirectories & 0xFFFFDFFF;
  }
LABEL_4:
  v15 = 0LL;
  if ( (v12 & 0x100) == 0 && !v14 )
    goto LABEL_6;
  v24 = RtlDetermineDosPathNameType_U(DosFileName);
  if ( (unsigned int)(v24 - 1) > 1 )
  {
    if ( v24 != RtlPathTypeLocalDevice || DosFileName[2] != 63 )
    {
      v11 = 1;
      v15 = DosFileName;
      goto LABEL_33;
    }
    v11 = RtlDetermineDosPathNameType_U(DosFileName + 4) != RtlPathTypeDriveAbsolute;
  }
  v15 = DosFileName;
  if ( !v11 )
  {
LABEL_6:
    v16 = LdrpPolicyBits;
    goto LABEL_7;
  }
LABEL_33:
  if ( !v26 )
    goto LABEL_6;
  LdrpLogRelativePathWithAlteredSearchError(DosFileName);
  v16 = LdrpPolicyBits;
  if ( (LdrpPolicyBits & 0x40) != 0 )
  {
    v26 = 0;
    v11 = (v12 & 0x100) != 0;
  }
LABEL_7:
  if ( v12 )
  {
    if ( !v11 )
    {
      if ( (v12 & 0x1000) != 0 )
      {
        v12 |= 0xA00u;
        if ( (v16 & 4) != 0 )
          v12 |= 0x400u;
      }
      v19 = (PCWSTR)v12;
      v18 = RtlpComputeDllPathWithOptions;
      LODWORD(v19) = v12 | 0x100;
      v20 = &RtlpDllSearchPathWithOptions;
      v17 = v15;
      if ( !v26 )
        v19 = (PCWSTR)v12;
      goto LABEL_9;
    }
    return 3221225485LL;
  }
  v17 = 0LL;
  v18 = RtlpComputeDllPath;
  v19 = v15;
  v20 = &RtlpDllSearchPath;
LABEL_9:
  CachedPath = RtlpGetCachedPath(v20, v18, v19, v17);
  if ( CachedPath )
  {
    *a7 = *(_QWORD *)(CachedPath + 104);
    if ( a6 )
    {
      *a6 = *(_OWORD *)CachedPath;
      a6[1] = *(_OWORD *)(CachedPath + 16);
      a6[2] = *(_OWORD *)(CachedPath + 32);
      a6[3] = *(_OWORD *)(CachedPath + 48);
      a6[4] = *(_OWORD *)(CachedPath + 64);
    }
    *a3 = CachedPath + 128;
    v22 = a4;
    if ( a4 )
    {
      if ( v25 )
        v13 = *(_QWORD *)(CachedPath + 120);
      *a4 = v13;
    }
    if ( a5 )
    {
      v22 = (_QWORD *)*(unsigned int *)(CachedPath + 112);
      *a5 = (_DWORD)v22;
    }
    LdrpLogDllStateEx2(v22, DosFileName, *a3, 5313LL);
    return 0LL;
  }
  else
  {
    *a3 = 0LL;
    if ( a4 )
      *a4 = 0LL;
    *a7 = 0LL;
    return 3221225495LL;
  }
}
