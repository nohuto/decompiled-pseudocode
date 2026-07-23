/*
 * XREFs of PspSetProcessPriorityByClass @ 0x140447074
 * Callers:
 *     PspApplyJobLimitsToProcess @ 0x1408D873C (PspApplyJobLimitsToProcess.c)
 *     PsSetProcessPriorityByClass @ 0x140A2C560 (PsSetProcessPriorityByClass.c)
 *     PspSetProcessForegroundBackgroundRequest @ 0x140A2C58C (PspSetProcessForegroundBackgroundRequest.c)
 * Callees:
 *     KeSetPriorityAndQuantumProcess @ 0x1404470CC (KeSetPriorityAndQuantumProcess.c)
 *     PspComputeQuantumAndPriority @ 0x140A262E0 (PspComputeQuantumAndPriority.c)
 */

__int64 __fastcall PspSetProcessPriorityByClass(int a1, int a2)
{
  int v3; // eax
  int v4; // r8d
  char v6; // [rsp+40h] [rbp+8h] BYREF
  int v7; // [rsp+50h] [rbp+18h] BYREF
  int v8; // [rsp+58h] [rbp+20h] BYREF

  v7 = 0;
  v6 = 0;
  v8 = 0;
  v3 = PspComputeQuantumAndPriority(a1, a2, (unsigned int)&v6, (unsigned int)&v8, (__int64)&v7);
  LOBYTE(v4) = v6;
  return KeSetPriorityAndQuantumProcess(a1, v3, v4, v8, v7);
}
