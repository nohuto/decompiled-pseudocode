/*
 * XREFs of NtDeleteWnfStateName @ 0x1408E24D0
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     ExReleaseRundownProtection_0 @ 0x140324280 (ExReleaseRundownProtection_0.c)
 *     SeAccessCheck @ 0x1403624F0 (SeAccessCheck.c)
 *     ExpWnfDeletePermanentStateData @ 0x1407B6A2C (ExpWnfDeletePermanentStateData.c)
 *     SeCaptureSubjectContext @ 0x140858670 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x140858810 (SeReleaseSubjectContext.c)
 *     ExpWnfDeleteNameInstance @ 0x1408E204C (ExpWnfDeleteNameInstance.c)
 *     ExpCaptureWnfStateName @ 0x1408E29E0 (ExpCaptureWnfStateName.c)
 *     ExpWnfLookupNameInstance @ 0x1408E33E0 (ExpWnfLookupNameInstance.c)
 *     ExpWnfResolveScopeInstance @ 0x1408E4E70 (ExpWnfResolveScopeInstance.c)
 *     ExpWnfNotifyNameSubscribers @ 0x1408E5D40 (ExpWnfNotifyNameSubscribers.c)
 *     ExpWnfLookupPermanentName @ 0x14091BC30 (ExpWnfLookupPermanentName.c)
 *     ExpWnfEnumerateScopeInstances @ 0x140A64E60 (ExpWnfEnumerateScopeInstances.c)
 *     ExpWnfDeletePermanentName @ 0x140A7EE84 (ExpWnfDeletePermanentName.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

NTSTATUS __cdecl NtDeleteWnfStateName(PCWNF_STATE_NAME StateName)
{
  struct _KTHREAD *CurrentThread; // rax
  struct _EX_RUNDOWN_REF *v2; // r14
  int v3; // edi
  unsigned __int64 v4; // rbx
  unsigned __int64 v5; // r13
  __int64 v6; // rcx
  __int64 v7; // r15
  char v8; // al
  _BOOL8 v9; // r12
  _KPROCESS *Process; // rax
  int v11; // r13d
  void *Ptr; // rdi
  void *v14; // rdi
  struct _EX_RUNDOWN_REF *v15; // [rsp+58h] [rbp-A0h] BYREF
  ACCESS_MASK GrantedAccess; // [rsp+60h] [rbp-98h] BYREF
  _KPROCESS *v17; // [rsp+68h] [rbp-90h]
  int v18[2]; // [rsp+70h] [rbp-88h] BYREF
  int v19; // [rsp+78h] [rbp-80h]
  unsigned __int64 v20; // [rsp+80h] [rbp-78h]
  PVOID P; // [rsp+88h] [rbp-70h] BYREF
  __int64 v22; // [rsp+90h] [rbp-68h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+98h] [rbp-60h] BYREF
  char PreviousMode; // [rsp+108h] [rbp+10h]
  int v25; // [rsp+110h] [rbp+18h]
  NTSTATUS AccessStatus; // [rsp+118h] [rbp+20h] BYREF

  v20 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v25 = 0;
  P = 0LL;
  v2 = 0LL;
  *(_QWORD *)v18 = 0LL;
  v15 = 0LL;
  v3 = ExpCaptureWnfStateName((void *)StateName);
  v19 = v3;
  if ( v3 >= 0 )
  {
    v4 = v20;
    v5 = v20 >> 4;
    v6 = (v20 >> 6) & 0xF;
    v22 = v6;
    v7 = (v20 >> 4) & 3;
    if ( ((v20 >> 4) & 3) == 0 )
    {
      v3 = -1073741811;
      goto LABEL_21;
    }
    v8 = PreviousMode;
    v9 = PreviousMode == 0;
    if ( (_DWORD)v7 != 3 )
    {
      if ( PreviousMode )
      {
        v3 = ExpWnfLookupPermanentName(v20, &P);
        if ( v3 < 0 )
          goto LABEL_21;
        v14 = (void *)*((_QWORD *)P + 2);
        memset(&SubjectContext, 0, sizeof(SubjectContext));
        GrantedAccess = 0;
        AccessStatus = 0;
        SeCaptureSubjectContext(&SubjectContext);
        SeAccessCheck(
          v14,
          &SubjectContext,
          0,
          0x10000u,
          0,
          0LL,
          (PGENERIC_MAPPING)&ExpWnfNotificationMapping,
          1,
          &GrantedAccess,
          &AccessStatus);
        SeReleaseSubjectContext(&SubjectContext);
        v3 = AccessStatus;
        if ( AccessStatus < 0 )
          goto LABEL_21;
        LODWORD(v9) = 1;
      }
      v3 = ExpWnfDeletePermanentName(v4);
      if ( v3 < 0 )
        goto LABEL_21;
      v25 = 1;
      v6 = v22;
      v8 = PreviousMode;
    }
    if ( v8 )
    {
      Process = KeGetCurrentThread()->ApcState.Process;
      v4 = v20;
    }
    else
    {
      Process = PsInitialSystemProcess;
    }
    v17 = Process;
    if ( (_DWORD)v7 == 3 )
    {
      v3 = ExpWnfResolveScopeInstance((int)v18, (int)Process, 0, v6, 0LL);
      v2 = *(struct _EX_RUNDOWN_REF **)v18;
      if ( v3 < 0 )
        goto LABEL_21;
    }
    else
    {
      v3 = 0;
      v2 = (struct _EX_RUNDOWN_REF *)ExpWnfEnumerateScopeInstances(v6, 0LL);
    }
    v11 = v5 & 3;
    while ( v2 )
    {
      v3 = ExpWnfLookupNameInstance(v2, v4, &v15);
      if ( v3 >= 0 )
      {
        if ( !v9 )
        {
          Ptr = v15[9].Ptr;
          memset(&SubjectContext, 0, sizeof(SubjectContext));
          GrantedAccess = 0;
          AccessStatus = 0;
          SeCaptureSubjectContext(&SubjectContext);
          SeAccessCheck(
            Ptr,
            &SubjectContext,
            0,
            0x10000u,
            0,
            0LL,
            (PGENERIC_MAPPING)&ExpWnfNotificationMapping,
            1,
            &GrantedAccess,
            &AccessStatus);
          SeReleaseSubjectContext(&SubjectContext);
          v3 = AccessStatus;
          if ( AccessStatus < 0 )
            goto LABEL_21;
          LODWORD(v9) = 1;
        }
        if ( v11 == 3LL && (_KPROCESS *)v15[19].Count != v17 )
        {
          v3 = -1073741790;
          goto LABEL_21;
        }
        ExpWnfNotifyNameSubscribers(v15, 16LL, 1LL);
        if ( (unsigned int)ExpWnfDeleteNameInstance((__int64)v2, v15, 1) )
          v15 = 0LL;
        else
          v3 = -1073741772;
      }
      if ( v11 == 3LL )
        break;
      if ( v15 )
      {
        ExReleaseRundownProtection_0(v15 + 1);
        v15 = 0LL;
      }
      v2 = (struct _EX_RUNDOWN_REF *)ExpWnfEnumerateScopeInstances((unsigned int)v22, v2);
    }
    if ( (v4 & 0x400) != 0 )
      ExpWnfDeletePermanentStateData(0LL, v4);
  }
LABEL_21:
  if ( v25 )
    v3 = 0;
  if ( v15 )
    ExReleaseRundownProtection_0(v15 + 1);
  if ( v2 )
    ExReleaseRundownProtection_0(v2 + 1);
  if ( P )
    ExFreePoolWithTag(P, 0x20666E57u);
  KeLeaveCriticalRegion();
  return v3;
}
