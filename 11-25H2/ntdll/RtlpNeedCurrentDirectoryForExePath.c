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
  ULONG_PTR ReturnLength; // [rsp+48h] [rbp+10h] BYREF

  ReturnLength = 0LL;
  return wcschr(a1, 0x5Cu)
      || RtlQueryEnvironmentVariable(0LL, L"NoDefaultCurrentDirectoryInExePath", 0x22uLL, 0LL, 0LL, &ReturnLength) == -1073741568;
}
