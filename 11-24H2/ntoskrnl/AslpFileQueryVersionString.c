/*
 * XREFs of AslpFileQueryVersionString @ 0x14081021C
 * Callers:
 *     AslpFileMakeStringVersionAttributes @ 0x14080FBCC (AslpFileMakeStringVersionAttributes.c)
 * Callees:
 *     RtlStringCchCopyW @ 0x14043615C (RtlStringCchCopyW.c)
 *     RtlStringCchPrintfW @ 0x140472F38 (RtlStringCchPrintfW.c)
 *     RtlStringCchCatW @ 0x1404B73B0 (RtlStringCchCatW.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     AslpFileVerStringBlockGetValue @ 0x140810450 (AslpFileVerStringBlockGetValue.c)
 *     AslpFileVerQueryBlock @ 0x14094329C (AslpFileVerQueryBlock.c)
 *     AslLogCallPrintf @ 0x140947C9C (AslLogCallPrintf.c)
 */

__int64 __fastcall AslpFileQueryVersionString(
        _QWORD *a1,
        _QWORD *a2,
        __int64 a3,
        unsigned __int16 *a4,
        unsigned __int64 a5,
        NTSTRSAFE_PCWSTR pszSrc)
{
  unsigned __int64 v10; // rdi
  NTSTATUS v11; // ebx
  int v12; // eax
  const char *v13; // r9
  int v14; // r8d
  unsigned __int64 i; // rdi
  int v16; // eax
  __int64 v18; // [rsp+20h] [rbp-E0h]
  __int64 v19; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v20; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v21; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v22; // [rsp+48h] [rbp-B8h] BYREF
  wchar_t pszDest[128]; // [rsp+50h] [rbp-B0h] BYREF

  *a1 = 0LL;
  *a2 = 0LL;
  pszDest[0] = 0;
  v22 = 0LL;
  v21 = 0LL;
  v10 = 0LL;
  v20 = 0LL;
  v19 = 0LL;
  while ( 1 )
  {
    if ( v10 >= 4 )
      goto LABEL_10;
    v11 = RtlStringCchCopyW(pszDest, 0x80uLL, off_14000BFE8[v10]);
    if ( v11 < 0 )
    {
      v13 = "RtlStringCchCopyW failed [%x]";
      v14 = 3160;
      goto LABEL_19;
    }
    v11 = RtlStringCchCatW(pszDest, 0x80uLL, pszSrc);
    if ( v11 < 0 )
    {
      v13 = "RtlStringCchCatW failed [%x]";
      v14 = 3166;
      goto LABEL_19;
    }
    v12 = AslpFileVerQueryBlock(a3, pszDest, &v20, &v19);
    v11 = v12;
    if ( v12 >= 0 )
      break;
    if ( v12 != -1073741275 )
    {
      v13 = "AslpFileVerQueryBlock failed [%x]";
      v14 = 3196;
LABEL_19:
      AslLogCallPrintf(1, (unsigned int)"AslpFileQueryVersionString", v14, (_DWORD)v13);
      return (unsigned int)v11;
    }
    ++v10;
  }
  if ( (int)AslpFileVerStringBlockGetValue(&v22, &v21, v20, v19) >= 0 )
  {
LABEL_22:
    *a2 = v21;
    *a1 = v22;
    return 0LL;
  }
  else
  {
LABEL_10:
    if ( a4 )
    {
      for ( i = 0LL; i < a5; ++i )
      {
        LODWORD(v18) = a4[1];
        v11 = RtlStringCchPrintfW(pszDest, 0x80uLL, L"\\StringFileInfo\\%04X%04X\\%s", *a4, v18, pszSrc);
        if ( v11 < 0 )
        {
          v13 = "RtlStringCchPrintfW failed [%x]";
          v14 = 3214;
          goto LABEL_19;
        }
        v16 = AslpFileVerQueryBlock(a3, pszDest, &v20, &v19);
        v11 = v16;
        if ( v16 >= 0 )
        {
          if ( (int)AslpFileVerStringBlockGetValue(&v22, &v21, v20, v19) < 0 )
            return 3221226021LL;
          goto LABEL_22;
        }
        if ( v16 != -1073741275 )
        {
          v13 = "AslpFileVerQueryBlock failed [%x]";
          v14 = 3244;
          goto LABEL_19;
        }
        a4 += 2;
      }
    }
    return 3221226021LL;
  }
}
