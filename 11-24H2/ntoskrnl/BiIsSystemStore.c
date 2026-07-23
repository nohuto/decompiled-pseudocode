/*
 * XREFs of BiIsSystemStore @ 0x14085A030
 * Callers:
 *     BcdForciblyUnloadStore @ 0x1408123C4 (BcdForciblyUnloadStore.c)
 *     BiOpenSystemStore @ 0x1409A7610 (BiOpenSystemStore.c)
 *     BiLoadSystemStore @ 0x140A575F0 (BiLoadSystemStore.c)
 *     BcdCloseStore @ 0x140A81A08 (BcdCloseStore.c)
 * Callees:
 *     BiGetRegistryValue @ 0x140859338 (BiGetRegistryValue.c)
 *     BiIsSystemStoreCandidate @ 0x14085A0B8 (BiIsSystemStoreCandidate.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
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
