/*
 * XREFs of ?ndisRegisterKnobs@@YAJPEBUKnobDescriptor@@_KP6AEPEAX0AEA_K@ZP6AJ201@Z2@Z @ 0x1401394B4
 * Callers:
 *     ?ndisReadRegistry@@YAXXZ @ 0x140098C18 (-ndisReadRegistry@@YAXXZ.c)
 *     ?ndisNblTrackerReadConfiguration@@YAXXZ @ 0x1400A1C64 (-ndisNblTrackerReadConfiguration@@YAXXZ.c)
 *     ?ndisStackExpansionInitializeSubsystem@@YAJXZ @ 0x1400C4A60 (-ndisStackExpansionInitializeSubsystem@@YAJXZ.c)
 *     ?ndisInitializeNblPoolGlobal@@YAXXZ @ 0x1400C6F28 (-ndisInitializeNblPoolGlobal@@YAXXZ.c)
 *     ?ndisIfIndexAllocatorSubsystemInitialize@@YAXXZ @ 0x1400CEB04 (-ndisIfIndexAllocatorSubsystemInitialize@@YAXXZ.c)
 *     ?ndisInitializeDmaSubsystem@@YAXXZ @ 0x1400DA01C (-ndisInitializeDmaSubsystem@@YAXXZ.c)
 *     DriverEntry @ 0x14018B234 (DriverEntry.c)
 *     ?ndisIfInitializePhase1@@YAJXZ @ 0x14018E8A4 (-ndisIfInitializePhase1@@YAJXZ.c)
 * Callees:
 *     GetGlobalNamespace @ 0x1400A37DC (GetGlobalNamespace.c)
 *     ?BuildCollection@KnobNamespace@@AEAAJPEBUKnobDescriptor@@_K_NP6AEPEAX0AEA_K@ZP6AJ301@Z3@Z @ 0x1401627C0 (-BuildCollection@KnobNamespace@@AEAAJPEBUKnobDescriptor@@_K_NP6AEPEAX0AEA_K@ZP6AJ301@Z3@Z.c)
 */

__int64 __fastcall ndisRegisterKnobs(
        const struct KnobDescriptor *a1,
        __int64 a2,
        unsigned __int8 (*a3)(void *, const struct KnobDescriptor *, unsigned __int64 *),
        int (*a4)(void *, const struct KnobDescriptor *, unsigned __int64))
{
  KnobNamespace *GlobalNamespace; // rax
  unsigned __int64 v5; // rdx
  int (*v6)(void *, const struct KnobDescriptor *, unsigned __int64); // r9
  const struct KnobDescriptor *v7; // r10
  unsigned __int8 (*v9)(void *, const struct KnobDescriptor *, unsigned __int64 *); // [rsp+20h] [rbp-28h]
  void *v10; // [rsp+30h] [rbp-18h]

  GlobalNamespace = GetGlobalNamespace();
  return KnobNamespace::BuildCollection(GlobalNamespace, v7, v5, 1, v9, v6, v10);
}
