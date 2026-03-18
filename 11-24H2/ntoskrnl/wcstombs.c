/*
 * XREFs of wcstombs @ 0x1405004D0
 * Callers:
 *     WheaRegChangeNotifyCallback @ 0x1407C8A60 (WheaRegChangeNotifyCallback.c)
 * Callees:
 *     RtlUnicodeToMultiByteSize @ 0x1408AEEA0 (RtlUnicodeToMultiByteSize.c)
 *     RtlUnicodeToMultiByteN @ 0x1408AF5B0 (RtlUnicodeToMultiByteN.c)
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
    v5 = RtlUnicodeToMultiByteSize((PULONG)&BytesInMultiByteString, Source, 2 * v4 + 2);
  if ( v5 < 0 )
    return -1LL;
  else
    return BytesInMultiByteString - 1;
}
