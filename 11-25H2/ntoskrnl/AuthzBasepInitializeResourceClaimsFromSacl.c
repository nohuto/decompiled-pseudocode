/*
 * XREFs of AuthzBasepInitializeResourceClaimsFromSacl @ 0x14036B400
 * Callers:
 *     SeAccessCheckWithHint @ 0x140362560 (SeAccessCheckWithHint.c)
 *     SepFilterCheck @ 0x140363580 (SepFilterCheck.c)
 *     SeAccessCheckByType @ 0x140363B20 (SeAccessCheckByType.c)
 *     SepNormalAccessCheck @ 0x140366DE0 (SepNormalAccessCheck.c)
 *     SepMaximumAccessCheck @ 0x140368FC0 (SepMaximumAccessCheck.c)
 *     SepNormalAccessCheckEx @ 0x14036A718 (SepNormalAccessCheckEx.c)
 *     SepCommonAccessCheckEx @ 0x1403CD1A0 (SepCommonAccessCheckEx.c)
 *     SepMaximumAccessCheckEx @ 0x1403CEF04 (SepMaximumAccessCheckEx.c)
 *     SepAccessCheckAndAuditAlarm @ 0x14092B360 (SepAccessCheckAndAuditAlarm.c)
 *     SepExamineSaclEx @ 0x14092D558 (SepExamineSaclEx.c)
 *     SeExamineSacl @ 0x14092EA20 (SeExamineSacl.c)
 * Callees:
 *     AuthzBasepSetSecurityAttributesToken @ 0x140291638 (AuthzBasepSetSecurityAttributesToken.c)
 *     AuthzBasepQuerySecurityAttributesToken @ 0x140360510 (AuthzBasepQuerySecurityAttributesToken.c)
 *     AuthzBasepFreeSecurityAttributesList @ 0x140366160 (AuthzBasepFreeSecurityAttributesList.c)
 *     AuthzBasepMemAlloc @ 0x140369D70 (AuthzBasepMemAlloc.c)
 *     AuthzBasepConvertRelativeToAbsoluteTokenAttribute @ 0x1404AE1A0 (AuthzBasepConvertRelativeToAbsoluteTokenAttribute.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall AuthzBasepInitializeResourceClaimsFromSacl(__int64 a1, __int64 *a2)
{
  int v2; // ebx
  _BYTE *v3; // rdi
  __int64 v4; // r13
  _DWORD *Pool2; // rax
  __int64 v6; // rsi
  __int64 v7; // r14
  _QWORD *v8; // rax
  unsigned int v9; // r15d
  int v11; // eax
  int v12; // r12d
  int v13; // eax
  int v14; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v15; // [rsp+34h] [rbp-CCh] BYREF
  int v16; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v17; // [rsp+40h] [rbp-C0h]
  __int128 v18; // [rsp+48h] [rbp-B8h] BYREF
  __int64 *v19; // [rsp+58h] [rbp-A8h]
  _BYTE P[256]; // [rsp+60h] [rbp-A0h] BYREF

  v2 = 0;
  v19 = a2;
  v15 = 0;
  v3 = P;
  v17 = a1;
  v18 = 0LL;
  v4 = a1;
  v16 = 2;
  v14 = 256;
  Pool2 = (_DWORD *)ExAllocatePool2(KeGetCurrentIrql() < 2u ? 256LL : 64LL);
  v6 = (__int64)Pool2;
  if ( Pool2 )
  {
    *Pool2 = 0;
    v7 = v4 + 8;
    v8 = Pool2 + 2;
    v8[1] = v8;
    *v8 = v8;
    *(_DWORD *)(v6 + 24) = 0;
    *(_QWORD *)(v6 + 40) = v6 + 32;
    v9 = 0;
    *(_QWORD *)(v6 + 32) = v6 + 32;
    while ( v9 < *(unsigned __int16 *)(v4 + 4) )
    {
      if ( v3 && v3 != P )
        ExFreePoolWithTag(v3, 0);
      v14 = 256;
      v3 = P;
      if ( *(_BYTE *)v7 == 18 && (*(_BYTE *)(v7 + 1) & 8) == 0 )
      {
        v11 = 4 * *(unsigned __int8 *)(v7 + 9);
        v12 = *(unsigned __int16 *)(v7 + 2) - v11;
        v2 = AuthzBasepConvertRelativeToAbsoluteTokenAttribute(
               v7 + 8 + (unsigned int)(v11 + 8),
               (unsigned int)(v12 - 16),
               P,
               &v14);
        if ( v2 == -1073741789 )
        {
          v3 = (_BYTE *)AuthzBasepMemAlloc();
          if ( !v3 )
          {
            v2 = -1073741801;
            goto LABEL_16;
          }
          v2 = AuthzBasepConvertRelativeToAbsoluteTokenAttribute(
                 v7 + 8 + 4LL * *(unsigned __int8 *)(v7 + 9) + 8,
                 (unsigned int)(v12 - 16),
                 v3,
                 &v14);
        }
        if ( v2 < 0 )
          break;
        *((_QWORD *)&v18 + 1) = v3;
        LOWORD(v18) = 1;
        DWORD1(v18) = 1;
        v13 = AuthzBasepQuerySecurityAttributesToken((unsigned int *)v6, (__int64)v3, 1u, 0LL, 0, &v15);
        v2 = v13;
        if ( v13 == -1073741789 || v13 == -1073741275 )
        {
          v2 = 0;
        }
        else if ( v13 < 0 )
        {
          break;
        }
        if ( v15 <= 0x10 )
        {
          v2 = AuthzBasepSetSecurityAttributesToken(v6, &v16, (__int64)&v18);
          if ( v2 < 0 )
            break;
        }
        v4 = v17;
      }
      ++v9;
      v7 += *(unsigned __int16 *)(v7 + 2);
    }
    if ( v3 && v3 != P )
      ExFreePoolWithTag(v3, 0);
    if ( v2 >= 0 )
    {
      *v19 = v6;
      return (unsigned int)v2;
    }
LABEL_16:
    AuthzBasepFreeSecurityAttributesList((_DWORD *)v6);
    ExFreePoolWithTag((PVOID)v6, 0);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v2;
}
