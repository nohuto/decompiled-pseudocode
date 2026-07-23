/*
 * XREFs of IopCreateArcNames @ 0x140C1DD2C
 * Callers:
 *     IopInitializeBootDrivers @ 0x140C20504 (IopInitializeBootDrivers.c)
 * Callees:
 *     RtlInitAnsiString @ 0x14045BBA0 (RtlInitAnsiString.c)
 *     RtlStringCchPrintfA @ 0x140592C98 (RtlStringCchPrintfA.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     RtlAnsiStringToUnicodeString @ 0x140903ED0 (RtlAnsiStringToUnicodeString.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     IopCreateArcNamesCd @ 0x140C1DE70 (IopCreateArcNamesCd.c)
 *     IopCreateArcNamesDisk @ 0x140C1E3A4 (IopCreateArcNamesDisk.c)
 */

__int64 __fastcall IopCreateArcNames(__int64 a1)
{
  const char *v1; // r9
  __int64 v3; // rbx
  void *Pool2; // rax
  __int64 result; // rax
  STRING DestinationString; // [rsp+20h] [rbp-B8h] BYREF
  STRING v7; // [rsp+30h] [rbp-A8h] BYREF
  char pszDest[128]; // [rsp+40h] [rbp-98h] BYREF

  v1 = *(const char **)(a1 + 192);
  DestinationString = 0LL;
  v7 = 0LL;
  RtlStringCchPrintfA(pszDest, 0x80uLL, "\\ArcName\\%s", v1);
  RtlInitAnsiString(&DestinationString, pszDest);
  RtlAnsiStringToUnicodeString(&IoArcHalDeviceName, &DestinationString, 1u);
  RtlStringCchPrintfA(pszDest, 0x80uLL, "\\ArcName\\%s", *(const char **)(a1 + 184));
  RtlInitAnsiString(&DestinationString, pszDest);
  RtlAnsiStringToUnicodeString(&IoArcBootDeviceName, &DestinationString, 1u);
  v3 = -1LL;
  do
    ++v3;
  while ( *(_BYTE *)(*(_QWORD *)(a1 + 184) + v3) );
  Pool2 = (void *)ExAllocatePool2(0x100uLL, v3 + 1, 0x344E6F49uLL);
  IoLoaderArcBootDeviceName = (__int64)Pool2;
  if ( Pool2 )
    memmove(Pool2, *(const void **)(a1 + 184), v3 + 1);
  RtlInitAnsiString(&v7, *(PCSZ *)(a1 + 192));
  result = IopCreateArcNamesDisk();
  if ( (int)result >= 0 )
    return IopCreateArcNamesCd(a1);
  return result;
}
