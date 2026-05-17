/*
 * XREFs of RtlUpcaseUnicodeToOemN @ 0x1800D4410
 * Callers:
 *     RtlUpcaseUnicodeStringToOemString @ 0x1800D4300 (RtlUpcaseUnicodeStringToOemString.c)
 *     RtlUpcaseUnicodeStringToCountedOemString @ 0x18013C490 (RtlUpcaseUnicodeStringToCountedOemString.c)
 * Callees:
 *     RtlpIsUtf8Process @ 0x180070CD0 (RtlpIsUtf8Process.c)
 *     UpcaseUnicodeToSingleByteNHelper @ 0x1800D45B0 (UpcaseUnicodeToSingleByteNHelper.c)
 */

__int64 RtlUpcaseUnicodeToOemN()
{
  int v0; // edx
  _BYTE *v1; // rcx
  _DWORD *v2; // r8
  __int64 v3; // r9
  unsigned int v4; // r10d
  signed __int32 v6[8]; // [rsp+0h] [rbp-48h] BYREF

  if ( RtlpIsUtf8Process() )
    return UpcaseUnicodeToUTF8NHelper(v1, v0, v2, v3, v4);
  _InterlockedOr(v6, 0);
  if ( word_1801CCFDC )
    return UpcaseUnicodeToMultiByteNHelper((_DWORD)v1, v0, (_DWORD)v2, v3, v4);
  else
    return UpcaseUnicodeToSingleByteNHelper((_DWORD)v1, v0, (_DWORD)v2, v3, v4, qword_1801CCFF8, qword_1801CCFF0);
}
