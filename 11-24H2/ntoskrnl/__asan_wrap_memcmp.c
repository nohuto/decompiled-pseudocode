/*
 * XREFs of __asan_wrap_memcmp @ 0x1405AA4E0
 * Callers:
 *     <none>
 * Callees:
 *     KasaniReport @ 0x1405A7020 (KasaniReport.c)
 *     KcsanValidateAddress @ 0x1405AB550 (KcsanValidateAddress.c)
 *     memcmp @ 0x1406C0E10 (memcmp.c)
 */

int __fastcall _asan_wrap_memcmp(ULONG_PTR BugCheckParameter1, const void *a2, ULONG_PTR BugCheckParameter2)
{
  signed __int8 *v6; // rdx
  ULONG_PTR v7; // r8
  signed __int8 v8; // cl
  signed __int8 *i; // rdx
  signed __int8 v10; // cl
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  if ( byte_140FCECAA && BugCheckParameter1 >= 0xFFFF800000000000uLL )
  {
    if ( BugCheckParameter2 )
    {
      v6 = (signed __int8 *)(KasaniShadow + ((BugCheckParameter1 + 0x800000000000LL) >> 3));
      v7 = KasaniShadow + ((BugCheckParameter2 + BugCheckParameter1 + 0x7FFFFFFFFFFFLL) >> 3);
      while ( 1 )
      {
        v8 = *v6;
        if ( (unsigned __int64)v6 >= v7 )
          break;
        if ( v8 && v8 < 8 )
          goto LABEL_12;
        ++v6;
      }
      if ( v8 && v8 < 8 && (char)(((BugCheckParameter1 + BugCheckParameter2 - 1) & 7) + 1) > v8 )
LABEL_12:
        KasaniReport(BugCheckParameter1, BugCheckParameter2, 0, retaddr, v8);
    }
    if ( KcsaniValidationEnabled )
      KcsanValidateAddress(BugCheckParameter1, BugCheckParameter2, 0, 0, retaddr);
  }
  if ( byte_140FCECAA && (unsigned __int64)a2 >= 0xFFFF800000000000uLL )
  {
    if ( BugCheckParameter2 )
    {
      for ( i = (signed __int8 *)(KasaniShadow + (((unsigned __int64)a2 + 0x800000000000LL) >> 3)); ; ++i )
      {
        v10 = *i;
        if ( (unsigned __int64)i >= KasaniShadow + (((unsigned __int64)a2 + BugCheckParameter2 + 0x7FFFFFFFFFFFLL) >> 3) )
          break;
        if ( v10 && v10 < 8 )
          goto LABEL_26;
      }
      if ( v10 && v10 < 8 && (char)((((_BYTE)a2 + BugCheckParameter2 - 1) & 7) + 1) > v10 )
LABEL_26:
        KasaniReport((ULONG_PTR)a2, BugCheckParameter2, 0, retaddr, v10);
    }
    if ( KcsaniValidationEnabled )
      KcsanValidateAddress((_DWORD)a2, BugCheckParameter2, 0, 0, retaddr);
  }
  return memcmp((const void *)BugCheckParameter1, a2, BugCheckParameter2);
}
