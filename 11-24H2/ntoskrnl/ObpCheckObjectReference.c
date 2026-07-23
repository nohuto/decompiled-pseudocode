/*
 * XREFs of ObpCheckObjectReference @ 0x14086C31C
 * Callers:
 *     ObReferenceObjectByName @ 0x14083B4F0 (ObReferenceObjectByName.c)
 *     ObReferenceObjectByNameEx @ 0x14086BC94 (ObReferenceObjectByNameEx.c)
 * Callees:
 *     SeAccessCheck @ 0x1403B6900 (SeAccessCheck.c)
 *     SepAdtObjectReferenceAuditAlarm @ 0x14079159C (SepAdtObjectReferenceAuditAlarm.c)
 *     SepAdtAuditThisEventWithContext @ 0x14084EED0 (SepAdtAuditThisEventWithContext.c)
 *     ObpGetObjectSecurity @ 0x14084FB10 (ObpGetObjectSecurity.c)
 *     SeLockSubjectContext @ 0x14086C760 (SeLockSubjectContext.c)
 *     SeUnlockSubjectContext @ 0x14086C7C0 (SeUnlockSubjectContext.c)
 *     ObDereferenceSecurityDescriptor @ 0x14087E040 (ObDereferenceSecurityDescriptor.c)
 *     SeExamineSacl @ 0x14088DA20 (SeExamineSacl.c)
 *     SeExamineGlobalSacl @ 0x14088DC88 (SeExamineGlobalSacl.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

BOOLEAN __fastcall ObpCheckObjectReference(ULONG_PTR *a1, __int64 a2, BOOLEAN a3, char a4, PNTSTATUS AccessStatus)
{
  unsigned __int64 v6; // r10
  __int64 v9; // rbx
  NTSTATUS ObjectSecurity; // eax
  void **v11; // r14
  GENERIC_MAPPING *GenericMapping; // rcx
  unsigned int *v13; // rbx
  BOOLEAN v14; // al
  BOOLEAN v15; // r15
  ACCESS_MASK v16; // ecx
  ACCESS_MASK v17; // r12d
  signed __int64 v18; // rax
  signed __int64 v19; // rtt
  void *v21; // r8
  __int16 v22; // ax
  ACL *v23; // rdx
  ACL *v24; // rcx
  void *v25; // r8
  __int16 v26; // ax
  __int64 v27; // rax
  ACL *v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rax
  char v31[4]; // [rsp+50h] [rbp-10h] BYREF
  ACCESS_MASK GrantedAccess; // [rsp+54h] [rbp-Ch] BYREF
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+58h] [rbp-8h] BYREF
  BOOLEAN GenerateAlarm; // [rsp+A0h] [rbp+40h] BYREF
  BOOLEAN GenerateAudit; // [rsp+B0h] [rbp+50h] BYREF

  GenerateAudit = a3;
  v6 = *((unsigned __int8 *)a1 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)a1 - 48) >> 8);
  GrantedAccess = 0;
  v31[0] = 0;
  SecurityDescriptor = 0LL;
  v9 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ v6];
  ObjectSecurity = ObpGetObjectSecurity(a1, &SecurityDescriptor, v31, a4);
  if ( ObjectSecurity < 0 )
  {
    *AccessStatus = ObjectSecurity;
    return 0;
  }
  v11 = (void **)(a2 + 32);
  SeLockSubjectContext((PSECURITY_SUBJECT_CONTEXT)(a2 + 32));
  GenericMapping = (GENERIC_MAPPING *)(v9 + 76);
  v13 = (unsigned int *)SecurityDescriptor;
  v14 = SeAccessCheck(
          SecurityDescriptor,
          (PSECURITY_SUBJECT_CONTEXT)(a2 + 32),
          1u,
          *(_DWORD *)(a2 + 16),
          *(_DWORD *)(a2 + 20),
          0LL,
          GenericMapping,
          a4,
          &GrantedAccess,
          AccessStatus);
  v15 = v14;
  if ( v14 )
  {
    v16 = GrantedAccess;
    *(_DWORD *)(a2 + 20) |= GrantedAccess;
    *(_DWORD *)(a2 + 16) &= ~v16;
  }
  if ( v13 )
  {
    v17 = *(_DWORD *)(a2 + 16) | *(_DWORD *)(a2 + 20);
    GenerateAudit = 0;
    GenerateAlarm = 0;
    if ( a4 )
    {
      if ( SepAdtAuditThisEventWithContext(121LL, v14, 0, (struct _SECURITY_SUBJECT_CONTEXT *)(a2 + 32)) )
      {
        v21 = *v11;
        if ( !*v11 )
          v21 = *(void **)(a2 + 48);
        v22 = *((_WORD *)v13 + 1);
        if ( (v22 & 0x10) != 0 )
        {
          if ( v22 >= 0 )
          {
            v23 = (ACL *)*((_QWORD *)v13 + 3);
          }
          else
          {
            v29 = v13[3];
            if ( (_DWORD)v29 )
              v23 = (ACL *)((char *)v13 + v29);
            else
              v23 = 0LL;
          }
          if ( v22 >= 0 )
          {
            v24 = (ACL *)*((_QWORD *)v13 + 3);
            goto LABEL_18;
          }
          v30 = v13[3];
          if ( (_DWORD)v30 )
          {
            v24 = (ACL *)((char *)v13 + v30);
            goto LABEL_18;
          }
        }
        else
        {
          v23 = 0LL;
        }
        v24 = 0LL;
LABEL_18:
        SeExamineSacl(v24, v23, v21, v17, v15, &GenerateAudit, &GenerateAlarm);
        v25 = *v11;
        if ( !*v11 )
          v25 = *(void **)(a2 + 48);
        v26 = *((_WORD *)v13 + 1);
        if ( (v26 & 0x10) == 0 )
          goto LABEL_23;
        if ( v26 >= 0 )
        {
          v28 = (ACL *)*((_QWORD *)v13 + 3);
          goto LABEL_24;
        }
        v27 = v13[3];
        if ( (_DWORD)v27 )
          v28 = (ACL *)((char *)v13 + v27);
        else
LABEL_23:
          v28 = 0LL;
LABEL_24:
        SeExamineGlobalSacl(
          (PUNICODE_STRING)(ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *((unsigned __int8 *)a1 - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)a1 - 48) >> 8)]
                          + 16),
          v28,
          v25,
          v17,
          v15,
          &GenerateAudit,
          &GenerateAlarm);
        if ( GenerateAudit || GenerateAlarm )
          SepAdtObjectReferenceAuditAlarm((__int64)a1, (__int64 *)(a2 + 32), v17, v15);
      }
    }
  }
  SeUnlockSubjectContext((PSECURITY_SUBJECT_CONTEXT)(a2 + 32));
  if ( v13 )
  {
    if ( v31[0] )
    {
      ExFreePoolWithTag(v13, 0);
    }
    else
    {
      _m_prefetchw(a1 - 1);
      v18 = *(a1 - 1);
      while ( ((unsigned __int64)SecurityDescriptor ^ v18) < 0xF )
      {
        v19 = v18;
        v18 = _InterlockedCompareExchange64((volatile signed __int64 *)a1 - 1, v18 + 1, v18);
        if ( v19 == v18 )
          return v15;
      }
      ObDereferenceSecurityDescriptor(SecurityDescriptor, 1LL);
    }
  }
  return v15;
}
