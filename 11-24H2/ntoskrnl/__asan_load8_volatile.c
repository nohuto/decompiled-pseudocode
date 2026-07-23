/*
 * XREFs of __asan_load8_volatile @ 0x1405A8D10
 * Callers:
 *     <none>
 * Callees:
 *     KasaniReport @ 0x1405A7020 (KasaniReport.c)
 *     KcsanValidateAddress @ 0x1405AB550 (KcsanValidateAddress.c)
 */

char __fastcall _asan_load8_volatile(ULONG_PTR BugCheckParameter1)
{
  ULONG_PTR v1; // rdi
  ULONG_PTR v3; // rax
  int v4; // r9d
  signed __int8 v5; // cl

  if ( !byte_140FCECAA )
    return v3;
  LOBYTE(v3) = 0;
  if ( BugCheckParameter1 < 0xFFFF800000000000uLL )
    return v3;
  v4 = 0;
  v3 = (BugCheckParameter1 + 0x800000000000LL) >> 3;
  v5 = *(_BYTE *)(v3 + KasaniShadow);
  if ( (BugCheckParameter1 & 7) != 0 )
  {
    if ( v5 && v5 < 8 )
      goto LABEL_26;
    v5 = *(_BYTE *)(((BugCheckParameter1 + 0x800000000004LL) >> 3) + KasaniShadow);
    LOBYTE(v3) = (BugCheckParameter1 + 4) & 7;
    if ( (unsigned __int8)v3 <= 4u )
    {
      if ( v5 && v5 < 8 && (char)(((BugCheckParameter1 + 7) & 7) + 1) > v5 )
        goto LABEL_26;
    }
    else
    {
      if ( v5 && v5 < 8 )
        goto LABEL_26;
      v5 = *(_BYTE *)(((BugCheckParameter1 + 0x800000000006LL) >> 3) + KasaniShadow);
      LOBYTE(v3) = (BugCheckParameter1 + 6) & 7;
      if ( (_BYTE)v3 == 7 )
      {
        if ( !v5 || v5 >= 8 )
        {
          v3 = (BugCheckParameter1 + 0x800000000007LL) >> 3;
          v5 = *(_BYTE *)(v3 + KasaniShadow);
          if ( !v5 || v5 >= 8 || (char)(((BugCheckParameter1 + 7) & 7) + 1) <= v5 )
            goto LABEL_27;
        }
        goto LABEL_26;
      }
      if ( v5 && v5 < 8 && (char)(((BugCheckParameter1 + 7) & 7) + 1) > v5 )
LABEL_26:
        LOBYTE(v3) = (unsigned __int8)KasaniReport(BugCheckParameter1, 8uLL, 0, v1, v5);
    }
  }
  else if ( v5 && v5 < 8 )
  {
    goto LABEL_26;
  }
LABEL_27:
  if ( KcsaniValidationEnabled )
  {
    LOBYTE(v4) = 1;
    LOBYTE(v3) = KcsanValidateAddress(BugCheckParameter1, 8, 0, v4, v1);
  }
  return v3;
}
