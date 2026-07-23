/*
 * XREFs of __asan_store1_volatile @ 0x1405A9A80
 * Callers:
 *     <none>
 * Callees:
 *     KasaniReport @ 0x1405A7020 (KasaniReport.c)
 *     KcsanValidateAddress @ 0x1405AB550 (KcsanValidateAddress.c)
 */

signed __int8 __fastcall _asan_store1_volatile(ULONG_PTR BugCheckParameter1)
{
  ULONG_PTR v1; // rdi
  signed __int8 result; // al
  signed __int8 v4; // cl

  if ( byte_140FCECAA )
  {
    result = 0;
    if ( BugCheckParameter1 >= 0xFFFF800000000000uLL )
    {
      result = KasaniShadow;
      v4 = *(_BYTE *)(((BugCheckParameter1 + 0x800000000000LL) >> 3) + KasaniShadow);
      if ( v4 )
      {
        if ( v4 < 8 )
        {
          result = (BugCheckParameter1 & 7) + 1;
          if ( result > v4 )
            result = (unsigned __int8)KasaniReport(BugCheckParameter1, 1uLL, 1u, v1, v4);
        }
      }
      if ( KcsaniValidationEnabled )
        return KcsanValidateAddress(BugCheckParameter1, 1, 1, 1, v1);
    }
  }
  return result;
}
