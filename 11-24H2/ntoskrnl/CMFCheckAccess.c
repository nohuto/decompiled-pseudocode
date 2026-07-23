/*
 * XREFs of CMFCheckAccess @ 0x1407C2854
 * Callers:
 *     NtMapCMFModule @ 0x1407C42B0 (NtMapCMFModule.c)
 * Callees:
 *     SeAccessCheck @ 0x1403B6900 (SeAccessCheck.c)
 *     CmSiFreeMemory @ 0x140464550 (CmSiFreeMemory.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     CMFCreateSecurityDescriptor @ 0x1407C2AB0 (CMFCreateSecurityDescriptor.c)
 *     SeCreateAccessState @ 0x14083B750 (SeCreateAccessState.c)
 *     SeDeleteAccessState @ 0x14083D240 (SeDeleteAccessState.c)
 *     SeLockSubjectContext @ 0x14086C760 (SeLockSubjectContext.c)
 *     SeUnlockSubjectContext @ 0x14086C7C0 (SeUnlockSubjectContext.c)
 *     SePrivilegeCheck @ 0x14099A020 (SePrivilegeCheck.c)
 *     SeAppendPrivileges @ 0x1409C22A0 (SeAppendPrivileges.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CMFCheckAccess(__int64 a1, int a2, KPROCESSOR_MODE a3)
{
  unsigned int v6; // edi
  unsigned __int64 v7; // rdx
  GENERIC_MAPPING *GenericMapping; // rsi
  ACCESS_MASK v9; // ebx
  BOOLEAN v10; // al
  BOOLEAN v11; // r14
  ACCESS_MASK GrantedAccess; // [rsp+50h] [rbp-B0h] BYREF
  PVOID P; // [rsp+58h] [rbp-A8h] BYREF
  NTSTATUS AccessStatus; // [rsp+60h] [rbp-A0h] BYREF
  PPRIVILEGE_SET Privileges; // [rsp+68h] [rbp-98h] BYREF
  struct _PRIVILEGE_SET RequiredPrivileges; // [rsp+78h] [rbp-88h] BYREF
  struct _ACCESS_STATE AccessState; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v19[224]; // [rsp+130h] [rbp+30h] BYREF

  memset_0(&AccessState, 0, sizeof(AccessState));
  memset_0(v19, 0, sizeof(v19));
  Privileges = 0LL;
  if ( a1 )
  {
    v7 = (unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(a1 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)(a1 - 48) >> 8);
    GenericMapping = (GENERIC_MAPPING *)(ObTypeIndexTable[v7] + 76);
    if ( a2 < 0 )
      a2 |= GenericMapping->GenericRead;
    if ( (a2 & 0x40000000) != 0 )
      a2 |= *(_DWORD *)(ObTypeIndexTable[v7] + 80);
    if ( (a2 & 0x20000000) != 0 )
      a2 |= *(_DWORD *)(ObTypeIndexTable[v7] + 84);
    if ( (a2 & 0x10000000) != 0 )
      a2 |= *(_DWORD *)(ObTypeIndexTable[v7] + 88);
    v9 = a2 & 0xFFFFFFF;
    if ( !CMFSecurityDescriptor )
    {
      P = 0LL;
      v6 = CMFCreateSecurityDescriptor(&P, GenericMapping);
      if ( (v6 & 0xC0000000) == 0xC0000000 )
        return v6;
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)&CMFSecurityDescriptor, (signed __int64)P, 0LL) )
        ExFreePoolWithTag(P, 0);
    }
    v6 = SeCreateAccessState(&AccessState, v19, v9, GenericMapping);
    if ( (v6 & 0xC0000000) != 0xC0000000 )
    {
      SeLockSubjectContext(&AccessState.SubjectSecurityContext);
      RequiredPrivileges.Control = 0;
      RequiredPrivileges.Privilege[0].Attributes = 0;
      P = (PVOID)18;
      RequiredPrivileges.Privilege[0].Luid = (LUID)18LL;
      RequiredPrivileges.PrivilegeCount = 1;
      v10 = SePrivilegeCheck(&RequiredPrivileges, &AccessState.SubjectSecurityContext, a3);
      AccessStatus = 0;
      v11 = v10;
      GrantedAccess = 0;
      if ( v10 )
      {
        GrantedAccess = v9;
      }
      else
      {
        v11 = SeAccessCheck(
                CMFSecurityDescriptor,
                &AccessState.SubjectSecurityContext,
                1u,
                v9,
                0,
                &Privileges,
                GenericMapping,
                a3,
                &GrantedAccess,
                &AccessStatus);
        if ( Privileges )
        {
          SeAppendPrivileges(&AccessState, Privileges);
          CmSiFreeMemory(Privileges);
        }
      }
      SeUnlockSubjectContext(&AccessState.SubjectSecurityContext);
      v6 = AccessStatus;
      if ( (AccessStatus & 0xC0000000) != 0xC0000000 )
      {
        if ( !v11 || (~GrantedAccess & v9) != 0 )
          v6 = -1073741790;
        else
          v6 = 0;
      }
      SeDeleteAccessState(&AccessState);
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v6;
}
