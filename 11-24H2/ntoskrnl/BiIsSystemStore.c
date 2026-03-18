/*
 * XREFs of BiIsSystemStore @ 0x14085E2C0
 * Callers:
 *     BcdForciblyUnloadStore @ 0x140811C84 (BcdForciblyUnloadStore.c)
 *     BcdCloseStore @ 0x14085EED8 (BcdCloseStore.c)
 *     BiLoadSystemStore @ 0x14085F450 (BiLoadSystemStore.c)
 *     BiOpenSystemStore @ 0x1409C0FC0 (BiOpenSystemStore.c)
 * Callees:
 *     BiGetRegistryValue @ 0x14085D5C8 (BiGetRegistryValue.c)
 *     BiIsSystemStoreCandidate @ 0x14085E348 (BiIsSystemStoreCandidate.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

bool __fastcall BiIsSystemStore(__int64 a1)
{
  char v1; // di
  int v3; // ebx
  int v5; // [rsp+48h] [rbp+10h] BYREF
  PVOID P; // [rsp+50h] [rbp+18h] BYREF

  v1 = 0;
  P = 0LL;
  v5 = 0;
  if ( (unsigned __int8)BiIsSystemStoreCandidate()
    && (int)BiGetRegistryValue(a1, L"TreatAsSystem", (__int64)L"Description", 4u, &P, &v5) >= 0 )
  {
    v3 = *(_DWORD *)P;
    ExFreePoolWithTag(P, 0x4B444342u);
    return v3 != 0;
  }
  return v1;
}
