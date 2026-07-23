/*
 * XREFs of NtSetInformationKey @ 0x140862E30
 * Callers:
 *     <none>
 * Callees:
 *     CmpIsRegistryLockAcquired @ 0x140206FB0 (CmpIsRegistryLockAcquired.c)
 *     KeLeaveCriticalRegionThread @ 0x14029B9C0 (KeLeaveCriticalRegionThread.c)
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     EtwGetKernelTraceTimestamp @ 0x14031CDD0 (EtwGetKernelTraceTimestamp.c)
 *     CmpInitializeThreadInfo @ 0x1403F5C00 (CmpInitializeThreadInfo.c)
 *     CmCleanupThreadInfo @ 0x140429780 (CmCleanupThreadInfo.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     CmpIsSystemEntity @ 0x1408416A0 (CmpIsSystemEntity.c)
 *     CmpCallCallBacksEx @ 0x14084C050 (CmpCallCallBacksEx.c)
 *     ObReferenceObjectByHandle @ 0x14084F190 (ObReferenceObjectByHandle.c)
 *     SeCaptureSubjectContext @ 0x140858670 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x140858810 (SeReleaseSubjectContext.c)
 *     CmKeyBodyReplicateToVirtual @ 0x140863588 (CmKeyBodyReplicateToVirtual.c)
 *     CmKeyBodyNeedsVirtualImage @ 0x14086392C (CmKeyBodyNeedsVirtualImage.c)
 *     CmSetLastWriteTimeKey @ 0x1408639C0 (CmSetLastWriteTimeKey.c)
 *     CmSetKeyFlags @ 0x1408640B0 (CmSetKeyFlags.c)
 *     EtwpTraceRegistry @ 0x140874AF0 (EtwpTraceRegistry.c)
 *     CmpAcquireShutdownRundown @ 0x140BA9460 (CmpAcquireShutdownRundown.c)
 *     CmpReleaseShutdownRundown @ 0x140BA9970 (CmpReleaseShutdownRundown.c)
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
  NTSTATUS v17; // ebx
  PVOID v18; // rax
  char v19; // dl
  struct _KTHREAD *CurrentThread; // rax
  char v21; // r12
  NTSTATUS v23; // eax
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
  _KAFFINITY_EX v38; // [rsp+90h] [rbp-108h] BYREF

  v35 = KeySetInformationLength;
  Handle = KeyHandle;
  *(_OWORD *)&v38.Count = 0LL;
  v33 = 0LL;
  memset(&v38.StaticBitmap[19], 0, 32);
  v34 = 0LL;
  if ( CmpTraceRoutine )
    EtwGetKernelTraceTimestamp((LARGE_INTEGER *)&v38.StaticBitmap[19], 0x20000u);
  v6 = 0;
  v7 = 0LL;
  Object = 0LL;
  v28 = 0;
  memset(&v38.StaticBitmap[5], 0, 56);
  v37[1] = v37;
  v37[0] = v37;
  CmpInitializeThreadInfo(&v38);
  v36 = 0;
  v8 = 0;
  memset(&v38.StaticBitmap[1], 0, 32);
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
  SeCaptureSubjectContext((PSECURITY_SUBJECT_CONTEXT)&v38.StaticBitmap[1]);
  v8 = 1;
  if ( !CmpVEEnabled )
  {
LABEL_76:
    v17 = -1073741790;
    v21 = 0;
    goto LABEL_23;
  }
  if ( CmpIsSystemEntity(
         KeGetCurrentThread()->PreviousMode,
         (struct _SECURITY_SUBJECT_CONTEXT *)&v38.StaticBitmap[1],
         &v36) )
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
    if ( !CmpCallBackCount || CmpIsRegistryLockAcquired() )
    {
      v7 = (__int64 *)Object;
    }
    else
    {
      v7 = (__int64 *)Object;
      v38.StaticBitmap[5] = (unsigned __int64)Object;
      LODWORD(v38.StaticBitmap[6]) = KeySetInformationClass;
      v38.StaticBitmap[7] = (unsigned __int64)&v33;
      LODWORD(v38.StaticBitmap[8]) = v35;
      v17 = CmpCallCallBacksEx(3u, (__int64)&v38.StaticBitmap[5], 0LL, 1, 0x12u, (__int64)Object, (__int64)v37);
      if ( v17 < 0 )
      {
        v23 = 0;
        if ( v17 != -1073740541 )
          v23 = v17;
        goto LABEL_42;
      }
      v6 = 1;
    }
    v8 = v28;
    if ( v28 )
    {
      v17 = CmKeyBodyReplicateToVirtual(&Object, v29, 2LL, &v38.StaticBitmap[1], &v36);
      v7 = (__int64 *)Object;
      if ( v17 < 0 )
        goto LABEL_22;
    }
    if ( KeySetInformationClass == KeySetHandleTagsInformation )
    {
      *((_WORD *)v7 + 25) = v33;
      v17 = 0;
LABEL_22:
      v21 = 1;
      goto LABEL_23;
    }
    if ( KeySetInformationClass == KeyWriteTimeInformation )
    {
      v8 = v28;
      v17 = CmSetLastWriteTimeKey(v7, &v33);
      goto LABEL_22;
    }
    if ( KeySetInformationClass != KeyWow64FlagsInformation && KeySetInformationClass != KeyControlFlagsInformation )
    {
      v13 = (unsigned int)(KeySetInformationClass - 3);
      if ( (unsigned int)v13 > 1 )
        goto LABEL_22;
    }
    v23 = CmSetKeyFlags(v7, (unsigned int)KeySetInformationClass, (unsigned int)v33);
LABEL_42:
    v8 = v28;
    v17 = v23;
    goto LABEL_22;
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
    SeReleaseSubjectContext((PSECURITY_SUBJECT_CONTEXT)&v38.StaticBitmap[1]);
  if ( v6 && CmpCallBackCount && !CmpIsRegistryLockAcquired() && (_QWORD *)v37[0] != v37 )
  {
    memset((char *)&v38.StaticBitmap[15] + 4, 0, 28);
    v38.StaticBitmap[12] = (unsigned __int64)v7;
    v38.StaticBitmap[13] = (unsigned int)v17;
    LODWORD(v38.StaticBitmap[15]) = v17;
    v38.StaticBitmap[14] = (unsigned __int64)&v38.StaticBitmap[5];
    CmpCallCallBacksEx(0x12u, (__int64)&v38.StaticBitmap[12], 0LL, 0, 0x12u, (__int64)v7, (__int64)v37);
    v17 = v38.StaticBitmap[15];
  }
  if ( v21 )
  {
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    v7 = (__int64 *)Object;
  }
  if ( v7 )
    ObfDereferenceObject(v7);
  if ( CmpTraceRoutine )
  {
    v24 = v34;
    LOBYTE(v24) = 20;
    if ( (__int64 (__fastcall *)(_DWORD, _DWORD, _DWORD, _DWORD, __int64, __int64))CmpTraceRoutine == EtwpTraceRegistry )
      EtwpTraceRegistry(v24, (unsigned int)&v38.StaticBitmap[19], v17, 0, v34, 0LL);
    else
      guard_dispatch_icall_no_overrides(v24);
  }
  if ( v14 )
    CmpReleaseShutdownRundown(v13);
  CmCleanupThreadInfo((_KAFFINITY_EX **)&v38);
  return v17;
}
