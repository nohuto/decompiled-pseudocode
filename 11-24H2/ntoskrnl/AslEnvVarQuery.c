/*
 * XREFs of AslEnvVarQuery @ 0x14080C6C0
 * Callers:
 *     SdbpGetProcessHistory @ 0x140806500 (SdbpGetProcessHistory.c)
 *     AslEnvExpandStrings @ 0x14080BFA4 (AslEnvExpandStrings.c)
 * Callees:
 *     _wcsnicmp @ 0x1404FBDB0 (_wcsnicmp.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     RtlUpcaseUnicodeChar @ 0x1408404B0 (RtlUpcaseUnicodeChar.c)
 *     RtlGetNtSystemRoot @ 0x140A0AB50 (RtlGetNtSystemRoot.c)
 */

__int64 __fastcall AslEnvVarQuery(
        WCHAR *a1,
        const wchar_t *a2,
        unsigned __int64 a3,
        _WORD *a4,
        unsigned __int64 a5,
        unsigned __int64 *a6)
{
  unsigned int v6; // esi
  WCHAR *v7; // rbp
  PWSTR NtSystemRoot; // rax
  PWSTR v12; // rdx
  unsigned __int64 v13; // rbx
  unsigned __int64 v14; // rcx
  size_t v15; // rbx
  WCHAR *v16; // r13
  WCHAR *v17; // r15
  WCHAR v18; // bx
  int v19; // r8d
  WCHAR *v20; // rdx
  __int64 v21; // rcx
  unsigned __int64 v22; // rdi

  v6 = 0;
  v7 = (WCHAR *)&a2[a3];
  if ( a3 < 0xA || wcsnicmp(a2, L"systemroot", 0xAuLL) )
  {
    if ( !a1 )
      return (unsigned int)-1073741568;
    while ( 1 )
    {
      if ( !*a1 )
        return (unsigned int)-1073741568;
      v16 = a1;
      v17 = (WCHAR *)a2;
      if ( a2 < v7 )
        break;
LABEL_19:
      if ( v17 != v7 || *a1 != 61 )
        goto LABEL_28;
      v19 = 1;
LABEL_22:
      v20 = a1;
      if ( *a1 )
      {
        v21 = 0LL;
        do
        {
          if ( (__int64)(v21 & 0xFFFFFFFFFFFFFFFEuLL) >= 65534 )
            break;
          ++a1;
          v21 += 2LL;
        }
        while ( *a1 );
      }
      if ( v19 )
      {
        v12 = v20 + 1;
        v22 = a1 - v12;
        if ( v22 < a5 )
        {
          v15 = v22;
          *a6 = v22;
          goto LABEL_12;
        }
        if ( a4 && a5 )
          *a4 = 0;
        v14 = v22 + 1;
        goto LABEL_10;
      }
LABEL_27:
      ++a1;
    }
    while ( *a1 )
    {
      v18 = RtlUpcaseUnicodeChar(*a1);
      if ( v18 == RtlUpcaseUnicodeChar(*v17) )
      {
        ++a1;
        if ( ++v17 < v7 )
          continue;
      }
      goto LABEL_19;
    }
LABEL_28:
    v19 = 0;
    while ( *a1 )
    {
      if ( *a1 == 61 && a1 != v16 )
        goto LABEL_22;
      ++a1;
    }
    goto LABEL_27;
  }
  NtSystemRoot = RtlGetNtSystemRoot();
  v12 = NtSystemRoot;
  v13 = -1LL;
  do
    ++v13;
  while ( NtSystemRoot[v13] );
  if ( v13 < a5 )
  {
    *a6 = v13;
    v15 = v13;
LABEL_12:
    memmove(a4, v12, v15 * 2);
    a4[v15] = 0;
  }
  else
  {
    if ( a4 && a5 )
      *a4 = 0;
    v14 = v13 + 1;
LABEL_10:
    v6 = -1073741789;
    *a6 = v14;
  }
  return v6;
}
