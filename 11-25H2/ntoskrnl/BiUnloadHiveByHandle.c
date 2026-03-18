/*
 * XREFs of BiUnloadHiveByHandle @ 0x140A24908
 * Callers:
 *     BcdForciblyUnloadStore @ 0x14080210C (BcdForciblyUnloadStore.c)
 *     BiCloseStore @ 0x140A24D38 (BiCloseStore.c)
 *     BiOpenSystemStore @ 0x140A26AF8 (BiOpenSystemStore.c)
 * Callees:
 *     BiCloseKey @ 0x140966980 (BiCloseKey.c)
 *     BiGetRegistryValue @ 0x140969DB4 (BiGetRegistryValue.c)
 *     BiUnloadHiveByName @ 0x140A249A0 (BiUnloadHiveByName.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
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
