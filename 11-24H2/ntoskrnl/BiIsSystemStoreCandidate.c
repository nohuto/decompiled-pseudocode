/*
 * XREFs of BiIsSystemStoreCandidate @ 0x14085A0B8
 * Callers:
 *     BiIsSystemStore @ 0x14085A030 (BiIsSystemStore.c)
 * Callees:
 *     BiGetRegistryValue @ 0x140859338 (BiGetRegistryValue.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

bool __fastcall BiIsSystemStoreCandidate(__int64 a1)
{
  char v1; // di
  int v2; // ebx
  int v4; // [rsp+48h] [rbp+10h] BYREF
  PVOID P; // [rsp+50h] [rbp+18h] BYREF

  v1 = 0;
  P = 0LL;
  v4 = 0;
  if ( (int)BiGetRegistryValue(a1, L"System", (__int64)L"Description", 4u, &P, &v4) >= 0 )
  {
    v2 = *(_DWORD *)P;
    ExFreePoolWithTag(P, 0x4B444342u);
    return v2 != 0;
  }
  return v1;
}
