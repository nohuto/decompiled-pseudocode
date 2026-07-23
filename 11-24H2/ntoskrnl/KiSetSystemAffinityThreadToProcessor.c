/*
 * XREFs of KiSetSystemAffinityThreadToProcessor @ 0x1405C06B8
 * Callers:
 *     KiDeregisterNmiSxCallback @ 0x1405ADC6C (KiDeregisterNmiSxCallback.c)
 *     KiInitMachineDependent @ 0x1405BDA44 (KiInitMachineDependent.c)
 *     KiExecuteDpc @ 0x1405C4680 (KiExecuteDpc.c)
 * Callees:
 *     KeSetSystemGroupAffinityThread @ 0x140318B30 (KeSetSystemGroupAffinityThread.c)
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
