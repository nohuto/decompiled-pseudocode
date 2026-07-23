/*
 * XREFs of NtEnumerateKey @ 0x140AE5580
 * Callers:
 *     ExpWatchLicenseInfoWork @ 0x1407B7800 (ExpWatchLicenseInfoWork.c)
 *     AdtpObjsInitialize @ 0x140811BF8 (AdtpObjsInitialize.c)
 *     ExpWatchProductTypeInitialization @ 0x140C4381C (ExpWatchProductTypeInitialization.c)
 * Callees:
 *     KeExpandKernelStackAndCallout @ 0x140231040 (KeExpandKernelStackAndCallout.c)
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     EtwGetKernelTraceTimestamp @ 0x1403AEC60 (EtwGetKernelTraceTimestamp.c)
 *     CmpInitializeThreadInfo @ 0x1403F0160 (CmpInitializeThreadInfo.c)
 *     CmpCleanupThreadInfo @ 0x140414BA0 (CmpCleanupThreadInfo.c)
 *     CmpIsRegistryLockAcquired @ 0x140414BC0 (CmpIsRegistryLockAcquired.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     CmPostCallbackNotificationEx @ 0x140843EE0 (CmPostCallbackNotificationEx.c)
 *     CmpCallCallBacksEx @ 0x140843FD0 (CmpCallCallBacksEx.c)
 *     ObReferenceObjectByHandle @ 0x140847200 (ObReferenceObjectByHandle.c)
 *     ProbeForWrite @ 0x1408BDF50 (ProbeForWrite.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x1408E4560 (CmKeyBodyRemapToVirtualForEnum.c)
 *     CmpBounceContextCleanup @ 0x1409629E0 (CmpBounceContextCleanup.c)
 *     CmpBounceContextStart @ 0x140962A30 (CmpBounceContextStart.c)
 *     CmpBounceContextCopyDataToCallerBuffer @ 0x1409D9280 (CmpBounceContextCopyDataToCallerBuffer.c)
 *     CmObReferenceObjectByHandle @ 0x140BBB350 (CmObReferenceObjectByHandle.c)
 *     CmpAcquireShutdownRundown @ 0x140BBB400 (CmpAcquireShutdownRundown.c)
 *     CmpReleaseShutdownRundown @ 0x140BBB880 (CmpReleaseShutdownRundown.c)
 */

