/*
 * XREFs of AppModelPolicy_GetPolicy_Internal @ 0x1404944A8
 * Callers:
 *     SeQuerySigningPolicyWorker @ 0x140A1C1B8 (SeQuerySigningPolicyWorker.c)
 * Callees:
 *     RtlQueryPackageClaims @ 0x140356380 (RtlQueryPackageClaims.c)
 *     Feature_PackagedComElevationSupport__private_IsEnabledNoReportingNoInline @ 0x1404F495C (Feature_PackagedComElevationSupport__private_IsEnabledNoReportingNoInline.c)
 */

__int64 __fastcall AppModelPolicy_GetPolicy_Internal(__int64 a1, __int64 a2, int *a3, _QWORD *a4, _QWORD *a5)
{
  NTSTATUS PackageClaims; // eax
  unsigned int v8; // ebx
  int *v9; // rcx
  int v10; // eax

  PackageClaims = RtlQueryPackageClaims(a1, 0LL, 0LL, 0LL, 0LL, 0LL, a4, a5);
  v8 = PackageClaims;
  if ( PackageClaims == -1073741275 )
  {
    *a5 = 0LL;
    *(_DWORD *)a4 = 0;
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
      v9 = &dword_140036F6C;
    }
    else
    {
      v10 = *(_DWORD *)a4;
      if ( (*(_DWORD *)a4 & 0x10000) != 0 )
      {
        v9 = (int *)byte_140036F68;
      }
      else if ( (v10 & 0x4000) != 0 )
      {
        v9 = (int *)byte_140036F70;
      }
      else if ( (v10 & 4) != 0 )
      {
        v9 = (int *)byte_140036F50;
      }
      else if ( (v10 & 0x400) != 0 )
      {
        v9 = (int *)byte_140036F60;
      }
      else if ( (v10 & 0x800) != 0 )
      {
        v9 = &dword_140036F64;
      }
      else if ( (v10 & 0x40) != 0 )
      {
        v9 = &dword_140036F5C;
      }
      else if ( (v10 & 8) != 0 )
      {
        v9 = (int *)byte_140036F58;
      }
      else
      {
        v9 = &dword_140036F74;
        if ( (v10 & 0x40000) == 0 )
          v9 = &dword_140036F4C;
      }
    }
  }
  else
  {
    v9 = &dword_140036F54;
  }
  *a3 = *v9;
  Feature_PackagedComElevationSupport__private_IsEnabledNoReportingNoInline();
  return v8;
}
