/*
 * XREFs of ?AppModelPolicy_GetPolicy_Internal@@YAJPEAXW4AppModelPolicy_Type@@PEAW4AppModelPolicy_PolicyValue@@PEAU_PS_PKG_CLAIM@@PEA_K@Z @ 0x180038F60
 * Callers:
 *     ?RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z @ 0x1800082D0 (-RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z.c)
 * Callees:
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_PackagedComElevationSupport@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x18003C3EC (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_PackagedComElevationSupport@@@det.c)
 */

__int64 __fastcall AppModelPolicy_GetPolicy_Internal(__int64 a1, int a2, _DWORD *a3, int *a4, _QWORD *a5)
{
  int PackageClaims; // eax
  unsigned int v9; // edi
  int v10; // ebx
  int v11; // eax

  PackageClaims = RtlQueryPackageClaims(a1, 0LL, 0LL, 0LL);
  v9 = PackageClaims;
  if ( PackageClaims == -1073741275 )
  {
    *a5 = 0LL;
    v9 = 0;
    *a4 = 0;
    *a3 = 0;
  }
  else
  {
    *a3 = 0;
    if ( PackageClaims < 0 )
      return v9;
  }
  if ( (*a5 & 1) != 0 )
  {
    if ( (*a5 & 8) != 0 )
    {
      v10 = 9;
    }
    else
    {
      v11 = *a4;
      if ( (*a4 & 0x10000) != 0 )
      {
        v10 = 8;
      }
      else if ( (v11 & 0x4000) != 0 )
      {
        v10 = 10;
      }
      else
      {
        v10 = 4;
        if ( (v11 & 4) != 0 )
        {
          v10 = 2;
        }
        else if ( (v11 & 0x400) != 0 )
        {
          v10 = 6;
        }
        else if ( (v11 & 0x800) != 0 )
        {
          v10 = 7;
        }
        else if ( (v11 & 0x40) != 0 )
        {
          v10 = 5;
        }
        else if ( (v11 & 8) == 0 )
        {
          v10 = (v11 & 0x40000) != 0 ? 11 : 1;
        }
      }
    }
  }
  else
  {
    v10 = 3;
  }
  *a3 = `AppModelPolicy_GetPolicy_Internal'::`2'::AppModelPolicy_PolicyValue_Table[11 * (a2 - 1) + v10 - 1];
  if ( (*a4 & 0x100000) != 0 )
  {
    switch ( a2 )
    {
      case 1:
        *a3 = 65537;
        break;
      case 11:
        *a3 = 720897;
        break;
      case 28:
        *a3 = 1835008;
        break;
      case 58:
        *a3 = 3801088;
        break;
    }
  }
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_PackagedComElevationSupport>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_PackagedComElevationSupport>::GetImpl'::`2'::impl)
    && a2 == 15
    && (v10 == 1 || (unsigned int)(v10 - 6) <= 1 || v10 == 8) )
  {
    *a3 = 983040;
  }
  return v9;
}