NTSTATUS __cdecl NtEnumerateKey(
        HANDLE KeyHandle,
        ULONG Index,
        KEY_INFORMATION_CLASS KeyInformationClass,
        PVOID KeyInformation,
        ULONG Length,
        PULONG ResultLength)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  int v12; // r8d
  int v13; // r9d
  char v14; // r12
  int v15; // edi
  KPROCESSOR_MODE PreviousMode; // r9
  int v17; // r15d
  ULONG v18; // esi
  size_t v19; // r13
  volatile void *v20; // rdi
  __int64 v21; // rcx
  struct _KTHREAD *CurrentThread; // rax
  int v23; // eax
  ULONG v24; // eax
  __int64 v25; // rcx
  char v27; // [rsp+41h] [rbp-1B7h]
  char v28; // [rsp+42h] [rbp-1B6h]
  PVOID v30; // [rsp+48h] [rbp-1B0h] BYREF
  PVOID Object; // [rsp+50h] [rbp-1A8h] BYREF
  KEY_INFORMATION_CLASS v32; // [rsp+58h] [rbp-1A0h]
  _DWORD v33[3]; // [rsp+5Ch] [rbp-19Ch] BYREF
  volatile void *Address; // [rsp+68h] [rbp-190h]
  __int64 v35; // [rsp+70h] [rbp-188h]
  PVOID v36; // [rsp+78h] [rbp-180h] BYREF
  _QWORD v37[2]; // [rsp+80h] [rbp-178h] BYREF
  int v38; // [rsp+90h] [rbp-168h]
  __int128 Parameter; // [rsp+98h] [rbp-160h] BYREF
  __int128 v40; // [rsp+A8h] [rbp-150h]
  __int128 v41; // [rsp+B8h] [rbp-140h]
  _DWORD *v42; // [rsp+C8h] [rbp-130h]
  _KAFFINITY_EX v43; // [rsp+D0h] [rbp-128h] BYREF

  Address = KeyInformation;
  v32 = KeyInformationClass;
  Object = ResultLength;
  v33[1] = Index;
  memset(&v43, 0, 24);
  v38 = 0;
  memset_0(&v43.StaticBitmap[15], 0, 0x58uLL);
  DWORD1(Parameter) = 0;
  memset(&v43.StaticBitmap[11], 0, 32);
  v35 = 0LL;
  if ( CmpTraceRoutine )
    EtwGetKernelTraceTimestamp((LARGE_INTEGER *)&v43.StaticBitmap[11], 0x20000u);
  v27 = 0;
  v28 = 0;
  memset_0(&v43.StaticBitmap[3], 0, 0x40uLL);
  v30 = 0LL;
  v33[0] = 0;
  v37[1] = v37;
  v37[0] = v37;
  CmpInitializeThreadInfo(&v43);
  v36 = 0LL;
  Parameter = 0LL;
  v40 = 0LL;
  v41 = 0LL;
  v42 = 0LL;
  v14 = CmpAcquireShutdownRundown(v9, v8, v10, v11);
  if ( !v14 )
  {
    v15 = -1073741431;
    goto LABEL_37;
  }
  if ( (unsigned int)KeyInformationClass > KeyFullInformation )
  {
    if ( CmpTraceRoutine )
    {
      if ( KeyHandle )
      {
        PreviousMode = KeGetCurrentThread()->PreviousMode;
        Object = 0LL;
        if ( ObReferenceObjectByHandle(KeyHandle, 0, (POBJECT_TYPE)CmKeyObjectType, PreviousMode, &Object, 0LL) >= 0 )
          ObfDereferenceObject(Object);
      }
    }
    v15 = -1073741811;
    goto LABEL_37;
  }
  v17 = KeGetCurrentThread()->PreviousMode;
  LOBYTE(v13) = v17;
  v15 = CmObReferenceObjectByHandle((_DWORD)KeyHandle, 8, v12, v13, (__int64)&v30, 0LL);
  if ( v15 < 0 )
    goto LABEL_37;
  if ( CmpTraceRoutine && v30 )
    v35 = *((_QWORD *)v30 + 1);
  if ( (_BYTE)v17 == 1 )
  {
    v18 = Length;
    v19 = Length;
    v20 = Address;
    ProbeForWrite(Address, Length, 4u);
    v21 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)Object < 0x7FFFFFFF0000LL )
      v21 = (__int64)Object;
    *(_DWORD *)v21 = *(_DWORD *)v21;
  }
  else
  {
    v18 = Length;
    v19 = Length;
    v20 = Address;
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v28 = 1;
  if ( CmpCallBackCount && !CmpIsRegistryLockAcquired() )
  {
    v43.StaticBitmap[3] = (unsigned __int64)v30;
    v43.StaticBitmap[4] = __PAIR64__(v32, Index);
    v43.StaticBitmap[5] = (unsigned __int64)v20;
    LODWORD(v43.StaticBitmap[6]) = v18;
    v43.StaticBitmap[7] = (unsigned __int64)Object;
    v23 = CmpCallCallBacksEx(5u, (__int64)&v43.StaticBitmap[3], 0LL, 1, 0x14u, (__int64)v30, (__int64)v37);
    if ( v23 < 0 )
    {
      v15 = 0;
      if ( v23 != -1073740541 )
        v15 = v23;
      goto LABEL_37;
    }
    v27 = 1;
  }
  v15 = CmKeyBodyRemapToVirtualForEnum(&v30, v17, 8, &v36);
  if ( v15 >= 0 )
  {
    v15 = CmpBounceContextStart((__int64)&v43.StaticBitmap[15], (unsigned __int64)Address, v19, v17, 0);
    if ( v15 >= 0 )
    {
      *((_QWORD *)&Parameter + 1) = v30;
      *(_QWORD *)&v40 = v36;
      *((_QWORD *)&v40 + 1) = __PAIR64__(v32, Index);
      *(_QWORD *)&v41 = v43.StaticBitmap[16];
      DWORD2(v41) = v18;
      v42 = v33;
      v15 = KeExpandKernelStackAndCallout((PEXPAND_STACK_CALLOUT)CmEnumerateKeyCallout, &Parameter, 0x4800uLL);
      if ( v15 >= 0 )
      {
        v15 = Parameter;
        if ( (int)Parameter >= 0 || (_DWORD)Parameter == -1073741789 || (_DWORD)Parameter == -2147483643 )
        {
          v24 = v33[0];
          *(_DWORD *)Object = v33[0];
          if ( v15 != -1073741789 )
          {
            if ( v18 < v24 )
              v24 = v18;
            CmpBounceContextCopyDataToCallerBuffer((__int64)&v43.StaticBitmap[15], v24);
          }
        }
      }
    }
  }
LABEL_37:
  if ( v36 )
    ObfDereferenceObject(v36);
  if ( v27 )
    v15 = CmPostCallbackNotificationEx(20, (__int64)v30, v15, (__int64)&v43.StaticBitmap[3], 0LL, v37);
  if ( v28 )
    KeLeaveCriticalRegion();
  if ( v30 )
    ObfDereferenceObject(v30);
  CmpBounceContextCleanup((__int64)&v43.StaticBitmap[15]);
  if ( CmpTraceRoutine )
  {
    LOBYTE(v25) = 17;
    guard_dispatch_icall_no_overrides(v25, &v43.StaticBitmap[11]);
  }
  if ( v14 )
    CmpReleaseShutdownRundown(v25);
  CmpCleanupThreadInfo((_KAFFINITY_EX **)&v43);
  return v15;
}
