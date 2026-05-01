/*
 * XREFs of ?HampUtilCheckStartAndRevokeFlags@@YAKPEAU_HAM_ACTIVITY_PROPERTIES@@@Z @ 0x18006F77C
 * Callers:
 *     ?HampUtilAreActivityPropertiesValid@@YAKPEAU_RM_PSM_HOST_INFO@@PEAU_HAM_ACTIVITY_PROPERTIES@@@Z @ 0x18003A094 (-HampUtilAreActivityPropertiesValid@@YAKPEAU_RM_PSM_HOST_INFO@@PEAU_HAM_ACTIVITY_PROPERTIES@@@Z.c)
 * Callees:
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_RemoveDamPhaseForHam@@@details@wil@@QEAA_NXZ @ 0x18007EFD0 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_RemoveDamPhaseForHam@@@details@wi.c)
 */

__int64 __fastcall HampUtilCheckStartAndRevokeFlags(struct _HAM_ACTIVITY_PROPERTIES *a1)
{
  char IsEnabled; // al
  unsigned int v3; // edx
  __int64 result; // rax

  if ( *((_DWORD *)a1 + 2) >= 0x400u
    || *((_DWORD *)a1 + 1) >= 0x800u
    || (*((_BYTE *)a1 + 8) & 2) != 0 && (*((_BYTE *)a1 + 4) & 2) == 0
    || (*((_BYTE *)a1 + 8) & 0xC) != 0 && (*((_BYTE *)a1 + 4) & 4) == 0 )
  {
    return 0LL;
  }
  IsEnabled = wil::details::FeatureImpl<__WilFeatureTraits_Feature_RemoveDamPhaseForHam>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_RemoveDamPhaseForHam>::GetImpl'::`2'::impl);
  v3 = *((_DWORD *)a1 + 2);
  if ( !IsEnabled )
  {
    if ( (v3 & 0x200) == 0 || (*((_DWORD *)a1 + 1) & 0x400) != 0 )
      goto LABEL_13;
    return 0LL;
  }
  if ( (v3 & 0x200) != 0 || (*((_DWORD *)a1 + 1) & 0x400) != 0 )
    return 0LL;
LABEL_13:
  if ( (v3 & 0x20) != 0 && (*((_BYTE *)a1 + 4) & 0x10) == 0 )
    return 0LL;
  if ( (v3 & 0x10) != 0 && (*((_BYTE *)a1 + 4) & 8) == 0 )
    return 0LL;
  result = 1LL;
  if ( (v3 & 1) != 0 && (*((_BYTE *)a1 + 4) & 1) == 0 )
    return 0LL;
  if ( (v3 & 0x40) != 0 && (*((_BYTE *)a1 + 4) & 0x20) == 0
    || ((*((_BYTE *)a1 + 4) ^ (unsigned __int8)(v3 >> 1)) & 0x40) != 0
    || (*(_DWORD *)a1 & 0x400) != 0 && (v3 & 0x100) != 0 )
  {
    return 0LL;
  }
  return result;
}
