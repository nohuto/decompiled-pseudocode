/*
 * XREFs of RtlpTraceDatabaseFree @ 0x180148534
 * Callers:
 *     RtlTraceDatabaseDestroy @ 0x180148280 (RtlTraceDatabaseDestroy.c)
 * Callees:
 *     ZwFreeVirtualMemory @ 0x180162050 (ZwFreeVirtualMemory.c)
 */

bool __fastcall RtlpTraceDatabaseFree(__int64 a1)
{
  __int64 v2; // [rsp+30h] [rbp+8h] BYREF
  __int64 v3; // [rsp+40h] [rbp+18h] BYREF

  v2 = 0LL;
  v3 = a1;
  return (int)ZwFreeVirtualMemory(-1LL, &v3, &v2, 0x8000LL) >= 0;
}
