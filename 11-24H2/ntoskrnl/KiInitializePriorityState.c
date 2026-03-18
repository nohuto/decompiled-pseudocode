/*
 * XREFs of KiInitializePriorityState @ 0x1405C2FE0
 * Callers:
 *     KiAssignSubNodeSharedReadyQueues @ 0x1405B6308 (KiAssignSubNodeSharedReadyQueues.c)
 *     KiStartIdleThread @ 0x1405C3210 (KiStartIdleThread.c)
 * Callees:
 *     KiQueryEffectivePriorityThread @ 0x14034BFE0 (KiQueryEffectivePriorityThread.c)
 */

char __fastcall KiInitializePriorityState(_BYTE *a1, struct _KPRCB *a2, __int64 a3)
{
  char EffectivePriorityThread; // al
  char v6; // dl
  char result; // al

  EffectivePriorityThread = KiQueryEffectivePriorityThread(a3, a2);
  v6 = *a1 ^ EffectivePriorityThread;
  result = EffectivePriorityThread & 0x7F;
  *a1 ^= v6 & 0x7F;
  *a1 = result | ((unsigned __int8)(*(_DWORD *)(a3 + 120) >> 1) << 7);
  return result;
}
