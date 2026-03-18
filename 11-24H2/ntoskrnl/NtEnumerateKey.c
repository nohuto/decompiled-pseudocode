/*
 * XREFs of NtEnumerateKey @ 0x140AE3CA0
 * Callers:
 *     ExpWatchLicenseInfoWork @ 0x1407B73B0 (ExpWatchLicenseInfoWork.c)
 *     AdtpObjsInitialize @ 0x1408114B8 (AdtpObjsInitialize.c)
 *     ExpWatchProductTypeInitialization @ 0x140C416CC (ExpWatchProductTypeInitialization.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     KeExpandKernelStackAndCallout @ 0x14027BAB0 (KeExpandKernelStackAndCallout.c)
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     EtwGetKernelTraceTimestamp @ 0x1403C00A0 (EtwGetKernelTraceTimestamp.c)
 *     CmpInitializeThreadInfo @ 0x1403FA250 (CmpInitializeThreadInfo.c)
 *     CmpCleanupThreadInfo @ 0x14041EE60 (CmpCleanupThreadInfo.c)
 *     CmpIsRegistryLockAcquired @ 0x14041EE80 (CmpIsRegistryLockAcquired.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     CmPostCallbackNotificationEx @ 0x140847C20 (CmPostCallbackNotificationEx.c)
 *     CmpCallCallBacksEx @ 0x140847D10 (CmpCallCallBacksEx.c)
 *     ObReferenceObjectByHandle @ 0x14084AF40 (ObReferenceObjectByHandle.c)
 *     ProbeForWrite @ 0x1408C0590 (ProbeForWrite.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x14090CE40 (CmKeyBodyRemapToVirtualForEnum.c)
 *     CmpBounceContextCleanup @ 0x14097A1D0 (CmpBounceContextCleanup.c)
 *     CmpBounceContextStart @ 0x14097A220 (CmpBounceContextStart.c)
 *     CmpBounceContextCopyDataToCallerBuffer @ 0x1409DF4D0 (CmpBounceContextCopyDataToCallerBuffer.c)
 *     CmObReferenceObjectByHandle @ 0x140BB9350 (CmObReferenceObjectByHandle.c)
 *     CmpAcquireShutdownRundown @ 0x140BB9400 (CmpAcquireShutdownRundown.c)
 *     CmpReleaseShutdownRundown @ 0x140BB9880 (CmpReleaseShutdownRundown.c)
 */

