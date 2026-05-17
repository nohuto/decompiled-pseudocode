/*
 * XREFs of RtlUnicodeToOemN @ 0x1801073E0
 * Callers:
 *     RtlUnicodeStringToCountedOemString @ 0x18013C290 (RtlUnicodeStringToCountedOemString.c)
 * Callees:
 *     RtlpIsUtf8Process @ 0x180070CD0 (RtlpIsUtf8Process.c)
 *     RtlUnicodeToCustomCPN @ 0x1800B1D30 (RtlUnicodeToCustomCPN.c)
 */

__int64 __fastcall RtlUnicodeToOemN(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5)
{
  unsigned int v5; // edx
  unsigned int *v6; // r8
  unsigned __int16 *v7; // r9
  _BYTE *v8; // r10
  __int16 *v9; // rcx
  signed __int32 v11[8]; // [rsp+0h] [rbp-38h] BYREF

  if ( RtlpIsUtf8Process() )
  {
    v9 = (__int16 *)&Utf8TableInfo;
  }
  else
  {
    _InterlockedOr(v11, 0);
    v9 = &GlobalRtlNlsState;
  }
  return RtlUnicodeToCustomCPN((__int64)v9, v8, v5, v6, v7, a5);
}
