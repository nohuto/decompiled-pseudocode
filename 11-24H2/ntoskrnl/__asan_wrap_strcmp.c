/*
 * XREFs of __asan_wrap_strcmp @ 0x1405AA900
 * Callers:
 *     <none>
 * Callees:
 *     KasaniReport @ 0x1405A7020 (KasaniReport.c)
 *     KcsanValidateAddress @ 0x1405AB550 (KcsanValidateAddress.c)
 */

__int64 __fastcall _asan_wrap_strcmp(unsigned __int8 *BugCheckParameter1, ULONG_PTR a2)
{
  unsigned __int64 v3; // r14
  unsigned __int8 *v4; // rbx
  ULONG_PTR v5; // rdi
  signed __int8 v6; // cl
  ULONG_PTR v8; // rdi
  signed __int8 v9; // cl
  ULONG_PTR v11; // rsi
  unsigned __int8 v12; // al
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  v3 = 0xFFFF800000000000uLL - (_QWORD)BugCheckParameter1;
  v4 = BugCheckParameter1;
  v5 = (ULONG_PTR)BugCheckParameter1;
  do
  {
    if ( v3 + v5 + 0x800000000000LL == -1LL )
      break;
    if ( byte_140FCECAA && v5 >= 0xFFFF800000000000uLL )
    {
      v6 = *(_BYTE *)(((v5 + 0x800000000000LL) >> 3) + KasaniShadow);
      if ( v6 && v6 < 8 && (char)((v5 & 7) + 1) > v6 )
        KasaniReport(v5, 1uLL, 0, retaddr, v6);
      if ( KcsaniValidationEnabled )
        KcsanValidateAddress(v5, 1, 0, 0, retaddr);
    }
  }
  while ( *(_BYTE *)v5++ );
  v8 = a2;
  do
  {
    if ( v8 - a2 == -1LL )
      break;
    if ( byte_140FCECAA && v8 >= 0xFFFF800000000000uLL )
    {
      v9 = *(_BYTE *)(((v8 + 0x800000000000LL) >> 3) + KasaniShadow);
      if ( v9 && v9 < 8 && (char)((v8 & 7) + 1) > v9 )
        KasaniReport(v8, 1uLL, 0, retaddr, v9);
      if ( KcsaniValidationEnabled )
        KcsanValidateAddress(v8, 1, 0, 0, retaddr);
    }
  }
  while ( *(_BYTE *)v8++ );
  v11 = a2 - (_QWORD)v4;
  while ( 1 )
  {
    v12 = *v4;
    if ( *v4 != v4[v11] )
      break;
    ++v4;
    if ( !v12 )
      return 0LL;
  }
  return v12 < v4[v11] ? -1 : 1;
}
