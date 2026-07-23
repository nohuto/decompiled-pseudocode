/*
 * XREFs of NtSetInformationKey @ 0x140960DB0
 * Callers:
 *     <none>
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140289BB0 (KeLeaveCriticalRegionThread.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     EtwGetKernelTraceTimestamp @ 0x1403AEC60 (EtwGetKernelTraceTimestamp.c)
 *     CmpInitializeThreadInfo @ 0x1403F0160 (CmpInitializeThreadInfo.c)
 *     CmpCleanupThreadInfo @ 0x140414BA0 (CmpCleanupThreadInfo.c)
 *     CmpIsRegistryLockAcquired @ 0x140414BC0 (CmpIsRegistryLockAcquired.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     CmpCallCallBacksEx @ 0x140843FD0 (CmpCallCallBacksEx.c)
 *     ObReferenceObjectByHandle @ 0x140847200 (ObReferenceObjectByHandle.c)
 *     SeReleaseSubjectContext @ 0x140849AA0 (SeReleaseSubjectContext.c)
 *     SeCaptureSubjectContext @ 0x140849BB0 (SeCaptureSubjectContext.c)
 *     EtwpTraceRegistry @ 0x140875270 (EtwpTraceRegistry.c)
 *     CmpIsSystemEntity @ 0x1408E4D80 (CmpIsSystemEntity.c)
 *     CmKeyBodyReplicateToVirtual @ 0x140961528 (CmKeyBodyReplicateToVirtual.c)
 *     CmKeyBodyNeedsVirtualImage @ 0x14096294C (CmKeyBodyNeedsVirtualImage.c)
 *     CmSetLastWriteTimeKey @ 0x140962C40 (CmSetLastWriteTimeKey.c)
 *     CmSetKeyFlags @ 0x140963680 (CmSetKeyFlags.c)
 *     CmpAcquireShutdownRundown @ 0x140BBB400 (CmpAcquireShutdownRundown.c)
 *     CmpReleaseShutdownRundown @ 0x140BBB880 (CmpReleaseShutdownRundown.c)
 */

