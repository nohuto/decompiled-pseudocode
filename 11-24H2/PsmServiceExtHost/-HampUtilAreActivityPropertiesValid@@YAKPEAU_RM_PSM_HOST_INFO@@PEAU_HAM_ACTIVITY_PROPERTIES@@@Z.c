/*
 * XREFs of ?HampUtilAreActivityPropertiesValid@@YAKPEAU_RM_PSM_HOST_INFO@@PEAU_HAM_ACTIVITY_PROPERTIES@@@Z @ 0x18003A094
 * Callers:
 *     ?HamSrvCreateActivity@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGPEAEKKK_KPEAU_HAM_ACTIVITY_PROPERTIES@@PEAXPEA_K@Z @ 0x1800175A0 (-HamSrvCreateActivity@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEBGPEAEKKK_KPEAU_HAM_ACTIVITY_PROPERTIES@@PE.c)
 *     ?HamSrvCreateActivityForProcess@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAXPEAU_HAM_ACTIVITY_PROPERTIES@@PEA_K@Z @ 0x180038718 (-HamSrvCreateActivityForProcess@@YAJPEAU_HAM_CLIENT_CONTEXT@@PEAXPEAU_HAM_ACTIVITY_PROPERTIES@@P.c)
 * Callees:
 *     RmpResourceSetPropertyOverridesAreSupported @ 0x18005ECA8 (RmpResourceSetPropertyOverridesAreSupported.c)
 *     ?HampUtilCheckStartAndRevokeFlags@@YAKPEAU_HAM_ACTIVITY_PROPERTIES@@@Z @ 0x18006F77C (-HampUtilCheckStartAndRevokeFlags@@YAKPEAU_HAM_ACTIVITY_PROPERTIES@@@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_RemoveDamPhaseForHam@@@details@wil@@QEAA_NXZ @ 0x18007EFD0 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_RemoveDamPhaseForHam@@@details@wi.c)
 */

__int64 __fastcall HampUtilAreActivityPropertiesValid(
        struct _RM_PSM_HOST_INFO *a1,
        struct _HAM_ACTIVITY_PROPERTIES *a2)
{
  unsigned int v2; // ebx
  unsigned int v4; // ecx
  int v6; // esi
  unsigned int v7; // ebp
  int v8; // edi
  int v9; // eax
  bool v10; // zf
  struct _RTL_BITMAP BitMapHeader; // [rsp+20h] [rbp-18h] BYREF

  v10 = *((_DWORD *)a1 + 134) == 2;
  v2 = *(_DWORD *)a2;
  BitMapHeader = 0LL;
  if ( v10 )
  {
    v4 = v2 >> 23;
  }
  else
  {
    if ( (v2 & 0x400) != 0 )
      return 0LL;
    v4 = v2 >> 23;
    if ( ((v2 >> 23) & 3) > 1 )
      return 0LL;
  }
  if ( (v4 & 3) != 0 && (v2 & 0x2000) == 0 )
    return 0LL;
  v6 = *((_DWORD *)a2 + 1);
  v7 = 0;
  v8 = *((_DWORD *)a2 + 2);
  v9 = *((_DWORD *)a2 + 68);
  if ( *((_DWORD *)a2 + 67) == 5 )
  {
    v10 = v9 == 0;
  }
  else
  {
    if ( (unsigned int)(v9 - 10) > 0x122 || (v6 & 0x404) != 0 )
      return 0LL;
    v10 = (*((_DWORD *)a2 + 2) & 0x20C) == 0;
  }
  if ( !v10 )
    return 0LL;
  if ( !(unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_RemoveDamPhaseForHam>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_RemoveDamPhaseForHam>::GetImpl'::`2'::impl) )
  {
    if ( (v8 & 0x200) == 0 || (v2 & 0x2000000) != 0 )
      goto LABEL_20;
    return 0LL;
  }
  if ( (v6 & 0x400) != 0 || (v8 & 0x200) != 0 )
    return 0LL;
LABEL_20:
  if ( (v8 & 0xC) != 0 && (v2 & 0x2000000) != 0 )
    return 0LL;
  if ( (v2 & 0x7F) > 0x40 || (v2 & 0x180) >= 0x180 || (v2 & 0x400) != 0 && (v2 & 0x2000) == 0 )
    return 0LL;
  if ( (v2 & 0x180) != 0 && (*((_DWORD *)a2 + 1) & 0x200) != 0 )
    return 0LL;
  if ( (v2 & 0x1400) == 0x1400 || (v2 & 0xC00) == 0xC00 || (v2 & 0x100000) != 0 && (v2 & 0x400) == 0 )
    return 0LL;
  if ( !HampUtilCheckStartAndRevokeFlags(a2) )
    return 0LL;
  RtlInitializeBitMap(&BitMapHeader, (PULONG)a2 + 96, 0x2Fu);
  if ( RtlNumberOfSetBits(&BitMapHeader) )
    return 0LL;
  LOBYTE(v7) = (unsigned int)RmpResourceSetPropertyOverridesAreSupported((char *)a2 + 280) != 0;
  return v7;
}
