/*
 * XREFs of BiIsPortableWorkspaceBoot @ 0x140804D34
 * Callers:
 *     BiExportBcdObjects @ 0x1408056A4 (BiExportBcdObjects.c)
 *     BiBindEfiEntries @ 0x140A94DD4 (BiBindEfiEntries.c)
 * Callees:
 *     BiCloseKey @ 0x140966980 (BiCloseKey.c)
 *     BiGetRegistryValue @ 0x140969DB4 (BiGetRegistryValue.c)
 *     BiOpenKey @ 0x140969FF4 (BiOpenKey.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
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
