/*
 * XREFs of BiIsPortableWorkspaceBoot @ 0x140814FEC
 * Callers:
 *     BiExportBcdObjects @ 0x14081595C (BiExportBcdObjects.c)
 *     BiBindEfiEntries @ 0x140A96064 (BiBindEfiEntries.c)
 * Callees:
 *     BiCloseKey @ 0x1408588F0 (BiCloseKey.c)
 *     BiGetRegistryValue @ 0x140859338 (BiGetRegistryValue.c)
 *     BiOpenKey @ 0x140859578 (BiOpenKey.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
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
