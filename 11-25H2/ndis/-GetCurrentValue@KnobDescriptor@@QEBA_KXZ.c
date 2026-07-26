/*
 * XREFs of ?GetCurrentValue@KnobDescriptor@@QEBA_KXZ @ 0x14007F460
 * Callers:
 *     ?QueryKnobInformation@KnobNamespace@@AEAA_NPEB_WPEAUNDIS_KNOB_INFORMATION@@@Z @ 0x140154114 (-QueryKnobInformation@KnobNamespace@@AEAA_NPEB_WPEAUNDIS_KNOB_INFORMATION@@@Z.c)
 *     ?SetKnobEphemeralValue@KnobNamespace@@AEAAJPEB_W_K@Z @ 0x1401541D0 (-SetKnobEphemeralValue@KnobNamespace@@AEAAJPEB_W_K@Z.c)
 *     ?UpdateSingleKnob@KnobNamespace@@AEAAXPEAVKnobCollection@@PEBUKnobDescriptor@@PEAUKnobState@@@Z @ 0x140154444 (-UpdateSingleKnob@KnobNamespace@@AEAAXPEAVKnobCollection@@PEBUKnobDescriptor@@PEAUKnobState@@@Z.c)
 *     ?CommitUpdatedKnobValues@KnobCollection@@QEAAX_N@Z @ 0x14016E270 (-CommitUpdatedKnobValues@KnobCollection@@QEAAX_N@Z.c)
 *     ?PrepareUpdatedKnobValues@KnobCollection@@QEAAXAEAUKnobTransaction@@@Z @ 0x14016E320 (-PrepareUpdatedKnobValues@KnobCollection@@QEAAXAEAUKnobTransaction@@@Z.c)
 *     ?ReadKnobFromStore@KnobCollection@@QEAAJAEAUKnobTransaction@@AEBUKnobDescriptor@@AEAUKnobState@@@Z @ 0x14016E3D0 (-ReadKnobFromStore@KnobCollection@@QEAAJAEAUKnobTransaction@@AEBUKnobDescriptor@@AEAUKnobState@@.c)
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
