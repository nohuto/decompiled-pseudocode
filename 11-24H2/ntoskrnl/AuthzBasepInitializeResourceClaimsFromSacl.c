/*
 * XREFs of AuthzBasepInitializeResourceClaimsFromSacl @ 0x1403BADD4
 * Callers:
 *     SeAccessCheckWithHint @ 0x1403B6970 (SeAccessCheckWithHint.c)
 *     SepFilterCheck @ 0x1403B9AB0 (SepFilterCheck.c)
 *     SeAccessCheckByType @ 0x14042DC70 (SeAccessCheckByType.c)
 *     SepCommonAccessCheckEx @ 0x140465250 (SepCommonAccessCheckEx.c)
 *     SepMaximumAccessCheck @ 0x1404E8A30 (SepMaximumAccessCheck.c)
 *     SepMaximumAccessCheckEx @ 0x1404E9F90 (SepMaximumAccessCheckEx.c)
 *     SepNormalAccessCheck @ 0x1404EA720 (SepNormalAccessCheck.c)
 *     SepNormalAccessCheckEx @ 0x1404EB6BC (SepNormalAccessCheckEx.c)
 *     SeExamineSacl @ 0x14088DA20 (SeExamineSacl.c)
 *     SepAccessCheckAndAuditAlarm @ 0x140A07A00 (SepAccessCheckAndAuditAlarm.c)
 *     SepExamineSaclEx @ 0x140A19D34 (SepExamineSaclEx.c)
 * Callees:
 *     AuthzBasepMemAlloc @ 0x140324D30 (AuthzBasepMemAlloc.c)
 *     AuthzBasepQuerySecurityAttributesToken @ 0x1403B7C30 (AuthzBasepQuerySecurityAttributesToken.c)
 *     AuthzBasepSetSecurityAttributesToken @ 0x1403B8BCC (AuthzBasepSetSecurityAttributesToken.c)
 *     AuthzBasepFreeSecurityAttributesList @ 0x1403B95E0 (AuthzBasepFreeSecurityAttributesList.c)
 *     AuthzBasepConvertRelativeToAbsoluteTokenAttribute @ 0x1404A9A3C (AuthzBasepConvertRelativeToAbsoluteTokenAttribute.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
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
  __int64 v13; // rdx
  int v14; // eax
  __int64 v15; // r9
  unsigned int v16; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v17; // [rsp+34h] [rbp-CCh] BYREF
  int v18; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v19; // [rsp+40h] [rbp-C0h]
  __int128 v20; // [rsp+48h] [rbp-B8h] BYREF
  __int64 *v21; // [rsp+58h] [rbp-A8h]
  _BYTE P[256]; // [rsp+60h] [rbp-A0h] BYREF

  v2 = 0;
  v21 = a2;
  v17 = 0;
  v3 = P;
  v19 = a1;
  v20 = 0LL;
  v4 = a1;
  v18 = 2;
  v16 = 256;
  Pool2 = (_DWORD *)ExAllocatePool2(KeGetCurrentIrql() < 2u ? 256LL : 64LL, 0x30uLL, 0x74416553u);
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
      v16 = 256;
      v3 = P;
      if ( *(_BYTE *)v7 == 18 && (*(_BYTE *)(v7 + 1) & 8) == 0 )
      {
        v11 = 4 * *(unsigned __int8 *)(v7 + 9);
        v12 = *(unsigned __int16 *)(v7 + 2) - v11;
        v2 = AuthzBasepConvertRelativeToAbsoluteTokenAttribute(
               v7 + 8 + (unsigned int)(v11 + 8),
               (unsigned int)(v12 - 16),
               P,
               &v16);
        if ( v2 == -1073741789 )
        {
          v3 = (_BYTE *)AuthzBasepMemAlloc(v16, v13, 0x74416553u);
          if ( !v3 )
          {
            v2 = -1073741801;
            goto LABEL_16;
          }
          v2 = AuthzBasepConvertRelativeToAbsoluteTokenAttribute(
                 v7 + 8 + 4LL * *(unsigned __int8 *)(v7 + 9) + 8,
                 (unsigned int)(v12 - 16),
                 v3,
                 &v16);
        }
        if ( v2 < 0 )
          break;
        *((_QWORD *)&v20 + 1) = v3;
        LOWORD(v20) = 1;
        DWORD1(v20) = 1;
        v14 = AuthzBasepQuerySecurityAttributesToken((unsigned int *)v6, (__int64)v3, 1u, 0LL, 0, &v17);
        v2 = v14;
        if ( v14 == -1073741789 || v14 == -1073741275 )
        {
          v2 = 0;
        }
        else if ( v14 < 0 )
        {
          break;
        }
        if ( v17 <= 0x10 )
        {
          v2 = AuthzBasepSetSecurityAttributesToken(v6, &v18, (__int64)&v20, v15);
          if ( v2 < 0 )
            break;
        }
        v4 = v19;
      }
      ++v9;
      v7 += *(unsigned __int16 *)(v7 + 2);
    }
    if ( v3 && v3 != P )
      ExFreePoolWithTag(v3, 0);
    if ( v2 >= 0 )
    {
      *v21 = v6;
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
