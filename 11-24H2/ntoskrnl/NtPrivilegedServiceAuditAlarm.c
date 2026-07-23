/*
 * XREFs of NtPrivilegedServiceAuditAlarm @ 0x1409134B0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     ObReferenceObjectByHandle @ 0x140847200 (ObReferenceObjectByHandle.c)
 *     SeReleaseSubjectContext @ 0x140849AA0 (SeReleaseSubjectContext.c)
 *     SeCaptureSubjectContext @ 0x140849BB0 (SeCaptureSubjectContext.c)
 *     SepAuditFailed @ 0x14084D220 (SepAuditFailed.c)
 *     SepAdtPrivilegedServiceAuditAlarm @ 0x14084F820 (SepAdtPrivilegedServiceAuditAlarm.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408A3890 (ExRaiseDatatypeMisalignment.c)
 *     SeCheckAuditPrivilege @ 0x140912648 (SeCheckAuditPrivilege.c)
 *     SepProbeAndCaptureString_U @ 0x140912BA0 (SepProbeAndCaptureString_U.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall NtPrivilegedServiceAuditAlarm(
        PUNICODE_STRING SubsystemName,
        PUNICODE_STRING ServiceName,
        HANDLE ClientToken,
        PPRIVILEGE_SET Privileges,
        BOOLEAN AccessGranted)
{
  char PreviousMode; // di
  NTSTATUS v10; // edi
  PVOID v11; // r14
  _DWORD *v12; // rsi
  ULONG PrivilegeCount; // edi
  unsigned int v14; // ecx
  char *v15; // rdx
  unsigned int v16; // r14d
  _DWORD *Pool2; // rax
  PVOID v18; // rdi
  PVOID v19; // r15
  NTSTATUS v21; // ebx
  signed int v22; // ecx
  NTSTATUS v23; // [rsp+40h] [rbp-68h]
  PVOID Object; // [rsp+48h] [rbp-60h] BYREF
  PVOID v25; // [rsp+50h] [rbp-58h]
  unsigned int v26; // [rsp+58h] [rbp-50h]
  ULONG v27; // [rsp+5Ch] [rbp-4Ch]
  PVOID v28; // [rsp+60h] [rbp-48h] BYREF
  PVOID P; // [rsp+68h] [rbp-40h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+70h] [rbp-38h] BYREF

  v25 = 0LL;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  P = 0LL;
  v28 = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  SeCaptureSubjectContext(&SubjectContext);
  if ( !SeCheckAuditPrivilege((__int64 *)&SubjectContext, PreviousMode) )
  {
    v21 = -1073741727;
LABEL_33:
    SeReleaseSubjectContext(&SubjectContext);
    return v21;
  }
  Object = 0LL;
  v10 = ObReferenceObjectByHandle(ClientToken, 8u, (POBJECT_TYPE)SeTokenObjectType, PreviousMode, &Object, 0LL);
  v23 = v10;
  if ( v10 < 0 )
  {
    SeReleaseSubjectContext(&SubjectContext);
    if ( v10 == -1073741816 )
      return v10;
    v22 = v10;
LABEL_38:
    SepAuditFailed(v22);
    return v10;
  }
  v11 = Object;
  if ( *((_DWORD *)Object + 48) == 2 && *((int *)Object + 49) < 1 )
  {
    ObfDereferenceObject(Object);
    v21 = -1073741659;
    goto LABEL_33;
  }
  if ( SubsystemName
    && (v10 = SepProbeAndCaptureString_U((unsigned __int64)SubsystemName, (__int64)&P), v23 = v10, v10 < 0)
    || ServiceName
    && (v10 = SepProbeAndCaptureString_U((unsigned __int64)ServiceName, (__int64)&v28), v23 = v10, v10 < 0) )
  {
    v12 = v25;
  }
  else
  {
    if ( ((unsigned __int8)Privileges & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    PrivilegeCount = Privileges->PrivilegeCount;
    v27 = PrivilegeCount;
    if ( PrivilegeCount >= 0x43 )
    {
      v10 = -1073741811;
      v12 = v25;
    }
    else
    {
      v14 = 12 * PrivilegeCount + 8;
      v26 = v14;
      if ( 12 * PrivilegeCount != -8 )
      {
        v15 = (char *)Privileges + v14;
        if ( (unsigned __int64)v15 > 0x7FFFFFFF0000LL || v15 < (char *)Privileges )
        {
          v14 = v26;
          PrivilegeCount = v27;
        }
      }
      v16 = v14;
      Pool2 = (_DWORD *)ExAllocatePool2(0x100uLL, v14, 0x72506553u);
      v12 = Pool2;
      v25 = Pool2;
      if ( Pool2 )
      {
        memmove(Pool2, Privileges, v16);
        *v12 = PrivilegeCount;
        v10 = v23;
      }
      else
      {
        v10 = -1073741670;
      }
    }
    v11 = Object;
  }
  if ( v10 < 0 )
  {
    if ( P )
      ExFreePoolWithTag(P, 0);
    if ( v28 )
      ExFreePoolWithTag(v28, 0);
    if ( v12 )
      ExFreePoolWithTag(v12, 0);
    SeReleaseSubjectContext(&SubjectContext);
    ObfDereferenceObject(v11);
    if ( v10 != -1073741670 )
      return v10;
    v22 = -1073741670;
    goto LABEL_38;
  }
  v18 = v28;
  v19 = P;
  SepAdtPrivilegedServiceAuditAlarm(
    &SubjectContext,
    (const int *)P,
    (unsigned __int16 *)v28,
    (__int64)v11,
    (__int64)SubjectContext.PrimaryToken,
    v12,
    AccessGranted);
  if ( v19 )
    ExFreePoolWithTag(v19, 0);
  if ( v18 )
    ExFreePoolWithTag(v18, 0);
  if ( v12 )
    ExFreePoolWithTag(v12, 0);
  ObfDereferenceObject(v11);
  SeReleaseSubjectContext(&SubjectContext);
  return 0;
}
