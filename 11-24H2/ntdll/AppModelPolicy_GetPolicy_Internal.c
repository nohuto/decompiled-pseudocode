/*
 * XREFs of AppModelPolicy_GetPolicy_Internal @ 0x1800F8750
 * Callers:
 *     LdrpInitializePolicy @ 0x1800F8570 (LdrpInitializePolicy.c)
 * Callees:
 *     RtlQueryPackageClaims @ 0x180087120 (RtlQueryPackageClaims.c)
 *     Feature_PackagedComElevationSupport__private_IsEnabledNoReportingNoInline @ 0x180160C04 (Feature_PackagedComElevationSupport__private_IsEnabledNoReportingNoInline.c)
 */

__int64 __fastcall AppModelPolicy_GetPolicy_Internal(__int64 a1, int a2, _DWORD *a3, _QWORD *a4, _QWORD *a5)
{
  unsigned int v5; // edi
  __int64 result; // rax
  int v10; // ebx
  int v11; // eax
  bool v12; // zf

  v5 = 0;
  result = RtlQueryPackageClaims(-4LL, 0LL, 0LL, 0LL, 0LL, 0LL, a4, a5);
  if ( (_DWORD)result == -1073741275 )
  {
    *a5 = 0LL;
    *(_DWORD *)a4 = 0;
  }
  else
  {
    *a3 = 0;
    v5 = result;
    if ( (int)result < 0 )
      return result;
  }
  if ( (*a5 & 1) != 0 )
  {
    if ( (*a5 & 8) != 0 )
    {
      v10 = 9;
    }
    else
    {
      v11 = *(_DWORD *)a4;
      if ( (*(_DWORD *)a4 & 0x10000) != 0 )
      {
        v10 = 8;
      }
      else if ( (v11 & 0x4000) != 0 )
      {
        v10 = 10;
      }
      else if ( (v11 & 4) != 0 )
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
      else if ( (v11 & 8) != 0 )
      {
        v10 = 4;
      }
      else
      {
        v10 = 1;
        if ( (v11 & 0x40000) != 0 )
          v10 = 11;
      }
    }
  }
  else
  {
    v10 = 3;
  }
  v12 = (*(_DWORD *)a4 & 0x100000) == 0;
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
  if ( (unsigned int)Feature_PackagedComElevationSupport__private_IsEnabledNoReportingNoInline()
    && a2 == 15
    && (v10 == 1 || (unsigned int)(v10 - 6) <= 1 || v10 == 8) )
  {
    *a3 = 983040;
  }
  return v5;
}
