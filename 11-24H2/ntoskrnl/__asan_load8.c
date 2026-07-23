/*
 * XREFs of __asan_load8 @ 0x1405A8BC0
 * Callers:
 *     <none>
 * Callees:
 *     KasaniReport @ 0x1405A7020 (KasaniReport.c)
 *     KcsanValidateAddress @ 0x1405AB550 (KcsanValidateAddress.c)
 */

char __fastcall _asan_load8(ULONG_PTR BugCheckParameter1)
{
  ULONG_PTR v1; // rdi
  ULONG_PTR v3; // rax
  signed __int8 v4; // cl

  if ( !byte_140FCECAA )
    return v3;
  LOBYTE(v3) = 0;
  if ( BugCheckParameter1 < 0xFFFF800000000000uLL )
    return v3;
  v3 = (BugCheckParameter1 + 0x800000000000LL) >> 3;
  v4 = *(_BYTE *)(v3 + KasaniShadow);
  if ( (BugCheckParameter1 & 7) != 0 )
  {
    if ( v4 && v4 < 8 )
      goto LABEL_26;
    v4 = *(_BYTE *)(((BugCheckParameter1 + 0x800000000004LL) >> 3) + KasaniShadow);
    LOBYTE(v3) = (BugCheckParameter1 + 4) & 7;
    if ( (unsigned __int8)v3 <= 4u )
    {
      if ( v4 && v4 < 8 && (char)(((BugCheckParameter1 + 7) & 7) + 1) > v4 )
        goto LABEL_26;
    }
    else
    {
      if ( v4 && v4 < 8 )
        goto LABEL_26;
      v4 = *(_BYTE *)(((BugCheckParameter1 + 0x800000000006LL) >> 3) + KasaniShadow);
      LOBYTE(v3) = (BugCheckParameter1 + 6) & 7;
      if ( (_BYTE)v3 == 7 )
      {
        if ( !v4 || v4 >= 8 )
        {
          v3 = (BugCheckParameter1 + 0x800000000007LL) >> 3;
          v4 = *(_BYTE *)(v3 + KasaniShadow);
          if ( !v4 || v4 >= 8 || (char)(((BugCheckParameter1 + 7) & 7) + 1) <= v4 )
            goto LABEL_27;
        }
        goto LABEL_26;
      }
      if ( v4 && v4 < 8 && (char)(((BugCheckParameter1 + 7) & 7) + 1) > v4 )
LABEL_26:
        LOBYTE(v3) = (unsigned __int8)KasaniReport(BugCheckParameter1, 8uLL, 0, v1, v4);
    }
  }
  else if ( v4 && v4 < 8 )
  {
    goto LABEL_26;
  }
LABEL_27:
  if ( KcsaniValidationEnabled )
    LOBYTE(v3) = KcsanValidateAddress(BugCheckParameter1, 8, 0, 0, v1);
  return v3;
}
