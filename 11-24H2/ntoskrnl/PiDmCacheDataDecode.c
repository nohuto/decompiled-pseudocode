/*
 * XREFs of PiDmCacheDataDecode @ 0x1408C7520
 * Callers:
 *     PiDmObjectProcessPropertyChange @ 0x1408B7B08 (PiDmObjectProcessPropertyChange.c)
 *     PiDmListUpdateAggregationCountWorker @ 0x140A6ABE8 (PiDmListUpdateAggregationCountWorker.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     ScanHexFormat @ 0x1408C8740 (ScanHexFormat.c)
 */

__int64 __fastcall PiDmCacheDataDecode(_DWORD *a1, _DWORD *a2, char *a3, unsigned int a4, unsigned int *a5)
{
  unsigned int v7; // ebx
  int v9; // ecx
  int v10; // eax
  __int64 v11; // rax
  unsigned int v13; // eax
  int v15; // ecx
  unsigned int v16; // r8d
  char *v17; // rcx
  char *v18; // rdx
  char v19; // al
  int v20; // ecx
  unsigned int v21; // eax
  int v22; // ecx
  unsigned int v23; // eax
  UNICODE_STRING DestinationString; // [rsp+70h] [rbp-38h] BYREF
  __int128 v25; // [rsp+80h] [rbp-28h] BYREF

  v7 = 0;
  v9 = *a1;
  DestinationString = 0LL;
  if ( v9 != 6 )
  {
    v15 = v9 - 2;
    if ( !v15 )
      return (unsigned int)-1073741275;
    v20 = v15 - 1;
    if ( !v20 )
    {
      *a2 = a1[2];
      v21 = a1[3];
      *a5 = v21;
      if ( a4 >= v21 )
      {
        memmove(a3, a1 + 4, v21);
        return v7;
      }
      return (unsigned int)-1073741789;
    }
    v22 = v20 - 1;
    if ( !v22 )
    {
      *a2 = 13;
      *a5 = 16;
      if ( a4 >= 0x10 )
      {
        *(_OWORD *)a3 = *(_OWORD *)(a1 + 2);
        return v7;
      }
      return (unsigned int)-1073741789;
    }
    if ( v22 == 1 )
    {
      *a2 = a1[2];
      v23 = a1[3];
      *a5 = v23;
      if ( a4 >= v23 )
      {
        memmove(a3, *((const void **)a1 + 2), v23);
        return v7;
      }
      return (unsigned int)-1073741789;
    }
    return (unsigned int)-1073741595;
  }
  v10 = a1[2];
  if ( v10 == 18 )
  {
    *a2 = 18;
    v11 = -1LL;
    while ( *(_WORD *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 16LL) + 2 * v11++ + 2) != 0 )
      ;
    v13 = 2 * v11 + 2;
    *a5 = v13;
    if ( a4 >= v13 )
    {
      memmove(a3, *(const void **)(*((_QWORD *)a1 + 2) + 16LL), v13);
      return v7;
    }
    return (unsigned int)-1073741789;
  }
  if ( v10 != 13 )
    return (unsigned int)-1073741595;
  *a2 = 13;
  *a5 = 16;
  if ( a4 < 0x10 )
    return (unsigned int)-1073741789;
  RtlInitUnicodeString(&DestinationString, *(PCWSTR *)(*((_QWORD *)a1 + 2) + 16LL));
  v25 = 0LL;
  if ( (unsigned int)ScanHexFormat(
                       DestinationString.Buffer,
                       DestinationString.Length >> 1,
                       L"{%08lx-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x}",
                       a3,
                       a3 + 4,
                       a3 + 6,
                       &v25,
                       (char *)&v25 + 2,
                       (char *)&v25 + 4,
                       (char *)&v25 + 6,
                       (char *)&v25 + 8,
                       (char *)&v25 + 10,
                       (char *)&v25 + 12,
                       (char *)&v25 + 14) == -1 )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    v16 = 0;
    v17 = a3 + 9;
    v18 = (char *)&v25 + 2;
    do
    {
      v16 += 8;
      *(v17 - 1) = *(v18 - 2);
      v17 += 8;
      v19 = *v18;
      v18 += 16;
      *(v17 - 8) = v19;
      *(v17 - 7) = *(v18 - 14);
      *(v17 - 6) = *(v18 - 12);
      *(v17 - 5) = *(v18 - 10);
      *(v17 - 4) = *(v18 - 8);
      *(v17 - 3) = *(v18 - 6);
      *(v17 - 2) = *(v18 - 4);
    }
    while ( v16 < 8 );
  }
  return v7;
}
