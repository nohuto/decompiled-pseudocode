/*
 * XREFs of RtlpTraceDatabaseFree @ 0x1801468E4
 * Callers:
 *     RtlTraceDatabaseDestroy @ 0x180146630 (RtlTraceDatabaseDestroy.c)
 * Callees:
 *     ZwFreeVirtualMemory @ 0x180160410 (ZwFreeVirtualMemory.c)
 */

bool __fastcall RtlpTraceDatabaseFree(void *a1)
{
  ULONG_PTR v2; // [rsp+30h] [rbp+8h] BYREF
  PVOID v3; // [rsp+40h] [rbp+18h] BYREF

  v2 = 0LL;
  v3 = a1;
  return ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &v3, &v2, 0x8000u) >= 0;
}
