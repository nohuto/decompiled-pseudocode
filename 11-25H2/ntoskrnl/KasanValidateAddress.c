/*
 * XREFs of KasanValidateAddress @ 0x1405A6460
 * Callers:
 *     <none>
 * Callees:
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     KasaniReport @ 0x1405A6720 (KasaniReport.c)
 *     KcsanValidateAddress @ 0x1405AAC50 (KcsanValidateAddress.c)
 */

char __fastcall KasanValidateAddress(
        ULONG_PTR BugCheckParameter1,
        ULONG_PTR BugCheckParameter2,
        unsigned __int8 a3,
        __int64 a4)
{
  ULONG_PTR v5; // rcx
  int v9; // eax
  char *v10; // rdx
  unsigned __int64 v11; // r8
  char v12; // cl

  v5 = BugCheckParameter2 + BugCheckParameter1;
  v9 = v5 >= 0xFFFF800000000000uLL;
  if ( BugCheckParameter1 >= 0xFFFF800000000000uLL != v9 )
    KeBugCheckEx(0x1F1u, 3uLL, 1uLL, BugCheckParameter1, BugCheckParameter2);
  if ( v5 < BugCheckParameter1 )
    KeBugCheckEx(0x1F1u, 3uLL, 3uLL, BugCheckParameter1, BugCheckParameter2);
  if ( byte_140FCDC6A && BugCheckParameter1 >= 0xFFFF800000000000uLL )
  {
    if ( BugCheckParameter2 )
    {
      v10 = (char *)(KasaniShadow + ((BugCheckParameter1 + 0x800000000000LL) >> 3));
      v11 = KasaniShadow + ((v5 + 0x7FFFFFFFFFFFLL) >> 3);
      while ( 1 )
      {
        v12 = *v10;
        if ( (unsigned __int64)v10 >= v11 )
          break;
        if ( v12 && v12 < 8 )
          goto LABEL_16;
        ++v10;
      }
      if ( v12 )
      {
        if ( v12 < 8 )
        {
          LOBYTE(v9) = ((BugCheckParameter1 + BugCheckParameter2 - 1) & 7) + 1;
          if ( (char)v9 > v12 )
LABEL_16:
            LOBYTE(v9) = KasaniReport(BugCheckParameter1, BugCheckParameter2, v12);
        }
      }
    }
    if ( KcsaniValidationEnabled )
      LOBYTE(v9) = KcsanValidateAddress(BugCheckParameter1, BugCheckParameter2, a3, 0, a4);
  }
  return v9;
}
