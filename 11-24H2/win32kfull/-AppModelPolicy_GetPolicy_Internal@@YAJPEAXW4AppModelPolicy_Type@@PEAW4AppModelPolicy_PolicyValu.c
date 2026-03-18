/*
 * XREFs of ?AppModelPolicy_GetPolicy_Internal@@YAJPEAXW4AppModelPolicy_Type@@PEAW4AppModelPolicy_PolicyValue@@PEAU_PS_PKG_CLAIM@@PEA_K@Z @ 0x1401F5F5C
 * Callers:
 *     xxxQueryInformationThread @ 0x14003E6F4 (xxxQueryInformationThread.c)
 * Callees:
 *     Feature_PackagedComElevationSupport__private_IsEnabledNoReportingNoInline @ 0x140288280 (Feature_PackagedComElevationSupport__private_IsEnabledNoReportingNoInline.c)
 */

__int64 __fastcall AppModelPolicy_GetPolicy_Internal(__int64 a1, __int64 a2, _DWORD *a3, int *a4, _QWORD *a5)
{
  int PackageClaims; // eax
  unsigned int v8; // ebx
  _DWORD *v9; // rcx
  int v10; // eax
  bool v11; // zf

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
  if ( (*a5 & 1) != 0 )
  {
    if ( (*a5 & 8) != 0 )
    {
      v9 = &unk_1403593A0;
    }
    else
    {
      v10 = *a4;
      if ( (*a4 & 0x10000) != 0 )
      {
        v9 = &unk_14035939C;
      }
      else if ( (v10 & 0x4000) != 0 )
      {
        v9 = &unk_1403593A4;
      }
      else if ( (v10 & 4) != 0 )
      {
        v9 = &unk_140359384;
      }
      else if ( (v10 & 0x400) != 0 )
      {
        v9 = &unk_140359394;
      }
      else if ( (v10 & 0x800) != 0 )
      {
        v9 = &unk_140359398;
      }
      else if ( (v10 & 0x40) != 0 )
      {
        v9 = &unk_140359390;
      }
      else if ( (v10 & 8) != 0 )
      {
        v9 = &unk_14035938C;
      }
      else
      {
        v9 = &unk_1403593A8;
        if ( (v10 & 0x40000) == 0 )
          v9 = &`AppModelPolicy_GetPolicy_Internal'::`2'::AppModelPolicy_PolicyValue_Table;
      }
    }
  }
  else
  {
    v9 = &unk_140359388;
  }
  v11 = (*a4 & 0x100000) == 0;
  *a3 = *v9;
  if ( !v11 )
    *a3 = 65537;
  Feature_PackagedComElevationSupport__private_IsEnabledNoReportingNoInline();
  return v8;
}
