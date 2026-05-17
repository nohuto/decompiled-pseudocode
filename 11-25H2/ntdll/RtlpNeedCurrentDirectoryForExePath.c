/*
 * XREFs of RtlpNeedCurrentDirectoryForExePath @ 0x1800AAEB4
 * Callers:
 *     RtlGetExePath @ 0x1800AAE60 (RtlGetExePath.c)
 * Callees:
 *     RtlQueryEnvironmentVariable @ 0x1800AD560 (RtlQueryEnvironmentVariable.c)
 *     wcschr @ 0x180129180 (wcschr.c)
 */

bool __fastcall RtlpNeedCurrentDirectoryForExePath(const wchar_t *a1)
{
  __int64 v2; // [rsp+48h] [rbp+10h] BYREF

  v2 = 0LL;
  return wcschr(a1, 0x5Cu)
      || (unsigned int)RtlQueryEnvironmentVariable(0LL, L"NoDefaultCurrentDirectoryInExePath", 34LL, 0LL, 0LL, &v2) == -1073741568;
}
