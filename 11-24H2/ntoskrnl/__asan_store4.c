/*
 * XREFs of __asan_store4 @ 0x1405A9D10
 * Callers:
 *     <none>
 * Callees:
 *     KasaniReport @ 0x1405A7020 (KasaniReport.c)
 *     KcsanValidateAddress @ 0x1405AB550 (KcsanValidateAddress.c)
 */

char __fastcall _asan_store4(ULONG_PTR BugCheckParameter1)
{
  ULONG_PTR v1; // rdi
  ULONG_PTR v3; // rax
  int v4; // r8d
  signed __int8 v5; // cl

  if ( !byte_140FCECAA )
    return v3;
  LOBYTE(v3) = 0;
  if ( BugCheckParameter1 < 0xFFFF800000000000uLL )
    return v3;
  v4 = KasaniShadow;
  v5 = *(_BYTE *)(((BugCheckParameter1 + 0x800000000000LL) >> 3) + KasaniShadow);
  LOBYTE(v3) = BugCheckParameter1 & 7;
  if ( (BugCheckParameter1 & 7) <= 4 )
  {
    if ( v5 )
    {
      if ( v5 < 8 )
      {
        LOBYTE(v3) = ((BugCheckParameter1 + 3) & 7) + 1;
        if ( (char)v3 > v5 )
          goto LABEL_20;
      }
    }
  }
  else
  {
    if ( v5 && v5 < 8 )
      goto LABEL_20;
    v5 = *(_BYTE *)(((BugCheckParameter1 + 0x800000000002LL) >> 3) + KasaniShadow);
    LOBYTE(v3) = (BugCheckParameter1 + 2) & 7;
    if ( (_BYTE)v3 == 7 )
    {
      if ( !v5 || v5 >= 8 )
      {
        v3 = (BugCheckParameter1 + 0x800000000003LL) >> 3;
        v5 = *(_BYTE *)(v3 + KasaniShadow);
        if ( !v5 || v5 >= 8 || (char)(((BugCheckParameter1 + 3) & 7) + 1) <= v5 )
          goto LABEL_21;
      }
      goto LABEL_20;
    }
    if ( v5 && v5 < 8 && (char)(((BugCheckParameter1 + 3) & 7) + 1) > v5 )
LABEL_20:
      LOBYTE(v3) = (unsigned __int8)KasaniReport(BugCheckParameter1, 4uLL, 1u, v1, v5);
  }
LABEL_21:
  if ( KcsaniValidationEnabled )
  {
    LOBYTE(v4) = 1;
    LOBYTE(v3) = KcsanValidateAddress(BugCheckParameter1, 4, v4, 0, v1);
  }
  return v3;
}
