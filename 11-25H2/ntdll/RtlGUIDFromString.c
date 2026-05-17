/*
 * XREFs of RtlGUIDFromString @ 0x1800DBEF0
 * Callers:
 *     RtlQueryPackageClaims @ 0x1800AF4B0 (RtlQueryPackageClaims.c)
 *     RtlRaiseCustomSystemEventTrigger @ 0x180148D00 (RtlRaiseCustomSystemEventTrigger.c)
 * Callees:
 *     ScanHexFormat @ 0x1800DC010 (ScanHexFormat.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 */

__int64 __fastcall RtlGUIDFromString(unsigned __int16 *a1, __int64 a2)
{
  __int64 v2; // r8
  __int64 v4; // rax
  unsigned int v5; // edx
  __int64 v6; // rcx
  unsigned int v7; // r8d
  __int64 v8; // rdx
  char *v9; // rax
  char v10; // cl
  __int128 v12; // [rsp+70h] [rbp-28h] BYREF

  v2 = a2 + 4;
  v4 = a2 + 6;
  v5 = *a1;
  v6 = *((_QWORD *)a1 + 1);
  v12 = 0LL;
  if ( (unsigned int)ScanHexFormat(
                       v6,
                       v5 >> 1,
                       L"{%08lx-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x}",
                       a2,
                       v2,
                       v4,
                       &v12,
                       (char *)&v12 + 2,
                       (char *)&v12 + 4,
                       (char *)&v12 + 6,
                       (char *)&v12 + 8,
                       (char *)&v12 + 10,
                       (char *)&v12 + 12,
                       (char *)&v12 + 14) == -1 )
    return 3221225485LL;
  v7 = 0;
  v8 = a2 + 9;
  v9 = (char *)&v12 + 2;
  do
  {
    v7 += 8;
    *(_BYTE *)(v8 - 1) = *(v9 - 2);
    v8 += 8LL;
    v10 = *v9;
    v9 += 16;
    *(_BYTE *)(v8 - 8) = v10;
    *(_BYTE *)(v8 - 7) = *(v9 - 14);
    *(_BYTE *)(v8 - 6) = *(v9 - 12);
    *(_BYTE *)(v8 - 5) = *(v9 - 10);
    *(_BYTE *)(v8 - 4) = *(v9 - 8);
    *(_BYTE *)(v8 - 3) = *(v9 - 6);
    *(_BYTE *)(v8 - 2) = *(v9 - 4);
  }
  while ( v7 < 8 );
  return 0LL;
}
