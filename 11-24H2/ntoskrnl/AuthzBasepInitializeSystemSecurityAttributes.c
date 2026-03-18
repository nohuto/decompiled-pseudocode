/*
 * XREFs of AuthzBasepInitializeSystemSecurityAttributes @ 0x140810790
 * Callers:
 *     SeRmInitPhase1 @ 0x140C6024C (SeRmInitPhase1.c)
 * Callees:
 *     AuthzBasepAllocateSecurityAttributesList @ 0x140356CD0 (AuthzBasepAllocateSecurityAttributesList.c)
 *     AuthzBasepSetSecurityAttributesToken @ 0x140357454 (AuthzBasepSetSecurityAttributesToken.c)
 *     AuthzBasepFreeSecurityAttributesList @ 0x14035C750 (AuthzBasepFreeSecurityAttributesList.c)
 *     RtlIsMultiSessionSku @ 0x1409113D0 (RtlIsMultiSessionSku.c)
 */

__int64 __fastcall AuthzBasepInitializeSystemSecurityAttributes(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rdx
  __int64 v3; // rcx
  _DWORD *SecurityAttributesList; // rdi
  unsigned int v5; // ebx
  char IsMultiSessionSku; // al
  char v7; // si
  __int64 v8; // r9
  _DWORD v10[2]; // [rsp+20h] [rbp-40h] BYREF
  _QWORD *v11; // [rsp+28h] [rbp-38h]
  _QWORD v12[2]; // [rsp+30h] [rbp-30h] BYREF
  __int128 v13; // [rsp+40h] [rbp-20h]
  __int64 *v14; // [rsp+50h] [rbp-10h]
  int v15; // [rsp+80h] [rbp+20h] BYREF
  int v16; // [rsp+84h] [rbp+24h]
  __int64 v17; // [rsp+88h] [rbp+28h] BYREF

  v16 = HIDWORD(a1);
  v12[0] = 3145774LL;
  v12[1] = L"WIN://ISMULTISESSIONSKU";
  v10[0] = 1;
  v14 = 0LL;
  v1 = 0LL;
  v13 = 0LL;
  v15 = 2;
  v10[1] = 1;
  v11 = v12;
  SecurityAttributesList = (_DWORD *)AuthzBasepAllocateSecurityAttributesList();
  if ( SecurityAttributesList )
  {
    IsMultiSessionSku = RtlIsMultiSessionSku(v3, v2);
    DWORD2(v13) = 1;
    v7 = IsMultiSessionSku;
    LOWORD(v13) = 6;
    LOBYTE(v1) = IsMultiSessionSku != 0;
    v17 = v1;
    v14 = &v17;
    v5 = AuthzBasepSetSecurityAttributesToken((__int64)SecurityAttributesList, &v15, (__int64)v10, v8);
    if ( _InterlockedCompareExchange64(&WindowsSystemAttributes, (signed __int64)SecurityAttributesList, 0LL) )
    {
      v5 = -1073741823;
      AuthzBasepFreeSecurityAttributesList(SecurityAttributesList);
    }
    else
    {
      SepAllowAccessUponLogoff = v7;
    }
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v5;
}
