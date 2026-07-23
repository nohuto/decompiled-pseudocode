/*
 * XREFs of SeQuerySigningPolicyWorker @ 0x1409FA8F8
 * Callers:
 *     SeQuerySigningPolicy @ 0x1409FA0B0 (SeQuerySigningPolicy.c)
 * Callees:
 *     AppModelPolicy_GetPolicy_Internal @ 0x14048EF38 (AppModelPolicy_GetPolicy_Internal.c)
 *     Feature_TrustedLaunch__private_IsEnabledDeviceUsageNoInline @ 0x1404F2264 (Feature_TrustedLaunch__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_CodeIntegrity_TrustedLaunchPolicy__private_IsEnabledDeviceUsageNoInline @ 0x1406057AC (Feature_CodeIntegrity_TrustedLaunchPolicy__private_IsEnabledDeviceUsageNoInline.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     SepIsLockedDown @ 0x14078E558 (SepIsLockedDown.c)
 *     SepSetTrustedLaunchSigningLevel @ 0x14078EB5C (SepSetTrustedLaunchSigningLevel.c)
 *     SeQueryInformationToken @ 0x1408E4F90 (SeQueryInformationToken.c)
 *     SepIsNgenImage @ 0x140A3A5D4 (SepIsNgenImage.c)
 */

