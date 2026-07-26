/*
 * XREFs of ?ndisInitializeNblPoolGlobal@@YAXXZ @ 0x1400CDFB8
 * Callers:
 *     DriverEntry @ 0x140196234 (DriverEntry.c)
 * Callees:
 *     ?ndisRegisterKnobs@@YAJPEBUKnobDescriptor@@_KP6AEPEAX0AEA_K@ZP6AJ201@Z2@Z @ 0x14014439C (-ndisRegisterKnobs@@YAJPEBUKnobDescriptor@@_KP6AEPEAX0AEA_K@ZP6AJ201@Z2@Z.c)
 */

void ndisInitializeNblPoolGlobal(void)
{
  unsigned __int8 (*v0)(void *, const struct KnobDescriptor *, unsigned __int64 *); // r8
  void *v1; // [rsp+20h] [rbp-18h]

  KeInitializeSpinLock(&qword_140126988);
  qword_140127188 = (__int64)&qword_140127180;
  qword_140127180 = (__int64)&qword_140127180;
  ndisRegisterKnobs(&stru_1400FDE10, 1uLL, v0, 0LL, v1);
}
