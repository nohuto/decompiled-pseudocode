/*
 * XREFs of KiStartIdleThread @ 0x1405BF130
 * Callers:
 *     KiInitializeAndStartInitialThread @ 0x1405BED24 (KiInitializeAndStartInitialThread.c)
 *     KiInitializeKernel @ 0x140B48920 (KiInitializeKernel.c)
 * Callees:
 *     KiInitializeContextThread @ 0x140262EF4 (KiInitializeContextThread.c)
 *     KeInterlockedSetProcessorAffinityEx @ 0x1403E07B0 (KeInterlockedSetProcessorAffinityEx.c)
 *     KiStartPrcbThread @ 0x1405B40DC (KiStartPrcbThread.c)
 *     KiInitializePriorityState @ 0x1405BEF00 (KiInitializePriorityState.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

char __fastcall KiStartIdleThread(__int64 a1, struct _KPRCB *a2, __int64 a3)
{
  _KSCHEDULER_SUBNODE *SchedulerSubNode; // rax
  _QWORD v8[7]; // [rsp+20h] [rbp-58h] BYREF
  int v9; // [rsp+58h] [rbp-20h]
  int v10; // [rsp+5Ch] [rbp-1Ch]

  memset_0(v8, 0, 0x48uLL);
  v8[0] = a3;
  v8[1] = KiIdleLoop;
  v8[6] = *(_QWORD *)(a1 + 544);
  SchedulerSubNode = a2->SchedulerSubNode;
  v10 = 2;
  v9 = SchedulerSubNode->Affinity.Reserved[0];
  KiInitializeContextThread(a1, (__int64)v8);
  KiStartPrcbThread(a1, (__int64)a2);
  *(_BYTE *)(a1 + 388) = 2;
  *(_BYTE *)(a1 + 113) = 1;
  KeInterlockedSetProcessorAffinityEx(qword_140FCF000, a2->Number);
  return KiInitializePriorityState(&a2->PriorityState->AllFields, a2, a1);
}
