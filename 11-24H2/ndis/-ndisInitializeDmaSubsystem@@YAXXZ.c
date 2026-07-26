/*
 * XREFs of ?ndisInitializeDmaSubsystem@@YAXXZ @ 0x1400DA01C
 * Callers:
 *     DriverEntry @ 0x14018B234 (DriverEntry.c)
 * Callees:
 *     ndisDmaTelemetryUpdateBucketSchema @ 0x1400DC5D4 (ndisDmaTelemetryUpdateBucketSchema.c)
 *     ?ndisRegisterKnobs@@YAJPEBUKnobDescriptor@@_KP6AEPEAX0AEA_K@ZP6AJ201@Z2@Z @ 0x1401394B4 (-ndisRegisterKnobs@@YAJPEBUKnobDescriptor@@_KP6AEPEAX0AEA_K@ZP6AJ201@Z2@Z.c)
 *     ?Initialize@KPushLockManualConstruct@@QEAAXXZ @ 0x140142708 (-Initialize@KPushLockManualConstruct@@QEAAXXZ.c)
 */

void __fastcall ndisInitializeDmaSubsystem(
        __int64 a1,
        __int64 a2,
        unsigned __int8 (*a3)(void *, const struct KnobDescriptor *, unsigned __int64 *))
{
  unsigned __int8 (*v3)(void *, const struct KnobDescriptor *, unsigned __int64 *); // r8
  void *v4; // [rsp+20h] [rbp-18h]
  void *v5; // [rsp+20h] [rbp-18h]

  ndisRegisterKnobs(&stru_1400F4D90, 1uLL, a3, 0LL, v4);
  KPushLockManualConstruct::Initialize((KPushLockManualConstruct *)&unk_14011CB08);
  ndisDmaTelemetryUpdateBucketSchema(0x4210900080204uLL);
  ndisRegisterKnobs(&stru_1400F4DC0, 1uLL, v3, ndisDmaTelemetryKnobsUpdateRoutine, v5);
}
