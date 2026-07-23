/*
 * XREFs of __asan_load4 @ 0x1405A8980
 * Callers:
 *     <none>
 * Callees:
 *     KasaniReport @ 0x1405A7020 (KasaniReport.c)
 *     KcsanValidateAddress @ 0x1405AB550 (KcsanValidateAddress.c)
 */

char __fastcall _asan_load4(ULONG_PTR BugCheckParameter1)
{
  ULONG_PTR v1; // rdi
  ULONG_PTR v3; // rax
  signed __int8 v4; // cl

  if ( !byte_140FCECAA )
    return v3;
  LOBYTE(v3) = 0;
  if ( BugCheckParameter1 < 0xFFFF800000000000uLL )
    return v3;
  v4 = *(_BYTE *)(((BugCheckParameter1 + 0x800000000000LL) >> 3) + KasaniShadow);
  LOBYTE(v3) = BugCheckParameter1 & 7;
  if ( (BugCheckParameter1 & 7) <= 4 )
  {
    if ( v4 )
    {
      if ( v4 < 8 )
      {
        LOBYTE(v3) = ((BugCheckParameter1 + 3) & 7) + 1;
        if ( (char)v3 > v4 )
          goto LABEL_20;
      }
    }
  }
  else
  {
    if ( v4 && v4 < 8 )
      goto LABEL_20;
    v4 = *(_BYTE *)(((BugCheckParameter1 + 0x800000000002LL) >> 3) + KasaniShadow);
    LOBYTE(v3) = (BugCheckParameter1 + 2) & 7;
    if ( (_BYTE)v3 == 7 )
    {
      if ( !v4 || v4 >= 8 )
      {
        v3 = (BugCheckParameter1 + 0x800000000003LL) >> 3;
        v4 = *(_BYTE *)(v3 + KasaniShadow);
        if ( !v4 || v4 >= 8 || (char)(((BugCheckParameter1 + 3) & 7) + 1) <= v4 )
          goto LABEL_21;
      }
      goto LABEL_20;
    }
    if ( v4 && v4 < 8 && (char)(((BugCheckParameter1 + 3) & 7) + 1) > v4 )
LABEL_20:
      LOBYTE(v3) = (unsigned __int8)KasaniReport(BugCheckParameter1, 4uLL, 0, v1, v4);
  }
LABEL_21:
  if ( KcsaniValidationEnabled )
    LOBYTE(v3) = KcsanValidateAddress(BugCheckParameter1, 4, 0, 0, v1);
  return v3;
}
