/*
 * XREFs of RtlpFcUpdateGovernedFeaturesEffectiveStates @ 0x140772B88
 * Callers:
 *     CmFcManagerOverwriteFeatureConfigurationSection @ 0x1407D4800 (CmFcManagerOverwriteFeatureConfigurationSection.c)
 *     CmFcManagerUpdateFeatureConfigurations @ 0x140AD4F6C (CmFcManagerUpdateFeatureConfigurations.c)
 * Callees:
 *     memmove @ 0x1406B4940 (memmove.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     RtlpFcAssertGovernedFeaturesBootEffectiveStatesAreEqual @ 0x14077DC38 (RtlpFcAssertGovernedFeaturesBootEffectiveStatesAreEqual.c)
 *     RtlpFcIsGovernedFeatureTableUpdateNeeded @ 0x14077DFB4 (RtlpFcIsGovernedFeatureTableUpdateNeeded.c)
 *     FseInitializeGovernedFeaturesEffectiveStates @ 0x140818BC8 (FseInitializeGovernedFeaturesEffectiveStates.c)
 */

__int64 __fastcall RtlpFcUpdateGovernedFeaturesEffectiveStates(
        void *Src,
        size_t Size,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6,
        void *a7,
        _QWORD *a8)
{
  int v8; // edi
  __int64 v13; // rdx

  v8 = 0;
  if ( Size && Src )
  {
    if ( Size <= *a8 )
    {
      if ( *a8 < 0x18uLL || Size < 0x18 )
      {
        *a8 = Size;
        return (unsigned int)-1073741811;
      }
      else
      {
        memset_0(a7, 0, Size);
        memmove(a7, Src, Size);
        if ( !a3 || !a4 || (unsigned __int8)RtlpFcIsGovernedFeatureTableUpdateNeeded(Src, v13, a3, a4) )
        {
          v8 = FseInitializeGovernedFeaturesEffectiveStates(a5, v13, a7);
          if ( v8 >= 0 )
            return (unsigned int)RtlpFcAssertGovernedFeaturesBootEffectiveStatesAreEqual(Src, Size, a7, *a8);
        }
      }
    }
    else
    {
      *a8 = Size;
      return (unsigned int)-2147483643;
    }
  }
  else
  {
    *a8 = 0LL;
  }
  return (unsigned int)v8;
}
