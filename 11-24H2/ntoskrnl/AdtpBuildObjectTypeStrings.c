/*
 * XREFs of AdtpBuildObjectTypeStrings @ 0x140AB2284
 * Callers:
 *     AdtpPackageParameters @ 0x140448568 (AdtpPackageParameters.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     qsort @ 0x1404FC5E0 (qsort.c)
 *     AdtpBuildGuidString @ 0x140810FB8 (AdtpBuildGuidString.c)
 *     AdtpAppendString @ 0x140811740 (AdtpAppendString.c)
 *     AdtpAppendZString @ 0x1408118F4 (AdtpAppendZString.c)
 *     AdtpBuildAccessesString @ 0x140A6BDDC (AdtpBuildAccessesString.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall AdtpBuildObjectTypeStrings(
        const UNICODE_STRING *a1,
        const UNICODE_STRING *a2,
        _DWORD *a3,
        unsigned int a4,
        UNICODE_STRING *DestinationString,
        _BYTE *a6)
{
  const UNICODE_STRING *v6; // rsi
  size_t v7; // rbx
  unsigned int v8; // edi
  int v11; // r13d
  __int64 v12; // rax
  int v13; // r8d
  char v14; // si
  int appended; // ebx
  unsigned __int16 v16; // ax
  __int64 v17; // r8
  __int64 v18; // r9
  int v19; // [rsp+20h] [rbp-50h]
  char v20; // [rsp+50h] [rbp-20h] BYREF
  char v21; // [rsp+51h] [rbp-1Fh] BYREF
  int v22; // [rsp+54h] [rbp-1Ch] BYREF
  __int64 v23; // [rsp+58h] [rbp-18h]
  UNICODE_STRING v24; // [rsp+60h] [rbp-10h] BYREF

  v6 = a2;
  v7 = a4;
  v8 = 0;
  v24 = 0LL;
  v20 = 0;
  v22 = 0;
  RtlInitUnicodeString(DestinationString, &cchOriginalDestLength);
  *a6 = 0;
  if ( !(_DWORD)v7 )
    return 0LL;
  qsort(a3, v7, 0x18uLL, (int (__cdecl *)(const void *, const void *))CompareObjectTypes);
  v11 = a3[5] - 1;
  while ( v8 < (unsigned int)v7 )
  {
    v12 = 3LL * v8;
    v13 = a3[6 * v8 + 5];
    v23 = v12;
    if ( v13 != v11 )
    {
      v11 = v13;
      if ( v13 )
      {
        appended = AdtpBuildAccessesString(a1, v6, v13, 1, &v24, 0LL, 0LL, 0LL, &v20);
        if ( appended < 0 )
          return (unsigned int)appended;
        v14 = v20;
      }
      else
      {
        RtlInitUnicodeString(&v24, L"---\r\n");
        v14 = 0;
        v20 = 0;
      }
      appended = AdtpAppendString((__int64)DestinationString, (__int64)a6, &v24, &v22);
      if ( v14 )
        ExFreePoolWithTag(v24.Buffer, 0);
      if ( appended < 0 )
        return (unsigned int)appended;
      v12 = v23;
      v6 = a2;
    }
    v16 = HIWORD(a3[2 * v12 + 4]);
    if ( v16 >= 4u )
      v16 = 3;
    appended = AdtpAppendZString((__int64)DestinationString, (__int64)a6, off_14000C1F8[v16], &v22);
    if ( appended < 0 )
      return (unsigned int)appended;
    v21 = 0;
    appended = AdtpBuildGuidString(&a3[6 * v8], (__int64)&v24, v17, v18, v19, &v21);
    if ( appended < 0 )
      return (unsigned int)appended;
    appended = AdtpAppendString((__int64)DestinationString, (__int64)a6, &v24, &v22);
    ExFreePoolWithTag(v24.Buffer, 0);
    if ( appended < 0 )
      return (unsigned int)appended;
    appended = AdtpAppendZString((__int64)DestinationString, (__int64)a6, L"\r\n", &v22);
    if ( appended < 0 )
      return (unsigned int)appended;
    LODWORD(v7) = a4;
    ++v8;
  }
  return 0;
}
