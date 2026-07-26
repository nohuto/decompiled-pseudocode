/*
 * XREFs of GetGlobalNamespace @ 0x1400AB98C
 * Callers:
 *     ?ndisReinitializeHistograms@@YAJXZ @ 0x140143CD8 (-ndisReinitializeHistograms@@YAJXZ.c)
 *     ?ndisRegisterKnobs@@YAJPEBUKnobDescriptor@@_KP6AEPEAX0AEA_K@ZP6AJ201@Z2@Z @ 0x14014439C (-ndisRegisterKnobs@@YAJPEBUKnobDescriptor@@_KP6AEPEAX0AEA_K@ZP6AJ201@Z2@Z.c)
 * Callees:
 *     <none>
 */

KnobNamespace *GetGlobalNamespace()
{
  return &stru_140126930;
}