NTSTATUS __cdecl NtSetInformationKey(
        HANDLE KeyHandle,
        KEY_SET_INFORMATION_CLASS KeySetInformationClass,
        PVOID KeySetInformation,
        ULONG KeySetInformationLength)
{
  char v6; // r13
  __int64 *v7; // rdi
  char v8; // r14
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rcx
  char v14; // r15
  KPROCESSOR_MODE PreviousMode; // di
  ACCESS_MASK v16; // edx
  int v17; // ebx
  PVOID v18; // rax
  char v19; // dl
  struct _KTHREAD *CurrentThread; // rax
  char v21; // r12
  int v23; // eax
  __int64 v24; // rcx
  KPROCESSOR_MODE v25; // r9
  KPROCESSOR_MODE v26; // r9
  char v27; // [rsp+40h] [rbp-158h]
  char v28; // [rsp+41h] [rbp-157h]
  unsigned __int8 v29; // [rsp+42h] [rbp-156h]
  PVOID Object; // [rsp+48h] [rbp-150h] BYREF
  char v31; // [rsp+50h] [rbp-148h]
  HANDLE Handle; // [rsp+58h] [rbp-140h] BYREF
  __int64 v33; // [rsp+60h] [rbp-138h] BYREF
  __int64 v34; // [rsp+68h] [rbp-130h]
  ULONG v35; // [rsp+70h] [rbp-128h]
  int v36; // [rsp+74h] [rbp-124h] BYREF
  _QWORD v37[3]; // [rsp+78h] [rbp-120h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+90h] [rbp-108h] BYREF
  __int128 v39; // [rsp+B0h] [rbp-E8h] BYREF
  __int128 v40; // [rsp+C0h] [rbp-D8h]
  __int128 v41; // [rsp+D0h] [rbp-C8h]
  __int64 v42; // [rsp+E0h] [rbp-B8h]
  __int64 *v43; // [rsp+E8h] [rbp-B0h] BYREF
  int v44; // [rsp+F0h] [rbp-A8h]
  int v45; // [rsp+F4h] [rbp-A4h]
  __int128 *v46; // [rsp+F8h] [rbp-A0h]
  int v47; // [rsp+100h] [rbp-98h]
  __int128 v48; // [rsp+104h] [rbp-94h]
  __int64 v49; // [rsp+114h] [rbp-84h]
  int v50; // [rsp+11Ch] [rbp-7Ch]
  __int128 v51; // [rsp+120h] [rbp-78h] BYREF
  __int64 v52; // [rsp+130h] [rbp-68h]
  LARGE_INTEGER v53[4]; // [rsp+138h] [rbp-60h] BYREF

  v35 = KeySetInformationLength;
  Handle = KeyHandle;
  v51 = 0LL;
  v52 = 0LL;
  v33 = 0LL;
  memset(v53, 0, sizeof(v53));
  v34 = 0LL;
  if ( CmpTraceRoutine )
    EtwGetKernelTraceTimestamp(v53, 0x20000u);
  v6 = 0;
  v7 = 0LL;
  Object = 0LL;
  v28 = 0;
  v39 = 0LL;
  v40 = 0LL;
  v41 = 0LL;
  v42 = 0LL;
  v37[1] = v37;
  v37[0] = v37;
  CmpInitializeThreadInfo((_KAFFINITY_EX *)&v51);
  v36 = 0;
  v8 = 0;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  v14 = CmpAcquireShutdownRundown(v10, v9, v11, v12);
  v31 = v14;
  if ( !v14 )
  {
    v17 = -1073741431;
    goto LABEL_39;
  }
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v29 = PreviousMode;
  if ( KeySetInformationClass == KeyWow64FlagsInformation )
    goto LABEL_5;
  if ( KeySetInformationClass )
  {
    if ( KeySetInformationClass != KeyControlFlagsInformation
      && KeySetInformationClass != KeySetVirtualizationInformation )
    {
      v13 = (unsigned int)(KeySetInformationClass - 4);
      if ( KeySetInformationClass == KeySetDebugInformation )
      {
LABEL_5:
        v27 = 1;
LABEL_6:
        v13 = 4LL;
        goto LABEL_7;
      }
      if ( KeySetInformationClass != KeySetHandleTagsInformation )
      {
        if ( CmpTraceRoutine )
        {
          v13 = (__int64)Handle;
          if ( Handle )
          {
            v25 = KeGetCurrentThread()->PreviousMode;
            Handle = 0LL;
            if ( ObReferenceObjectByHandle((HANDLE)v13, 0, (POBJECT_TYPE)CmKeyObjectType, v25, &Handle, 0LL) >= 0 )
            {
              v34 = *((_QWORD *)Handle + 1);
              ObfDereferenceObject(Handle);
            }
          }
        }
        v17 = -1073741821;
        v7 = (__int64 *)Object;
        v21 = 0;
        goto LABEL_23;
      }
    }
    v27 = 0;
    goto LABEL_6;
  }
  v13 = 8LL;
  v27 = 1;
LABEL_7:
  if ( v35 != (_DWORD)v13 )
  {
    if ( CmpTraceRoutine )
    {
      v13 = (__int64)Handle;
      if ( Handle )
      {
        v26 = KeGetCurrentThread()->PreviousMode;
        Handle = 0LL;
        if ( ObReferenceObjectByHandle((HANDLE)v13, 0, (POBJECT_TYPE)CmKeyObjectType, v26, &Handle, 0LL) >= 0 )
        {
          v34 = *((_QWORD *)Handle + 1);
          ObfDereferenceObject(Handle);
        }
      }
    }
    v17 = -1073741820;
    v7 = (__int64 *)Object;
    v21 = 0;
    goto LABEL_23;
  }
  memmove(&v33, KeySetInformation, (unsigned int)v13);
  Object = 0LL;
  v16 = 0;
  if ( KeySetInformationClass != KeySetHandleTagsInformation )
    v16 = 2;
  v17 = ObReferenceObjectByHandle(Handle, v16, (POBJECT_TYPE)CmKeyObjectType, PreviousMode, &Object, 0LL);
  v7 = (__int64 *)Object;
  v18 = Object;
  if ( v17 != -1073741790 )
  {
    v19 = 0;
    goto LABEL_12;
  }
  if ( !v27 )
  {
    v17 = -1073741790;
    v21 = 0;
    goto LABEL_23;
  }
  SeCaptureSubjectContext(&SubjectContext);
  v8 = 1;
  if ( !CmpVEEnabled )
  {
LABEL_76:
    v17 = -1073741790;
    v21 = 0;
    goto LABEL_23;
  }
  if ( CmpIsSystemEntity(KeGetCurrentThread()->PreviousMode, &SubjectContext, &v36) )
  {
    v7 = (__int64 *)Object;
    goto LABEL_76;
  }
  Object = 0LL;
  v17 = ObReferenceObjectByHandle(Handle, 0x20019u, (POBJECT_TYPE)CmKeyObjectType, v29, &Object, 0LL);
  v7 = (__int64 *)Object;
  if ( v17 < 0 )
    goto LABEL_39;
  if ( !(unsigned __int8)CmKeyBodyNeedsVirtualImage(Object) )
  {
    v17 = -1073741790;
    v21 = 0;
    goto LABEL_23;
  }
  v17 = 0;
  v19 = 1;
  v28 = 1;
  v18 = v7;
LABEL_12:
  v8 = v19;
  if ( v17 < 0 )
  {
LABEL_39:
    v21 = 0;
    goto LABEL_23;
  }
  if ( CmpTraceRoutine && v18 )
    v34 = v7[1];
  if ( KeySetInformationClass == KeySetHandleTagsInformation )
  {
LABEL_15:
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    if ( CmpCallBackCount )
    {
      if ( !CmpIsRegistryLockAcquired() )
      {
        v7 = (__int64 *)Object;
        *(_QWORD *)&v39 = Object;
        DWORD2(v39) = KeySetInformationClass;
        *(_QWORD *)&v40 = &v33;
        DWORD2(v40) = v35;
        v17 = CmpCallCallBacksEx(3u, (__int64)&v39, 0LL, 1, 0x12u, (__int64)Object, (__int64)v37);
        if ( v17 < 0 )
        {
          v23 = 0;
          if ( v17 != -1073740541 )
            v23 = v17;
          v8 = v28;
          v17 = v23;
          goto LABEL_22;
        }
        v6 = 1;
        v19 = v28;
LABEL_19:
        if ( !v19
          || (v17 = CmKeyBodyReplicateToVirtual(&Object, v29, 2LL, &SubjectContext, &v36),
              v19 = v28,
              v8 = v28,
              v7 = (__int64 *)Object,
              v17 >= 0) )
        {
          v8 = v19;
          if ( KeySetInformationClass == KeySetHandleTagsInformation )
          {
            *((_WORD *)v7 + 25) = v33;
            v17 = 0;
          }
          else if ( KeySetInformationClass )
          {
            if ( KeySetInformationClass == KeyWow64FlagsInformation
              || KeySetInformationClass == KeyControlFlagsInformation
              || (v13 = (unsigned int)(KeySetInformationClass - 3), (unsigned int)v13 <= 1) )
            {
              v8 = v28;
              v17 = CmSetKeyFlags(v7, (unsigned int)KeySetInformationClass, (unsigned int)v33);
            }
          }
          else
          {
            v8 = v28;
            v17 = CmSetLastWriteTimeKey(v7, &v33);
          }
        }
LABEL_22:
        v21 = 1;
        goto LABEL_23;
      }
      v19 = v28;
    }
    v7 = (__int64 *)Object;
    goto LABEL_19;
  }
  v13 = v7[1];
  if ( (*(_DWORD *)(v13 + 8) & 0x80u) == 0 )
  {
    if ( (*(_DWORD *)(*(_QWORD *)(v13 + 32) + 160LL) & 0x100000) == 0 )
      goto LABEL_15;
    v17 = -1073741790;
    v21 = 0;
  }
  else
  {
    v17 = -1073741790;
    v21 = 0;
  }
LABEL_23:
  if ( v8 )
    SeReleaseSubjectContext(&SubjectContext);
  if ( v6 && CmpCallBackCount && !CmpIsRegistryLockAcquired() && (_QWORD *)v37[0] != v37 )
  {
    v45 = 0;
    v48 = 0LL;
    v49 = 0LL;
    v50 = 0;
    v43 = v7;
    v44 = v17;
    v47 = v17;
    v46 = &v39;
    CmpCallCallBacksEx(0x12u, (__int64)&v43, 0LL, 0, 0x12u, (__int64)v7, (__int64)v37);
    v17 = v47;
  }
  if ( v21 )
  {
    KeLeaveCriticalRegionThread();
    v7 = (__int64 *)Object;
  }
  if ( v7 )
    ObfDereferenceObject(v7);
  if ( CmpTraceRoutine )
  {
    v24 = v34;
    LOBYTE(v24) = 20;
    if ( (void (__fastcall *)(unsigned __int8, __int64, int, int, __int64, __int64))CmpTraceRoutine == EtwpTraceRegistry )
      EtwpTraceRegistry(0x14u, (__int64)v53, v17, 0, v34, 0LL);
    else
      guard_dispatch_icall_no_overrides(v24, v53);
  }
  if ( v14 )
    CmpReleaseShutdownRundown(v13);
  CmpCleanupThreadInfo((_KAFFINITY_EX **)&v51);
  return v17;
}
