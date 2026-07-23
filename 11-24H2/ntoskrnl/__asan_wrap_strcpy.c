/*
 * XREFs of __asan_wrap_strcpy @ 0x1405AAAA0
 * Callers:
 *     <none>
 * Callees:
 *     KasaniReport @ 0x1405A7020 (KasaniReport.c)
 *     KcsanValidateAddress @ 0x1405AB550 (KcsanValidateAddress.c)
 */

ULONG_PTR __fastcall _asan_wrap_strcpy(ULONG_PTR BugCheckParameter1, char *a2)
{
  char *v2; // rdi
  ULONG_PTR v4; // r14
  ULONG_PTR v5; // rbx
  _BYTE *v6; // r15
  signed __int8 v7; // dl
  char v8; // al
  signed __int8 *i; // rdx
  signed __int8 v10; // cl
  ULONG_PTR v11; // rcx
  char v12; // al
  __int64 retaddr; // [rsp+58h] [rbp+0h]

  v2 = a2;
  v4 = (ULONG_PTR)a2;
  v5 = 0LL;
  v6 = a2 + 0x800000000000LL;
  do
  {
    if ( v5 == -1LL )
      break;
    if ( byte_140FCECAA && v4 >= 0xFFFF800000000000uLL )
    {
      v7 = *(_BYTE *)(((unsigned __int64)&v6[v5] >> 3) + KasaniShadow);
      if ( v7 && v7 < 8 && (char)((v4 & 7) + 1) > v7 )
        KasaniReport(v4, 1uLL, 0, retaddr, v7);
      if ( KcsaniValidationEnabled )
        KcsanValidateAddress(v4, 1, 0, 0, retaddr);
    }
    v8 = *(_BYTE *)v4;
    ++v5;
    ++v4;
  }
  while ( v8 );
  if ( byte_140FCECAA && BugCheckParameter1 >= 0xFFFF800000000000uLL )
  {
    if ( v5 )
    {
      for ( i = (signed __int8 *)(KasaniShadow + ((BugCheckParameter1 + 0x800000000000LL) >> 3)); ; ++i )
      {
        v10 = *i;
        if ( (unsigned __int64)i >= KasaniShadow + ((BugCheckParameter1 + v5 + 0x7FFFFFFFFFFFLL) >> 3) )
          break;
        if ( v10 && v10 < 8 )
          goto LABEL_23;
      }
      if ( v10 && v10 < 8 && (char)(((BugCheckParameter1 + v5 - 1) & 7) + 1) > v10 )
LABEL_23:
        KasaniReport(BugCheckParameter1, v5, 1u, retaddr, v10);
    }
    if ( KcsaniValidationEnabled )
      KcsanValidateAddress(BugCheckParameter1, v5, 1, 0, retaddr);
  }
  v11 = BugCheckParameter1 - (_QWORD)v2;
  do
  {
    v12 = *v2;
    v2[v11] = *v2;
    ++v2;
  }
  while ( v12 );
  return BugCheckParameter1;
}
