/*
 * XREFs of ?AppModelPolicy_GetPolicy_Internal@@YAJPEAXW4AppModelPolicy_Type@@PEAW4AppModelPolicy_PolicyValue@@PEAU_PS_PKG_CLAIM@@PEA_K@Z @ 0x180039900
 * Callers:
 *     ?HampSystemGetProcessFullIdentity@@YAJPEAXPEAKPEAU_RM_PSM_HOST_INFO@@@Z @ 0x180039470 (-HampSystemGetProcessFullIdentity@@YAJPEAXPEAKPEAU_RM_PSM_HOST_INFO@@@Z.c)
 * Callees:
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_PackagedComElevationSupport@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x1800917C4 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_PackagedComElevationSupport@@@det.c)
 */

__int64 __fastcall AppModelPolicy_GetPolicy_Internal(__int64 a1, __int64 a2, _DWORD *a3, _DWORD *a4, _QWORD *a5)
{
  int PackageClaims; // eax
  unsigned int v8; // ebx
  _DWORD *v9; // rcx
  bool v10; // zf

  PackageClaims = RtlQueryPackageClaims(a1, 0LL, 0LL, 0LL, 0LL, 0LL, a4, a5);
  v8 = PackageClaims;
  if ( PackageClaims == -1073741275 )
  {
    *a5 = 0LL;
    *a4 = 0;
    v8 = 0;
  }
  else
  {
    *a3 = 0;
    if ( PackageClaims < 0 )
      return v8;
  }
  if ( (*(_BYTE *)a5 & 1) != 0 )
  {
    if ( (*(_BYTE *)a5 & 8) != 0 )
    {
      v9 = &unk_1800C6F20;
    }
    else if ( (*a4 & 0x10000) != 0 )
    {
      v9 = &unk_1800C6F1C;
    }
    else if ( (*a4 & 0x4000) != 0 )
    {
      v9 = &unk_1800C6F24;
    }
    else if ( (*(_BYTE *)a4 & 4) != 0 )
    {
      v9 = &unk_1800C6F04;
    }
    else if ( (*a4 & 0x400) != 0 )
    {
      v9 = &unk_1800C6F14;
    }
    else if ( (*a4 & 0x800) != 0 )
    {
      v9 = &unk_1800C6F18;
    }
    else if ( (*(_BYTE *)a4 & 0x40) != 0 )
    {
      v9 = &unk_1800C6F10;
    }
    else if ( (*(_BYTE *)a4 & 8) != 0 )
    {
      v9 = &unk_1800C6F0C;
    }
    else
    {
      v9 = &unk_1800C6F28;
      if ( (*a4 & 0x40000) == 0 )
        v9 = &`AppModelPolicy_GetPolicy_Internal'::`2'::AppModelPolicy_PolicyValue_Table;
    }
  }
  else
  {
    v9 = &unk_1800C6F08;
  }
  v10 = (*a4 & 0x100000) == 0;
  *a3 = *v9;
  if ( !v10 )
    *a3 = 65537;
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_PackagedComElevationSupport>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_PackagedComElevationSupport>::GetImpl'::`2'::impl);
  return v8;
}
