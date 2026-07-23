/*
 * XREFs of RtlpCapabilityCheckSystemCapability @ 0x140A5B4CC
 * Callers:
 *     RtlCapabilityCheck @ 0x140A5B140 (RtlCapabilityCheck.c)
 * Callees:
 *     RtlCheckTokenMembershipEx @ 0x1403B5770 (RtlCheckTokenMembershipEx.c)
 *     RtlSubAuthoritySid @ 0x140445040 (RtlSubAuthoritySid.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     RtlpIsAppContainer @ 0x140781A2C (RtlpIsAppContainer.c)
 *     RtlCompareUnicodeStrings @ 0x14088C7D0 (RtlCompareUnicodeStrings.c)
 *     RtlInitializeSid @ 0x1409DE5C0 (RtlInitializeSid.c)
 *     RtlpGetPolicyValueForSystemCapability @ 0x140A5B55C (RtlpGetPolicyValueForSystemCapability.c)
 *     ExFreePool @ 0x140B74850 (ExFreePool.c)
 */

__int64 __fastcall RtlpCapabilityCheckSystemCapability(HANDLE TokenHandle, const UNICODE_STRING *a2, _BYTE *a3)
{
  int PolicyValueForSystemCapability; // eax
  int IsAppContainer; // ebx
  SIZE_T v8; // rbx
  BOOLEAN IsMember; // [rsp+30h] [rbp-40h] BYREF
  bool v10; // [rsp+31h] [rbp-3Fh] BYREF
  _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+34h] [rbp-3Ch] BYREF
  PVOID P[2]; // [rsp+40h] [rbp-30h] BYREF
  _BYTE Sid[16]; // [rsp+50h] [rbp-20h] BYREF

  *(_WORD *)&IdentifierAuthority.Value[4] = 1280;
  *(_DWORD *)IdentifierAuthority.Value = 0;
  IsMember = 0;
  v10 = 0;
  *(_OWORD *)P = 0LL;
  PolicyValueForSystemCapability = RtlpGetPolicyValueForSystemCapability(a2, (PUNICODE_STRING)P);
  IsAppContainer = PolicyValueForSystemCapability;
  if ( PolicyValueForSystemCapability == -1073741772 )
  {
    IsAppContainer = 0;
    goto LABEL_3;
  }
  *a3 = 0;
  if ( PolicyValueForSystemCapability >= 0 )
  {
    v8 = (unsigned __int64)LOWORD(P[0]) >> 1;
    if ( RtlCompareUnicodeStrings((PCWCH)P[1], v8, L"DO", 2uLL, 0) )
    {
      if ( RtlCompareUnicodeStrings((PCWCH)P[1], v8, L"IU", 2uLL, 0) )
      {
        IsAppContainer = -1073741823;
        goto LABEL_3;
      }
      RtlInitializeSid(Sid, &IdentifierAuthority, 1u);
      *RtlSubAuthoritySid(Sid, 0) = 4;
    }
    else
    {
      RtlInitializeSid(Sid, &IdentifierAuthority, 2u);
      *RtlSubAuthoritySid(Sid, 0) = 32;
      *RtlSubAuthoritySid(Sid, 1u) = 583;
    }
    IsAppContainer = RtlCheckTokenMembershipEx(TokenHandle, Sid, 2u, &IsMember);
    if ( IsAppContainer >= 0 )
    {
      if ( IsMember )
      {
        IsAppContainer = RtlpIsAppContainer(TokenHandle, &v10);
        if ( IsAppContainer >= 0 && v10 )
          *a3 = 1;
      }
    }
  }
LABEL_3:
  if ( P[1] )
    ExFreePool(P[1]);
  return (unsigned int)IsAppContainer;
}
