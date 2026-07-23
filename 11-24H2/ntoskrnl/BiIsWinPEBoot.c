/*
 * XREFs of BiIsWinPEBoot @ 0x1409A81CC
 * Callers:
 *     BiOpenSystemStore @ 0x1409A7610 (BiOpenSystemStore.c)
 *     BcdCloseStore @ 0x140A81A08 (BcdCloseStore.c)
 * Callees:
 *     wcsstr @ 0x1404FDB70 (wcsstr.c)
 *     BiGetRegistryValue @ 0x140859338 (BiGetRegistryValue.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

bool BiIsWinPEBoot()
{
  char v0; // di
  wchar_t *v1; // rbx
  int v3; // [rsp+40h] [rbp+8h] BYREF
  wchar_t *Str; // [rsp+48h] [rbp+10h] BYREF

  v0 = 0;
  Str = 0LL;
  v3 = 0;
  if ( (int)BiGetRegistryValue(
              0LL,
              L"SystemStartOptions",
              (__int64)L"\\Registry\\Machine\\SYSTEM\\CurrentControlSet\\Control",
              1u,
              &Str,
              &v3) >= 0 )
  {
    v1 = wcsstr(Str, L"MININT");
    ExFreePoolWithTag(Str, 0x4B444342u);
    return v1 != 0LL;
  }
  return v0;
}
