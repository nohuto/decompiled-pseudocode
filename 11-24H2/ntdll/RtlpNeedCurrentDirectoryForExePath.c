/*
 * XREFs of RtlpNeedCurrentDirectoryForExePath @ 0x1800049A4
 * Callers:
 *     RtlGetExePath @ 0x180004950 (RtlGetExePath.c)
 * Callees:
 *     RtlQueryEnvironmentVariable @ 0x180007080 (RtlQueryEnvironmentVariable.c)
 *     wcschr @ 0x1801258D0 (wcschr.c)
 */

bool __fastcall RtlpNeedCurrentDirectoryForExePath(const wchar_t *a1)
{
  ULONG_PTR ReturnLength; // [rsp+48h] [rbp+10h] BYREF

  ReturnLength = 0LL;
  return wcschr(a1, 0x5Cu)
      || RtlQueryEnvironmentVariable(0LL, L"NoDefaultCurrentDirectoryInExePath", 0x22uLL, 0LL, 0LL, &ReturnLength) == -1073741568;
}
