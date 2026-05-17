/*
 * XREFs of wcstombs @ 0x180128270
 * Callers:
 *     <none>
 * Callees:
 *     RtlUnicodeToMultiByteSize @ 0x1800B18B0 (RtlUnicodeToMultiByteSize.c)
 *     RtlUnicodeToMultiByteN @ 0x1800B2430 (RtlUnicodeToMultiByteN.c)
 *     _errno @ 0x18010D560 (_errno.c)
 */

size_t __cdecl wcstombs(char *Dest, const wchar_t *Source, size_t MaxCount)
{
  unsigned int v3; // r10d
  __int64 v4; // r8
  int v5; // eax
  __int64 BytesInMultiByteString; // [rsp+40h] [rbp+8h] BYREF

  v3 = MaxCount;
  BytesInMultiByteString = 0LL;
  v4 = -1LL;
  do
    ++v4;
  while ( Source[v4] );
  if ( Dest )
    v5 = RtlUnicodeToMultiByteN(
           Dest,
           v3,
           (unsigned int *)&BytesInMultiByteString,
           (unsigned int *)Source,
           2 * (int)v4 + 2);
  else
    v5 = RtlUnicodeToMultiByteSize((PULONG)&BytesInMultiByteString, (PWCH)Source, 2 * v4 + 2);
  if ( v5 >= 0 )
    return BytesInMultiByteString - 1;
  *errno() = 42;
  return -1LL;
}
