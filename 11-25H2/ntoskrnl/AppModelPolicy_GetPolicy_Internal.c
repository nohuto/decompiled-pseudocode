/*
 * XREFs of AppModelPolicy_GetPolicy_Internal @ 0x140495818
 * Callers:
 *     SeQuerySigningPolicyWorker @ 0x140AC8B10 (SeQuerySigningPolicyWorker.c)
 * Callees:
 *     RtlQueryPackageClaims @ 0x140292AF0 (RtlQueryPackageClaims.c)
 *     Feature_PackagedComElevationSupport__private_IsEnabledNoReportingNoInline @ 0x1405FBE2C (Feature_PackagedComElevationSupport__private_IsEnabledNoReportingNoInline.c)
 */

__int64 __fastcall AppModelPolicy_GetPolicy_Internal(
        void *a1,
        __int64 a2,
        int *a3,
        _PS_PKG_CLAIM *a4,
        unsigned __int64 *a5)
{
  NTSTATUS PackageClaims; // eax
  unsigned int v8; // ebx
  int *v9; // rcx
  ULONG Flags; // eax

  PackageClaims = RtlQueryPackageClaims(a1, 0LL, 0LL, 0LL, 0LL, 0LL, a4, a5);
  v8 = PackageClaims;
  if ( PackageClaims == -1073741275 )
  {
    *a5 = 0LL;
    a4->Flags = 0;
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
      v9 = &dword_14003694C;
    }
    else
    {
      Flags = a4->Flags;
      if ( (a4->Flags & 0x10000) != 0 )
      {
        v9 = (int *)byte_140036948;
      }
      else if ( (Flags & 0x4000) != 0 )
      {
        v9 = (int *)byte_140036950;
      }
      else if ( (Flags & 4) != 0 )
      {
        v9 = (int *)byte_140036930;
      }
      else if ( (Flags & 0x400) != 0 )
      {
        v9 = (int *)byte_140036940;
      }
      else if ( (Flags & 0x800) != 0 )
      {
        v9 = &dword_140036944;
      }
      else if ( (Flags & 0x40) != 0 )
      {
        v9 = &dword_14003693C;
      }
      else if ( (Flags & 8) != 0 )
      {
        v9 = (int *)byte_140036938;
      }
      else
      {
        v9 = &dword_140036954;
        if ( (Flags & 0x40000) == 0 )
          v9 = &dword_14003692C;
      }
    }
  }
  else
  {
    v9 = &dword_140036934;
  }
  *a3 = *v9;
  Feature_PackagedComElevationSupport__private_IsEnabledNoReportingNoInline();
  return v8;
}
