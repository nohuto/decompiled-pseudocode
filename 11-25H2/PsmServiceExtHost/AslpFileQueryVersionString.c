/*
 * XREFs of AslpFileQueryVersionString @ 0x1800A3010
 * Callers:
 *     AslpFileMakeStringVersionAttributes @ 0x1800A29B8 (AslpFileMakeStringVersionAttributes.c)
 * Callees:
 *     RtlStringCchCopyW @ 0x180063728 (RtlStringCchCopyW.c)
 *     AslLogCallPrintf @ 0x1800717F0 (AslLogCallPrintf.c)
 *     RtlStringCchCatW @ 0x180091B18 (RtlStringCchCatW.c)
 *     RtlStringCchPrintfW @ 0x180091BA4 (RtlStringCchPrintfW.c)
 *     AslpFileVerQueryBlock @ 0x1800A3380 (AslpFileVerQueryBlock.c)
 *     AslpFileVerStringBlockGetValue @ 0x1800A3574 (AslpFileVerStringBlockGetValue.c)
 *     __security_check_cookie @ 0x1800A7850 (__security_check_cookie.c)
 */

__int64 __fastcall AslpFileQueryVersionString(
        _QWORD *a1,
        _QWORD *a2,
        __int64 a3,
        unsigned __int16 *a4,
        unsigned __int64 a5,
        __int64 a6)
{
  unsigned __int64 v10; // rdi
  int v11; // ebx
  int v12; // eax
  unsigned __int64 i; // rdi
  int v14; // eax
  __int64 v16; // [rsp+20h] [rbp-E0h]
  __int64 v17; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v18; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v19; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v20; // [rsp+48h] [rbp-B8h] BYREF
  _WORD v21[128]; // [rsp+50h] [rbp-B0h] BYREF

  *a1 = 0LL;
  *a2 = 0LL;
  v21[0] = 0;
  v20 = 0LL;
  v19 = 0LL;
  v10 = 0LL;
  v18 = 0LL;
  v17 = 0LL;
  while ( v10 < 4 )
  {
    v11 = RtlStringCchCopyW(v21, 128LL, (__int64)off_1800BF240[v10]);
    if ( v11 < 0 || (v11 = RtlStringCchCatW(v21, 128LL, a6), v11 < 0) )
    {
LABEL_17:
      AslLogCallPrintf(1LL);
      return (unsigned int)v11;
    }
    v12 = AslpFileVerQueryBlock(a3, v21, &v18, &v17);
    v11 = v12;
    if ( v12 >= 0 )
    {
      if ( (int)AslpFileVerStringBlockGetValue(&v20, &v19, v18, v17) >= 0 )
      {
LABEL_20:
        *a2 = v19;
        *a1 = v20;
        return 0LL;
      }
      break;
    }
    if ( v12 != -1073741275 )
      goto LABEL_17;
    ++v10;
  }
  if ( a4 )
  {
    for ( i = 0LL; i < a5; ++i )
    {
      LODWORD(v16) = a4[1];
      v11 = RtlStringCchPrintfW(v21, 128LL, (__int64)L"\\StringFileInfo\\%04X%04X\\%s", *a4, v16, a6);
      if ( v11 < 0 )
        goto LABEL_17;
      v14 = AslpFileVerQueryBlock(a3, v21, &v18, &v17);
      v11 = v14;
      if ( v14 >= 0 )
      {
        if ( (int)AslpFileVerStringBlockGetValue(&v20, &v19, v18, v17) < 0 )
          return 3221226021LL;
        goto LABEL_20;
      }
      if ( v14 != -1073741275 )
        goto LABEL_17;
      a4 += 2;
    }
  }
  return 3221226021LL;
}
