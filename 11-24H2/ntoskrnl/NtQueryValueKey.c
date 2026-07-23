/*
 * XREFs of NtQueryValueKey @ 0x140AE5AA0
 * Callers:
 *     ExpWatchProductTypeWork @ 0x1406F4C60 (ExpWatchProductTypeWork.c)
 *     IopLoadDriver @ 0x1409B6EEC (IopLoadDriver.c)
 *     InitSafeBoot @ 0x140C0D900 (InitSafeBoot.c)
 *     IoInitSystemPreDrivers @ 0x140C1CA4C (IoInitSystemPreDrivers.c)
 *     IopProtectSystemPartition @ 0x140C203FC (IopProtectSystemPartition.c)
 *     ExpWatchProductTypeInitialization @ 0x140C4381C (ExpWatchProductTypeInitialization.c)
 * Callees:
 *     KeExpandKernelStackAndCallout @ 0x140231040 (KeExpandKernelStackAndCallout.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140289BD0 (KiLeaveCriticalRegionUnsafe.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     ExFreeToLookasideListEx @ 0x1402E6050 (ExFreeToLookasideListEx.c)
 *     EtwGetKernelTraceTimestamp @ 0x1403AEC60 (EtwGetKernelTraceTimestamp.c)
 *     CmpInitializeThreadInfo @ 0x1403F0160 (CmpInitializeThreadInfo.c)
 *     CmpCleanupThreadInfo @ 0x140414BA0 (CmpCleanupThreadInfo.c)
 *     CmpIsRegistryLockAcquired @ 0x140414BC0 (CmpIsRegistryLockAcquired.c)
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     CmpAllocateTransientPoolWithQuota @ 0x14044E170 (CmpAllocateTransientPoolWithQuota.c)
 *     CmSiFreeMemory @ 0x140464550 (CmSiFreeMemory.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     CmpCallCallBacksEx @ 0x140843FD0 (CmpCallCallBacksEx.c)
 *     ObReferenceObjectByHandle @ 0x140847200 (ObReferenceObjectByHandle.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408A3890 (ExRaiseDatatypeMisalignment.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x1408E4560 (CmKeyBodyRemapToVirtualForEnum.c)
 *     CmpDoesBufferRequireCapturing @ 0x140962920 (CmpDoesBufferRequireCapturing.c)
 *     CmpBounceContextStart @ 0x140962A30 (CmpBounceContextStart.c)
 *     CmpBounceContextCopyDataToCallerBuffer @ 0x1409D9280 (CmpBounceContextCopyDataToCallerBuffer.c)
 *     CmObReferenceObjectByHandle @ 0x140BBB350 (CmObReferenceObjectByHandle.c)
 *     CmpAcquireShutdownRundown @ 0x140BBB400 (CmpAcquireShutdownRundown.c)
 *     CmpReleaseShutdownRundown @ 0x140BBB880 (CmpReleaseShutdownRundown.c)
 */

