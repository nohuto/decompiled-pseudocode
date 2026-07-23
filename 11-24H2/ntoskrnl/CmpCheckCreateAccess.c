/*
 * XREFs of CmpCheckCreateAccess @ 0x14086BFEC
 * Callers:
 *     CmpCheckCreateAccessOnKcbStack @ 0x14086C810 (CmpCheckCreateAccessOnKcbStack.c)
 * Callees:
 *     SeAccessCheck @ 0x1403B6900 (SeAccessCheck.c)
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x14084CBA0 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     SeLockSubjectContext @ 0x14086C760 (SeLockSubjectContext.c)
 *     SeUnlockSubjectContext @ 0x14086C7C0 (SeUnlockSubjectContext.c)
 *     RtlIsSandboxedToken @ 0x1408E3950 (RtlIsSandboxedToken.c)
 */

BOOLEAN __fastcall CmpCheckCreateAccess(
        __int64 a1,
        void *a2,
        struct _ACCESS_STATE *a3,
        KPROCESSOR_MODE a4,
        int a5,
        __int64 a6,
        PVOID Object,
        int a8,
        PNTSTATUS AccessStatus)
{
  struct _SECURITY_SUBJECT_CONTEXT *p_SubjectSecurityContext; // r14
  PNTSTATUS v13; // rbx
  BOOLEAN v14; // di
  _WORD *v15; // rbx
  __int64 v16; // rdx
  ACCESS_MASK GrantedAccess; // [rsp+70h] [rbp+8h] BYREF
  int v19; // [rsp+74h] [rbp+Ch]

  v19 = HIDWORD(a1);
  GrantedAccess = 0;
  p_SubjectSecurityContext = &a3->SubjectSecurityContext;
  SeLockSubjectContext(&a3->SubjectSecurityContext);
  v13 = AccessStatus;
  v14 = SeAccessCheck(
          a2,
          p_SubjectSecurityContext,
          1u,
          a5 | 4,
          0,
          0LL,
          (PGENERIC_MAPPING)((char *)CmKeyObjectType + 76),
          a4,
          &GrantedAccess,
          AccessStatus);
  if ( v14 && (a5 & 0x20) != 0 && (unsigned __int8)RtlIsSandboxedToken(p_SubjectSecurityContext) )
  {
    v14 = 0;
    *v13 = -1073741790;
  }
  if ( a8 != 1 || !v14 )
  {
    v15 = Object;
    v16 = a6;
    *((_WORD *)Object + 24) |= 2u;
    if ( v16 )
    {
      SeOpenObjectAuditAlarmWithTransaction(
        (PUNICODE_STRING)CmKeyObjectType + 1,
        v15,
        0LL,
        a2,
        a3,
        0,
        v14,
        a4,
        (GUID *)(v16 + 88),
        &a3->GenerateOnClose);
    }
    else if ( a4 )
    {
      SeOpenObjectAuditAlarmWithTransaction(
        (PUNICODE_STRING)CmKeyObjectType + 1,
        v15,
        0LL,
        a2,
        a3,
        0,
        v14,
        a4,
        0LL,
        &a3->GenerateOnClose);
    }
    v15[24] &= ~2u;
  }
  SeUnlockSubjectContext(p_SubjectSecurityContext);
  return v14;
}
