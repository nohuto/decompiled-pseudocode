/*
 * XREFs of KiSetSystemAffinityThreadToProcessor @ 0x1405C30E8
 * Callers:
 *     KiDeregisterNmiSxCallback @ 0x1405B0CFC (KiDeregisterNmiSxCallback.c)
 *     KiInitMachineDependent @ 0x1405C0470 (KiInitMachineDependent.c)
 *     KiExecuteDpc @ 0x1405C6F50 (KiExecuteDpc.c)
 * Callees:
 *     KeSetSystemGroupAffinityThread @ 0x140339650 (KeSetSystemGroupAffinityThread.c)
 */

void __fastcall KiSetSystemAffinityThreadToProcessor(unsigned int a1, struct _GROUP_AFFINITY *a2)
{
  unsigned int v2; // ecx
  struct _GROUP_AFFINITY Affinity; // [rsp+20h] [rbp-18h] BYREF

  Affinity = 0LL;
  v2 = *((_DWORD *)KiGlobalState + a1);
  Affinity.Reserved[1] = 0;
  Affinity.Reserved[2] = 0;
  *(_DWORD *)&Affinity.Group = (unsigned __int16)(v2 >> 6);
  Affinity.Mask = 1LL << (v2 & 0x3F);
  KeSetSystemGroupAffinityThread(&Affinity, a2);
}
