/*
 * XREFs of NtOpenObjectAuditAlarm @ 0x140911F00
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     ObReferenceObjectByHandle @ 0x140847200 (ObReferenceObjectByHandle.c)
 *     SeReleaseSubjectContext @ 0x140849AA0 (SeReleaseSubjectContext.c)
 *     SeCaptureSubjectContext @ 0x140849BB0 (SeCaptureSubjectContext.c)
 *     SepAdtPrivilegeObjectAuditAlarm @ 0x14084C800 (SepAdtPrivilegeObjectAuditAlarm.c)
 *     SepAuditFailed @ 0x14084D220 (SepAuditFailed.c)
 *     SepAdtAuditObjectAccessWithContext @ 0x14084D2F0 (SepAdtAuditObjectAccessWithContext.c)
 *     SepAdtOpenObjectAuditAlarm @ 0x140862A14 (SepAdtOpenObjectAuditAlarm.c)
 *     SeExamineSacl @ 0x14088DA20 (SeExamineSacl.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408A3890 (ExRaiseDatatypeMisalignment.c)
 *     SeCaptureSecurityDescriptor @ 0x1409108D0 (SeCaptureSecurityDescriptor.c)
 *     SeCheckAuditPrivilege @ 0x140912648 (SeCheckAuditPrivilege.c)
 *     SepProbeAndCaptureString_U @ 0x140912BA0 (SepProbeAndCaptureString_U.c)
 *     SeReleaseSecurityDescriptor @ 0x140912CC0 (SeReleaseSecurityDescriptor.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
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
  KPROCESSOR_MODE PreviousMode; // r13
  __int64 v14; // rdx
  int v15; // edi
  PVOID v16; // rdi
  __int64 v17; // rdx
  NTSTATUS v18; // esi
  __int64 v19; // r9
  __int64 v20; // rdi
  ULONG PrivilegeCount; // esi
  unsigned int v22; // ecx
  char *v23; // rdx
  ULONG *Pool2; // rax
  __int64 v25; // rdx
  __int64 v26; // r9
  ULONG *v27; // r12
  PBOOLEAN v28; // r12
  PVOID v30; // rsi
  char v31; // al
  PVOID v32; // rdi
  BOOLEAN v33; // r14
  NTSTATUS v34; // ebx
  signed int v35; // ecx
  __int16 v36; // ax
  ACL *v37; // rdx
  ACL *v38; // rcx
  __int64 v39; // rdx
  __int64 v40; // rax
  _KPROCESS *Process; // rax
  bool v42; // cf
  bool v43; // [rsp+A0h] [rbp-B8h]
  BOOLEAN GenerateAudit; // [rsp+A1h] [rbp-B7h] BYREF
  BOOLEAN GenerateAlarm[6]; // [rsp+A2h] [rbp-B6h] BYREF
  int v46; // [rsp+A8h] [rbp-B0h]
  __int16 v47; // [rsp+ACh] [rbp-ACh] BYREF
  PVOID P; // [rsp+B0h] [rbp-A8h] BYREF
  PVOID Token; // [rsp+B8h] [rbp-A0h] BYREF
  PVOID v50; // [rsp+C0h] [rbp-98h] BYREF
  PVOID v51; // [rsp+C8h] [rbp-90h] BYREF
  PVOID v52; // [rsp+D0h] [rbp-88h] BYREF
  PVOID v53; // [rsp+D8h] [rbp-80h]
  __int64 v54; // [rsp+E0h] [rbp-78h]
  unsigned int v55; // [rsp+E8h] [rbp-70h]
  ULONG v56; // [rsp+ECh] [rbp-6Ch]
  __int64 v57; // [rsp+F0h] [rbp-68h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+F8h] [rbp-60h] BYREF
  size_t Size; // [rsp+118h] [rbp-40h]

  v12 = (__int64 *)HandleId;
  v54 = (__int64)HandleId;
  v51 = 0LL;
  v50 = 0LL;
  v52 = 0LL;
  P = 0LL;
  v53 = 0LL;
  v43 = 0;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  GenerateAudit = 0;
  GenerateAlarm[0] = 0;
  v57 = 0LL;
  v47 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  GenerateAlarm[1] = PreviousMode;
  SeCaptureSubjectContext(&SubjectContext);
  LOBYTE(v14) = PreviousMode;
  if ( !(unsigned __int8)SeCheckAuditPrivilege(&SubjectContext, v14) )
  {
    v34 = -1073741727;
    goto LABEL_49;
  }
  Token = 0LL;
  v15 = ObReferenceObjectByHandle(ClientToken, 8u, (POBJECT_TYPE)SeTokenObjectType, PreviousMode, &Token, 0LL);
  if ( v15 < 0 )
  {
    SeReleaseSubjectContext(&SubjectContext);
    if ( v15 == -1073741816 )
      return v15;
    v35 = v15;
    goto LABEL_60;
  }
  v16 = Token;
  if ( *((_DWORD *)Token + 48) == 2 && *((int *)Token + 49) < 1 )
  {
    ObfDereferenceObject(Token);
    v34 = -1073741659;
LABEL_49:
    SeReleaseSubjectContext(&SubjectContext);
    return v34;
  }
  if ( !SecurityDescriptor )
  {
    ObfDereferenceObject(Token);
    v34 = -1073741703;
    goto LABEL_49;
  }
  v18 = SeCaptureSecurityDescriptor((__int64)SecurityDescriptor, PreviousMode, 1, 0, &P);
  v46 = v18;
  if ( v18 >= 0 && P )
  {
    if ( AccessGranted && Privileges )
    {
      if ( ((unsigned __int8)Privileges & 3) != 0 )
        goto LABEL_19;
      v20 = 0x7FFFFFFF0000LL;
      PrivilegeCount = Privileges->PrivilegeCount;
      v56 = PrivilegeCount;
      if ( PrivilegeCount >= 0x43 )
      {
        v15 = -1073741811;
        v46 = -1073741811;
        v28 = GenerateOnClose;
LABEL_30:
        if ( v15 >= 0 )
        {
          v30 = v50;
          v31 = SepAdtAuditObjectAccessWithContext(
                  0LL,
                  (unsigned __int16 *)v50,
                  AccessGranted,
                  AccessGranted == 0,
                  &SubjectContext,
                  0,
                  (unsigned __int16 *)&v47);
          v32 = P;
          if ( !v31 )
          {
LABEL_32:
            if ( GenerateAudit || GenerateAlarm[0] || !Privileges || !AccessGranted )
            {
              v33 = v43;
            }
            else
            {
              v30 = v50;
              SepAdtPrivilegeObjectAuditAlarm(
                (const int *)v51,
                (unsigned __int16 *)v50,
                (unsigned __int16 *)v52,
                v57,
                (__int64)Token,
                (__int64)SubjectContext.PrimaryToken,
                (__int64)KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Flink,
                DesiredAccess,
                (unsigned int *)v53,
                AccessGranted);
              v33 = 0;
              v32 = P;
            }
            if ( PreviousMode == 1 )
              ExFreePoolWithTag(v32, 0);
            if ( v51 )
              ExFreePoolWithTag(v51, 0);
            if ( v30 )
              ExFreePoolWithTag(v30, 0);
            if ( v52 )
              ExFreePoolWithTag(v52, 0);
            if ( v53 )
              ExFreePoolWithTag(v53, 0);
            ObfDereferenceObject(Token);
            SeReleaseSubjectContext(&SubjectContext);
            *v28 = v33;
            return 0;
          }
          v36 = *((_WORD *)P + 1);
          if ( (v36 & 0x10) == 0 )
            goto LABEL_67;
          if ( v36 >= 0 )
          {
            v37 = (ACL *)*((_QWORD *)P + 3);
            goto LABEL_68;
          }
          v39 = *((unsigned int *)P + 3);
          if ( (_DWORD)v39 )
            v37 = (ACL *)((char *)P + v39);
          else
LABEL_67:
            v37 = 0LL;
LABEL_68:
          if ( (v36 & 0x10) == 0 )
            goto LABEL_69;
          if ( v36 >= 0 )
          {
            v38 = (ACL *)*((_QWORD *)P + 3);
            goto LABEL_70;
          }
          v40 = *((unsigned int *)P + 3);
          if ( (_DWORD)v40 )
            v38 = (ACL *)((char *)P + v40);
          else
LABEL_69:
            v38 = 0LL;
LABEL_70:
          SeExamineSacl(v38, v37, Token, GrantedAccess | DesiredAccess, AccessGranted, &GenerateAudit, GenerateAlarm);
          if ( GenerateAudit || GenerateAlarm[0] )
          {
            Process = KeGetCurrentThread()->ApcState.Process;
            v42 = v54 != 0;
            v54 = -v54;
            v32 = P;
            v30 = v50;
            v43 = SepAdtOpenObjectAuditAlarm(
                    v47,
                    (const int *)v51,
                    (unsigned __int64 *)((unsigned __int64)&v57 & -(__int64)v42),
                    (unsigned __int16 *)v50,
                    (unsigned __int16 *)v52,
                    (__int16 *)P,
                    Token,
                    (_QWORD *)SubjectContext.PrimaryToken,
                    DesiredAccess,
                    GrantedAccess,
                    (int *)v53,
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
        if ( v51 )
          ExFreePoolWithTag(v51, 0);
        if ( v50 )
          ExFreePoolWithTag(v50, 0);
        if ( v52 )
          ExFreePoolWithTag(v52, 0);
        if ( v53 )
          ExFreePoolWithTag(v53, 0);
        LOBYTE(v17) = PreviousMode;
        SeReleaseSecurityDescriptor(P, v17, 0LL, v19);
        ObfDereferenceObject(Token);
        SeReleaseSubjectContext(&SubjectContext);
        if ( v15 != -1073741670 )
          return v15;
        v35 = -1073741670;
LABEL_60:
        SepAuditFailed(v35);
        return v15;
      }
      v22 = 12 * PrivilegeCount + 8;
      v55 = v22;
      if ( 12 * PrivilegeCount != -8 )
      {
        v23 = (char *)Privileges + v22;
        if ( (unsigned __int64)v23 > 0x7FFFFFFF0000LL || v23 < (char *)Privileges )
        {
          v22 = v55;
          PrivilegeCount = v56;
        }
      }
      Size = v22;
      Pool2 = (ULONG *)ExAllocatePool2(0x100uLL, v22, 0x72506553u);
      v27 = Pool2;
      v53 = Pool2;
      if ( !Pool2 )
      {
        LOBYTE(v25) = PreviousMode;
        SeReleaseSecurityDescriptor(P, v25, 0LL, v26);
        ObfDereferenceObject(Token);
        SeReleaseSubjectContext(&SubjectContext);
        v46 = -1073741670;
        SepAuditFailed(-1073741670);
        return -1073741670;
      }
      memmove(Pool2, Privileges, Size);
      *v27 = PrivilegeCount;
      v12 = (__int64 *)v54;
    }
    else
    {
      v20 = 0x7FFFFFFF0000LL;
    }
    if ( v12 )
    {
      if ( ((unsigned __int8)v12 & 7) != 0 )
LABEL_19:
        ExRaiseDatatypeMisalignment();
      v57 = *v12;
    }
    v28 = GenerateOnClose;
    if ( (unsigned __int64)GenerateOnClose < 0x7FFFFFFF0000LL )
      v20 = (__int64)GenerateOnClose;
    *(_BYTE *)v20 = *(_BYTE *)v20;
    v15 = SepProbeAndCaptureString_U(SubsystemName, &v51);
    v46 = v15;
    if ( v15 >= 0 )
    {
      v15 = SepProbeAndCaptureString_U(ObjectTypeName, &v50);
      v46 = v15;
      if ( v15 >= 0 )
      {
        v15 = SepProbeAndCaptureString_U(ObjectName, &v52);
        v46 = v15;
      }
    }
    goto LABEL_30;
  }
  ObfDereferenceObject(v16);
  SeReleaseSubjectContext(&SubjectContext);
  if ( v18 == -1073741670 )
    SepAuditFailed(-1073741670);
  return v18;
}
