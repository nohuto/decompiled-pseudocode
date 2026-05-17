/*
 * XREFs of RtlpCreateIFEOKeyFilterKey @ 0x1800B441C
 * Callers:
 *     RtlpOpenImageFileOptionsKeyEx @ 0x1800B2F18 (RtlpOpenImageFileOptionsKeyEx.c)
 * Callees:
 *     RtlRandomEx @ 0x180003420 (RtlRandomEx.c)
 *     RtlFreeAnsiString @ 0x1800832E0 (RtlFreeAnsiString.c)
 *     RtlStringFromGUIDEx @ 0x1800EB410 (RtlStringFromGUIDEx.c)
 *     NtClose @ 0x180163400 (NtClose.c)
 *     ZwCreateKey @ 0x1801635C0 (ZwCreateKey.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 */

__int64 __fastcall RtlpCreateIFEOKeyFilterKey(_QWORD *a1, __int64 a2, unsigned int a3)
{
  void *v4; // rcx
  __int128 *v7; // rbx
  __int64 v8; // rdi
  __int64 v9; // r8
  int v10; // ebx
  int v12; // [rsp+40h] [rbp-49h] BYREF
  __int32 v13; // [rsp+44h] [rbp-45h] BYREF
  void *v14; // [rsp+48h] [rbp-41h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+50h] [rbp-39h] BYREF
  __int128 v16; // [rsp+60h] [rbp-29h] BYREF
  __int128 v17; // [rsp+70h] [rbp-19h]
  __int128 v18; // [rsp+80h] [rbp-9h]
  __int128 v19; // [rsp+90h] [rbp+7h] BYREF

  v12 = 1;
  *(_QWORD *)&v18 = 0LL;
  DWORD2(v18) = 0;
  v4 = 0LL;
  v14 = 0LL;
  v19 = 0LL;
  UnicodeString = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  while ( 1 )
  {
    if ( v4 )
      NtClose(v4);
    v7 = &v19;
    v13 = MEMORY[0x7FFE0014];
    v8 = 8LL;
    do
    {
      *(_WORD *)v7 = RtlRandomEx(&v13);
      v7 = (__int128 *)((char *)v7 + 2);
      --v8;
    }
    while ( v8 );
    LOBYTE(v9) = 1;
    v10 = RtlStringFromGUIDEx(&v19, &UnicodeString, v9);
    if ( v10 < 0 )
      break;
    LODWORD(v16) = 48;
    *(_QWORD *)&v17 = &UnicodeString;
    *((_QWORD *)&v16 + 1) = a2;
    DWORD2(v17) = 576;
    v18 = 0LL;
    v10 = ZwCreateKey(&v14, a3, &v16, 0LL, 0LL, 0, &v12);
    RtlFreeAnsiString(&UnicodeString);
    if ( v10 < 0 )
      break;
    if ( v12 != 2 )
    {
      *a1 = v14;
      return (unsigned int)v10;
    }
    v4 = v14;
  }
  return (unsigned int)v10;
}
