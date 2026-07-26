/*
 * XREFs of ??1KnobTransaction@@QEAA@XZ @ 0x14008C4B0
 * Callers:
 *     ?ClearKnobStoreValue@KnobNamespace@@AEAAJPEB_W_N@Z @ 0x140153B00 (-ClearKnobStoreValue@KnobNamespace@@AEAAJPEB_W_N@Z.c)
 *     ?UpdateKnobs@KnobNamespace@@AEAAJPEA_N@Z @ 0x140154374 (-UpdateKnobs@KnobNamespace@@AEAAJPEA_N@Z.c)
 *     ?UpdateSingleKnob@KnobNamespace@@AEAAXPEAVKnobCollection@@PEBUKnobDescriptor@@PEAUKnobState@@@Z @ 0x140154444 (-UpdateSingleKnob@KnobNamespace@@AEAAXPEAVKnobCollection@@PEBUKnobDescriptor@@PEAUKnobState@@@Z.c)
 *     ?ClearKnobInStore@RegistryKnobCollection@@UEAAJAEBUKnobDescriptor@@@Z @ 0x140154B70 (-ClearKnobInStore@RegistryKnobCollection@@UEAAJAEBUKnobDescriptor@@@Z.c)
 *     ?SetKnobInStore@RegistryKnobCollection@@UEAAJAEBUKnobDescriptor@@_K@Z @ 0x140154BE0 (-SetKnobInStore@RegistryKnobCollection@@UEAAJAEBUKnobDescriptor@@_K@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall KnobTransaction::~KnobTransaction(KnobTransaction *this)
{
  void *v2; // rcx

  v2 = (void *)*((_QWORD *)this + 1);
  if ( v2 )
    ZwClose(v2);
  if ( *(_QWORD *)this )
    ZwClose(*(HANDLE *)this);
}
