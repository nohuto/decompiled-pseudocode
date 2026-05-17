/*
 * XREFs of RtlpIsAppContainer @ 0x180118224
 * Callers:
 *     RtlpCapabilityCheckSystemCapability @ 0x18003C348 (RtlpCapabilityCheckSystemCapability.c)
 * Callees:
 *     NtClose @ 0x180161E70 (NtClose.c)
 *     NtQueryInformationToken @ 0x1801620B0 (NtQueryInformationToken.c)
 *     NtOpenThreadTokenEx @ 0x180162270 (NtOpenThreadTokenEx.c)
 *     NtOpenProcessTokenEx @ 0x180162290 (NtOpenProcessTokenEx.c)
 *     NtDuplicateToken @ 0x1801624D0 (NtDuplicateToken.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 */

__int64 __fastcall RtlpIsAppContainer(HANDLE a1, bool *a2, __int64 a3)
{
  int v4; // ebx
  int v6; // [rsp+30h] [rbp-19h] BYREF
  HANDLE v7; // [rsp+38h] [rbp-11h]
  int v8; // [rsp+40h] [rbp-9h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-1h] BYREF
  __int128 v10; // [rsp+50h] [rbp+7h] BYREF
  __int128 v11; // [rsp+60h] [rbp+17h]
  __int64 v12; // [rsp+70h] [rbp+27h]
  __int64 *v13; // [rsp+78h] [rbp+2Fh]
  __int64 v14; // [rsp+80h] [rbp+37h] BYREF
  int v15; // [rsp+88h] [rbp+3Fh]

  v6 = 0;
  Handle = 0LL;
  v7 = 0LL;
  v12 = 0LL;
  LODWORD(v13) = 0;
  v14 = 0LL;
  v15 = 0;
  *a2 = 0;
  v10 = 0LL;
  v11 = 0LL;
  if ( a1 )
  {
LABEL_7:
    v8 = 0;
    v4 = NtQueryInformationToken(a1, 29LL, &v6, 4LL, &v8);
    if ( v4 >= 0 )
      *a2 = v6 != 0;
    goto LABEL_9;
  }
  LOBYTE(a3) = 1;
  v4 = NtOpenThreadTokenEx(-2LL, 8LL, a3);
  if ( v4 == -1073741700 )
  {
    v4 = NtOpenProcessTokenEx(-1LL, 10LL, 0LL, &Handle);
    if ( v4 < 0 )
      goto LABEL_9;
    *((_QWORD *)&v10 + 1) = 0LL;
    DWORD2(v11) = 0;
    *(_QWORD *)&v11 = 0LL;
    v12 = 0LL;
    v13 = &v14;
    LODWORD(v10) = 48;
    v14 = 0x20000000CLL;
    LOWORD(v15) = 1;
    v4 = NtDuplicateToken(Handle, 8LL, &v10);
    NtClose(Handle);
  }
  if ( v4 >= 0 )
  {
    a1 = v7;
    goto LABEL_7;
  }
LABEL_9:
  if ( v7 )
    NtClose(v7);
  return (unsigned int)v4;
}
