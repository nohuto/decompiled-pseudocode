/*
 * XREFs of NtCreateWnfStateName @ 0x1408340B0
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14020DE50 (ExReleaseRundownProtection_0.c)
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x1406B6C90 (RtlCopyVolatileMemory.c)
 *     ExpWnfRegisterPermanentName @ 0x140833F7C (ExpWnfRegisterPermanentName.c)
 *     ExpWnfSpecializeSecurityDescriptor @ 0x14083448C (ExpWnfSpecializeSecurityDescriptor.c)
 *     ExpWnfGenerateStateName @ 0x140834538 (ExpWnfGenerateStateName.c)
 *     ExpWnfCreateNameInstance @ 0x140835DA0 (ExpWnfCreateNameInstance.c)
 *     SeSinglePrivilegeCheck @ 0x140850150 (SeSinglePrivilegeCheck.c)
 *     ExpWnfResolveScopeInstance @ 0x1409032C0 (ExpWnfResolveScopeInstance.c)
 *     SeCaptureSecurityDescriptor @ 0x1409108D0 (SeCaptureSecurityDescriptor.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

NTSTATUS __cdecl NtCreateWnfStateName(
        PWNF_STATE_NAME StateName,
        WNF_STATE_NAME_LIFETIME NameLifetime,
        WNF_DATA_SCOPE DataScope,
        BOOLEAN PersistData,
        PCWNF_TYPE_ID TypeId,
        ULONG MaximumStateSize,
        PSECURITY_DESCRIPTOR SecurityDescriptor)
{
  PWNF_STATE_NAME v10; // r9
  struct _KTHREAD *CurrentThread; // rax
  KPROCESSOR_MODE PreviousMode; // r15
  NTSTATUS NameInstance; // edi
  __int64 v14; // r9
  BOOL v15; // eax
  int v16; // eax
  unsigned __int64 v17; // rbx
  _KPROCESS *Process; // rsi
  __int64 v19; // rdx
  __int64 v20; // rcx
  PVOID P; // [rsp+38h] [rbp-B0h] BYREF
  unsigned __int64 v23; // [rsp+40h] [rbp-A8h] BYREF
  int v24[2]; // [rsp+48h] [rbp-A0h] BYREF
  PCWNF_TYPE_ID v25; // [rsp+50h] [rbp-98h]
  _QWORD v26[2]; // [rsp+58h] [rbp-90h] BYREF
  _DWORD v27[2]; // [rsp+68h] [rbp-80h] BYREF
  PCWNF_TYPE_ID v28; // [rsp+70h] [rbp-78h]
  PVOID v29; // [rsp+78h] [rbp-70h]
  PWNF_STATE_NAME v30; // [rsp+88h] [rbp-60h]
  __int128 v31; // [rsp+98h] [rbp-50h] BYREF

  v10 = StateName;
  v30 = StateName;
  v26[1] = SecurityDescriptor;
  v31 = 0LL;
  v23 = 0LL;
  v26[0] = 0LL;
  v27[1] = 0;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  *(_QWORD *)v24 = 0LL;
  P = 0LL;
  v25 = TypeId;
  if ( !PreviousMode )
  {
    LOBYTE(v10) = 1;
    NameInstance = SeCaptureSecurityDescriptor((_DWORD)SecurityDescriptor, 0, 1, (_DWORD)v10, (__int64)&P);
    if ( NameInstance < 0 )
      goto LABEL_36;
LABEL_3:
    ExpWnfSpecializeSecurityDescriptor(P);
    v15 = (unsigned int)NameLifetime < WnfPersistentStateName || (unsigned int)(NameLifetime - 2) <= 1;
    if ( !v15
      || NameLifetime == WnfWellKnownStateName
      || ((unsigned int)DataScope >= WnfDataScopeMachine && (unsigned int)(DataScope - 4) > 1 ? (v16 = 0) : (v16 = 1),
          !v16
       || PersistData && ((DataScope & 0xFFFFFFFB) != 0 || NameLifetime != WnfPermanentStateName)
       || MaximumStateSize > 0x1000
       || DataScope == WnfDataScopeProcess && NameLifetime == WnfTemporaryStateName
       || DataScope == WnfDataScopePhysicalMachine) )
    {
      NameInstance = -1073741811;
    }
    else if ( NameLifetime == WnfTemporaryStateName || SeSinglePrivilegeCheck(SeCreatePermanentPrivilege, PreviousMode) )
    {
      LOBYTE(v14) = PersistData;
      NameInstance = ExpWnfGenerateStateName(&v23, (unsigned int)NameLifetime, (unsigned int)DataScope, v14);
      if ( NameInstance >= 0 )
      {
        v17 = v23;
        *v30 = (_WNF_STATE_NAME)(v23 ^ 0x41C64E6DA3BC0074LL);
        v27[0] = MaximumStateSize;
        v28 = v25;
        v29 = P;
        if ( NameLifetime == WnfTemporaryStateName )
        {
          if ( PreviousMode )
          {
            Process = KeGetCurrentThread()->ApcState.Process;
            LODWORD(v17) = v23;
          }
          else
          {
            LODWORD(Process) = (_DWORD)PsInitialSystemProcess;
          }
          NameInstance = ExpWnfResolveScopeInstance((int)v24, (int)Process, 0, DataScope, 0LL);
          if ( NameInstance >= 0 )
          {
            NameInstance = ExpWnfCreateNameInstance(v24[0], v17, (unsigned int)v27, (_DWORD)Process, (__int64)v26);
            if ( NameInstance >= 0 )
              ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(v26[0] + 8LL));
          }
        }
        else
        {
          NameInstance = ExpWnfRegisterPermanentName(v17, (__int64)v27);
        }
      }
    }
    else
    {
      NameInstance = -1073741727;
    }
    goto LABEL_36;
  }
  v19 = 0x7FFFFFFF0000LL;
  v20 = 0x7FFFFFFF0000LL;
  if ( (unsigned __int64)v10 < 0x7FFFFFFF0000LL )
    v20 = (__int64)v10;
  *(_BYTE *)v20 = *(_BYTE *)v20;
  *(_BYTE *)(v20 + 7) = *(_BYTE *)(v20 + 7);
  if ( TypeId )
  {
    if ( (unsigned __int64)TypeId < 0x7FFFFFFF0000LL )
      v19 = (__int64)TypeId;
    RtlCopyVolatileMemory(&v31, (const void *)v19, 0x10uLL);
    v25 = (PCWNF_TYPE_ID)&v31;
  }
  if ( !SecurityDescriptor )
  {
    NameInstance = -1073741819;
    goto LABEL_36;
  }
  LOBYTE(v10) = 1;
  LOBYTE(v19) = PreviousMode;
  NameInstance = SeCaptureSecurityDescriptor((_DWORD)SecurityDescriptor, v19, 1, (_DWORD)v10, (__int64)&P);
  if ( NameInstance >= 0 )
    goto LABEL_3;
LABEL_36:
  if ( *(_QWORD *)v24 )
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(*(_QWORD *)v24 + 8LL));
  if ( P && (unsigned __int8)PreviousMode <= 1u && P != SecurityDescriptor )
    ExFreePoolWithTag(P, 0);
  KeLeaveCriticalRegion();
  return NameInstance;
}
