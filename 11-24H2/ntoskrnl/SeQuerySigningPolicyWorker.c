/*
 * XREFs of SeQuerySigningPolicyWorker @ 0x140A1C1B8
 * Callers:
 *     SeQuerySigningPolicy @ 0x140A1BB40 (SeQuerySigningPolicy.c)
 * Callees:
 *     AppModelPolicy_GetPolicy_Internal @ 0x1404944A8 (AppModelPolicy_GetPolicy_Internal.c)
 *     Feature_TrustedLaunch__private_IsEnabledDeviceUsageNoInline @ 0x1404F4924 (Feature_TrustedLaunch__private_IsEnabledDeviceUsageNoInline.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     SepIsLockedDown @ 0x14078E628 (SepIsLockedDown.c)
 *     SeQueryInformationToken @ 0x14090D870 (SeQueryInformationToken.c)
 *     SepIsNgenImage @ 0x140A1C41C (SepIsNgenImage.c)
 */

__int64 __fastcall SeQuerySigningPolicyWorker(
        void *a1,
        __int64 a2,
        char a3,
        unsigned __int8 a4,
        unsigned __int8 a5,
        unsigned __int8 *a6,
        unsigned __int8 *a7,
        unsigned __int8 *a8)
{
  unsigned __int8 v8; // di
  __int64 v12; // rdx
  int Policy_Internal; // ecx
  __int64 v14; // r8
  __int64 v15; // r9
  char v16; // r15
  int v17; // r12d
  int v18; // ebx
  bool v20; // zf
  unsigned __int8 v21; // al
  char v22; // al
  char v23; // [rsp+30h] [rbp-20h] BYREF
  _BYTE v24[3]; // [rsp+31h] [rbp-1Fh] BYREF
  PVOID TokenInformation; // [rsp+34h] [rbp-1Ch] BYREF
  __int64 v26; // [rsp+40h] [rbp-10h] BYREF
  __int64 v27; // [rsp+48h] [rbp-8h] BYREF

  v8 = a5;
  v24[0] = 0;
  v23 = 0;
  v26 = 0LL;
  HIDWORD(TokenInformation) = 0;
  v27 = 0LL;
  Policy_Internal = AppModelPolicy_GetPolicy_Internal((__int64)a1, a2, (int *)&TokenInformation + 1, &v26, &v27);
  if ( Policy_Internal >= 0 )
  {
    v16 = 1;
    if ( (unsigned int)(HIDWORD(TokenInformation) - 3014657) > 1
      || HIDWORD(TokenInformation) == 3014658 && (unsigned int)BYTE4(v26) - 4 > 1 )
    {
      v17 = a3 & 1;
    }
    else
    {
      v17 = a3 & 1;
      if ( !v17 )
      {
        v18 = BYTE4(v26);
        if ( !BYTE4(v26) || BYTE4(v26) == 1 )
        {
          if ( !(unsigned int)Feature_TrustedLaunch__private_IsEnabledDeviceUsageNoInline() || (v26 & 0x200000) == 0 )
          {
            *a6 = a5;
            goto LABEL_16;
          }
          return (unsigned int)-1073741790;
        }
        if ( BYTE4(v26) == 2 )
        {
          *a6 = 8;
LABEL_16:
          *a7 = v8;
LABEL_17:
          *a8 = 0;
          return 0;
        }
        if ( BYTE4(v26) == 3 )
        {
          v22 = 6;
          goto LABEL_47;
        }
        if ( BYTE4(v26) != 4 && BYTE4(v26) != 5 )
        {
          if ( BYTE4(v26) != 6 )
            return 0;
          if ( !(unsigned int)Feature_TrustedLaunch__private_IsEnabledDeviceUsageNoInline() || (v26 & 0x200000) == 0 )
          {
            v20 = a5 == 2;
LABEL_45:
            v22 = !v20 ? 0 : 2;
LABEL_47:
            *a6 = v22;
LABEL_49:
            *a7 = v22;
            goto LABEL_17;
          }
          v20 = a5 == 2;
          if ( a5 == 2 )
            goto LABEL_45;
          return (unsigned int)-1073741790;
        }
        if ( a5 && qword_140F04970 && (int)guard_dispatch_icall_no_overrides(&v23, v12, v14, v15) >= 0 && v23 )
        {
          v8 = 3;
        }
        else if ( (unsigned int)Feature_TrustedLaunch__private_IsEnabledDeviceUsageNoInline()
               && (v26 & 0x200000) != 0
               && !a5 )
        {
          if ( v18 == 4 )
            return (unsigned int)-1073741790;
LABEL_56:
          *a6 = v16;
          goto LABEL_16;
        }
LABEL_55:
        v16 = v8;
        goto LABEL_56;
      }
      if ( !a4 )
      {
        *a6 = 4;
        *a7 = 4;
        *a8 = 18;
        return 0;
      }
    }
    if ( a2 && (unsigned __int8)SepIsNgenImage(a2) )
    {
      LODWORD(TokenInformation) = 0;
      Policy_Internal = SeQueryInformationToken(a1, TokenIsAppContainer, &TokenInformation);
      if ( Policy_Internal < 0 )
        return (unsigned int)Policy_Internal;
      *a6 = 11;
      if ( !v17 )
      {
        if ( !(_DWORD)TokenInformation )
        {
          *a7 = a5;
          *a8 = a5 >= 2u ? 0x21 : 0;
          return 0;
        }
        Policy_Internal = SepIsLockedDown(a5, v24);
        if ( Policy_Internal < 0 )
          return (unsigned int)Policy_Internal;
        if ( v24[0] )
          v22 = 6;
        else
          v22 = a5 != 2 ? 0 : 2;
        goto LABEL_49;
      }
      if ( !a4 )
      {
        *a7 = (_DWORD)TokenInformation != 0 ? 6 : 8;
        *a8 = 33;
        return 0;
      }
    }
    else if ( !v17 )
    {
      if ( (unsigned int)Feature_TrustedLaunch__private_IsEnabledDeviceUsageNoInline() && (v26 & 0x200000) != 0 && !a5 )
        goto LABEL_56;
      goto LABEL_55;
    }
    v21 = a4;
    if ( !a4 )
      v21 = 18;
    *a8 = v21;
    *a6 = SeProtectedMapping[2 * ((unsigned __int64)v21 >> 4)];
    *a7 = SeProtectedMapping[2 * ((unsigned __int64)*a8 >> 4) + 1];
    if ( a5 > *a6 )
      *a6 = a5;
    if ( a5 > *a7 )
      *a7 = a5;
    return 0;
  }
  return (unsigned int)Policy_Internal;
}
