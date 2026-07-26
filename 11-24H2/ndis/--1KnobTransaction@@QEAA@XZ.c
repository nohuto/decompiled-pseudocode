/*
 * XREFs of ??1KnobTransaction@@QEAA@XZ @ 0x14006FED0
 * Callers:
 *     ?ClearKnobStoreValue@KnobNamespace@@AEAAJPEB_W_N@Z @ 0x140148E30 (-ClearKnobStoreValue@KnobNamespace@@AEAAJPEB_W_N@Z.c)
 *     ?UpdateKnobs@KnobNamespace@@AEAAJPEA_N@Z @ 0x1401496A4 (-UpdateKnobs@KnobNamespace@@AEAAJPEA_N@Z.c)
 *     ?UpdateSingleKnob@KnobNamespace@@AEAAXPEAVKnobCollection@@PEBUKnobDescriptor@@PEAUKnobState@@@Z @ 0x140149774 (-UpdateSingleKnob@KnobNamespace@@AEAAXPEAVKnobCollection@@PEBUKnobDescriptor@@PEAUKnobState@@@Z.c)
 *     ?ClearKnobInStore@RegistryKnobCollection@@UEAAJAEBUKnobDescriptor@@@Z @ 0x140149EA0 (-ClearKnobInStore@RegistryKnobCollection@@UEAAJAEBUKnobDescriptor@@@Z.c)
 *     ?SetKnobInStore@RegistryKnobCollection@@UEAAJAEBUKnobDescriptor@@_K@Z @ 0x140149F10 (-SetKnobInStore@RegistryKnobCollection@@UEAAJAEBUKnobDescriptor@@_K@Z.c)
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
