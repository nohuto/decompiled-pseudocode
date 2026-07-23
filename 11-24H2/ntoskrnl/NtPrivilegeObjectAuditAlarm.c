/*
 * XREFs of NtPrivilegeObjectAuditAlarm @ 0x140913820
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
 *     ExRaiseDatatypeMisalignment @ 0x1408A3890 (ExRaiseDatatypeMisalignment.c)
 *     SeCheckAuditPrivilege @ 0x140912648 (SeCheckAuditPrivilege.c)
 *     SepProbeAndCaptureString_U @ 0x140912BA0 (SepProbeAndCaptureString_U.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall NtPrivilegeObjectAuditAlarm(
        PUNICODE_STRING SubsystemName,
        PVOID HandleId,
        HANDLE ClientToken,
        ACCESS_MASK DesiredAccess,
        PPRIVILEGE_SET Privileges,
        BOOLEAN AccessGranted)
{
  char PreviousMode; // bl
  NTSTATUS v11; // ebx
  PVOID v13; // rsi
  ULONG PrivilegeCount; // ebx
  unsigned int v15; // ecx
  char *v16; // rdx
  unsigned int v17; // esi
  ULONG *Pool2; // rax
  ULONG *v19; // rdi
  PVOID v20; // rbx
  signed int v21; // ecx
  NTSTATUS v22; // [rsp+50h] [rbp-78h]
  PVOID Object; // [rsp+60h] [rbp-68h] BYREF
  ULONG *v24; // [rsp+68h] [rbp-60h]
  PVOID P; // [rsp+70h] [rbp-58h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+78h] [rbp-50h] BYREF

  P = 0LL;
  v24 = 0LL;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  SeCaptureSubjectContext(&SubjectContext);
  if ( !SeCheckAuditPrivilege((__int64 *)&SubjectContext, PreviousMode) )
  {
    v11 = -1073741727;
LABEL_27:
    SeReleaseSubjectContext(&SubjectContext);
    return v11;
  }
  Object = 0LL;
  v11 = ObReferenceObjectByHandle(ClientToken, 8u, (POBJECT_TYPE)SeTokenObjectType, PreviousMode, &Object, 0LL);
  if ( v11 < 0 )
  {
    SeReleaseSubjectContext(&SubjectContext);
    if ( v11 == -1073741816 )
      return v11;
    v21 = v11;
LABEL_33:
    SepAuditFailed(v21);
    return v11;
  }
  v13 = Object;
  if ( *((_DWORD *)Object + 48) == 2 && *((int *)Object + 49) < 1 )
  {
    ObfDereferenceObject(Object);
    v11 = -1073741659;
    goto LABEL_27;
  }
  v11 = SepProbeAndCaptureString_U((unsigned __int64)SubsystemName, (__int64)&P);
  v22 = v11;
  if ( v11 < 0 )
    goto LABEL_17;
  if ( ((unsigned __int8)Privileges & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  PrivilegeCount = Privileges->PrivilegeCount;
  if ( Privileges->PrivilegeCount >= 0x43 )
  {
    v11 = -1073741811;
    v13 = Object;
LABEL_17:
    v19 = v24;
    goto LABEL_20;
  }
  v15 = 12 * PrivilegeCount + 8;
  if ( 12 * PrivilegeCount != -8 )
  {
    v16 = (char *)Privileges + v15;
    if ( (unsigned __int64)v16 > 0x7FFFFFFF0000LL || v16 < (char *)Privileges )
    {
      v15 = 12 * PrivilegeCount + 8;
      PrivilegeCount = Privileges->PrivilegeCount;
    }
  }
  v17 = v15;
  Pool2 = (ULONG *)ExAllocatePool2(0x100uLL, v15, 0x72506553u);
  v19 = Pool2;
  v24 = Pool2;
  if ( Pool2 )
  {
    memmove(Pool2, Privileges, v17);
    *v19 = PrivilegeCount;
    v11 = v22;
  }
  else
  {
    v11 = -1073741670;
  }
  v13 = Object;
LABEL_20:
  if ( v11 < 0 )
  {
    if ( v19 )
      ExFreePoolWithTag(v19, 0);
    if ( P )
      ExFreePoolWithTag(P, 0);
    SeReleaseSubjectContext(&SubjectContext);
    ObfDereferenceObject(v13);
    if ( v11 != -1073741670 )
      return v11;
    v21 = -1073741670;
    goto LABEL_33;
  }
  v20 = P;
  SepAdtPrivilegeObjectAuditAlarm(
    (const int *)P,
    0LL,
    0LL,
    (__int64)HandleId,
    (__int64)v13,
    (__int64)SubjectContext.PrimaryToken,
    (__int64)SubjectContext.ProcessAuditId,
    DesiredAccess,
    v19,
    AccessGranted);
  if ( v19 )
    ExFreePoolWithTag(v19, 0);
  if ( v20 )
    ExFreePoolWithTag(v20, 0);
  SeReleaseSubjectContext(&SubjectContext);
  ObfDereferenceObject(v13);
  return 0;
}
