/*
 * XREFs of AcpiRootIsFeatureSupported @ 0x140067A80
 * Callers:
 *     <none>
 * Callees:
 *     HviIsAnyHypervisorPresent @ 0x1400467E4 (HviIsAnyHypervisorPresent.c)
 *     IsHypervisorLpiCapable @ 0x14004A708 (IsHypervisorLpiCapable.c)
 */

__int64 __fastcall AcpiRootIsFeatureSupported(char *Str1)
{
  unsigned int v2; // ebx

  v2 = -1073741637;
  if ( !HviIsAnyHypervisorPresent() || IsHypervisorLpiCapable() )
    v2 = _stricmp(Str1, "Processor Aggregator Device") != 0 ? 0xC00000BB : 0;
  if ( !HviIsAnyHypervisorPresent() && !_stricmp(Str1, "Resource Appending") )
  {
    _InterlockedOr64(&AcpiGlobalFlags, 2uLL);
    v2 = 0;
  }
  return _stricmp(Str1, "DisplayMux") != 0 ? v2 : 0;
}
