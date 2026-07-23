/*
 * XREFs of BiUnloadHiveByHandle @ 0x140A81B58
 * Callers:
 *     BcdForciblyUnloadStore @ 0x1408123C4 (BcdForciblyUnloadStore.c)
 *     BiOpenSystemStore @ 0x1409A7610 (BiOpenSystemStore.c)
 *     BiCloseStore @ 0x140A81ABC (BiCloseStore.c)
 * Callees:
 *     BiCloseKey @ 0x1408588F0 (BiCloseKey.c)
 *     BiGetRegistryValue @ 0x140859338 (BiGetRegistryValue.c)
 *     BiUnloadHiveByName @ 0x140A81BF0 (BiUnloadHiveByName.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall BiUnloadHiveByHandle(void *a1, char a2)
{
  int RegistryValue; // edi
  __int64 v5; // r8
  unsigned int v6; // ebx
  unsigned int v8; // [rsp+50h] [rbp+18h] BYREF
  PVOID P; // [rsp+58h] [rbp+20h] BYREF

  v8 = 0;
  P = 0LL;
  RegistryValue = BiGetRegistryValue((__int64)a1, L"KeyName", (__int64)L"Description", 1u, &P, &v8);
  BiCloseKey(a1);
  if ( RegistryValue < 0 )
    return (unsigned int)RegistryValue;
  LOBYTE(v5) = a2;
  v6 = BiUnloadHiveByName(P, v8, v5);
  ExFreePoolWithTag(P, 0x4B444342u);
  return v6;
}
