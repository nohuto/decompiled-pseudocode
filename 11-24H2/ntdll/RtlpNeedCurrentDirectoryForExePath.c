/*
 * XREFs of RtlpNeedCurrentDirectoryForExePath @ 0x180082B24
 * Callers:
 *     RtlGetExePath @ 0x180082AD0 (RtlGetExePath.c)
 * Callees:
 *     RtlQueryEnvironmentVariable @ 0x1800851D0 (RtlQueryEnvironmentVariable.c)
 *     wcschr @ 0x1801276A0 (wcschr.c)
 */

bool __fastcall RtlpNeedCurrentDirectoryForExePath(const wchar_t *a1)
{
  __int64 v2; // [rsp+48h] [rbp+10h] BYREF

  v2 = 0LL;
  return wcschr(a1, 0x5Cu)
      || (unsigned int)RtlQueryEnvironmentVariable(0LL, L"NoDefaultCurrentDirectoryInExePath", 34LL, 0LL, 0LL, &v2) == -1073741568;
}
