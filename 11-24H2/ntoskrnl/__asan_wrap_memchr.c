/*
 * XREFs of __asan_wrap_memchr @ 0x1405AA3D0
 * Callers:
 *     <none>
 * Callees:
 *     memchr @ 0x1404FC540 (memchr.c)
 *     KasaniReport @ 0x1405A7020 (KasaniReport.c)
 *     KcsanValidateAddress @ 0x1405AB550 (KcsanValidateAddress.c)
 */

void *__fastcall _asan_wrap_memchr(ULONG_PTR BugCheckParameter1, int Val, ULONG_PTR BugCheckParameter2)
{
  signed __int8 *v6; // rdx
  ULONG_PTR v7; // r8
  signed __int8 v8; // cl
  __int64 retaddr; // [rsp+38h] [rbp+0h]

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
  return memchr((const void *)BugCheckParameter1, Val, BugCheckParameter2);
}
