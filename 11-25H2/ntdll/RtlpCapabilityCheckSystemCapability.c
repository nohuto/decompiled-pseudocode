/*
 * XREFs of RtlpCapabilityCheckSystemCapability @ 0x18008FD38
 * Callers:
 *     RtlCapabilityCheck @ 0x18008D9E0 (RtlCapabilityCheck.c)
 * Callees:
 *     RtlpSysVolFree @ 0x180015880 (RtlpSysVolFree.c)
 *     RtlCheckTokenMembershipEx @ 0x1800601A0 (RtlCheckTokenMembershipEx.c)
 *     RtlCompareUnicodeStrings @ 0x180073150 (RtlCompareUnicodeStrings.c)
 *     RtlpGetPolicyValueForSystemCapability @ 0x180083D80 (RtlpGetPolicyValueForSystemCapability.c)
 *     RtlpIsAppContainer @ 0x18011B2A8 (RtlpIsAppContainer.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 */

__int64 __fastcall RtlpCapabilityCheckSystemCapability(void *a1, const void **a2, _BYTE *a3)
{
  int PolicyValueForSystemCapability; // eax
  int IsAppContainer; // ebx
  SIZE_T v8; // rbx
  char v9; // [rsp+30h] [rbp-30h] BYREF
  _BYTE v10[7]; // [rsp+31h] [rbp-2Fh] BYREF
  UNICODE_STRING v11; // [rsp+38h] [rbp-28h] BYREF
  _DWORD v12[2]; // [rsp+48h] [rbp-18h] BYREF
  int v13; // [rsp+50h] [rbp-10h]
  int v14; // [rsp+54h] [rbp-Ch]

  v9 = 0;
  v11 = 0LL;
  v10[0] = 0;
  PolicyValueForSystemCapability = RtlpGetPolicyValueForSystemCapability(a2, &v11);
  IsAppContainer = PolicyValueForSystemCapability;
  if ( PolicyValueForSystemCapability == -1073741772 )
  {
    IsAppContainer = 0;
    goto LABEL_3;
  }
  *a3 = 0;
  if ( PolicyValueForSystemCapability >= 0 )
  {
    v8 = (unsigned __int64)v11.Length >> 1;
    if ( (unsigned int)RtlCompareUnicodeStrings(v11.Buffer, v8, L"DO", 2uLL, 0) )
    {
      if ( (unsigned int)RtlCompareUnicodeStrings(v11.Buffer, v8, L"IU", 2uLL, 0) )
      {
        IsAppContainer = -1073741823;
        goto LABEL_3;
      }
      v12[0] = 257;
      v13 = 4;
    }
    else
    {
      v12[0] = 513;
      v13 = 32;
      v14 = 583;
    }
    v12[1] = 83886080;
    IsAppContainer = RtlCheckTokenMembershipEx(a1, (unsigned __int8 *)v12, 2, &v9);
    if ( IsAppContainer >= 0 )
    {
      if ( v9 )
      {
        IsAppContainer = RtlpIsAppContainer(a1, v10);
        if ( IsAppContainer >= 0 )
        {
          if ( v10[0] )
            *a3 = 1;
        }
      }
    }
  }
LABEL_3:
  if ( v11.Buffer )
    RtlpSysVolFree((__int64)v11.Buffer);
  return (unsigned int)IsAppContainer;
}
