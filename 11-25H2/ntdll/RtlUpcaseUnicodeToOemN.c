/*
 * XREFs of RtlUpcaseUnicodeToOemN @ 0x1800D76C0
 * Callers:
 *     RtlUpcaseUnicodeStringToOemString @ 0x1800D75B0 (RtlUpcaseUnicodeStringToOemString.c)
 *     RtlUpcaseUnicodeStringToCountedOemString @ 0x18013DBC0 (RtlUpcaseUnicodeStringToCountedOemString.c)
 * Callees:
 *     RtlpIsUtf8Process @ 0x1800718D0 (RtlpIsUtf8Process.c)
 *     UpcaseUnicodeToSingleByteNHelper @ 0x1800D7860 (UpcaseUnicodeToSingleByteNHelper.c)
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
  if ( word_1801CEFDC )
    return UpcaseUnicodeToMultiByteNHelper((_DWORD)v1, v0, (_DWORD)v2, v3, v4);
  else
    return UpcaseUnicodeToSingleByteNHelper((_DWORD)v1, v0, (_DWORD)v2, v3, v4, qword_1801CEFF8, qword_1801CEFF0);
}
