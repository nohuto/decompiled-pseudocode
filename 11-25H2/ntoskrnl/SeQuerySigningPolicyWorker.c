/*
 * XREFs of SeQuerySigningPolicyWorker @ 0x140AC8B10
 * Callers:
 *     SeQuerySigningPolicy @ 0x1409BD120 (SeQuerySigningPolicy.c)
 * Callees:
 *     AppModelPolicy_GetPolicy_Internal @ 0x140495818 (AppModelPolicy_GetPolicy_Internal.c)
 *     Feature_TrustedLaunch__private_IsEnabledDeviceUsageNoInline @ 0x1405FBE64 (Feature_TrustedLaunch__private_IsEnabledDeviceUsageNoInline.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     SepIsLockedDown @ 0x14077F368 (SepIsLockedDown.c)
 *     SeQueryInformationToken @ 0x1408418A0 (SeQueryInformationToken.c)
 *     SepIsNgenImage @ 0x140A408D4 (SepIsNgenImage.c)
 */

__int64 __fastcall SeQuerySigningPolicyWorker(
        void *a1,
        unsigned __int16 *a2,
        char a3,
        unsigned __int8 a4,
        unsigned __int8 a5,
        unsigned __int8 *a6,
        unsigned __int8 *a7,
        unsigned __int8 *a8)
{
  unsigned __int8 v8; // di
  int Policy_Internal; // ecx
  char v13; // r15
  int v14; // r12d
  int Origin_low; // ebx
  bool v16; // zf
  char v17; // al
  unsigned __int8 v18; // al
  char v20; // [rsp+30h] [rbp-20h] BYREF
  _BYTE v21[3]; // [rsp+31h] [rbp-1Fh] BYREF
  PVOID TokenInformation; // [rsp+34h] [rbp-1Ch] BYREF
  _PS_PKG_CLAIM v23; // [rsp+40h] [rbp-10h] BYREF
  unsigned __int64 v24; // [rsp+48h] [rbp-8h] BYREF

  v8 = a5;
  v21[0] = 0;
  v20 = 0;
  v23 = 0LL;
  HIDWORD(TokenInformation) = 0;
  v24 = 0LL;
  Policy_Internal = AppModelPolicy_GetPolicy_Internal(a1, (__int64)a2, (int *)&TokenInformation + 1, &v23, &v24);
  if ( Policy_Internal < 0 )
    return (unsigned int)Policy_Internal;
  v13 = 1;
  if ( (unsigned int)(HIDWORD(TokenInformation) - 3014657) > 1
    || HIDWORD(TokenInformation) == 3014658 && (unsigned int)LOBYTE(v23.Origin) - 4 > 1 )
  {
    v14 = a3 & 1;
    goto LABEL_39;
  }
  v14 = a3 & 1;
  if ( !v14 )
  {
    Origin_low = LOBYTE(v23.Origin);
    if ( !LOBYTE(v23.Origin) || LOBYTE(v23.Origin) == 1 )
    {
      if ( (unsigned int)Feature_TrustedLaunch__private_IsEnabledDeviceUsageNoInline() && (v23.Flags & 0x200000) != 0 )
        return (unsigned int)-1073741790;
      *a6 = a5;
    }
    else
    {
      if ( LOBYTE(v23.Origin) != 2 )
      {
        switch ( LOBYTE(v23.Origin) )
        {
          case 3u:
            v17 = 6;
            break;
          case 4u:
          case 5u:
            if ( a5 && qword_140F04590 && (int)guard_dispatch_icall_no_overrides(&v20) >= 0 && v20 )
            {
              v8 = 3;
            }
            else if ( (unsigned int)Feature_TrustedLaunch__private_IsEnabledDeviceUsageNoInline()
                   && (v23.Flags & 0x200000) != 0
                   && !a5 )
            {
              if ( Origin_low != 4 )
              {
LABEL_62:
                *a6 = v13;
                goto LABEL_63;
              }
              return (unsigned int)-1073741790;
            }
LABEL_61:
            v13 = v8;
            goto LABEL_62;
          case 6u:
            if ( (unsigned int)Feature_TrustedLaunch__private_IsEnabledDeviceUsageNoInline()
              && (v23.Flags & 0x200000) != 0 )
            {
              v16 = a5 == 2;
              if ( a5 != 2 )
                return (unsigned int)-1073741790;
            }
            else
            {
              v16 = a5 == 2;
            }
            v17 = !v16 ? 0 : 2;
            break;
          default:
            return 0;
        }
        *a6 = v17;
LABEL_22:
        *a7 = v17;
LABEL_64:
        *a8 = 0;
        return 0;
      }
      *a6 = 8;
    }
LABEL_63:
    *a7 = v8;
    goto LABEL_64;
  }
  if ( !a4 )
  {
    *a6 = 4;
    *a7 = 4;
    *a8 = 18;
    return 0;
  }
LABEL_39:
  if ( !a2 || !SepIsNgenImage(a2) )
  {
    if ( v14 )
      goto LABEL_52;
    if ( (unsigned int)Feature_TrustedLaunch__private_IsEnabledDeviceUsageNoInline()
      && (v23.Flags & 0x200000) != 0
      && !a5 )
    {
      goto LABEL_62;
    }
    goto LABEL_61;
  }
  LODWORD(TokenInformation) = 0;
  Policy_Internal = SeQueryInformationToken(a1, TokenIsAppContainer, &TokenInformation);
  if ( Policy_Internal >= 0 )
  {
    *a6 = 11;
    if ( v14 )
    {
      if ( !a4 )
      {
        *a7 = (_DWORD)TokenInformation != 0 ? 6 : 8;
        *a8 = 33;
        return 0;
      }
LABEL_52:
      v18 = a4;
      if ( !a4 )
        v18 = 18;
      *a8 = v18;
      *a6 = SeProtectedMapping[2 * ((unsigned __int64)v18 >> 4)];
      *a7 = SeProtectedMapping[2 * ((unsigned __int64)*a8 >> 4) + 1];
      if ( a5 > *a6 )
        *a6 = a5;
      if ( a5 > *a7 )
        *a7 = a5;
      return 0;
    }
    if ( !(_DWORD)TokenInformation )
    {
      *a7 = a5;
      *a8 = a5 >= 2u ? 0x21 : 0;
      return 0;
    }
    Policy_Internal = SepIsLockedDown(a5, v21);
    if ( Policy_Internal >= 0 )
    {
      if ( v21[0] )
        v17 = 6;
      else
        v17 = a5 != 2 ? 0 : 2;
      goto LABEL_22;
    }
  }
  return (unsigned int)Policy_Internal;
}
