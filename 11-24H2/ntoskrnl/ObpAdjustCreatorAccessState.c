/*
 * XREFs of ObpAdjustCreatorAccessState @ 0x14087EBB0
 * Callers:
 *     ObInsertObjectEx @ 0x140853900 (ObInsertObjectEx.c)
 * Callees:
 *     SeComputeCreatorDeniedRights @ 0x1403B5DC0 (SeComputeCreatorDeniedRights.c)
 *     SepPrivilegeCheck @ 0x1403FE430 (SepPrivilegeCheck.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     SePrivilegedServiceAuditAlarm @ 0x14084FDF0 (SePrivilegedServiceAuditAlarm.c)
 *     ObDereferenceSecurityDescriptor @ 0x14087E040 (ObDereferenceSecurityDescriptor.c)
 *     ObpReferenceSecurityDescriptorSlow @ 0x14087EDAC (ObpReferenceSecurityDescriptorSlow.c)
 *     SeAppendPrivileges @ 0x1409C22A0 (SeAppendPrivileges.c)
 */

__int64 __fastcall ObpAdjustCreatorAccessState(PACCESS_STATE AccessState, char a2, _DWORD *a3, __int64 a4)
{
  int RemainingDesiredAccess; // eax
  ACCESS_MASK v8; // ecx
  signed __int64 v9; // rdx
  signed __int64 v10; // rax
  signed __int64 v11; // rdi
  signed __int64 v12; // rdx
  unsigned __int64 v13; // rdi
  signed __int64 v14; // rax
  signed __int64 v15; // rtt
  PACCESS_TOKEN ClientToken; // rcx
  struct _PRIVILEGE_SET Privileges; // [rsp+30h] [rbp-38h] BYREF

  RemainingDesiredAccess = AccessState->RemainingDesiredAccess;
  if ( (RemainingDesiredAccess & 0x2000000) != 0 )
  {
    RemainingDesiredAccess = RemainingDesiredAccess & 0xEDFFFFFF | 0x10000000;
    AccessState->RemainingDesiredAccess = RemainingDesiredAccess;
  }
  if ( (RemainingDesiredAccess & 0xF0000000) != 0 )
  {
    if ( RemainingDesiredAccess < 0 )
      RemainingDesiredAccess |= a3[19];
    if ( (RemainingDesiredAccess & 0x40000000) != 0 )
      RemainingDesiredAccess |= a3[20];
    if ( (RemainingDesiredAccess & 0x20000000) != 0 )
      RemainingDesiredAccess |= a3[21];
    if ( (RemainingDesiredAccess & 0x10000000) != 0 )
      RemainingDesiredAccess |= a3[22];
    RemainingDesiredAccess &= 0xFFFFFFFu;
    AccessState->RemainingDesiredAccess = RemainingDesiredAccess;
  }
  if ( (RemainingDesiredAccess & 0x1000000) == 0 )
    goto LABEL_14;
  Privileges.Privilege[0].Luid = SeSecurityPrivilege;
  Privileges.PrivilegeCount = 1;
  Privileges.Control = 1;
  Privileges.Privilege[0].Attributes = 0;
  if ( a2 )
  {
    ClientToken = AccessState->SubjectSecurityContext.ClientToken;
    if ( ClientToken )
    {
      if ( AccessState->SubjectSecurityContext.ImpersonationLevel < SecurityImpersonation )
        goto LABEL_29;
    }
    else
    {
      ClientToken = AccessState->SubjectSecurityContext.PrimaryToken;
    }
    if ( !SepPrivilegeCheck((__int64)ClientToken, (__int64)Privileges.Privilege, 1u, 1, a2) )
    {
LABEL_29:
      SePrivilegedServiceAuditAlarm(0LL, &AccessState->SubjectSecurityContext, &Privileges.PrivilegeCount, 0);
      return 3221225569LL;
    }
  }
  AccessState->RemainingDesiredAccess &= ~0x1000000u;
  AccessState->PreviouslyGrantedAccess |= 0x1000000u;
  SeAppendPrivileges(AccessState, &Privileges);
LABEL_14:
  v8 = AccessState->PreviouslyGrantedAccess | AccessState->RemainingDesiredAccess;
  AccessState->PreviouslyGrantedAccess = v8;
  AccessState->RemainingDesiredAccess = 0;
  AccessState->PreviouslyGrantedAccess = v8 & (a3[23] | 0x1000000);
  _m_prefetchw((const void *)(a4 - 8));
  v9 = *(_QWORD *)(a4 - 8);
  if ( (v9 & 0xF) != 0 )
  {
    do
    {
      v10 = _InterlockedCompareExchange64((volatile signed __int64 *)(a4 - 8), v9 - 1, v9);
      if ( v9 == v10 )
        break;
      v9 = v10;
    }
    while ( (v10 & 0xF) != 0 );
  }
  v11 = v9;
  v12 = v9 & 0xF;
  v13 = v11 & 0xFFFFFFFFFFFFFFF0uLL;
  if ( (unsigned int)v12 <= 1 )
  {
    if ( v13 )
      v13 = ObpReferenceSecurityDescriptorSlow(a4 - 48, v12, v13);
  }
  AccessState->PreviouslyGrantedAccess &= ~(unsigned int)SeComputeCreatorDeniedRights(
                                                           &AccessState->SubjectSecurityContext,
                                                           (__int64)AccessState,
                                                           AccessState->PreviouslyGrantedAccess,
                                                           (unsigned int *)v13);
  if ( v13 )
  {
    _m_prefetchw((const void *)(a4 - 8));
    v14 = *(_QWORD *)(a4 - 8);
    while ( (v13 ^ v14) < 0xF )
    {
      v15 = v14;
      v14 = _InterlockedCompareExchange64((volatile signed __int64 *)(a4 - 8), v14 + 1, v14);
      if ( v15 == v14 )
        return 0LL;
    }
    ObDereferenceSecurityDescriptor(v13, 1u);
  }
  return 0LL;
}
