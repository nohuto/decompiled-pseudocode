/*
 * XREFs of __asan_wrap_strncmp @ 0x1405AAD40
 * Callers:
 *     <none>
 * Callees:
 *     KasaniReport @ 0x1405A7020 (KasaniReport.c)
 *     KcsanValidateAddress @ 0x1405AB550 (KcsanValidateAddress.c)
 *     strncmp @ 0x1406C0A20 (strncmp.c)
 */

int __fastcall _asan_wrap_strncmp(const char *BugCheckParameter1, const char *a2, size_t MaxCount)
{
  unsigned __int64 v4; // rdi
  ULONG_PTR v7; // rbx
  signed __int8 v8; // cl
  ULONG_PTR v10; // rbx
  signed __int8 v11; // cl
  __int64 retaddr; // [rsp+58h] [rbp+0h]

  v4 = 0xFFFF800000000000uLL - (_QWORD)BugCheckParameter1;
  v7 = (ULONG_PTR)BugCheckParameter1;
  do
  {
    if ( v4 + v7 + 0x800000000000LL >= MaxCount )
      break;
    if ( byte_140FCECAA && v7 >= 0xFFFF800000000000uLL )
    {
      v8 = *(_BYTE *)(((v7 + 0x800000000000LL) >> 3) + KasaniShadow);
      if ( v8 && v8 < 8 && (char)((v7 & 7) + 1) > v8 )
        KasaniReport(v7, 1uLL, 0, retaddr, v8);
      if ( KcsaniValidationEnabled )
        KcsanValidateAddress(v7, 1, 0, 0, retaddr);
    }
  }
  while ( *(_BYTE *)v7++ );
  v10 = (ULONG_PTR)a2;
  do
  {
    if ( v10 - (unsigned __int64)a2 >= MaxCount )
      break;
    if ( byte_140FCECAA && v10 >= 0xFFFF800000000000uLL )
    {
      v11 = *(_BYTE *)(((v10 + 0x800000000000LL) >> 3) + KasaniShadow);
      if ( v11 && v11 < 8 && (char)((v10 & 7) + 1) > v11 )
        KasaniReport(v10, 1uLL, 0, retaddr, v11);
      if ( KcsaniValidationEnabled )
        KcsanValidateAddress(v10, 1, 0, 0, retaddr);
    }
  }
  while ( *(_BYTE *)v10++ );
  return strncmp(BugCheckParameter1, a2, MaxCount);
}
