/*
 * XREFs of __asan_wrap_strcat @ 0x1405AA6A0
 * Callers:
 *     <none>
 * Callees:
 *     KasaniReport @ 0x1405A7020 (KasaniReport.c)
 *     KcsanValidateAddress @ 0x1405AB550 (KcsanValidateAddress.c)
 */

ULONG_PTR __fastcall _asan_wrap_strcat(ULONG_PTR BugCheckParameter1, const char *a2)
{
  __int64 v2; // rdi
  __int64 v3; // rsi
  ULONG_PTR v4; // r15
  ULONG_PTR v7; // rbx
  signed __int8 v8; // dl
  char v9; // al
  ULONG_PTR v10; // rbx
  signed __int8 v11; // dl
  char v12; // al
  unsigned __int64 v13; // rbx
  ULONG_PTR v14; // rdi
  signed __int8 *i; // rdx
  signed __int8 v16; // cl
  char *v17; // rcx
  __int64 retaddr; // [rsp+58h] [rbp+0h]

  v2 = 0LL;
  v3 = 0LL;
  v4 = BugCheckParameter1 + 0x800000000000LL;
  v7 = BugCheckParameter1;
  do
  {
    if ( v3 == -1 )
      break;
    if ( byte_140FCECAA && v7 >= 0xFFFF800000000000uLL )
    {
      v8 = *(_BYTE *)(((v4 + v3) >> 3) + KasaniShadow);
      if ( v8 && v8 < 8 && (char)((v7 & 7) + 1) > v8 )
        KasaniReport(v7, 1uLL, 0, retaddr, v8);
      if ( KcsaniValidationEnabled )
        KcsanValidateAddress(v7, 1, 0, 0, retaddr);
    }
    v9 = *(_BYTE *)v7;
    ++v3;
    ++v7;
  }
  while ( v9 );
  v10 = (ULONG_PTR)a2;
  do
  {
    if ( v2 == -1 )
      break;
    if ( byte_140FCECAA && v10 >= 0xFFFF800000000000uLL )
    {
      v11 = *(_BYTE *)(((unsigned __int64)&a2[v2 + 0x800000000000LL] >> 3) + KasaniShadow);
      if ( v11 && v11 < 8 && (char)((v10 & 7) + 1) > v11 )
        KasaniReport(v10, 1uLL, 0, retaddr, v11);
      if ( KcsaniValidationEnabled )
        KcsanValidateAddress(v10, 1, 0, 0, retaddr);
    }
    v12 = *(_BYTE *)v10;
    ++v2;
    ++v10;
  }
  while ( v12 );
  v13 = v3 + BugCheckParameter1;
  v14 = v2 - 1;
  if ( byte_140FCECAA && v13 >= 0xFFFF800000000000uLL )
  {
    if ( v14 )
    {
      for ( i = (signed __int8 *)(KasaniShadow + ((v13 + 0x800000000000LL) >> 3)); ; ++i )
      {
        v16 = *i;
        if ( (unsigned __int64)i >= KasaniShadow + ((v14 + v13 + 0x7FFFFFFFFFFFLL) >> 3) )
          break;
        if ( v16 && v16 < 8 )
          goto LABEL_34;
      }
      if ( v16 && v16 < 8 && (char)(((v13 + v14 - 1) & 7) + 1) > v16 )
LABEL_34:
        KasaniReport(v3 + BugCheckParameter1, v14, 1u, retaddr, v16);
    }
    if ( KcsaniValidationEnabled )
      KcsanValidateAddress(v3 + BugCheckParameter1, v14, 1, 0, retaddr);
  }
  v17 = (char *)(BugCheckParameter1 - 1);
  while ( *++v17 != 0 )
    ;
  strcpy(v17, a2);
  return BugCheckParameter1;
}
