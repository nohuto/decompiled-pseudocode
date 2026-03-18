/*
 * XREFs of MBToWCSEx @ 0x14011C96C
 * Callers:
 *     ?CopyOutputString@@YAXPEAU_CALLBACKSTATUS@@PEAU_LARGE_STRING@@IH@Z @ 0x14011C730 (-CopyOutputString@@YAXPEAU_CALLBACKSTATUS@@PEAU_LARGE_STRING@@IH@Z.c)
 *     ?CopyLogFontAtoW@@YAXPEAUtagLOGFONTW@@PEAUtagLOGFONTA@@@Z @ 0x1402B8290 (-CopyLogFontAtoW@@YAXPEAUtagLOGFONTW@@PEAUtagLOGFONTA@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MBToWCSEx(__int64 a1, const CHAR *a2, signed int BytesInMultiByteString, PWCH *a4, int a5)
{
  __int64 v6; // rax
  ULONG BytesInUnicodeString; // [rsp+40h] [rbp+8h] BYREF

  BytesInUnicodeString = 0;
  if ( !BytesInMultiByteString )
    return 0LL;
  if ( !a5 )
    return 0LL;
  if ( !a2 )
    return 0LL;
  if ( BytesInMultiByteString < 0 )
  {
    if ( BytesInMultiByteString < -2 )
      return 0LL;
    v6 = -1LL;
    do
      ++v6;
    while ( a2[v6] );
    BytesInMultiByteString += v6 + 2;
    if ( !BytesInMultiByteString )
      return 0LL;
  }
  if ( a5 >= 0 && RtlMultiByteToUnicodeN(*a4, 2 * a5, &BytesInUnicodeString, a2, BytesInMultiByteString) >= 0 )
    return BytesInUnicodeString >> 1;
  else
    return 0LL;
}
