/*
 * XREFs of __asan_wrap_strncpy @ 0x1405AAED0
 * Callers:
 *     <none>
 * Callees:
 *     KasaniReport @ 0x1405A7020 (KasaniReport.c)
 *     KcsanValidateAddress @ 0x1405AB550 (KcsanValidateAddress.c)
 *     strncpy @ 0x1406C1660 (strncpy.c)
 */

char *__fastcall _asan_wrap_strncpy(char *BugCheckParameter1, const char *a2, ULONG_PTR BugCheckParameter2)
{
  ULONG_PTR v3; // rsi
  unsigned __int64 v4; // r14
  ULONG_PTR v7; // rbx
  signed __int8 v8; // cl
  signed __int8 *v10; // rdx
  signed __int8 v11; // cl
  __int64 retaddr; // [rsp+58h] [rbp+0h]

  v3 = BugCheckParameter2;
  v4 = 0xFFFF800000000000uLL - (_QWORD)a2;
  v7 = (ULONG_PTR)a2;
  do
  {
    if ( v4 + v7 + 0x800000000000LL == -1LL )
      break;
    if ( byte_140FCECAA && v7 >= 0xFFFF800000000000uLL )
    {
      v8 = *(_BYTE *)(((v7 + 0x800000000000LL) >> 3) + KasaniShadow);
      if ( v8 && v8 < 8 && (char)((v7 & 7) + 1) > v8 )
        KasaniReport(v7, 1uLL, 0, retaddr, v8);
      if ( KcsaniValidationEnabled )
        KcsanValidateAddress(v7, 1, 0, 0, retaddr);
    }
  }
  while ( *(_BYTE *)v7++ );
  if ( byte_140FCECAA && (unsigned __int64)BugCheckParameter1 >= 0xFFFF800000000000uLL )
  {
    if ( v3 )
    {
      v10 = (signed __int8 *)(KasaniShadow + ((unsigned __int64)(BugCheckParameter1 + 0x800000000000LL) >> 3));
      BugCheckParameter2 = KasaniShadow + ((unsigned __int64)&BugCheckParameter1[v3 + 0x7FFFFFFFFFFFLL] >> 3);
      while ( 1 )
      {
        v11 = *v10;
        if ( (unsigned __int64)v10 >= BugCheckParameter2 )
          break;
        if ( v11 && v11 < 8 )
          goto LABEL_23;
        ++v10;
      }
      if ( v11 && v11 < 8 && (char)(((v3 + (_BYTE)BugCheckParameter1 - 1) & 7) + 1) > v11 )
LABEL_23:
        KasaniReport((ULONG_PTR)BugCheckParameter1, v3, 1u, retaddr, v11);
    }
    if ( KcsaniValidationEnabled )
    {
      LOBYTE(BugCheckParameter2) = 1;
      KcsanValidateAddress((_DWORD)BugCheckParameter1, v3, BugCheckParameter2, 0, retaddr);
    }
  }
  return strncpy(BugCheckParameter1, a2, v3);
}
