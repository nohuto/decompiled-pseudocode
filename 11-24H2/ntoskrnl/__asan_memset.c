/*
 * XREFs of __asan_memset @ 0x1405A9200
 * Callers:
 *     <none>
 * Callees:
 *     KasaniReport @ 0x1405A7020 (KasaniReport.c)
 *     KcsanValidateAddress @ 0x1405AB550 (KcsanValidateAddress.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

void *__fastcall _asan_memset(ULONG_PTR BugCheckParameter1, int Val, ULONG_PTR BugCheckParameter2)
{
  ULONG_PTR v3; // rdi
  signed __int8 *v6; // rdx
  signed __int8 v7; // cl
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  v3 = BugCheckParameter2;
  if ( byte_140FCECAA && BugCheckParameter1 >= 0xFFFF800000000000uLL )
  {
    if ( BugCheckParameter2 )
    {
      v6 = (signed __int8 *)(KasaniShadow + ((BugCheckParameter1 + 0x800000000000LL) >> 3));
      BugCheckParameter2 = KasaniShadow + ((BugCheckParameter2 + BugCheckParameter1 + 0x7FFFFFFFFFFFLL) >> 3);
      while ( 1 )
      {
        v7 = *v6;
        if ( (unsigned __int64)v6 >= BugCheckParameter2 )
          break;
        if ( v7 && v7 < 8 )
          goto LABEL_12;
        ++v6;
      }
      if ( v7 && v7 < 8 && (char)(((BugCheckParameter1 + v3 - 1) & 7) + 1) > v7 )
LABEL_12:
        KasaniReport(BugCheckParameter1, v3, 1u, retaddr, v7);
    }
    if ( KcsaniValidationEnabled )
    {
      LOBYTE(BugCheckParameter2) = 1;
      KcsanValidateAddress(BugCheckParameter1, v3, BugCheckParameter2, 0, retaddr);
    }
  }
  return memset_0((void *)BugCheckParameter1, Val, v3);
}
