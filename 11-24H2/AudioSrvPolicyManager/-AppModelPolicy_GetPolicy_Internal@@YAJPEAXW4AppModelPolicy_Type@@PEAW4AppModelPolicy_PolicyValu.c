/*
 * XREFs of ?AppModelPolicy_GetPolicy_Internal@@YAJPEAXW4AppModelPolicy_Type@@PEAW4AppModelPolicy_PolicyValue@@PEAU_PS_PKG_CLAIM@@PEA_K@Z @ 0x180036580
 * Callers:
 *     ?RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z @ 0x1800060D0 (-RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z.c)
 * Callees:
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_PackagedComElevationSupport_v2@@@details@wil@@QEAA_NW4ReportingKind@3@@Z @ 0x180039BB0 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_PackagedComElevationSupport_v2@@@.c)
 */

__int64 __fastcall AppModelPolicy_GetPolicy_Internal(__int64 a1, int a2, _DWORD *a3, int *a4, _QWORD *a5)
{
  int PackageClaims; // eax
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned int v11; // edi
  int v12; // ebx
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // rdx

  PackageClaims = RtlQueryPackageClaims(a1, 0LL, 0LL, 0LL);
  v11 = PackageClaims;
  if ( PackageClaims == -1073741275 )
  {
    *a5 = 0LL;
    v11 = 0;
    *a4 = 0;
    *a3 = 0;
  }
  else
  {
    *a3 = 0;
    if ( PackageClaims < 0 )
      return v11;
  }
  if ( (*a5 & 1) != 0 )
  {
    if ( (*a5 & 8) != 0 )
    {
      v12 = 9;
    }
    else
    {
      v13 = *a4;
      if ( (*a4 & 0x10000) != 0 )
      {
        v12 = 8;
      }
      else if ( (v13 & 0x4000) != 0 )
      {
        v12 = 10;
      }
      else
      {
        v12 = 4;
        if ( (v13 & 4) != 0 )
        {
          v12 = 2;
        }
        else if ( (v13 & 0x400) != 0 )
        {
          v12 = 6;
        }
        else if ( (v13 & 0x800) != 0 )
        {
          v12 = 7;
        }
        else if ( (v13 & 0x40) != 0 )
        {
          v12 = 5;
        }
        else if ( (v13 & 8) == 0 )
        {
          v12 = (v13 & 0x40000) != 0 ? 11 : 1;
        }
      }
    }
  }
  else
  {
    v12 = 3;
  }
  v14 = (unsigned int)(v12 - 1);
  v15 = v14 + 11LL * (unsigned int)(a2 - 1);
  *a3 = `AppModelPolicy_GetPolicy_Internal'::`2'::AppModelPolicy_PolicyValue_Table[v15];
  if ( (*a4 & 0x100000) != 0 )
  {
    v14 = (unsigned int)(a2 - 1);
    if ( a2 == 1 )
    {
      *a3 = 65537;
    }
    else
    {
      v14 = (unsigned int)(a2 - 11);
      if ( a2 == 11 )
      {
        *a3 = 720897;
      }
      else
      {
        v14 = (unsigned int)(a2 - 28);
        if ( a2 == 28 )
        {
          *a3 = 1835008;
        }
        else if ( a2 == 58 )
        {
          *a3 = 3801088;
        }
      }
    }
  }
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_PackagedComElevationSupport_v2>::__private_IsEnabled(
                          v14,
                          v15,
                          v9,
                          v10)
    && a2 == 15
    && (v12 == 1 || (unsigned int)(v12 - 6) <= 1 || v12 == 8) )
  {
    *a3 = 983040;
  }
  return v11;
}
