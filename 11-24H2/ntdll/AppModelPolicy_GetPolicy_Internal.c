/*
 * XREFs of AppModelPolicy_GetPolicy_Internal @ 0x1800F32C0
 * Callers:
 *     LdrpInitializePolicy @ 0x1800F30E0 (LdrpInitializePolicy.c)
 * Callees:
 *     RtlQueryPackageClaims @ 0x180008FD0 (RtlQueryPackageClaims.c)
 *     Feature_PackagedComElevationSupport_v2__private_IsEnabledNoReportingNoInline @ 0x18015EFC4 (Feature_PackagedComElevationSupport_v2__private_IsEnabledNoReportingNoInline.c)
 */

NTSTATUS __fastcall AppModelPolicy_GetPolicy_Internal(
        __int64 a1,
        int a2,
        _DWORD *a3,
        _PS_PKG_CLAIM *PkgClaim,
        unsigned __int64 *AttributesPresent)
{
  NTSTATUS v5; // edi
  NTSTATUS result; // eax
  int v10; // ebx
  ULONG Flags; // eax
  bool v12; // zf

  v5 = 0;
  result = RtlQueryPackageClaims((HANDLE)0xFFFFFFFFFFFFFFFCLL, 0LL, 0LL, 0LL, 0LL, 0LL, PkgClaim, AttributesPresent);
  if ( result == -1073741275 )
  {
    *AttributesPresent = 0LL;
    PkgClaim->Flags = 0;
  }
  else
  {
    *a3 = 0;
    v5 = result;
    if ( result < 0 )
      return result;
  }
  if ( (*AttributesPresent & 1) != 0 )
  {
    if ( (*AttributesPresent & 8) != 0 )
    {
      v10 = 9;
    }
    else
    {
      Flags = PkgClaim->Flags;
      if ( (PkgClaim->Flags & 0x10000) != 0 )
      {
        v10 = 8;
      }
      else if ( (Flags & 0x4000) != 0 )
      {
        v10 = 10;
      }
      else if ( (Flags & 4) != 0 )
      {
        v10 = 2;
      }
      else if ( (Flags & 0x400) != 0 )
      {
        v10 = 6;
      }
      else if ( (Flags & 0x800) != 0 )
      {
        v10 = 7;
      }
      else if ( (Flags & 0x40) != 0 )
      {
        v10 = 5;
      }
      else if ( (Flags & 8) != 0 )
      {
        v10 = 4;
      }
      else
      {
        v10 = 1;
        if ( (Flags & 0x40000) != 0 )
          v10 = 11;
      }
    }
  }
  else
  {
    v10 = 3;
  }
  v12 = (PkgClaim->Flags & 0x100000) == 0;
  *a3 = `AppModelPolicy_GetPolicy_Internal'::`2'::AppModelPolicy_PolicyValue_Table[11 * (a2 - 1) + v10 - 1];
  if ( !v12 )
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
  if ( (unsigned int)Feature_PackagedComElevationSupport_v2__private_IsEnabledNoReportingNoInline()
    && a2 == 15
    && (v10 == 1 || (unsigned int)(v10 - 6) <= 1 || v10 == 8) )
  {
    *a3 = 983040;
  }
  return v5;
}
