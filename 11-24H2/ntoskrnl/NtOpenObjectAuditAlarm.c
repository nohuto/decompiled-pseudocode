/*
 * XREFs of NtOpenObjectAuditAlarm @ 0x140920280
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     ObReferenceObjectByHandle @ 0x14084AF40 (ObReferenceObjectByHandle.c)
 *     SeReleaseSubjectContext @ 0x14084D7E0 (SeReleaseSubjectContext.c)
 *     SeCaptureSubjectContext @ 0x14084D8F0 (SeCaptureSubjectContext.c)
 *     SepAdtPrivilegeObjectAuditAlarm @ 0x140850540 (SepAdtPrivilegeObjectAuditAlarm.c)
 *     SepAuditFailed @ 0x140850F60 (SepAuditFailed.c)
 *     SepAdtAuditObjectAccessWithContext @ 0x140851030 (SepAdtAuditObjectAccessWithContext.c)
 *     SeExamineSacl @ 0x140889B70 (SeExamineSacl.c)
 *     ExRaiseDatatypeMisalignment @ 0x14089B1F0 (ExRaiseDatatypeMisalignment.c)
 *     SepAdtOpenObjectAuditAlarm @ 0x1408F1214 (SepAdtOpenObjectAuditAlarm.c)
 *     SeCaptureSecurityDescriptor @ 0x14091CE60 (SeCaptureSecurityDescriptor.c)
 *     SepProbeAndCaptureString_U @ 0x14091F8F0 (SepProbeAndCaptureString_U.c)
 *     SeCheckAuditPrivilege @ 0x14091FC2C (SeCheckAuditPrivilege.c)
 *     SeReleaseSecurityDescriptor @ 0x1409209D0 (SeReleaseSecurityDescriptor.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall NtOpenObjectAuditAlarm(
        PUNICODE_STRING SubsystemName,
        PVOID HandleId,
        PUNICODE_STRING ObjectTypeName,
        PUNICODE_STRING ObjectName,
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        HANDLE ClientToken,
        ACCESS_MASK DesiredAccess,
        ACCESS_MASK GrantedAccess,
        PPRIVILEGE_SET Privileges,
        BOOLEAN ObjectCreation,
        BOOLEAN AccessGranted,
        PBOOLEAN GenerateOnClose)
{
  __int64 *v12; // r12
  BOOLEAN PreviousMode; // r13
  NTSTATUS v14; // edi
  PVOID v15; // rdi
  __int64 v16; // rdx
  NTSTATUS v17; // esi
  __int64 v18; // rdi
  ULONG PrivilegeCount; // esi
  unsigned int v20; // ecx
  char *v21; // rdx
  ULONG *Pool2; // rax
  __int64 v23; // rdx
  ULONG *v24; // r12
  PBOOLEAN v25; // r12
  PVOID v27; // rsi
  char v28; // al
  PVOID v29; // rdi
  BOOLEAN v30; // r14
  NTSTATUS v31; // ebx
  signed int v32; // ecx
  __int16 v33; // ax
  ACL *v34; // rdx
  ACL *v35; // rcx
  __int64 v36; // rdx
  __int64 v37; // rax
  _KPROCESS *Process; // rax
  bool v39; // cf
  bool v40; // [rsp+A0h] [rbp-B8h]
  BOOLEAN GenerateAudit; // [rsp+A1h] [rbp-B7h] BYREF
  BOOLEAN GenerateAlarm[6]; // [rsp+A2h] [rbp-B6h] BYREF
  int v43; // [rsp+A8h] [rbp-B0h]
  __int16 v44; // [rsp+ACh] [rbp-ACh] BYREF
  PVOID P; // [rsp+B0h] [rbp-A8h] BYREF
  PVOID Token; // [rsp+B8h] [rbp-A0h] BYREF
  PVOID v47; // [rsp+C0h] [rbp-98h] BYREF
  PVOID v48; // [rsp+C8h] [rbp-90h] BYREF
  PVOID v49; // [rsp+D0h] [rbp-88h] BYREF
  PVOID v50; // [rsp+D8h] [rbp-80h]
  __int64 v51; // [rsp+E0h] [rbp-78h]
  unsigned int v52; // [rsp+E8h] [rbp-70h]
  ULONG v53; // [rsp+ECh] [rbp-6Ch]
  __int64 v54; // [rsp+F0h] [rbp-68h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+F8h] [rbp-60h] BYREF
  size_t Size; // [rsp+118h] [rbp-40h]

  v12 = (__int64 *)HandleId;
  v51 = (__int64)HandleId;
  v48 = 0LL;
  v47 = 0LL;
  v49 = 0LL;
  P = 0LL;
  v50 = 0LL;
  v40 = 0;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  GenerateAudit = 0;
  GenerateAlarm[0] = 0;
  v54 = 0LL;
  v44 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  GenerateAlarm[1] = PreviousMode;
  SeCaptureSubjectContext(&SubjectContext);
  if ( !SeCheckAuditPrivilege((__int64 *)&SubjectContext, PreviousMode) )
  {
    v31 = -1073741727;
    goto LABEL_49;
  }
  Token = 0LL;
  v14 = ObReferenceObjectByHandle(ClientToken, 8u, (POBJECT_TYPE)SeTokenObjectType, PreviousMode, &Token, 0LL);
  if ( v14 < 0 )
  {
    SeReleaseSubjectContext(&SubjectContext);
    if ( v14 == -1073741816 )
      return v14;
    v32 = v14;
    goto LABEL_60;
  }
  v15 = Token;
  if ( *((_DWORD *)Token + 48) == 2 && *((int *)Token + 49) < 1 )
  {
    ObfDereferenceObject(Token);
    v31 = -1073741659;
LABEL_49:
    SeReleaseSubjectContext(&SubjectContext);
    return v31;
  }
  if ( !SecurityDescriptor )
  {
    ObfDereferenceObject(Token);
    v31 = -1073741703;
    goto LABEL_49;
  }
  v17 = SeCaptureSecurityDescriptor((__int64)SecurityDescriptor, PreviousMode, 1, 0, &P);
  v43 = v17;
  if ( v17 >= 0 && P )
  {
    if ( AccessGranted && Privileges )
    {
      if ( ((unsigned __int8)Privileges & 3) != 0 )
        goto LABEL_19;
      v18 = 0x7FFFFFFF0000LL;
      PrivilegeCount = Privileges->PrivilegeCount;
      v53 = PrivilegeCount;
      if ( PrivilegeCount >= 0x43 )
      {
        v14 = -1073741811;
        v43 = -1073741811;
        v25 = GenerateOnClose;
LABEL_30:
        if ( v14 >= 0 )
        {
          v27 = v47;
          v28 = SepAdtAuditObjectAccessWithContext(
                  0LL,
                  (unsigned __int16 *)v47,
                  AccessGranted,
                  AccessGranted == 0,
                  &SubjectContext,
                  0,
                  (unsigned __int16 *)&v44);
          v29 = P;
          if ( !v28 )
          {
LABEL_32:
            if ( GenerateAudit || GenerateAlarm[0] || !Privileges || !AccessGranted )
            {
              v30 = v40;
            }
            else
            {
              v27 = v47;
              SepAdtPrivilegeObjectAuditAlarm(
                (const int *)v48,
                (unsigned __int16 *)v47,
                (unsigned __int16 *)v49,
                v54,
                (__int64)Token,
                (__int64)SubjectContext.PrimaryToken,
                (__int64)KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Flink,
                DesiredAccess,
                (unsigned int *)v50,
                AccessGranted);
              v30 = 0;
              v29 = P;
            }
            if ( PreviousMode == 1 )
              ExFreePoolWithTag(v29, 0);
            if ( v48 )
              ExFreePoolWithTag(v48, 0);
            if ( v27 )
              ExFreePoolWithTag(v27, 0);
            if ( v49 )
              ExFreePoolWithTag(v49, 0);
            if ( v50 )
              ExFreePoolWithTag(v50, 0);
            ObfDereferenceObject(Token);
            SeReleaseSubjectContext(&SubjectContext);
            *v25 = v30;
            return 0;
          }
          v33 = *((_WORD *)P + 1);
          if ( (v33 & 0x10) == 0 )
            goto LABEL_67;
          if ( v33 >= 0 )
          {
            v34 = (ACL *)*((_QWORD *)P + 3);
            goto LABEL_68;
          }
          v36 = *((unsigned int *)P + 3);
          if ( (_DWORD)v36 )
            v34 = (ACL *)((char *)P + v36);
          else
LABEL_67:
            v34 = 0LL;
LABEL_68:
          if ( (v33 & 0x10) == 0 )
            goto LABEL_69;
          if ( v33 >= 0 )
          {
            v35 = (ACL *)*((_QWORD *)P + 3);
            goto LABEL_70;
          }
          v37 = *((unsigned int *)P + 3);
          if ( (_DWORD)v37 )
            v35 = (ACL *)((char *)P + v37);
          else
LABEL_69:
            v35 = 0LL;
LABEL_70:
          SeExamineSacl(v35, v34, Token, GrantedAccess | DesiredAccess, AccessGranted, &GenerateAudit, GenerateAlarm);
          if ( GenerateAudit || GenerateAlarm[0] )
          {
            Process = KeGetCurrentThread()->ApcState.Process;
            v39 = v51 != 0;
            v51 = -v51;
            v29 = P;
            v27 = v47;
            v40 = SepAdtOpenObjectAuditAlarm(
                    v44,
                    (const int *)v48,
                    (unsigned __int64 *)((unsigned __int64)&v54 & -(__int64)v39),
                    (unsigned __int16 *)v47,
                    (unsigned __int16 *)v49,
                    (__int16 *)P,
                    Token,
                    (_QWORD *)SubjectContext.PrimaryToken,
                    DesiredAccess,
                    GrantedAccess,
                    (int *)v50,
                    AccessGranted,
                    (__int64)Process[1].Header.WaitListHead.Flink,
                    2,
                    0LL,
                    0,
                    0LL,
                    0LL,
                    0LL);
          }
          goto LABEL_32;
        }
        if ( v48 )
          ExFreePoolWithTag(v48, 0);
        if ( v47 )
          ExFreePoolWithTag(v47, 0);
        if ( v49 )
          ExFreePoolWithTag(v49, 0);
        if ( v50 )
          ExFreePoolWithTag(v50, 0);
        LOBYTE(v16) = PreviousMode;
        SeReleaseSecurityDescriptor(P, v16, 0LL);
        ObfDereferenceObject(Token);
        SeReleaseSubjectContext(&SubjectContext);
        if ( v14 != -1073741670 )
          return v14;
        v32 = -1073741670;
LABEL_60:
        SepAuditFailed(v32);
        return v14;
      }
      v20 = 12 * PrivilegeCount + 8;
      v52 = v20;
      if ( 12 * PrivilegeCount != -8 )
      {
        v21 = (char *)Privileges + v20;
        if ( (unsigned __int64)v21 > 0x7FFFFFFF0000LL || v21 < (char *)Privileges )
        {
          v20 = v52;
          PrivilegeCount = v53;
        }
      }
      Size = v20;
      Pool2 = (ULONG *)ExAllocatePool2(0x100uLL);
      v24 = Pool2;
      v50 = Pool2;
      if ( !Pool2 )
      {
        LOBYTE(v23) = PreviousMode;
        SeReleaseSecurityDescriptor(P, v23, 0LL);
        ObfDereferenceObject(Token);
        SeReleaseSubjectContext(&SubjectContext);
        v43 = -1073741670;
        SepAuditFailed(-1073741670);
        return -1073741670;
      }
      memmove(Pool2, Privileges, Size);
      *v24 = PrivilegeCount;
      v12 = (__int64 *)v51;
    }
    else
    {
      v18 = 0x7FFFFFFF0000LL;
    }
    if ( v12 )
    {
      if ( ((unsigned __int8)v12 & 7) != 0 )
LABEL_19:
        ExRaiseDatatypeMisalignment();
      v54 = *v12;
    }
    v25 = GenerateOnClose;
    if ( (unsigned __int64)GenerateOnClose < 0x7FFFFFFF0000LL )
      v18 = (__int64)GenerateOnClose;
    *(_BYTE *)v18 = *(_BYTE *)v18;
    v14 = SepProbeAndCaptureString_U((unsigned __int64)SubsystemName, (__int64)&v48);
    v43 = v14;
    if ( v14 >= 0 )
    {
      v14 = SepProbeAndCaptureString_U((unsigned __int64)ObjectTypeName, (__int64)&v47);
      v43 = v14;
      if ( v14 >= 0 )
      {
        v14 = SepProbeAndCaptureString_U((unsigned __int64)ObjectName, (__int64)&v49);
        v43 = v14;
      }
    }
    goto LABEL_30;
  }
  ObfDereferenceObject(v15);
  SeReleaseSubjectContext(&SubjectContext);
  if ( v17 == -1073741670 )
    SepAuditFailed(-1073741670);
  return v17;
}
