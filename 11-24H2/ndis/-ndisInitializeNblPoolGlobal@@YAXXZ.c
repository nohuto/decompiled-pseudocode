/*
 * XREFs of ?ndisInitializeNblPoolGlobal@@YAXXZ @ 0x1400C6F28
 * Callers:
 *     DriverEntry @ 0x14018B234 (DriverEntry.c)
 * Callees:
 *     ?ndisRegisterKnobs@@YAJPEBUKnobDescriptor@@_KP6AEPEAX0AEA_K@ZP6AJ201@Z2@Z @ 0x1401394B4 (-ndisRegisterKnobs@@YAJPEBUKnobDescriptor@@_KP6AEPEAX0AEA_K@ZP6AJ201@Z2@Z.c)
 */

void ndisInitializeNblPoolGlobal(void)
{
  unsigned __int8 (*v0)(void *, const struct KnobDescriptor *, unsigned __int64 *); // r8
  void *v1; // [rsp+20h] [rbp-18h]

  KeInitializeSpinLock(&qword_14011C948);
  qword_14011D0D8 = (__int64)&qword_14011D0D0;
  qword_14011D0D0 = (__int64)&qword_14011D0D0;
  ndisRegisterKnobs(&stru_1400F4D50, 1uLL, v0, 0LL, v1);
}
