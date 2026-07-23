/*
 * XREFs of KiStartIdleThread @ 0x1405C07E0
 * Callers:
 *     KiInitializeAndStartInitialThread @ 0x1405C03D4 (KiInitializeAndStartInitialThread.c)
 *     KiInitializeKernel @ 0x140B5A930 (KiInitializeKernel.c)
 * Callees:
 *     KeInterlockedSetProcessorAffinityEx @ 0x1403D7AC0 (KeInterlockedSetProcessorAffinityEx.c)
 *     KiInitializeContextThread @ 0x1403FF414 (KiInitializeContextThread.c)
 *     KiStartPrcbThread @ 0x1405B55AC (KiStartPrcbThread.c)
 *     KiInitializePriorityState @ 0x1405C05B0 (KiInitializePriorityState.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
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
  KeInterlockedSetProcessorAffinityEx(qword_140FCFF80, a2->Number);
  return KiInitializePriorityState(&a2->PriorityState->AllFields, a2, a1);
}
