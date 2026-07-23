/*
 * XREFs of __asan_wrap_strlen @ 0x1405AAC50
 * Callers:
 *     <none>
 * Callees:
 *     KasaniReport @ 0x1405A7020 (KasaniReport.c)
 *     KcsanValidateAddress @ 0x1405AB550 (KcsanValidateAddress.c)
 */

__int64 __fastcall _asan_wrap_strlen(ULONG_PTR BugCheckParameter1)
{
  __int64 v2; // rsi
  ULONG_PTR v3; // rbx
  signed __int8 v4; // cl
  __int64 result; // rax
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  v2 = 0xFFFF800000000000uLL - BugCheckParameter1;
  v3 = BugCheckParameter1;
  do
  {
    if ( v2 + v3 + 0x800000000000LL == -1LL )
      break;
    if ( byte_140FCECAA && v3 >= 0xFFFF800000000000uLL )
    {
      v4 = *(_BYTE *)(((v3 + 0x800000000000LL) >> 3) + KasaniShadow);
      if ( v4 && v4 < 8 && (char)((v3 & 7) + 1) > v4 )
        KasaniReport(v3, 1uLL, 0, retaddr, v4);
      if ( KcsaniValidationEnabled )
        KcsanValidateAddress(v3, 1, 0, 0, retaddr);
    }
  }
  while ( *(_BYTE *)v3++ );
  result = -1LL;
  do
    ++result;
  while ( *(_BYTE *)(BugCheckParameter1 + result) );
  return result;
}
