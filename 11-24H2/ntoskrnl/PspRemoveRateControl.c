/*
 * XREFs of PspRemoveRateControl @ 0x140777DB8
 * Callers:
 *     PspJobDelete @ 0x1404E6110 (PspJobDelete.c)
 *     PspSetJobRateControl @ 0x1407781CC (PspSetJobRateControl.c)
 * Callees:
 *     PspModifyAncestorBits @ 0x140777B2C (PspModifyAncestorBits.c)
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x14085D4DC (PspEnumJobsAndProcessesInJobHierarchy.c)
 *     PspFreeRateControl @ 0x14097782C (PspFreeRateControl.c)
 */

__int64 __fastcall PspRemoveRateControl(__int64 a1)
{
  __int64 result; // rax
  _QWORD v3[2]; // [rsp+30h] [rbp-38h] BYREF
  __int128 v4; // [rsp+40h] [rbp-28h]
  int v5; // [rsp+50h] [rbp-18h]
  char v6; // [rsp+54h] [rbp-14h]
  __int16 v7; // [rsp+55h] [rbp-13h]
  char v8; // [rsp+57h] [rbp-11h]

  v7 = 0;
  v8 = 0;
  _InterlockedAnd((volatile signed __int32 *)(a1 + 1552), 0xFBFFFFFF);
  v3[0] = 0LL;
  v3[1] = 0LL;
  v5 = 0;
  v6 = 0;
  v4 = 0LL;
  PspEnumJobsAndProcessesInJobHierarchy((PVOID)a1, (__int64)v3, 5);
  PspModifyAncestorBits(a1, 0x2000000u, 0);
  result = PspFreeRateControl(*(PVOID *)(a1 + 1544));
  *(_QWORD *)(a1 + 1544) = 0LL;
  return result;
}
