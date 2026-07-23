/*
 * XREFs of BiGetSavedBootEntry @ 0x140AA1720
 * Callers:
 *     BiCreateEfiEntry @ 0x1408156F0 (BiCreateEfiEntry.c)
 *     BiBuildIdentifierList @ 0x1409A55CC (BiBuildIdentifierList.c)
 * Callees:
 *     BiGetRegistryValue @ 0x140859338 (BiGetRegistryValue.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall BiGetSavedBootEntry(__int64 a1, PVOID *a2)
{
  int RegistryValue; // ebx
  unsigned int v5; // [rsp+50h] [rbp+18h] BYREF
  PVOID P; // [rsp+58h] [rbp+20h] BYREF

  v5 = 0;
  P = 0LL;
  RegistryValue = BiGetRegistryValue(a1, L"FirmwareVariable", (__int64)L"Description", 3u, &P, &v5);
  if ( RegistryValue >= 0 )
  {
    if ( v5 >= 0x1C && *((_DWORD *)P + 1) >= 0x1Cu && *(_DWORD *)P )
    {
      *a2 = P;
      return (unsigned int)RegistryValue;
    }
    RegistryValue = -1073741811;
  }
  if ( P )
    ExFreePoolWithTag(P, 0x4B444342u);
  return (unsigned int)RegistryValue;
}
