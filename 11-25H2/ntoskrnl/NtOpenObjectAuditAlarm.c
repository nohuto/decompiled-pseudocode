/*
 * XREFs of NtOpenObjectAuditAlarm @ 0x14092DA70
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     ObReferenceObjectByHandle @ 0x14084F190 (ObReferenceObjectByHandle.c)
 *     SepAdtPrivilegeObjectAuditAlarm @ 0x140854390 (SepAdtPrivilegeObjectAuditAlarm.c)
 *     SepAuditFailed @ 0x140854DA0 (SepAuditFailed.c)
 *     SepAdtAuditObjectAccessWithContext @ 0x140854E70 (SepAdtAuditObjectAccessWithContext.c)
 *     SeCaptureSubjectContext @ 0x140858670 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x140858810 (SeReleaseSubjectContext.c)
 *     ExRaiseDatatypeMisalignment @ 0x14085AF60 (ExRaiseDatatypeMisalignment.c)
 *     SeCaptureSecurityDescriptor @ 0x14092A4A0 (SeCaptureSecurityDescriptor.c)
 *     SepProbeAndCaptureString_U @ 0x14092D0E0 (SepProbeAndCaptureString_U.c)
 *     SeCheckAuditPrivilege @ 0x14092D41C (SeCheckAuditPrivilege.c)
 *     SeReleaseSecurityDescriptor @ 0x14092E1B0 (SeReleaseSecurityDescriptor.c)
 *     SeExamineSacl @ 0x14092EA20 (SeExamineSacl.c)
 *     SepAdtOpenObjectAuditAlarm @ 0x1409851A4 (SepAdtOpenObjectAuditAlarm.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
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
  __int64 v18; // r9
  __int64 v19; // rdi
  ULONG PrivilegeCount; // esi
  unsigned int v21; // ecx
  char *v22; // rdx
  ULONG *Pool2; // rax
  __int64 v24; // rdx
  __int64 v25; // r9
  ULONG *v26; // r12
  PBOOLEAN v27; // r12
  PVOID v29; // rsi
  char v30; // al
  PVOID v31; // rdi
  BOOLEAN v32; // r14
  NTSTATUS v33; // ebx
  signed int v34; // ecx
  __int16 v35; // ax
  ACL *v36; // rdx
  ACL *v37; // rcx
  __int64 v38; // rdx
  __int64 v39; // rax
  _KPROCESS *Process; // rax
  bool v41; // cf
  BOOLEAN v42; // [rsp+A0h] [rbp-B8h]
  BOOLEAN GenerateAudit; // [rsp+A1h] [rbp-B7h] BYREF
  BOOLEAN GenerateAlarm[6]; // [rsp+A2h] [rbp-B6h] BYREF
  int v45; // [rsp+A8h] [rbp-B0h]
  unsigned __int16 v46; // [rsp+ACh] [rbp-ACh] BYREF
  PVOID P; // [rsp+B0h] [rbp-A8h] BYREF
  PVOID Token; // [rsp+B8h] [rbp-A0h] BYREF
  PVOID v49; // [rsp+C0h] [rbp-98h] BYREF
  PVOID v50; // [rsp+C8h] [rbp-90h] BYREF
  PVOID v51; // [rsp+D0h] [rbp-88h] BYREF
  PVOID v52; // [rsp+D8h] [rbp-80h]
  __int64 v53; // [rsp+E0h] [rbp-78h]
  unsigned int v54; // [rsp+E8h] [rbp-70h]
  ULONG v55; // [rsp+ECh] [rbp-6Ch]
  __int64 v56; // [rsp+F0h] [rbp-68h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+F8h] [rbp-60h] BYREF
  size_t Size; // [rsp+118h] [rbp-40h]

  v12 = (__int64 *)HandleId;
  v53 = (__int64)HandleId;
  v50 = 0LL;
  v49 = 0LL;
  v51 = 0LL;
  P = 0LL;
  v52 = 0LL;
  v42 = 0;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  GenerateAudit = 0;
  GenerateAlarm[0] = 0;
  v56 = 0LL;
  v46 = 0;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  GenerateAlarm[1] = PreviousMode;
  SeCaptureSubjectContext(&SubjectContext);
  if ( !SeCheckAuditPrivilege((__int64 *)&SubjectContext, PreviousMode) )
  {
    v33 = -1073741727;
    goto LABEL_49;
  }
  Token = 0LL;
  v14 = ObReferenceObjectByHandle(ClientToken, 8u, (POBJECT_TYPE)SeTokenObjectType, PreviousMode, &Token, 0LL);
  if ( v14 < 0 )
  {
    SeReleaseSubjectContext(&SubjectContext);
    if ( v14 == -1073741816 )
      return v14;
    v34 = v14;
    goto LABEL_60;
  }
  v15 = Token;
  if ( *((_DWORD *)Token + 48) == 2 && *((int *)Token + 49) < 1 )
  {
    ObfDereferenceObject(Token);
    v33 = -1073741659;
LABEL_49:
    SeReleaseSubjectContext(&SubjectContext);
    return v33;
  }
  if ( !SecurityDescriptor )
  {
    ObfDereferenceObject(Token);
    v33 = -1073741703;
    goto LABEL_49;
  }
  v17 = SeCaptureSecurityDescriptor((__int64)SecurityDescriptor, PreviousMode, 1, 0, &P);
  v45 = v17;
  if ( v17 >= 0 && P )
  {
    if ( AccessGranted && Privileges )
    {
      if ( ((unsigned __int8)Privileges & 3) != 0 )
        goto LABEL_19;
      v19 = 0x7FFFFFFF0000LL;
      PrivilegeCount = Privileges->PrivilegeCount;
      v55 = PrivilegeCount;
      if ( PrivilegeCount >= 0x43 )
      {
        v14 = -1073741811;
        v45 = -1073741811;
        v27 = GenerateOnClose;
LABEL_30:
        if ( v14 >= 0 )
        {
          v29 = v49;
          v30 = SepAdtAuditObjectAccessWithContext(
                  0LL,
                  (unsigned __int16 *)v49,
                  AccessGranted,
                  AccessGranted == 0,
                  &SubjectContext,
                  0,
                  &v46);
          v31 = P;
          if ( !v30 )
          {
LABEL_32:
            if ( GenerateAudit || GenerateAlarm[0] || !Privileges || !AccessGranted )
            {
              v32 = v42;
            }
            else
            {
              v29 = v49;
              SepAdtPrivilegeObjectAuditAlarm(
                (const int *)v50,
                (unsigned __int16 *)v49,
                (unsigned __int16 *)v51,
                v56,
                (__int64)Token,
                (__int64)SubjectContext.PrimaryToken,
                (__int64)KeGetCurrentThread()->ApcState.Process[1].Header.WaitListHead.Flink,
                DesiredAccess,
                (unsigned int *)v52,
                AccessGranted);
              v32 = 0;
              v31 = P;
            }
            if ( PreviousMode == 1 )
              ExFreePoolWithTag(v31, 0);
            if ( v50 )
              ExFreePoolWithTag(v50, 0);
            if ( v29 )
              ExFreePoolWithTag(v29, 0);
            if ( v51 )
              ExFreePoolWithTag(v51, 0);
            if ( v52 )
              ExFreePoolWithTag(v52, 0);
            ObfDereferenceObject(Token);
            SeReleaseSubjectContext(&SubjectContext);
            *v27 = v32;
            return 0;
          }
          v35 = *((_WORD *)P + 1);
          if ( (v35 & 0x10) == 0 )
            goto LABEL_67;
          if ( v35 >= 0 )
          {
            v36 = (ACL *)*((_QWORD *)P + 3);
            goto LABEL_68;
          }
          v38 = *((unsigned int *)P + 3);
          if ( (_DWORD)v38 )
            v36 = (ACL *)((char *)P + v38);
          else
LABEL_67:
            v36 = 0LL;
LABEL_68:
          if ( (v35 & 0x10) == 0 )
            goto LABEL_69;
          if ( v35 >= 0 )
          {
            v37 = (ACL *)*((_QWORD *)P + 3);
            goto LABEL_70;
          }
          v39 = *((unsigned int *)P + 3);
          if ( (_DWORD)v39 )
            v37 = (ACL *)((char *)P + v39);
          else
LABEL_69:
            v37 = 0LL;
LABEL_70:
          SeExamineSacl(v37, v36, Token, GrantedAccess | DesiredAccess, AccessGranted, &GenerateAudit, GenerateAlarm);
          if ( GenerateAudit || GenerateAlarm[0] )
          {
            Process = KeGetCurrentThread()->ApcState.Process;
            v41 = v53 != 0;
            v53 = -v53;
            v31 = P;
            v29 = v49;
            v42 = SepAdtOpenObjectAuditAlarm(
                    v46,
                    (int)v50,
                    (unsigned __int64)&v56 & -(__int64)v41,
                    (int)v49,
                    (__int64)v51,
                    P,
                    (__int64)Token,
                    (__int64)SubjectContext.PrimaryToken,
                    DesiredAccess,
                    GrantedAccess,
                    (__int64)v52,
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
        if ( v50 )
          ExFreePoolWithTag(v50, 0);
        if ( v49 )
          ExFreePoolWithTag(v49, 0);
        if ( v51 )
          ExFreePoolWithTag(v51, 0);
        if ( v52 )
          ExFreePoolWithTag(v52, 0);
        LOBYTE(v16) = PreviousMode;
        SeReleaseSecurityDescriptor(P, v16, 0LL, v18);
        ObfDereferenceObject(Token);
        SeReleaseSubjectContext(&SubjectContext);
        if ( v14 != -1073741670 )
          return v14;
        v34 = -1073741670;
LABEL_60:
        SepAuditFailed(v34);
        return v14;
      }
      v21 = 12 * PrivilegeCount + 8;
      v54 = v21;
      if ( 12 * PrivilegeCount != -8 )
      {
        v22 = (char *)Privileges + v21;
        if ( (unsigned __int64)v22 > 0x7FFFFFFF0000LL || v22 < (char *)Privileges )
        {
          v21 = v54;
          PrivilegeCount = v55;
        }
      }
      Size = v21;
      Pool2 = (ULONG *)ExAllocatePool2(0x100uLL);
      v26 = Pool2;
      v52 = Pool2;
      if ( !Pool2 )
      {
        LOBYTE(v24) = PreviousMode;
        SeReleaseSecurityDescriptor(P, v24, 0LL, v25);
        ObfDereferenceObject(Token);
        SeReleaseSubjectContext(&SubjectContext);
        v45 = -1073741670;
        SepAuditFailed(-1073741670);
        return -1073741670;
      }
      memmove(Pool2, Privileges, Size);
      *v26 = PrivilegeCount;
      v12 = (__int64 *)v53;
    }
    else
    {
      v19 = 0x7FFFFFFF0000LL;
    }
    if ( v12 )
    {
      if ( ((unsigned __int8)v12 & 7) != 0 )
LABEL_19:
        ExRaiseDatatypeMisalignment();
      v56 = *v12;
    }
    v27 = GenerateOnClose;
    if ( (unsigned __int64)GenerateOnClose < 0x7FFFFFFF0000LL )
      v19 = (__int64)GenerateOnClose;
    *(_BYTE *)v19 = *(_BYTE *)v19;
    v14 = SepProbeAndCaptureString_U((unsigned __int64)SubsystemName, (__int64)&v50);
    v45 = v14;
    if ( v14 >= 0 )
    {
      v14 = SepProbeAndCaptureString_U((unsigned __int64)ObjectTypeName, (__int64)&v49);
      v45 = v14;
      if ( v14 >= 0 )
      {
        v14 = SepProbeAndCaptureString_U((unsigned __int64)ObjectName, (__int64)&v51);
        v45 = v14;
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
