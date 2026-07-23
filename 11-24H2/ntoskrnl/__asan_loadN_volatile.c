/*
 * XREFs of __asan_loadN_volatile @ 0x1405A8F50
 * Callers:
 *     <none>
 * Callees:
 *     KasaniReport @ 0x1405A7020 (KasaniReport.c)
 *     KcsanValidateAddress @ 0x1405AB550 (KcsanValidateAddress.c)
 */

signed __int8 __fastcall _asan_loadN_volatile(ULONG_PTR BugCheckParameter1, ULONG_PTR BugCheckParameter2)
{
  signed __int8 result; // al
  signed __int8 *v5; // rdx
  ULONG_PTR v6; // r8
  signed __int8 v7; // cl
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  if ( byte_140FCECAA )
  {
    result = 0;
    if ( BugCheckParameter1 >= 0xFFFF800000000000uLL )
    {
      if ( BugCheckParameter2 )
      {
        v5 = (signed __int8 *)(KasaniShadow + ((BugCheckParameter1 + 0x800000000000LL) >> 3));
        v6 = KasaniShadow + ((BugCheckParameter2 + BugCheckParameter1 + 0x7FFFFFFFFFFFLL) >> 3);
        while ( 1 )
        {
          v7 = *v5;
          if ( (unsigned __int64)v5 >= v6 )
            break;
          if ( v7 && v7 < 8 )
            goto LABEL_12;
          ++v5;
        }
        if ( v7 )
        {
          if ( v7 < 8 )
          {
            result = ((BugCheckParameter1 + BugCheckParameter2 - 1) & 7) + 1;
            if ( result > v7 )
LABEL_12:
              result = (unsigned __int8)KasaniReport(BugCheckParameter1, BugCheckParameter2, 0, retaddr, v7);
          }
        }
      }
      if ( KcsaniValidationEnabled )
        return KcsanValidateAddress(BugCheckParameter1, BugCheckParameter2, 0, 1, retaddr);
    }
  }
  return result;
}
