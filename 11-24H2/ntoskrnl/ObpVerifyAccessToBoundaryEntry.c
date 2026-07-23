/*
 * XREFs of ObpVerifyAccessToBoundaryEntry @ 0x140A40460
 * Callers:
 *     <none>
 * Callees:
 *     SeAccessCheckWithHint @ 0x1403B6970 (SeAccessCheckWithHint.c)
 *     RtlEqualSid @ 0x1403EB6C0 (RtlEqualSid.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     RtlCreateAcl @ 0x140858810 (RtlCreateAcl.c)
 *     RtlAddMandatoryAce @ 0x1409112B0 (RtlAddMandatoryAce.c)
 *     RtlpAddKnownAce @ 0x140911480 (RtlpAddKnownAce.c)
 *     RtlCreateSecurityDescriptor @ 0x1409E16D0 (RtlCreateSecurityDescriptor.c)
 *     RtlSetSaclSecurityDescriptor @ 0x140A04030 (RtlSetSaclSecurityDescriptor.c)
 *     RtlIsPackageSid @ 0x140A4069C (RtlIsPackageSid.c)
 */

_BOOL8 __fastcall ObpVerifyAccessToBoundaryEntry(unsigned __int8 *a1, __int64 a2)
{
  int v4; // eax
  unsigned __int8 **v5; // rax
  void *v6; // r9
  __int16 v7; // ax
  PSID *v10; // rdx
  int v11; // eax
  unsigned int v12; // [rsp+60h] [rbp-A0h] BYREF
  __int128 SecurityDescriptor; // [rsp+68h] [rbp-98h] BYREF
  __int128 v14; // [rsp+78h] [rbp-88h]
  int *v15; // [rsp+88h] [rbp-78h]
  ACL Acl; // [rsp+90h] [rbp-70h] BYREF
  int v17[2]; // [rsp+F0h] [rbp-10h] BYREF
  _BYTE v18[152]; // [rsp+F8h] [rbp-8h] BYREF

  v12 = 0;
  memset_0(&Acl, 0, 0x54uLL);
  v15 = 0LL;
  v4 = *(_DWORD *)a1;
  SecurityDescriptor = 0LL;
  v14 = 0LL;
  if ( v4 != 2 )
  {
    if ( v4 != 3 )
    {
      if ( v4 != 1 )
      {
        *(_DWORD *)(a2 + 48) = -1073741595;
        return 0LL;
      }
      return 1LL;
    }
    RtlCreateAcl(&Acl, 0x54u, 2u);
    RtlAddMandatoryAce(&Acl, 2u, 0, a1 + 8, 0x11u, 7u);
    RtlCreateSecurityDescriptor(&SecurityDescriptor, 1u);
    RtlSetSaclSecurityDescriptor(&SecurityDescriptor, 1u, &Acl, 0);
    return SeAccessCheckWithHint(
             (__int64)&SecurityDescriptor,
             1,
             (int *)a2,
             1,
             0xF000Fu,
             0,
             0LL,
             &ObpDirectoryObjectType->TypeInfo.GenericMapping.GenericRead,
             KeGetCurrentThread()->PreviousMode,
             &v12,
             (int *)(a2 + 48));
  }
  if ( !RtlIsPackageSid(a1 + 8) )
  {
    memset_0(v18, 0, sizeof(v18));
    *(_QWORD *)v17 = 10485762LL;
    RtlpAddKnownAce((ACL *)v17, 2u, 0, 983055, a1 + 8, 0);
    v5 = *(unsigned __int8 ***)(a2 + 32);
    if ( v5 )
      RtlpAddKnownAce((ACL *)v17, 2u, 0, 983055, *v5, 0);
    v6 = *(void **)(a2 + 40);
    Acl = (ACL)5505026LL;
    RtlAddMandatoryAce(&Acl, 2u, 0, v6, 0x11u, 7u);
    LOBYTE(SecurityDescriptor) = 1;
    if ( (SWORD1(SecurityDescriptor) & 0x8000u) == 0 )
    {
      v15 = v17;
      v7 = WORD1(SecurityDescriptor) & 0xFFF3 | 4;
      WORD1(SecurityDescriptor) = v7;
      if ( v7 >= 0 )
      {
        *((_QWORD *)&v14 + 1) = &Acl;
        WORD1(SecurityDescriptor) = v7 & 0xFFCF | 0x10;
      }
    }
    return SeAccessCheckWithHint(
             (__int64)&SecurityDescriptor,
             1,
             (int *)a2,
             1,
             0xF000Fu,
             0,
             0LL,
             &ObpDirectoryObjectType->TypeInfo.GenericMapping.GenericRead,
             KeGetCurrentThread()->PreviousMode,
             &v12,
             (int *)(a2 + 48));
  }
  v10 = *(PSID **)(a2 + 32);
  if ( v10 && !RtlEqualSid(a1 + 8, *v10) )
  {
    *(_DWORD *)(a2 + 48) = -1073741790;
    return 0LL;
  }
  v11 = *(_DWORD *)(a2 + 52);
  if ( (v11 & 1) != 0 )
  {
    *(_DWORD *)(a2 + 48) = -1073741811;
    return 0LL;
  }
  *(_DWORD *)(a2 + 52) = v11 | 1;
  return 1LL;
}
