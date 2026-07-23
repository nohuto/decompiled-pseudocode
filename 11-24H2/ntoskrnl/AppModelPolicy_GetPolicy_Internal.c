/*
 * XREFs of AppModelPolicy_GetPolicy_Internal @ 0x14048EF38
 * Callers:
 *     SeQuerySigningPolicyWorker @ 0x1409FA8F8 (SeQuerySigningPolicyWorker.c)
 * Callees:
 *     RtlQueryPackageClaims @ 0x140422D20 (RtlQueryPackageClaims.c)
 *     Feature_PackagedComElevationSupport_v2__private_IsEnabledNoReportingNoInline @ 0x14060581C (Feature_PackagedComElevationSupport_v2__private_IsEnabledNoReportingNoInline.c)
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
      v9 = &dword_1400372BC;
    }
    else
    {
      Flags = a4->Flags;
      if ( (a4->Flags & 0x10000) != 0 )
      {
        v9 = (int *)byte_1400372B8;
      }
      else if ( (Flags & 0x4000) != 0 )
      {
        v9 = (int *)byte_1400372C0;
      }
      else if ( (Flags & 4) != 0 )
      {
        v9 = (int *)byte_1400372A0;
      }
      else if ( (Flags & 0x400) != 0 )
      {
        v9 = (int *)byte_1400372B0;
      }
      else if ( (Flags & 0x800) != 0 )
      {
        v9 = &dword_1400372B4;
      }
      else if ( (Flags & 0x40) != 0 )
      {
        v9 = &dword_1400372AC;
      }
      else if ( (Flags & 8) != 0 )
      {
        v9 = (int *)byte_1400372A8;
      }
      else
      {
        v9 = &dword_1400372C4;
        if ( (Flags & 0x40000) == 0 )
          v9 = &dword_14003729C;
      }
    }
  }
  else
  {
    v9 = &dword_1400372A4;
  }
  *a3 = *v9;
  Feature_PackagedComElevationSupport_v2__private_IsEnabledNoReportingNoInline();
  return v8;
}
