/*
 * XREFs of RtlConvertLCIDToString @ 0x18013EF60
 * Callers:
 *     RtlpConvertCultureNamesToLCIDs @ 0x180120540 (RtlpConvertCultureNamesToLCIDs.c)
 * Callees:
 *     RtlIntegerToUnicodeString @ 0x1800E16D0 (RtlIntegerToUnicodeString.c)
 *     RtlStringCchCopyW @ 0x1800EC364 (RtlStringCchCopyW.c)
 *     __security_check_cookie @ 0x1801659C0 (__security_check_cookie.c)
 *     memset$thunk$772440563353939046 @ 0x180172030 (memset$thunk$772440563353939046.c)
 */

NTSTATUS __fastcall RtlConvertLCIDToString(
        unsigned int a1,
        unsigned int a2,
        unsigned int a3,
        _WORD *a4,
        unsigned int a5)
{
  int v8; // esi
  unsigned int v10; // ebx
  NTSTATUS result; // eax
  unsigned int i; // eax
  UNICODE_STRING v13; // [rsp+20h] [rbp-438h] BYREF
  _BYTE v14[1024]; // [rsp+30h] [rbp-428h] BYREF

  v8 = 0;
  *(_DWORD *)(&v13.MaximumLength + 1) = 0;
  memset_thunk_772440563353939046(v14, 0, 0x400uLL);
  v10 = a5;
  if ( a5 >= 0x200 )
    return -2147483643;
  v13.Length = 2 * a5;
  v13.MaximumLength = 2 * a5;
  v13.Buffer = (wchar_t *)v14;
  result = RtlIntegerToUnicodeString(a1, a2, &v13);
  if ( result >= 0 )
  {
    for ( i = v13.Length >> 1; i < a3; ++i )
    {
      if ( !v10 )
        return -1073741823;
      *a4++ = 48;
      --v10;
    }
    if ( (int)RtlStringCchCopyW(a4, v10, (__int64)v13.Buffer) < 0 )
      return -1073741823;
    return v8;
  }
  return result;
}
