/*
 * XREFs of RtlUnicodeStringValidateDestWorker @ 0x1800D74C0
 * Callers:
 *     RtlUnicodeStringCatString @ 0x18015C7D8 (RtlUnicodeStringCatString.c)
 * Callees:
 *     RtlUnicodeStringValidateWorker_0 @ 0x1800D75F0 (RtlUnicodeStringValidateWorker_0.c)
 */

__int64 __fastcall RtlUnicodeStringValidateDestWorker(__int64 a1, _QWORD *a2, unsigned __int64 *a3, _QWORD *a4)
{
  __int64 result; // rax
  unsigned __int16 *v7; // rcx
  unsigned __int64 *v8; // r11

  *a2 = 0LL;
  *a3 = 0LL;
  if ( a4 )
    *a4 = 0LL;
  result = RtlUnicodeStringValidateWorker_0(a1);
  if ( (int)result >= 0 && v7 )
  {
    *a2 = *((_QWORD *)v7 + 1);
    *a3 = (unsigned __int64)v7[1] >> 1;
    if ( v8 )
    {
      *v8 = (unsigned __int64)*v7 >> 1;
      return (unsigned int)result;
    }
  }
  return result;
}