__int64 __fastcall SeQuerySigningPolicyWorker(
        PACCESS_TOKEN Token,
        __int64 a2,
        char a3,
        unsigned __int8 a4,
        unsigned __int8 a5,
        char *a6,
        char *a7,
        unsigned __int8 *a8)
{
  __int64 v10; // r13
  int Policy_Internal; // ecx
  int IsEnabledDeviceUsageNoInline; // eax
  __int64 v14; // rdx
  ULONG Flags; // ebx
  unsigned __int8 v16; // si
  int v17; // r14d
  int Origin_low; // r14d
  bool v19; // zf
  unsigned __int8 v20; // cl
  __int64 v21; // rdx
  char IsNgenImage; // al
  unsigned __int8 v23; // cl
  unsigned __int8 v24; // al
  int v25; // eax
  __int64 v26; // rdx
  char v28; // [rsp+30h] [rbp-20h] BYREF
  char v29; // [rsp+31h] [rbp-1Fh] BYREF
  _BYTE v30[2]; // [rsp+32h] [rbp-1Eh] BYREF
  PVOID TokenInformation; // [rsp+34h] [rbp-1Ch] BYREF
  _PS_PKG_CLAIM v32; // [rsp+40h] [rbp-10h] BYREF
  unsigned __int64 v33; // [rsp+48h] [rbp-8h] BYREF

  v30[0] = 0;
  v29 = 0;
  v28 = 0;
  v32 = 0LL;
  HIDWORD(TokenInformation) = 0;
  v10 = a2;
  v33 = 0LL;
  Policy_Internal = AppModelPolicy_GetPolicy_Internal(Token, a2, (int *)&TokenInformation + 1, &v32, &v33);
  if ( Policy_Internal >= 0 )
  {
    IsEnabledDeviceUsageNoInline = Feature_CodeIntegrity_TrustedLaunchPolicy__private_IsEnabledDeviceUsageNoInline();
    Flags = v32.Flags;
    if ( IsEnabledDeviceUsageNoInline
      && (v32.Flags & 0x200000) != 0
      && (!qword_140F04C20 || (int)guard_dispatch_icall_no_overrides(Token, &v28) < 0) )
    {
      v28 = 0;
    }
    v16 = 1;
    if ( (unsigned int)(HIDWORD(TokenInformation) - 3014657) > 1
      || HIDWORD(TokenInformation) == 3014658 && (unsigned int)LOBYTE(v32.Origin) - 4 > 1 )
    {
      v17 = a3 & 1;
      goto LABEL_54;
    }
    v17 = a3 & 1;
    if ( v17 )
    {
      if ( !a4 )
      {
        Policy_Internal = 0;
        *a6 = 4;
        *a7 = 4;
        *a8 = 18;
        return (unsigned int)Policy_Internal;
      }
LABEL_54:
      if ( v10 )
      {
        IsNgenImage = SepIsNgenImage(v10);
        LODWORD(v10) = 0;
        if ( IsNgenImage )
        {
          LODWORD(TokenInformation) = 0;
          Policy_Internal = SeQueryInformationToken(Token, TokenIsAppContainer, &TokenInformation);
          if ( Policy_Internal < 0 )
            return (unsigned int)Policy_Internal;
          *a6 = 11;
          if ( v17 )
          {
            if ( !a4 )
            {
              *a7 = (_DWORD)TokenInformation != 0 ? 6 : 8;
              *a8 = 33;
              return (unsigned int)v10;
            }
LABEL_67:
            v24 = a4;
            if ( !a4 )
              v24 = 18;
            *a8 = v24;
            *a6 = SeProtectedMapping[2 * ((unsigned __int64)v24 >> 4)];
            *a7 = SeProtectedMapping[2 * ((unsigned __int64)*a8 >> 4) + 1];
            if ( a5 > (unsigned __int8)*a6 )
              *a6 = a5;
            if ( a5 > (unsigned __int8)*a7 )
              *a7 = a5;
            return (unsigned int)v10;
          }
          if ( !(_DWORD)TokenInformation )
          {
            *a7 = a5;
            *a8 = a5 >= 2u ? 0x21 : 0;
            return (unsigned int)v10;
          }
          Policy_Internal = SepIsLockedDown(a5, v30);
          if ( Policy_Internal < 0 )
            return (unsigned int)Policy_Internal;
          if ( v30[0] )
            v23 = 6;
          else
            v23 = a5 != 2 ? 0 : 2;
          goto LABEL_82;
        }
      }
      if ( v17 )
        goto LABEL_67;
      if ( (unsigned int)Feature_TrustedLaunch__private_IsEnabledDeviceUsageNoInline() )
      {
        v25 = Feature_CodeIntegrity_TrustedLaunchPolicy__private_IsEnabledDeviceUsageNoInline();
        v23 = a5;
        if ( v25 )
        {
          if ( (Flags & 0x200000) != 0 )
          {
            LOBYTE(v26) = v28;
            SepSetTrustedLaunchSigningLevel(a5, v26, a6, a7);
LABEL_83:
            *a8 = v10;
            return (unsigned int)v10;
          }
        }
        else if ( (Flags & 0x200000) != 0 && !a5 )
        {
          *a6 = 1;
          *a7 = v10;
          goto LABEL_83;
        }
      }
      else
      {
        v23 = a5;
      }
      *a6 = v23;
LABEL_82:
      *a7 = v23;
      goto LABEL_83;
    }
    Origin_low = LOBYTE(v32.Origin);
    if ( !LOBYTE(v32.Origin) || LOBYTE(v32.Origin) == 1 )
    {
      if ( (unsigned int)Feature_TrustedLaunch__private_IsEnabledDeviceUsageNoInline() && (Flags & 0x200000) != 0 )
        return (unsigned int)-1073741790;
      v20 = a5;
    }
    else
    {
      if ( LOBYTE(v32.Origin) == 2 )
      {
        *a6 = 8;
        *a7 = a5;
        goto LABEL_51;
      }
      if ( LOBYTE(v32.Origin) != 3 )
      {
        if ( LOBYTE(v32.Origin) != 4 && LOBYTE(v32.Origin) != 5 )
        {
          if ( LOBYTE(v32.Origin) != 6 )
            return 0;
          if ( (unsigned int)Feature_TrustedLaunch__private_IsEnabledDeviceUsageNoInline() && (Flags & 0x200000) != 0 )
          {
            v19 = a5 == 2;
            if ( a5 != 2 )
              return (unsigned int)-1073741790;
          }
          else
          {
            v19 = a5 == 2;
          }
          v20 = !v19 ? 0 : 2;
          goto LABEL_50;
        }
        if ( a5 && qword_140F04C10 && (int)guard_dispatch_icall_no_overrides(&v29, v14) >= 0 && v29 )
        {
          *a6 = 3;
          *a7 = 3;
LABEL_51:
          *a8 = 0;
          return 0;
        }
        if ( (unsigned int)Feature_TrustedLaunch__private_IsEnabledDeviceUsageNoInline() )
        {
          if ( !(unsigned int)Feature_CodeIntegrity_TrustedLaunchPolicy__private_IsEnabledDeviceUsageNoInline() )
          {
            if ( (Flags & 0x200000) == 0 || a5 )
            {
              v16 = a5;
            }
            else if ( Origin_low == 4 )
            {
              return (unsigned int)-1073741790;
            }
            *a6 = v16;
            goto LABEL_44;
          }
          if ( (Flags & 0x200000) != 0 )
          {
            if ( Origin_low == 4 )
              return (unsigned int)-1073741790;
            LOBYTE(v21) = v28;
            SepSetTrustedLaunchSigningLevel(a5, v21, a6, a7);
            goto LABEL_51;
          }
        }
        *a6 = a5;
LABEL_44:
        *a7 = a5;
        goto LABEL_51;
      }
      v20 = 6;
    }
LABEL_50:
    *a6 = v20;
    *a7 = v20;
    goto LABEL_51;
  }
  return (unsigned int)Policy_Internal;
}
