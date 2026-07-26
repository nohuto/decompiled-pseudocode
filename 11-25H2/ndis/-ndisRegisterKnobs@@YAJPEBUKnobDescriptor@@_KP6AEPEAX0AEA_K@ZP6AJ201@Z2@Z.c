/*
 * XREFs of ?ndisRegisterKnobs@@YAJPEBUKnobDescriptor@@_KP6AEPEAX0AEA_K@ZP6AJ201@Z2@Z @ 0x14014439C
 * Callers:
 *     ?ndisReadRegistry@@YAXXZ @ 0x1400A2340 (-ndisReadRegistry@@YAXXZ.c)
 *     ?ndisNblTrackerReadConfiguration@@YAXXZ @ 0x1400A9E14 (-ndisNblTrackerReadConfiguration@@YAXXZ.c)
 *     ?ndisStackExpansionInitializeSubsystem@@YAJXZ @ 0x1400CBB88 (-ndisStackExpansionInitializeSubsystem@@YAJXZ.c)
 *     ?ndisInitializeNblPoolGlobal@@YAXXZ @ 0x1400CDFB8 (-ndisInitializeNblPoolGlobal@@YAXXZ.c)
 *     ?ndisIfIndexAllocatorSubsystemInitialize@@YAXXZ @ 0x1400D6144 (-ndisIfIndexAllocatorSubsystemInitialize@@YAXXZ.c)
 *     ?ndisInitializeDmaSubsystem@@YAXXZ @ 0x1400E1218 (-ndisInitializeDmaSubsystem@@YAXXZ.c)
 *     DriverEntry @ 0x140196234 (DriverEntry.c)
 * Callees:
 *     GetGlobalNamespace @ 0x1400AB98C (GetGlobalNamespace.c)
 *     ?BuildCollection@KnobNamespace@@AEAAJPEBUKnobDescriptor@@_K_NP6AEPEAX0AEA_K@ZP6AJ301@Z3@Z @ 0x14016DE60 (-BuildCollection@KnobNamespace@@AEAAJPEBUKnobDescriptor@@_K_NP6AEPEAX0AEA_K@ZP6AJ301@Z3@Z.c)
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
