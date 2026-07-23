/*
 * XREFs of NtEnumerateKey @ 0x140AD2D00
 * Callers:
 *     ExpWatchLicenseInfoWork @ 0x1407A7F10 (ExpWatchLicenseInfoWork.c)
 *     AdtpObjsInitialize @ 0x140801948 (AdtpObjsInitialize.c)
 *     ExpWatchProductTypeInitialization @ 0x140C303BC (ExpWatchProductTypeInitialization.c)
 * Callees:
 *     CmpIsRegistryLockAcquired @ 0x140206FB0 (CmpIsRegistryLockAcquired.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x14029B9E0 (KiLeaveCriticalRegionUnsafe.c)
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     EtwGetKernelTraceTimestamp @ 0x14031CDD0 (EtwGetKernelTraceTimestamp.c)
 *     ExFreeToLookasideListEx @ 0x1403A52A0 (ExFreeToLookasideListEx.c)
 *     CmpInitializeThreadInfo @ 0x1403F5C00 (CmpInitializeThreadInfo.c)
 *     CmCleanupThreadInfo @ 0x140429780 (CmCleanupThreadInfo.c)
 *     CmSiFreeMemory @ 0x14046F140 (CmSiFreeMemory.c)
 *     KeExpandKernelStackAndCallout @ 0x140489A50 (KeExpandKernelStackAndCallout.c)
 *     Feature_RegistryStackExpand__private_IsEnabledDeviceUsageNoInline @ 0x14065BF30 (Feature_RegistryStackExpand__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x140840E80 (CmKeyBodyRemapToVirtualForEnum.c)
 *     CmpCallCallBacksEx @ 0x14084C050 (CmpCallCallBacksEx.c)
 *     ObReferenceObjectByHandle @ 0x14084F190 (ObReferenceObjectByHandle.c)
 *     CmEnumerateKey @ 0x14087C630 (CmEnumerateKey.c)
 *     ProbeForWrite @ 0x140934CF0 (ProbeForWrite.c)
 *     CmpBounceContextStart @ 0x140996800 (CmpBounceContextStart.c)
 *     CmpBounceContextCopyDataToCallerBuffer @ 0x1409E0720 (CmpBounceContextCopyDataToCallerBuffer.c)
 *     CmObReferenceObjectByHandle @ 0x140BA93B0 (CmObReferenceObjectByHandle.c)
 *     CmpAcquireShutdownRundown @ 0x140BA9460 (CmpAcquireShutdownRundown.c)
 *     CmpReleaseShutdownRundown @ 0x140BA9970 (CmpReleaseShutdownRundown.c)
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
  __int64 v12; // rdx
  char v13; // si
  __int64 v14; // r8
  __int64 v15; // r9
  NTSTATUS v16; // ebx
  KPROCESSOR_MODE PreviousMode; // r9
  int v18; // r14d
  ULONG v19; // esi
  size_t v20; // r12
  volatile void *v21; // rbx
  __int64 v22; // rcx
  struct _KTHREAD *CurrentThread; // rax
  int v24; // eax
  __int64 v25; // rcx
  ULONG v26; // eax
  char v28; // [rsp+40h] [rbp-1E8h]
  char v29; // [rsp+41h] [rbp-1E7h]
  char v30; // [rsp+42h] [rbp-1E6h]
  PVOID v32; // [rsp+48h] [rbp-1E0h] BYREF
  PVOID Object; // [rsp+50h] [rbp-1D8h] BYREF
  _DWORD v34[4]; // [rsp+58h] [rbp-1D0h] BYREF
  volatile void *Address; // [rsp+68h] [rbp-1C0h]
  __int64 v36; // [rsp+70h] [rbp-1B8h]
  PVOID v37; // [rsp+78h] [rbp-1B0h] BYREF
  _QWORD v38[2]; // [rsp+80h] [rbp-1A8h] BYREF
  __int128 Parameter; // [rsp+90h] [rbp-198h] BYREF
  __int128 v40; // [rsp+A0h] [rbp-188h]
  __int128 v41; // [rsp+B0h] [rbp-178h]
  _DWORD *v42; // [rsp+C0h] [rbp-168h]
  int v43; // [rsp+C8h] [rbp-160h]
  _BYTE v44[272]; // [rsp+D0h] [rbp-158h] BYREF

  Address = KeyInformation;
  Object = ResultLength;
  v34[2] = Index;
  *(_OWORD *)v44 = 0LL;
  v43 = 0;
  memset(&v44[161], 0, 71);
  DWORD1(Parameter) = 0;
  memset(&v44[240], 0, 32);
  v36 = 0LL;
  if ( CmpTraceRoutine )
    EtwGetKernelTraceTimestamp((LARGE_INTEGER *)&v44[240], 0x20000u);
  v29 = 0;
  v30 = 0;
  memset(&v44[16], 0, 64);
  v32 = 0LL;
  v34[0] = 0;
  memset(&v44[144], 0, 17);
  v38[1] = v38;
  v38[0] = v38;
  CmpInitializeThreadInfo((_KAFFINITY_EX *)v44);
  v37 = 0LL;
  Parameter = 0LL;
  v40 = 0LL;
  v41 = 0LL;
  v42 = 0LL;
  v13 = CmpAcquireShutdownRundown(v9, v8, v10, v11);
  v28 = v13;
  if ( !v13 )
  {
    v16 = -1073741431;
    goto LABEL_26;
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
    v16 = -1073741811;
    goto LABEL_26;
  }
  v18 = KeGetCurrentThread()->PreviousMode;
  v16 = CmObReferenceObjectByHandle((_DWORD)KeyHandle, 8, v14, (unsigned __int8)v18, (__int64)&v32, 0LL);
  if ( v16 < 0 )
    goto LABEL_26;
  if ( CmpTraceRoutine && v32 )
    v36 = *((_QWORD *)v32 + 1);
  if ( (_BYTE)v18 == 1 )
  {
    v19 = Length;
    v20 = Length;
    v21 = Address;
    ProbeForWrite(Address, Length, 4u);
    v22 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)Object < 0x7FFFFFFF0000LL )
      v22 = (__int64)Object;
    *(_DWORD *)v22 = *(_DWORD *)v22;
  }
  else
  {
    v19 = Length;
    v20 = Length;
    v21 = Address;
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v30 = 1;
  if ( CmpCallBackCount && !CmpIsRegistryLockAcquired() )
  {
    *(_QWORD *)&v44[16] = v32;
    *(_QWORD *)&v44[24] = __PAIR64__(KeyInformationClass, Index);
    *(_QWORD *)&v44[32] = v21;
    *(_DWORD *)&v44[40] = v19;
    *(_QWORD *)&v44[48] = Object;
    v24 = CmpCallCallBacksEx(5u, (__int64)&v44[16], 0LL, 1, 0x14u, (__int64)v32, (__int64)v38);
    if ( v24 < 0 )
    {
      v16 = 0;
      if ( v24 != -1073740541 )
        v16 = v24;
      goto LABEL_25;
    }
    v29 = 1;
  }
  v16 = CmKeyBodyRemapToVirtualForEnum(&v32, v18, 8, &v37);
  if ( v16 < 0 )
    goto LABEL_25;
  v16 = CmpBounceContextStart((__int64)&v44[144], (unsigned __int64)Address, v20, v18, 0);
  if ( v16 < 0 )
    goto LABEL_25;
  *((_QWORD *)&Parameter + 1) = v32;
  *(_QWORD *)&v40 = v37;
  *((_QWORD *)&v40 + 1) = __PAIR64__(KeyInformationClass, Index);
  *(_QWORD *)&v41 = *(_QWORD *)&v44[152];
  DWORD2(v41) = v19;
  v42 = v34;
  if ( (unsigned int)Feature_RegistryStackExpand__private_IsEnabledDeviceUsageNoInline() )
  {
    v16 = KeExpandKernelStackAndCallout((PEXPAND_STACK_CALLOUT)CmEnumerateKeyCallout, &Parameter, 0x4800uLL);
    if ( v16 >= 0 )
    {
      v16 = Parameter;
      goto LABEL_49;
    }
LABEL_25:
    v13 = v28;
    goto LABEL_26;
  }
  v16 = CmEnumerateKey(*((_QWORD **)&Parameter + 1), v40, SDWORD2(v40), SHIDWORD(v40), v41, SDWORD2(v41), (__int64)v42);
  LODWORD(Parameter) = v16;
LABEL_49:
  if ( v16 < 0 && v16 != -1073741789 && v16 != -2147483643 )
    goto LABEL_25;
  v26 = v34[0];
  *(_DWORD *)Object = v34[0];
  if ( v16 != -1073741789 )
  {
    if ( v19 < v26 )
      v26 = v19;
    CmpBounceContextCopyDataToCallerBuffer((__int64)&v44[144], v26);
  }
  v13 = v28;
LABEL_26:
  if ( v37 )
    ObfDereferenceObject(v37);
  if ( v29 && CmpCallBackCount && !CmpIsRegistryLockAcquired() && (_QWORD *)v38[0] != v38 )
  {
    *(_DWORD *)&v44[92] = 0;
    memset(&v44[108], 0, 28);
    *(_QWORD *)&v44[80] = v32;
    *(_DWORD *)&v44[88] = v16;
    *(_DWORD *)&v44[104] = v16;
    *(_QWORD *)&v44[96] = &v44[16];
    CmpCallCallBacksEx(0x14u, (__int64)&v44[80], 0LL, 0, 0x14u, (__int64)v32, (__int64)v38);
    v16 = *(_DWORD *)&v44[104];
  }
  if ( v30 )
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v12, v14, v15);
  if ( v32 )
    ObfDereferenceObject(v32);
  v25 = *(_QWORD *)&v44[152];
  if ( *(_QWORD *)&v44[152] && *(_QWORD *)&v44[152] != *(_QWORD *)&v44[144] && *(_BYTE **)&v44[152] != &v44[161] )
  {
    if ( (v44[160] & 1) != 0 )
      ExFreeToLookasideListEx(&CmpBounceBufferLookaside, *(PVOID *)&v44[152]);
    else
      CmSiFreeMemory(*(PPRIVILEGE_SET *)&v44[152]);
  }
  if ( CmpTraceRoutine )
  {
    LOBYTE(v25) = 17;
    guard_dispatch_icall_no_overrides(v25);
  }
  if ( v13 )
    CmpReleaseShutdownRundown(v25);
  CmCleanupThreadInfo((_KAFFINITY_EX **)v44);
  return v16;
}
