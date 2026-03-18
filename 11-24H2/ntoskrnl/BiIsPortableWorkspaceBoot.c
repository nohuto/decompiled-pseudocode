/*
 * XREFs of BiIsPortableWorkspaceBoot @ 0x1408148AC
 * Callers:
 *     BiExportBcdObjects @ 0x14081521C (BiExportBcdObjects.c)
 *     BiBindEfiEntries @ 0x140A9AAF4 (BiBindEfiEntries.c)
 * Callees:
 *     BiCloseKey @ 0x14085CB80 (BiCloseKey.c)
 *     BiGetRegistryValue @ 0x14085D5C8 (BiGetRegistryValue.c)
 *     BiOpenKey @ 0x14085D808 (BiOpenKey.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

bool BiIsPortableWorkspaceBoot()
{
  char v0; // di
  int v1; // ebx
  int v3; // [rsp+40h] [rbp+8h] BYREF
  __int64 v4; // [rsp+48h] [rbp+10h] BYREF
  PVOID P; // [rsp+50h] [rbp+18h] BYREF

  v0 = 0;
  P = 0LL;
  v4 = 0LL;
  v3 = 0;
  if ( (int)BiOpenKey(0LL, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\MiniNT", 131097LL, &v4) < 0 )
  {
    if ( (int)BiGetRegistryValue(
                0LL,
                L"PortableOperatingSystem",
                L"\\Registry\\Machine\\SYSTEM\\CurrentControlSet\\Control",
                4LL,
                &P,
                &v3) >= 0 )
    {
      v1 = *(_DWORD *)P;
      ExFreePoolWithTag(P, 0x4B444342u);
      return v1 != 0;
    }
  }
  else
  {
    BiCloseKey(v4);
  }
  return v0;
}