NTSTATUS __cdecl NtQueryValueKey(
        HANDLE KeyHandle,
        PUNICODE_STRING ValueName,
        KEY_VALUE_INFORMATION_CLASS KeyValueInformationClass,
        PVOID KeyValueInformation,
        ULONG Length,
        PULONG ResultLength)
{
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  int v14; // r8d
  char v15; // r12
  NTSTATUS v16; // ebx
  KPROCESSOR_MODE PreviousMode; // r9
  int v18; // r15d
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  ULONG v22; // esi
  PVOID v23; // rbx
  const void *Buffer; // rdx
  __int64 v25; // rcx
  ULONG_PTR v26; // r8
  struct _KTHREAD *CurrentThread; // rax
  int v28; // eax
  int v29; // eax
  ULONG v30; // ecx
  unsigned __int64 *v31; // rcx
  UNICODE_STRING *p_DestinationString; // rcx
  int v34; // [rsp+44h] [rbp-274h]
  char v35; // [rsp+48h] [rbp-270h]
  char v36; // [rsp+49h] [rbp-26Fh]
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-268h] BYREF
  PVOID v39; // [rsp+60h] [rbp-258h] BYREF
  PPRIVILEGE_SET Privileges; // [rsp+68h] [rbp-250h]
  PVOID Object; // [rsp+70h] [rbp-248h] BYREF
  _DWORD v42[4]; // [rsp+78h] [rbp-240h] BYREF
  __int64 v43; // [rsp+88h] [rbp-230h]
  PVOID v44; // [rsp+90h] [rbp-228h] BYREF
  _QWORD v45[3]; // [rsp+98h] [rbp-220h] BYREF
  __int128 Parameter; // [rsp+B0h] [rbp-208h] BYREF
  UNICODE_STRING v47; // [rsp+C0h] [rbp-1F8h]
  __int128 v48; // [rsp+D0h] [rbp-1E8h]
  __int64 v49; // [rsp+E0h] [rbp-1D8h]
  _DWORD *v50; // [rsp+E8h] [rbp-1D0h]
  int v51; // [rsp+F0h] [rbp-1C8h]
  __m128i v52; // [rsp+100h] [rbp-1B8h]
  __int128 v53; // [rsp+110h] [rbp-1A8h] BYREF
  __int128 v54; // [rsp+120h] [rbp-198h]
  __int128 v55; // [rsp+130h] [rbp-188h]
  __int128 v56; // [rsp+140h] [rbp-178h]
  __int64 v57; // [rsp+150h] [rbp-168h]
  PVOID v58; // [rsp+160h] [rbp-158h] BYREF
  NTSTATUS v59; // [rsp+168h] [rbp-150h]
  int v60; // [rsp+16Ch] [rbp-14Ch]
  __int128 *v61; // [rsp+170h] [rbp-148h]
  NTSTATUS v62; // [rsp+178h] [rbp-140h]
  __int128 v63; // [rsp+17Ch] [rbp-13Ch]
  __int64 v64; // [rsp+18Ch] [rbp-12Ch]
  int v65; // [rsp+194h] [rbp-124h]
  _KAFFINITY_EX v66; // [rsp+198h] [rbp-120h] BYREF

  Object = ResultLength;
  v42[2] = KeyValueInformationClass;
  memset(&v66, 0, 24);
  DestinationString = 0LL;
  v51 = 0;
  memset((char *)&v66.StaticBitmap[4] + 1, 0, 71);
  Parameter = 0LL;
  v47 = 0LL;
  v48 = 0LL;
  v49 = 0LL;
  LODWORD(v50) = 0;
  memset(&v66.StaticBitmap[14], 0, 32);
  v43 = 0LL;
  if ( CmpTraceRoutine )
    EtwGetKernelTraceTimestamp((LARGE_INTEGER *)&v66.StaticBitmap[14], 0x20000u);
  v35 = 0;
  v36 = 0;
  v39 = 0LL;
  v42[0] = 0;
  RtlInitUnicodeString(&DestinationString, 0LL);
  Privileges = 0LL;
  v53 = 0LL;
  v54 = 0LL;
  v55 = 0LL;
  v56 = 0LL;
  v57 = 0LL;
  memset(&v66.StaticBitmap[2], 0, 17);
  v45[1] = v45;
  v45[0] = v45;
  CmpInitializeThreadInfo(&v66);
  v44 = 0LL;
  v15 = CmpAcquireShutdownRundown(v11, v10, v12, v13);
  if ( !v15 )
  {
    v16 = -1073741431;
    v34 = -1073741431;
    goto LABEL_67;
  }
  if ( (unsigned int)KeyValueInformationClass > KeyValuePartialInformationAlign64 )
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
    v34 = -1073741811;
    goto LABEL_67;
  }
  v18 = KeGetCurrentThread()->PreviousMode;
  v16 = CmObReferenceObjectByHandle((_DWORD)KeyHandle, 1, v14, (unsigned __int8)v18, (__int64)&v39, 0LL);
  v34 = v16;
  if ( v16 < 0 )
    goto LABEL_67;
  if ( CmpTraceRoutine && v39 )
    v43 = *((_QWORD *)v39 + 1);
  if ( (_BYTE)v18 == 1 )
  {
    v52 = 0LL;
    v19 = 0x7FFFFFFF0000LL;
    v20 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)ValueName < 0x7FFFFFFF0000LL )
      v20 = (__int64)ValueName;
    v52.m128i_i32[0] = *(_DWORD *)v20;
    v21 = *(_QWORD *)(v20 + 8);
    v52.m128i_i64[1] = v21;
    DestinationString = (UNICODE_STRING)v52;
    if ( (unsigned __int16)_mm_cvtsi128_si32(v52) && (v21 & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v22 = Length;
    if ( Length && ((unsigned __int8)KeyValueInformation & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v23 = Object;
    if ( (unsigned __int64)Object < 0x7FFFFFFF0000LL )
      v19 = (__int64)Object;
    *(_DWORD *)v19 = *(_DWORD *)v19;
  }
  else
  {
    DestinationString = *ValueName;
    v22 = Length;
    v23 = Object;
  }
  DestinationString.MaximumLength = DestinationString.Length;
  if ( CmpDoesBufferRequireCapturing(v18, (unsigned __int64)DestinationString.Buffer) )
  {
    if ( (_WORD)v26 )
    {
      if ( (unsigned int)v26 > 0x40 )
      {
        Privileges = (PPRIVILEGE_SET)CmpAllocateTransientPoolWithQuota(v25, v26, 0x6E764D43u);
        if ( !Privileges )
        {
          v16 = -1073741670;
          v34 = -1073741670;
          goto LABEL_67;
        }
        Buffer = DestinationString.Buffer;
        LOWORD(v26) = DestinationString.Length;
      }
      else
      {
        Privileges = (PPRIVILEGE_SET)&v66.StaticBitmap[18];
      }
      if ( Privileges )
      {
        memmove(Privileges, Buffer, (unsigned __int16)v26);
        LOWORD(v26) = DestinationString.Length;
      }
    }
    else
    {
      Privileges = 0LL;
    }
    Buffer = Privileges;
    DestinationString.Buffer = (wchar_t *)Privileges;
  }
  if ( (v26 & 1) != 0 )
  {
    v16 = -1073741811;
    v34 = -1073741811;
    goto LABEL_67;
  }
  while ( (_WORD)v26 && !*((_WORD *)Buffer + ((unsigned __int64)(unsigned __int16)v26 >> 1) - 1) )
  {
    LOWORD(v26) = v26 - 2;
    DestinationString.Length = v26;
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v36 = 1;
  if ( CmpCallBackCount && !CmpIsRegistryLockAcquired() )
  {
    *(_QWORD *)&v53 = v39;
    *((_QWORD *)&v53 + 1) = &DestinationString;
    LODWORD(v54) = KeyValueInformationClass;
    *((_QWORD *)&v54 + 1) = KeyValueInformation;
    LODWORD(v55) = v22;
    *((_QWORD *)&v55 + 1) = v23;
    v28 = CmpCallCallBacksEx(8u, (__int64)&v53, 0LL, 1, 0x17u, (__int64)v39, (__int64)v45);
    if ( v28 < 0 )
    {
      v16 = 0;
      if ( v28 != -1073740541 )
        v16 = v28;
      v34 = v16;
      goto LABEL_67;
    }
    v35 = 1;
  }
  v16 = CmKeyBodyRemapToVirtualForEnum(&v39, v18, 1, &v44);
  v34 = v16;
  if ( v16 < 0 )
    goto LABEL_67;
  v16 = CmpBounceContextStart((__int64)&v66.StaticBitmap[2], (unsigned __int64)KeyValueInformation, v22, v18, 3);
  v34 = v16;
  if ( v16 < 0 )
    goto LABEL_67;
  *(_QWORD *)&Parameter = 0LL;
  v47 = DestinationString;
  *(_QWORD *)&v48 = (unsigned int)KeyValueInformationClass;
  *((_QWORD *)&v48 + 1) = v66.StaticBitmap[3];
  v49 = v22;
  v50 = v42;
  if ( !v44 )
    goto LABEL_59;
  *((_QWORD *)&Parameter + 1) = v44;
  v16 = KeExpandKernelStackAndCallout((PEXPAND_STACK_CALLOUT)CmQueryValueKeyCallout, &Parameter, 0x4800uLL);
  v34 = v16;
  if ( v16 < 0 )
    goto LABEL_67;
  v29 = Parameter;
  v16 = Parameter;
  v34 = Parameter;
  if ( (int)Parameter < 0 && (_DWORD)Parameter != -1073741789 && (_DWORD)Parameter != -2147483643 )
  {
    if ( (_DWORD)Parameter != -1073741772 )
      goto LABEL_67;
LABEL_59:
    *((_QWORD *)&Parameter + 1) = v39;
    v16 = KeExpandKernelStackAndCallout((PEXPAND_STACK_CALLOUT)CmQueryValueKeyCallout, &Parameter, 0x4800uLL);
    v34 = v16;
    if ( v16 < 0 )
      goto LABEL_67;
    v29 = Parameter;
    v16 = Parameter;
    v34 = Parameter;
    if ( (int)Parameter < 0 && (_DWORD)Parameter != -1073741789 && (_DWORD)Parameter != -2147483643 )
      goto LABEL_67;
  }
  v30 = v42[0];
  *(_DWORD *)Object = v42[0];
  if ( v29 != -1073741789 )
  {
    if ( v30 < v22 )
      v22 = v30;
    CmpBounceContextCopyDataToCallerBuffer((__int64)&v66.StaticBitmap[2], v22);
  }
LABEL_67:
  if ( v44 )
    ObfDereferenceObject(v44);
  if ( v35 )
  {
    if ( CmpCallBackCount && !CmpIsRegistryLockAcquired() && (_QWORD *)v45[0] != v45 )
    {
      v60 = 0;
      v63 = 0LL;
      v64 = 0LL;
      v65 = 0;
      v58 = v39;
      v59 = v16;
      v62 = v16;
      v61 = &v53;
      CmpCallCallBacksEx(0x17u, (__int64)&v58, 0LL, 0, 0x17u, (__int64)v39, (__int64)v45);
      v16 = v62;
    }
    v34 = v16;
  }
  if ( v36 )
  {
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    v16 = v34;
  }
  if ( v39 )
    ObfDereferenceObject(v39);
  v31 = (unsigned __int64 *)v66.StaticBitmap[3];
  if ( v66.StaticBitmap[3]
    && v66.StaticBitmap[3] != v66.StaticBitmap[2]
    && (_KAFFINITY_EX *)v66.StaticBitmap[3] != (_KAFFINITY_EX *)((char *)&v66.StaticBitmap[4] + 1) )
  {
    if ( (v66.StaticBitmap[4] & 1) != 0 )
      ExFreeToLookasideListEx(&CmpBounceBufferLookaside, (PVOID)v66.StaticBitmap[3]);
    else
      CmSiFreeMemory((PPRIVILEGE_SET)v66.StaticBitmap[3]);
  }
  if ( CmpTraceRoutine )
  {
    p_DestinationString = &DestinationString;
    LOBYTE(p_DestinationString) = 16;
    guard_dispatch_icall_no_overrides(p_DestinationString, &v66.StaticBitmap[14]);
  }
  if ( Privileges )
  {
    v31 = &v66.StaticBitmap[18];
    if ( Privileges != (PPRIVILEGE_SET)&v66.StaticBitmap[18] )
      CmSiFreeMemory(Privileges);
  }
  if ( v15 )
    CmpReleaseShutdownRundown(v31);
  CmpCleanupThreadInfo((_KAFFINITY_EX **)&v66);
  return v16;
}
