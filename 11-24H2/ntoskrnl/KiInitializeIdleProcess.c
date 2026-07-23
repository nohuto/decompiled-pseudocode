/*
 * XREFs of KiInitializeIdleProcess @ 0x140C2A7D0
 * Callers:
 *     KiInitSystem @ 0x140C2A2B4 (KiInitSystem.c)
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x140287740 (KeAddProcessorAffinityEx.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     KeInitializeProcess @ 0x140A45798 (KeInitializeProcess.c)
 */

void **__fastcall KiInitializeIdleProcess(struct _KPROCESS *a1)
{
  void **result; // rax
  int v3; // [rsp+30h] [rbp-148h]
  struct _KAFFINITY_EX v4; // [rsp+50h] [rbp-128h] BYREF

  memset_0(&v4.8, 0, sizeof(v4.8));
  v4.Reserved = 0;
  *(_DWORD *)&v4.Count = 2097153;
  memset_0(&v4.8, 0, sizeof(v4.8));
  KeAddProcessorAffinityEx(&v4.Count, 0);
  KeInitializeProcess(a1, 0, 0, &v4, 0LL, 0LL, v3, 1, (volatile _KAFFINITY_EX *)&KiIdleProcessExtension);
  result = &a1[1].UserCetLogging;
  a1->QuantumReset = 127;
  a1[1].CpuPartitionList.Flink = (struct _LIST_ENTRY *)&a1[1].UserCetLogging;
  a1[1].UserCetLogging = &a1[1].UserCetLogging;
  _InterlockedOr(dword_140FD00F0, 0x8000u);
  _InterlockedOr(dword_140FD04FC, 0x400000u);
  WORD2(a1[3].PerProcessorCycleTimes) = -31132;
  return result;
}
