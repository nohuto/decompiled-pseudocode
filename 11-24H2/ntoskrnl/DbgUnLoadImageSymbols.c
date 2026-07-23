/*
 * XREFs of DbgUnLoadImageSymbols @ 0x1404B5F18
 * Callers:
 *     KiBugcheckUnloadDebugSymbols @ 0x1405B00D4 (KiBugcheckUnloadDebugSymbols.c)
 *     PopShutdownSystem @ 0x140B62104 (PopShutdownSystem.c)
 *     PopSaveHiberContext @ 0x140B70CF0 (PopSaveHiberContext.c)
 * Callees:
 *     DebugService2 @ 0x1404FA120 (DebugService2.c)
 */

__int64 __fastcall DbgUnLoadImageSymbols(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD v4[2]; // [rsp+20h] [rbp-28h] BYREF
  int v5; // [rsp+30h] [rbp-18h]
  int v6; // [rsp+34h] [rbp-14h]

  v5 = 0;
  v6 = 0;
  v4[0] = a2;
  v4[1] = a3;
  return DebugService2(a1, v4, 4LL);
}
