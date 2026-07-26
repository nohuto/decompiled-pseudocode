/*
 * XREFs of GetGlobalNamespace @ 0x1400A37DC
 * Callers:
 *     ?ndisReinitializeHistograms@@YAJXZ @ 0x140138CD8 (-ndisReinitializeHistograms@@YAJXZ.c)
 *     ?ndisRegisterKnobs@@YAJPEBUKnobDescriptor@@_KP6AEPEAX0AEA_K@ZP6AJ201@Z2@Z @ 0x1401394B4 (-ndisRegisterKnobs@@YAJPEBUKnobDescriptor@@_KP6AEPEAX0AEA_K@ZP6AJ201@Z2@Z.c)
 * Callees:
 *     <none>
 */

KnobNamespace *GetGlobalNamespace()
{
  return &stru_14011C8F0;
}