__int64 __fastcall NtEnumerateKey(
        HANDLE Handle,
        unsigned int a2,
        unsigned int a3,
        volatile void *a4,
        SIZE_T Length,
        void *a6)
{
  unsigned int v7; // esi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  int v13; // r8d
  int v14; // r9d
  char v15; // r12
  signed int v16; // edi
  KPROCESSOR_MODE PreviousMode; // r9
  int v18; // r15d
  unsigned int v19; // esi
  size_t v20; // r13
  volatile void *v21; // rdi
  __int64 v22; // rcx
  struct _KTHREAD *CurrentThread; // rax
  int v24; // eax
  unsigned int v25; // eax
  __int64 v26; // rcx
  char v28; // [rsp+41h] [rbp-1B7h]
  char v29; // [rsp+42h] [rbp-1B6h]
  PVOID v31; // [rsp+48h] [rbp-1B0h] BYREF
  PVOID Object; // [rsp+50h] [rbp-1A8h] BYREF
  unsigned int v33; // [rsp+58h] [rbp-1A0h]
  _DWORD v34[3]; // [rsp+5Ch] [rbp-19Ch] BYREF
  volatile void *Address; // [rsp+68h] [rbp-190h]
  __int64 v36; // [rsp+70h] [rbp-188h]
  PVOID v37; // [rsp+78h] [rbp-180h] BYREF
  _QWORD v38[2]; // [rsp+80h] [rbp-178h] BYREF
  int v39; // [rsp+90h] [rbp-168h]
  __int128 Parameter; // [rsp+98h] [rbp-160h] BYREF
  __int128 v41; // [rsp+A8h] [rbp-150h]
  __int128 v42; // [rsp+B8h] [rbp-140h]
  _DWORD *v43; // [rsp+C8h] [rbp-130h]
  _KAFFINITY_EX v44; // [rsp+D0h] [rbp-128h] BYREF

  Address = a4;
  v33 = a3;
  v7 = a2;
  Object = a6;
  v34[1] = a2;
  memset(&v44, 0, 24);
  v39 = 0;
  memset_0(&v44.StaticBitmap[15], 0, 0x58uLL);
  DWORD1(Parameter) = 0;
  memset(&v44.StaticBitmap[11], 0, 32);
  v36 = 0LL;
  if ( CmpTraceRoutine )
    EtwGetKernelTraceTimestamp((LARGE_INTEGER *)&v44.StaticBitmap[11], 0x20000u);
  v28 = 0;
  v29 = 0;
  memset_0(&v44.StaticBitmap[3], 0, 0x40uLL);
  v31 = 0LL;
  v34[0] = 0;
  v38[1] = v38;
  v38[0] = v38;
  CmpInitializeThreadInfo(&v44);
  v37 = 0LL;
  Parameter = 0LL;
  v41 = 0LL;
  v42 = 0LL;
  v43 = 0LL;
  v15 = CmpAcquireShutdownRundown(v10, v9, v11, v12);
  if ( !v15 )
  {
    v16 = -1073741431;
    goto LABEL_39;
  }
  if ( a3 > 2 )
  {
    if ( CmpTraceRoutine )
    {
      if ( Handle )
      {
        PreviousMode = KeGetCurrentThread()->PreviousMode;
        Object = 0LL;
        if ( ObReferenceObjectByHandle(Handle, 0, (POBJECT_TYPE)CmKeyObjectType, PreviousMode, &Object, 0LL) >= 0 )
          ObfDereferenceObject(Object);
      }
    }
    v16 = -1073741811;
    goto LABEL_39;
  }
  v18 = KeGetCurrentThread()->PreviousMode;
  LOBYTE(v14) = v18;
  v16 = CmObReferenceObjectByHandle((_DWORD)Handle, 8, v13, v14, (__int64)&v31, 0LL);
  if ( v16 < 0 )
    goto LABEL_39;
  if ( CmpTraceRoutine && v31 )
    v36 = *((_QWORD *)v31 + 1);
  if ( (_BYTE)v18 == 1 )
  {
    v19 = Length;
    v20 = (unsigned int)Length;
    v21 = Address;
    ProbeForWrite(Address, (unsigned int)Length, 4u);
    v22 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)Object < 0x7FFFFFFF0000LL )
      v22 = (__int64)Object;
    *(_DWORD *)v22 = *(_DWORD *)v22;
  }
  else
  {
    v19 = Length;
    v20 = (unsigned int)Length;
    v21 = Address;
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v29 = 1;
  if ( CmpCallBackCount && !CmpIsRegistryLockAcquired() )
  {
    v44.StaticBitmap[3] = (unsigned __int64)v31;
    v44.StaticBitmap[4] = __PAIR64__(v33, a2);
    v44.StaticBitmap[5] = (unsigned __int64)v21;
    LODWORD(v44.StaticBitmap[6]) = v19;
    v44.StaticBitmap[7] = (unsigned __int64)Object;
    v24 = CmpCallCallBacksEx(5u, (__int64)&v44.StaticBitmap[3], 0LL, 1, 0x14u, (__int64)v31, (__int64)v38);
    if ( v24 < 0 )
    {
      v16 = 0;
      if ( v24 != -1073740541 )
        v16 = v24;
      goto LABEL_38;
    }
    v28 = 1;
  }
  v16 = CmKeyBodyRemapToVirtualForEnum(&v31, v18, 8, &v37);
  if ( v16 < 0 )
    goto LABEL_38;
  v16 = CmpBounceContextStart((__int64)&v44.StaticBitmap[15], (unsigned __int64)Address, v20, v18, 0);
  if ( v16 < 0 )
    goto LABEL_38;
  *((_QWORD *)&Parameter + 1) = v31;
  *(_QWORD *)&v41 = v37;
  *((_QWORD *)&v41 + 1) = __PAIR64__(v33, a2);
  *(_QWORD *)&v42 = v44.StaticBitmap[16];
  DWORD2(v42) = v19;
  v43 = v34;
  v16 = KeExpandKernelStackAndCallout((PEXPAND_STACK_CALLOUT)CmEnumerateKeyCallout, &Parameter, 0x4800uLL);
  if ( v16 < 0
    || (v16 = Parameter, (int)Parameter < 0) && (_DWORD)Parameter != -1073741789 && (_DWORD)Parameter != -2147483643 )
  {
LABEL_38:
    v7 = a2;
    goto LABEL_39;
  }
  v25 = v34[0];
  *(_DWORD *)Object = v34[0];
  if ( v16 != -1073741789 )
  {
    if ( v19 < v25 )
      v25 = v19;
    CmpBounceContextCopyDataToCallerBuffer((__int64)&v44.StaticBitmap[15], v25);
  }
  v7 = a2;
LABEL_39:
  if ( v37 )
    ObfDereferenceObject(v37);
  if ( v28 )
    v16 = CmPostCallbackNotificationEx(20, (__int64)v31, v16, (__int64)&v44.StaticBitmap[3], 0LL, v38);
  if ( v29 )
    KeLeaveCriticalRegion();
  if ( v31 )
    ObfDereferenceObject(v31);
  CmpBounceContextCleanup((__int64)&v44.StaticBitmap[15]);
  if ( CmpTraceRoutine )
  {
    LOBYTE(v26) = 17;
    guard_dispatch_icall_no_overrides(v26, &v44.StaticBitmap[11], (unsigned int)v16, v7);
  }
  if ( v15 )
    CmpReleaseShutdownRundown(v26);
  CmpCleanupThreadInfo((_KAFFINITY_EX **)&v44);
  return (unsigned int)v16;
}
