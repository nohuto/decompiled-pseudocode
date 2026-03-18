/*
 * XREFs of BiWasFirmwareModified @ 0x1404C15A4
 * Callers:
 *     BiCloseStore @ 0x140A24D38 (BiCloseStore.c)
 *     BiOpenSystemStore @ 0x140A26AF8 (BiOpenSystemStore.c)
 * Callees:
 *     BiGetRegistryValue @ 0x140969DB4 (BiGetRegistryValue.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

bool __fastcall BiWasFirmwareModified(__int64 a1)
{
  char v1; // di
  int v2; // ebx
  int v4; // [rsp+48h] [rbp+10h] BYREF
  PVOID P; // [rsp+50h] [rbp+18h] BYREF

  v1 = 0;
  P = 0LL;
  v4 = 0;
  if ( (int)BiGetRegistryValue(a1, L"FirmwareModified", L"Description", 4LL, &P, &v4) >= 0 )
  {
    v2 = *(_DWORD *)P;
    ExFreePoolWithTag(P, 0x4B444342u);
    return v2 != 0;
  }
  return v1;
}
