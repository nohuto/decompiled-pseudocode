/*
 * XREFs of KiSetSystemAffinityThreadToProcessor @ 0x1405BF008
 * Callers:
 *     KiDeregisterNmiSxCallback @ 0x1405AD36C (KiDeregisterNmiSxCallback.c)
 *     KiInitMachineDependent @ 0x1405BC408 (KiInitMachineDependent.c)
 *     KiExecuteDpc @ 0x1405C2BB0 (KiExecuteDpc.c)
 * Callees:
 *     KeSetSystemGroupAffinityThread @ 0x1402783E0 (KeSetSystemGroupAffinityThread.c)
 */

void __fastcall KiSetSystemAffinityThreadToProcessor(unsigned int a1, _GROUP_AFFINITY *a2)
{
  unsigned int v2; // ecx
  _GROUP_AFFINITY Affinity; // [rsp+20h] [rbp-18h] BYREF

  Affinity = 0LL;
  v2 = *((_DWORD *)KiGlobalState + a1);
  Affinity.Reserved[1] = 0;
  Affinity.Reserved[2] = 0;
  *(_DWORD *)&Affinity.Group = (unsigned __int16)(v2 >> 6);
  Affinity.Mask = 1LL << (v2 & 0x3F);
  KeSetSystemGroupAffinityThread(&Affinity, a2);
}
