/*
 * XREFs of RtlStdDeleteStackDatabase @ 0x18011DB90
 * Callers:
 *     RtlpInitializeStackTraceDatabase @ 0x1800E599C (RtlpInitializeStackTraceDatabase.c)
 * Callees:
 *     ZwFreeVirtualMemory @ 0x180162050 (ZwFreeVirtualMemory.c)
 */

__int64 __fastcall RtlStdDeleteStackDatabase(__int64 a1)
{
  __int64 v2; // [rsp+30h] [rbp+8h] BYREF
  __int64 v3; // [rsp+38h] [rbp+10h] BYREF

  v2 = a1;
  v3 = 0LL;
  v3 = *(_QWORD *)(a1 + 184) - a1;
  return ZwFreeVirtualMemory(-1LL, &v2, &v3, 0x8000LL);
}
