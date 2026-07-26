/*
 * XREFs of ?GetCurrentValue@KnobDescriptor@@QEBA_KXZ @ 0x1400635B0
 * Callers:
 *     ?QueryKnobInformation@KnobNamespace@@AEAA_NPEB_WPEAUNDIS_KNOB_INFORMATION@@@Z @ 0x140149444 (-QueryKnobInformation@KnobNamespace@@AEAA_NPEB_WPEAUNDIS_KNOB_INFORMATION@@@Z.c)
 *     ?SetKnobEphemeralValue@KnobNamespace@@AEAAJPEB_W_K@Z @ 0x140149500 (-SetKnobEphemeralValue@KnobNamespace@@AEAAJPEB_W_K@Z.c)
 *     ?UpdateSingleKnob@KnobNamespace@@AEAAXPEAVKnobCollection@@PEBUKnobDescriptor@@PEAUKnobState@@@Z @ 0x140149774 (-UpdateSingleKnob@KnobNamespace@@AEAAXPEAVKnobCollection@@PEBUKnobDescriptor@@PEAUKnobState@@@Z.c)
 *     ?CommitUpdatedKnobValues@KnobCollection@@QEAAX_N@Z @ 0x140162BD0 (-CommitUpdatedKnobValues@KnobCollection@@QEAAX_N@Z.c)
 *     ?PrepareUpdatedKnobValues@KnobCollection@@QEAAXAEAUKnobTransaction@@@Z @ 0x140162C80 (-PrepareUpdatedKnobValues@KnobCollection@@QEAAXAEAUKnobTransaction@@@Z.c)
 *     ?ReadKnobFromStore@KnobCollection@@QEAAJAEAUKnobTransaction@@AEBUKnobDescriptor@@AEAUKnobState@@@Z @ 0x140162D30 (-ReadKnobFromStore@KnobCollection@@QEAAJAEAUKnobTransaction@@AEBUKnobDescriptor@@AEAUKnobState@@.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall KnobDescriptor::GetCurrentValue(KnobDescriptor *this)
{
  ConfigKnobFlag Flags; // eax
  unsigned int *Value; // rdx

  Flags = this->Flags;
  if ( (Flags & 2) != 0 )
    return *(unsigned __int8 *)this->Value;
  Value = (unsigned int *)this->Value;
  if ( (Flags & 4) != 0 )
    return *(_QWORD *)Value;
  else
    return *Value;
}
