/*
 * XREFs of NtQueryWnfStateData @ 0x1408E34F0
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     ExReleaseRundownProtection_0 @ 0x140324280 (ExReleaseRundownProtection_0.c)
 *     SeAccessCheck @ 0x1403624F0 (SeAccessCheck.c)
 *     PsGetSessionById @ 0x1403D6DB0 (PsGetSessionById.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x1406AAA20 (RtlCopyVolatileMemory.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14084FA30 (ObpReferenceObjectByHandleWithTag.c)
 *     SeCaptureSubjectContext @ 0x140858670 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x140858810 (SeReleaseSubjectContext.c)
 *     ExpWnfCreateNameInstance @ 0x140898930 (ExpWnfCreateNameInstance.c)
 *     ExpWnfReadStateData @ 0x1408E32C8 (ExpWnfReadStateData.c)
 *     ExpWnfLookupNameInstance @ 0x1408E33E0 (ExpWnfLookupNameInstance.c)
 *     ExpWnfResolveScopeInstance @ 0x1408E4E70 (ExpWnfResolveScopeInstance.c)
 *     ExpWnfCheckCrossScopeAccess @ 0x1408E6080 (ExpWnfCheckCrossScopeAccess.c)
 *     SeCaptureSid @ 0x140916DC8 (SeCaptureSid.c)
 *     ExpWnfLookupPermanentName @ 0x14091BC30 (ExpWnfLookupPermanentName.c)
 *     ExRaiseAccessViolation @ 0x140936B90 (ExRaiseAccessViolation.c)
 *     ExpWnfValidatePubSubPreconditions @ 0x1409E2CC0 (ExpWnfValidatePubSubPreconditions.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

NTSTATUS __cdecl NtQueryWnfStateData(
        PCWNF_STATE_NAME StateName,
        PCWNF_TYPE_ID TypeId,
        const void *ExplicitScope,
        PWNF_CHANGE_STAMP ChangeStamp,
        PVOID Buffer,
        PULONG BufferSize)
{
  PCWNF_TYPE_ID v6; // r10
  struct _KTHREAD *CurrentThread; // rax
  char PreviousMode; // r9
  int v9; // r14d
  __int64 v10; // r12
  WNF_STATE_NAME v11; // rbx
  unsigned __int64 v12; // r11
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // r8
  int v15; // eax
  int v16; // eax
  NTSTATUS StateData; // esi
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rax
  unsigned int v21; // edx
  __int64 v22; // rcx
  unsigned __int64 v23; // rcx
  unsigned __int64 v24; // rdx
  unsigned __int64 v25; // rdx
  const void *v26; // r10
  PVOID *v27; // rax
  char v28; // r15
  unsigned int v29; // ecx
  __int64 v30; // rdx
  NTSTATUS v31; // r12d
  struct _KTHREAD *v32; // r8
  PEPROCESS Process; // rcx
  unsigned __int64 v34; // rbx
  int v35; // eax
  _QWORD *Count; // rdx
  PULONG v37; // rax
  int v38; // r14d
  int v39; // r14d
  void *Ptr; // rbx
  PVOID v42; // rcx
  ULONG v43; // edx
  __int64 v44; // rcx
  int PreviouslyGrantedAccess; // [rsp+20h] [rbp-168h]
  char v46; // [rsp+50h] [rbp-138h]
  int v47; // [rsp+5Ch] [rbp-12Ch]
  PEPROCESS Srca; // [rsp+60h] [rbp-128h]
  unsigned int v50; // [rsp+68h] [rbp-120h]
  struct _EX_RUNDOWN_REF *v51; // [rsp+70h] [rbp-118h] BYREF
  NTSTATUS AccessStatus; // [rsp+78h] [rbp-110h] BYREF
  PSID Sid; // [rsp+80h] [rbp-108h]
  PVOID P; // [rsp+88h] [rbp-100h] BYREF
  PVOID Object[2]; // [rsp+90h] [rbp-F8h] BYREF
  unsigned __int64 v56; // [rsp+A0h] [rbp-E8h]
  PCWNF_TYPE_ID v57; // [rsp+A8h] [rbp-E0h]
  PULONG v58; // [rsp+B0h] [rbp-D8h]
  int v59[2]; // [rsp+B8h] [rbp-D0h] BYREF
  int v60; // [rsp+C0h] [rbp-C8h]
  int v61; // [rsp+C4h] [rbp-C4h]
  int v62; // [rsp+C8h] [rbp-C0h]
  ACCESS_MASK GrantedAccess; // [rsp+CCh] [rbp-BCh] BYREF
  WNF_STATE_NAME v64; // [rsp+D0h] [rbp-B8h] BYREF
  PWNF_CHANGE_STAMP v65; // [rsp+D8h] [rbp-B0h]
  unsigned __int64 v66; // [rsp+E0h] [rbp-A8h]
  char *v67; // [rsp+E8h] [rbp-A0h]
  unsigned __int64 v68; // [rsp+F0h] [rbp-98h]
  unsigned __int64 v69; // [rsp+F8h] [rbp-90h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+110h] [rbp-78h] BYREF
  __int128 v71; // [rsp+130h] [rbp-58h] BYREF

  v65 = ChangeStamp;
  v6 = TypeId;
  v66 = (unsigned __int64)TypeId;
  v58 = BufferSize;
  v67 = (char *)Buffer;
  v71 = 0LL;
  Sid = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v46 = PreviousMode;
  P = 0LL;
  *(_QWORD *)v59 = 0LL;
  v51 = 0LL;
  v9 = 0;
  *(_OWORD *)Object = 0LL;
  v57 = TypeId;
  v64 = 0LL;
  v10 = 0x7FFFFFFF0000LL;
  if ( PreviousMode )
  {
    v30 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)StateName < 0x7FFFFFFF0000LL )
      v30 = (__int64)StateName;
    RtlCopyVolatileMemory(&v64, (const void *)v30, 8uLL);
    v11 = v64;
    PreviousMode = v46;
    v6 = (PCWNF_TYPE_ID)v66;
  }
  else
  {
    v11 = *StateName;
    v64 = *StateName;
  }
  v56 = *(_QWORD *)&v11 ^ 0x41C64E6DA3BC0074LL;
  if ( ((LOBYTE(v11.Data[0]) ^ 0x74) & 0xF) != 1 )
  {
    StateData = -1073741811;
LABEL_61:
    v28 = v46;
    goto LABEL_79;
  }
  v12 = v56 >> 6;
  v68 = v56 >> 6;
  v13 = (v56 >> 6) & 0xF;
  v14 = v56 >> 4;
  v66 = v56 >> 4;
  v69 = v56 >> 10;
  if ( ((v56 >> 4) & 3) == 0 || ((v56 >> 4) & 3) == 1 || ((v56 >> 4) & 3) == 2 || (v15 = 0, ((v56 >> 4) & 3) == 3) )
    v15 = 1;
  v60 = v15;
  if ( !v15 )
    goto LABEL_47;
  if ( (unsigned int)v13 <= 4 || (v16 = 0, (_DWORD)v13 == 5) )
    v16 = 1;
  v61 = v16;
  if ( !v16 || ((v56 >> 10) & 1) != 0 && (((v56 >> 6) & 9) != 0 || (_DWORD)v13 == 6) )
LABEL_47:
    StateData = -1073741811;
  else
    StateData = 0;
  if ( StateData < 0 )
    goto LABEL_61;
  if ( PreviousMode )
  {
    if ( v6 )
    {
      v18 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)v6 < 0x7FFFFFFF0000LL )
        v18 = (__int64)v6;
      RtlCopyVolatileMemory(&v71, (const void *)v18, 0x10uLL);
      v57 = (PCWNF_TYPE_ID)&v71;
      PreviousMode = v46;
      LOBYTE(v14) = v66;
      LOBYTE(v12) = v68;
    }
    v19 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)v65 < 0x7FFFFFFF0000LL )
      v19 = (__int64)v65;
    *(_DWORD *)v19 = *(_DWORD *)v19;
    v20 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)v58 < 0x7FFFFFFF0000LL )
      v20 = (__int64)v58;
    v21 = *(_DWORD *)v20;
    v50 = *(_DWORD *)v20;
    v22 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)v58 < 0x7FFFFFFF0000LL )
      v22 = (__int64)v58;
    *(_DWORD *)v22 = *(_DWORD *)v22;
    if ( v21 )
    {
      v23 = (unsigned __int64)v67;
      v24 = (unsigned __int64)&v67[v21 - 1];
      if ( v24 >= 0x7FFFFFFF0000LL || (unsigned __int64)v67 > v24 )
        ExRaiseAccessViolation();
      v25 = (v24 & 0xFFFFFFFFFFFFF000uLL) + 4096;
      do
      {
        *(_BYTE *)v23 = *(_BYTE *)v23;
        v23 = (v23 & 0xFFFFFFFFFFFFF000uLL) + 4096;
      }
      while ( v23 != v25 );
    }
  }
  else
  {
    v50 = *v58;
  }
  v62 = v14 & 3;
  v9 = v12 & 0xF;
  v47 = v9;
  v26 = ExplicitScope;
  if ( !ExplicitScope )
  {
    Sid = 0LL;
    goto LABEL_64;
  }
  if ( (v12 & 0xF) == 0 )
  {
LABEL_52:
    StateData = -1073741811;
    goto LABEL_43;
  }
  if ( v9 == 1 )
  {
    if ( PreviousMode )
    {
      if ( (unsigned __int64)ExplicitScope < 0x7FFFFFFF0000LL )
        v10 = (__int64)ExplicitScope;
      v29 = *(_DWORD *)v10;
      LODWORD(Object[1]) = *(_DWORD *)v10;
      v9 = v12 & 0xF;
    }
    else
    {
      v29 = *(_DWORD *)ExplicitScope;
      LODWORD(Object[1]) = *(_DWORD *)ExplicitScope;
    }
    Object[0] = (PVOID)PsGetSessionById(v29);
    v26 = ExplicitScope;
    if ( Object[0] )
    {
      Sid = &Object[1];
      StateData = 0;
      goto LABEL_43;
    }
    goto LABEL_52;
  }
  if ( v9 != 2 )
  {
    if ( v9 == 3 )
    {
      StateData = ObpReferenceObjectByHandleWithTag(
                    (ULONG_PTR)ExplicitScope,
                    0,
                    (__int64)PsProcessType,
                    PreviousMode,
                    0x20666E57u,
                    Object,
                    0LL,
                    0LL);
      v26 = ExplicitScope;
      if ( StateData < 0 )
        goto LABEL_43;
      v27 = Object;
      goto LABEL_42;
    }
    goto LABEL_52;
  }
  StateData = SeCaptureSid((void *)ExplicitScope, PreviouslyGrantedAccess, 0, (__int64)Object);
  v26 = ExplicitScope;
  if ( StateData >= 0 )
  {
    v27 = (PVOID *)Object[0];
LABEL_42:
    Sid = v27;
  }
LABEL_43:
  if ( StateData < 0 )
  {
    v28 = v46;
    goto LABEL_79;
  }
LABEL_64:
  if ( v46 )
  {
    v31 = 0;
    if ( v26 )
    {
      StateData = ExpWnfCheckCrossScopeAccess(v56);
      if ( StateData < 0 )
      {
LABEL_93:
        v28 = v46;
        goto LABEL_79;
      }
    }
  }
  else
  {
    v31 = 1;
  }
  if ( v46 )
  {
    v32 = KeGetCurrentThread();
    Process = v32->ApcState.Process;
    v9 = v47;
  }
  else
  {
    LODWORD(v32) = 0;
    Process = PsInitialSystemProcess;
  }
  Srca = Process;
  StateData = ExpWnfResolveScopeInstance((int)v59, (int)Process, (int)v32, v9, Sid);
  if ( StateData < 0 )
    goto LABEL_93;
  v34 = v56;
  v35 = ExpWnfLookupNameInstance(*(__int64 *)v59, v56, &v51);
  StateData = v35;
  if ( v35 != -1073741772 || v62 == 3 )
  {
    if ( v35 < 0 )
      goto LABEL_89;
    if ( v31 )
      goto LABEL_118;
    Ptr = v51[9].Ptr;
    memset(&SubjectContext, 0, sizeof(SubjectContext));
    GrantedAccess = 0;
    AccessStatus = 0;
    SeCaptureSubjectContext(&SubjectContext);
    SeAccessCheck(
      Ptr,
      &SubjectContext,
      0,
      1u,
      0,
      0LL,
      (PGENERIC_MAPPING)&ExpWnfNotificationMapping,
      1,
      &GrantedAccess,
      &AccessStatus);
    SeReleaseSubjectContext(&SubjectContext);
    StateData = AccessStatus;
    if ( AccessStatus >= 0 )
    {
LABEL_118:
      Count = (_QWORD *)v51[8].Count;
      if ( !Count )
        goto LABEL_73;
      if ( !v57 )
      {
        StateData = -1073741811;
        goto LABEL_74;
      }
      v44 = *Count - *(_QWORD *)&v57->TypeId.Data1;
      if ( *Count == *(_QWORD *)&v57->TypeId.Data1 )
        v44 = Count[1] - *(_QWORD *)v57->TypeId.Data4;
      StateData = -1073741811;
      if ( !v44 )
LABEL_73:
        StateData = 0;
    }
LABEL_74:
    if ( StateData >= 0 )
      goto LABEL_75;
LABEL_89:
    v28 = v46;
    goto LABEL_79;
  }
  StateData = ExpWnfLookupPermanentName(v34, &P);
  if ( StateData < 0 )
    goto LABEL_89;
  StateData = ExpWnfValidatePubSubPreconditions(1u, v31);
  if ( StateData < 0 )
    goto LABEL_89;
  if ( v9 == 5 || (v69 & 1) != 0 )
  {
    StateData = ExpWnfCreateNameInstance(*(__int64 *)v59, v56, (__int64)P, (unsigned __int64)Srca, &v51);
    ExFreePoolWithTag(P, 0x20666E57u);
    P = 0LL;
    goto LABEL_74;
  }
LABEL_75:
  v37 = v58;
  if ( v51 )
  {
    StateData = ExpWnfReadStateData((__int64)v51, v65, v67, v50, v58);
  }
  else
  {
    *v65 = 0;
    *v37 = 0;
    StateData = 0;
  }
  v28 = v46;
LABEL_79:
  if ( v51 )
    ExReleaseRundownProtection_0(v51 + 1);
  if ( *(_QWORD *)v59 )
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(*(_QWORD *)v59 + 8LL));
  if ( P )
    ExFreePoolWithTag(P, 0x20666E57u);
  KeLeaveCriticalRegion();
  v38 = v9 - 1;
  if ( !v38 )
  {
    v42 = Object[0];
    if ( !Object[0] )
      return StateData;
    v43 = 2035381072;
    goto LABEL_98;
  }
  v39 = v38 - 1;
  if ( v39 )
  {
    if ( v39 == 1 )
    {
      v42 = Object[0];
      if ( Object[0] )
      {
        v43 = 543583831;
LABEL_98:
        ObfDereferenceObjectWithTag(v42, v43);
      }
    }
  }
  else if ( Object[0] && v28 == 1 )
  {
    ExFreePoolWithTag(Object[0], 0);
  }
  return StateData;
}
