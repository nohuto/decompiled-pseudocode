/*
 * XREFs of AuthzBasepInitializeSystemSecurityAttributes @ 0x140800C20
 * Callers:
 *     SeRmInitPhase1 @ 0x140C4EBE4 (SeRmInitPhase1.c)
 * Callees:
 *     AuthzBasepAllocateSecurityAttributesList @ 0x14029040C (AuthzBasepAllocateSecurityAttributesList.c)
 *     AuthzBasepSetSecurityAttributesToken @ 0x140291638 (AuthzBasepSetSecurityAttributesToken.c)
 *     AuthzBasepFreeSecurityAttributesList @ 0x140366160 (AuthzBasepFreeSecurityAttributesList.c)
 *     RtlIsMultiSessionSku @ 0x140A09E70 (RtlIsMultiSessionSku.c)
 */

__int64 __fastcall AuthzBasepInitializeSystemSecurityAttributes(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  _DWORD *SecurityAttributesList; // rdi
  unsigned int v4; // ebx
  BOOLEAN IsMultiSessionSku; // al
  char v6; // si
  _DWORD v8[2]; // [rsp+20h] [rbp-40h] BYREF
  _QWORD *v9; // [rsp+28h] [rbp-38h]
  _QWORD v10[2]; // [rsp+30h] [rbp-30h] BYREF
  __int128 v11; // [rsp+40h] [rbp-20h]
  __int64 *v12; // [rsp+50h] [rbp-10h]
  int v13; // [rsp+80h] [rbp+20h] BYREF
  int v14; // [rsp+84h] [rbp+24h]
  __int64 v15; // [rsp+88h] [rbp+28h] BYREF

  v14 = HIDWORD(a1);
  v10[0] = 3145774LL;
  v10[1] = L"WIN://ISMULTISESSIONSKU";
  v8[0] = 1;
  v12 = 0LL;
  v2 = 0LL;
  v11 = 0LL;
  v13 = 2;
  v8[1] = 1;
  v9 = v10;
  SecurityAttributesList = (_DWORD *)AuthzBasepAllocateSecurityAttributesList(a1, a2);
  if ( SecurityAttributesList )
  {
    IsMultiSessionSku = RtlIsMultiSessionSku();
    DWORD2(v11) = 1;
    v6 = IsMultiSessionSku;
    LOWORD(v11) = 6;
    LOBYTE(v2) = IsMultiSessionSku != 0;
    v15 = v2;
    v12 = &v15;
    v4 = AuthzBasepSetSecurityAttributesToken((__int64)SecurityAttributesList, &v13, (__int64)v8);
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
