/*
 * XREFs of AuthzBasepInitializeSystemSecurityAttributes @ 0x140810ED0
 * Callers:
 *     SeRmInitPhase1 @ 0x140C6239C (SeRmInitPhase1.c)
 * Callees:
 *     AuthzBasepSetSecurityAttributesToken @ 0x1403B8BCC (AuthzBasepSetSecurityAttributesToken.c)
 *     AuthzBasepFreeSecurityAttributesList @ 0x1403B95E0 (AuthzBasepFreeSecurityAttributesList.c)
 *     AuthzBasepAllocateSecurityAttributesList @ 0x1403B972C (AuthzBasepAllocateSecurityAttributesList.c)
 *     RtlIsMultiSessionSku @ 0x1408E8B20 (RtlIsMultiSessionSku.c)
 */

__int64 __fastcall AuthzBasepInitializeSystemSecurityAttributes(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  _DWORD *SecurityAttributesList; // rdi
  unsigned int v4; // ebx
  BOOLEAN IsMultiSessionSku; // al
  char v6; // si
  __int64 v7; // r9
  _DWORD v9[2]; // [rsp+20h] [rbp-40h] BYREF
  _QWORD *v10; // [rsp+28h] [rbp-38h]
  _QWORD v11[2]; // [rsp+30h] [rbp-30h] BYREF
  __int128 v12; // [rsp+40h] [rbp-20h]
  __int64 *v13; // [rsp+50h] [rbp-10h]
  int v14; // [rsp+80h] [rbp+20h] BYREF
  int v15; // [rsp+84h] [rbp+24h]
  __int64 v16; // [rsp+88h] [rbp+28h] BYREF

  v15 = HIDWORD(a1);
  v11[0] = 3145774LL;
  v11[1] = L"WIN://ISMULTISESSIONSKU";
  v9[0] = 1;
  v13 = 0LL;
  v2 = 0LL;
  v12 = 0LL;
  v14 = 2;
  v9[1] = 1;
  v10 = v11;
  SecurityAttributesList = (_DWORD *)AuthzBasepAllocateSecurityAttributesList(a1, a2);
  if ( SecurityAttributesList )
  {
    IsMultiSessionSku = RtlIsMultiSessionSku();
    DWORD2(v12) = 1;
    v6 = IsMultiSessionSku;
    LOWORD(v12) = 6;
    LOBYTE(v2) = IsMultiSessionSku != 0;
    v16 = v2;
    v13 = &v16;
    v4 = AuthzBasepSetSecurityAttributesToken((__int64)SecurityAttributesList, &v14, (__int64)v9, v7);
    if ( _InterlockedCompareExchange64(&WindowsSystemAttributes, (signed __int64)SecurityAttributesList, 0LL) )
    {
      v4 = -1073741823;
      AuthzBasepFreeSecurityAttributesList(SecurityAttributesList);
    }
    else
    {
      SepAllowAccessUponLogoff = v6;
    }
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v4;
}
