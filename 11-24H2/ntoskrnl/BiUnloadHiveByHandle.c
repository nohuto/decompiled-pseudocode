/*
 * XREFs of BiUnloadHiveByHandle @ 0x14085EDB0
 * Callers:
 *     BcdForciblyUnloadStore @ 0x140811C84 (BcdForciblyUnloadStore.c)
 *     BiCloseStore @ 0x14085EF8C (BiCloseStore.c)
 *     BiOpenSystemStore @ 0x1409C0FC0 (BiOpenSystemStore.c)
 * Callees:
 *     BiCloseKey @ 0x14085CB80 (BiCloseKey.c)
 *     BiGetRegistryValue @ 0x14085D5C8 (BiGetRegistryValue.c)
 *     BiUnloadHiveByName @ 0x14085EE48 (BiUnloadHiveByName.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
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
