/*
 * XREFs of RtlIsDosDeviceName_U @ 0x1800E17B0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpIsDosDeviceName_Ustr @ 0x180018CB0 (RtlpIsDosDeviceName_Ustr.c)
 *     wcslen @ 0x1801292B0 (wcslen.c)
 */

ULONG __cdecl RtlIsDosDeviceName_U(PCWSTR DosFileName)
{
  size_t v1; // rax
  __m128i v3; // [rsp+20h] [rbp-18h] BYREF

  v3.m128i_i64[0] = 0LL;
  v3.m128i_i64[1] = (__int64)DosFileName;
  if ( !DosFileName )
    return RtlpIsDosDeviceName_Ustr(&v3);
  v1 = wcslen(DosFileName);
  if ( v1 <= 0x7FFE )
  {
    v3.m128i_i16[0] = 2 * v1;
    v3.m128i_i16[1] = 2 * v1 + 2;
    return RtlpIsDosDeviceName_Ustr(&v3);
  }
  return 0;
}
