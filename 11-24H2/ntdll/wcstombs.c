/*
 * XREFs of wcstombs @ 0x1801264A0
 * Callers:
 *     <none>
 * Callees:
 *     RtlUnicodeToMultiByteSize @ 0x18007E150 (RtlUnicodeToMultiByteSize.c)
 *     RtlUnicodeToMultiByteN @ 0x18007ECD0 (RtlUnicodeToMultiByteN.c)
 *     _errno @ 0x180108440 (_errno.c)
 */

size_t __cdecl wcstombs(char *Dest, const wchar_t *Source, size_t MaxCount)
{
  ULONG v3; // r10d
  __int64 v4; // r8
  NTSTATUS v5; // eax
  __int64 BytesInMultiByteString; // [rsp+40h] [rbp+8h] BYREF

  v3 = MaxCount;
  BytesInMultiByteString = 0LL;
  v4 = -1LL;
  do
    ++v4;
  while ( Source[v4] );
  if ( Dest )
    v5 = RtlUnicodeToMultiByteN(Dest, v3, (PULONG)&BytesInMultiByteString, Source, 2 * v4 + 2);
  else
    v5 = RtlUnicodeToMultiByteSize((PULONG)&BytesInMultiByteString, (PWCH)Source, 2 * v4 + 2);
  if ( v5 >= 0 )
    return BytesInMultiByteString - 1;
  *errno() = 42;
  return -1LL;
}
