/*
 * XREFs of RtlpFcUpdateGovernedFeaturesEffectiveStates @ 0x140781D08
 * Callers:
 *     CmFcManagerOverwriteFeatureConfigurationSection @ 0x1407E4630 (CmFcManagerOverwriteFeatureConfigurationSection.c)
 *     CmFcManagerUpdateFeatureConfigurations @ 0x1407E4C9C (CmFcManagerUpdateFeatureConfigurations.c)
 * Callees:
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     RtlpFcIsGovernedFeatureTableUpdateNeeded @ 0x14078D0BC (RtlpFcIsGovernedFeatureTableUpdateNeeded.c)
 *     FseInitializeGovernedFeaturesEffectiveStates @ 0x14082918C (FseInitializeGovernedFeaturesEffectiveStates.c)
 */

__int64 __fastcall RtlpFcUpdateGovernedFeaturesEffectiveStates(
        char *Src,
        size_t Size,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6,
        char *a7,
        _QWORD *a8)
{
  unsigned int v8; // edi
  unsigned int v13; // ebx
  __int64 v14; // rdx
  char *v15; // r9
  int v16; // edx
  int v17; // ecx

  v8 = 0;
  v13 = 0;
  if ( !Size || !Src )
  {
    *a8 = 0LL;
    return v13;
  }
  if ( Size > *a8 )
  {
    *a8 = Size;
    return (unsigned int)-2147483643;
  }
  if ( *a8 < 0x18uLL || Size < 0x18 )
  {
    *a8 = Size;
    return (unsigned int)-1073741811;
  }
  memset_0(a7, 0, Size);
  memmove(a7, Src, Size);
  if ( a3 && a4 && !(unsigned __int8)RtlpFcIsGovernedFeatureTableUpdateNeeded(Src, v14, a3, a4) )
    return v13;
  v13 = FseInitializeGovernedFeaturesEffectiveStates(a5, v14, a7);
  if ( (v13 & 0x80000000) != 0 )
    return v13;
  v13 = 0;
  if ( Size != *a8 )
    return (unsigned int)-1073741811;
  v15 = &Src[*((_QWORD *)Src + 1)];
  while ( v8 < (unsigned __int16)*(_DWORD *)Src )
  {
    v16 = *(_DWORD *)&a7[16 * v8 + 8 + *((_QWORD *)a7 + 1)];
    v17 = *(_DWORD *)&v15[16 * v8 + 8];
    if ( (((unsigned __int8)v16 ^ (unsigned __int8)v15[16 * v8 + 8]) & 1) != 0
      || (((unsigned __int8)v16 ^ (unsigned __int8)v17) & 0x78) != 0
      || (((unsigned __int8)v16 ^ (unsigned __int8)v17) & 6) != 0
      || ((v16 ^ v17) & 0x7FFF80) != 0 )
    {
      return (unsigned int)-1073741811;
    }
    ++v8;
  }
  return v13;
}
