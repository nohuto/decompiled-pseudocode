/*
 * XREFs of RtlpCapabilityCheckSystemCapability @ 0x18001C5C8
 * Callers:
 *     RtlCapabilityCheck @ 0x18001A270 (RtlCapabilityCheck.c)
 * Callees:
 *     RtlpSysVolFree @ 0x180005870 (RtlpSysVolFree.c)
 *     RtlCheckTokenMembershipEx @ 0x180019CF0 (RtlCheckTokenMembershipEx.c)
 *     RtlpGetPolicyValueForSystemCapability @ 0x180080330 (RtlpGetPolicyValueForSystemCapability.c)
 *     RtlCompareUnicodeStrings @ 0x18008EE30 (RtlCompareUnicodeStrings.c)
 *     RtlpIsAppContainer @ 0x180113198 (RtlpIsAppContainer.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 */

__int64 __fastcall RtlpCapabilityCheckSystemCapability(HANDLE TokenHandle, __int64 a2, _BYTE *a3)
{
  int PolicyValueForSystemCapability; // eax
  NTSTATUS IsAppContainer; // ebx
  SIZE_T v8; // rbx
  BOOLEAN IsMember; // [rsp+30h] [rbp-30h] BYREF
  _BYTE v10[7]; // [rsp+31h] [rbp-2Fh] BYREF
  PCWCH String1[2]; // [rsp+38h] [rbp-28h] BYREF
  _DWORD SidToCheck[2]; // [rsp+48h] [rbp-18h] BYREF
  int v13; // [rsp+50h] [rbp-10h]
  int v14; // [rsp+54h] [rbp-Ch]

  IsMember = 0;
  *(_OWORD *)String1 = 0LL;
  v10[0] = 0;
  PolicyValueForSystemCapability = RtlpGetPolicyValueForSystemCapability(a2, String1);
  IsAppContainer = PolicyValueForSystemCapability;
  if ( PolicyValueForSystemCapability == -1073741772 )
  {
    IsAppContainer = 0;
    goto LABEL_3;
  }
  *a3 = 0;
  if ( PolicyValueForSystemCapability >= 0 )
  {
    v8 = (unsigned __int64)LOWORD(String1[0]) >> 1;
    if ( RtlCompareUnicodeStrings(String1[1], v8, L"DO", 2uLL, 0) )
    {
      if ( RtlCompareUnicodeStrings(String1[1], v8, L"IU", 2uLL, 0) )
      {
        IsAppContainer = -1073741823;
        goto LABEL_3;
      }
      SidToCheck[0] = 257;
      v13 = 4;
    }
    else
    {
      SidToCheck[0] = 513;
      v13 = 32;
      v14 = 583;
    }
    SidToCheck[1] = 83886080;
    IsAppContainer = RtlCheckTokenMembershipEx(TokenHandle, SidToCheck, 2u, &IsMember);
    if ( IsAppContainer >= 0 )
    {
      if ( IsMember )
      {
        IsAppContainer = RtlpIsAppContainer(TokenHandle, v10);
        if ( IsAppContainer >= 0 )
        {
          if ( v10[0] )
            *a3 = 1;
        }
      }
    }
  }
LABEL_3:
  if ( String1[1] )
    RtlpSysVolFree((void *)String1[1]);
  return (unsigned int)IsAppContainer;
}
