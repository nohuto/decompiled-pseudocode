/*
 * XREFs of NtQueryValueKey @ 0x140AD3580
 * Callers:
 *     ExpWatchProductTypeWork @ 0x1406EB400 (ExpWatchProductTypeWork.c)
 *     IopLoadDriver @ 0x1409B0D50 (IopLoadDriver.c)
 *     InitSafeBoot @ 0x140BFA900 (InitSafeBoot.c)
 *     IoInitSystemPreDrivers @ 0x140C0996C (IoInitSystemPreDrivers.c)
 *     IopProtectSystemPartition @ 0x140C0D254 (IopProtectSystemPartition.c)
 *     ExpWatchProductTypeInitialization @ 0x140C303BC (ExpWatchProductTypeInitialization.c)
 * Callees:
 *     CmpIsRegistryLockAcquired @ 0x140206FB0 (CmpIsRegistryLockAcquired.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x14029B9E0 (KiLeaveCriticalRegionUnsafe.c)
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     EtwGetKernelTraceTimestamp @ 0x14031CDD0 (EtwGetKernelTraceTimestamp.c)
 *     ExFreeToLookasideListEx @ 0x1403A52A0 (ExFreeToLookasideListEx.c)
 *     CmpInitializeThreadInfo @ 0x1403F5C00 (CmpInitializeThreadInfo.c)
 *     CmCleanupThreadInfo @ 0x140429780 (CmCleanupThreadInfo.c)
 *     RtlInitUnicodeString @ 0x14043FFA0 (RtlInitUnicodeString.c)
 *     CmpAllocateTransientPoolWithQuota @ 0x140458628 (CmpAllocateTransientPoolWithQuota.c)
 *     CmSiFreeMemory @ 0x14046F140 (CmSiFreeMemory.c)
 *     KeExpandKernelStackAndCallout @ 0x140489A50 (KeExpandKernelStackAndCallout.c)
 *     Feature_RegistryStackExpand__private_IsEnabledDeviceUsageNoInline @ 0x14065BF30 (Feature_RegistryStackExpand__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x140840E80 (CmKeyBodyRemapToVirtualForEnum.c)
 *     CmpCallCallBacksEx @ 0x14084C050 (CmpCallCallBacksEx.c)
 *     ObReferenceObjectByHandle @ 0x14084F190 (ObReferenceObjectByHandle.c)
 *     ExRaiseDatatypeMisalignment @ 0x14085AF60 (ExRaiseDatatypeMisalignment.c)
 *     CmpDoesBufferRequireCapturing @ 0x14086D480 (CmpDoesBufferRequireCapturing.c)
 *     CmQueryValueKey @ 0x140878350 (CmQueryValueKey.c)
 *     CmpBounceContextStart @ 0x140996800 (CmpBounceContextStart.c)
 *     CmpBounceContextCopyDataToCallerBuffer @ 0x1409E0720 (CmpBounceContextCopyDataToCallerBuffer.c)
 *     CmObReferenceObjectByHandle @ 0x140BA93B0 (CmObReferenceObjectByHandle.c)
 *     CmpAcquireShutdownRundown @ 0x140BA9460 (CmpAcquireShutdownRundown.c)
 *     CmpReleaseShutdownRundown @ 0x140BA9970 (CmpReleaseShutdownRundown.c)
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
  const void *Buffer; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  NTSTATUS v17; // ebx
  KPROCESSOR_MODE PreviousMode; // r9
  int v19; // r15d
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  ULONG v23; // esi
  struct _KTHREAD *CurrentThread; // rax
  int v25; // eax
  int ValueKey; // eax
  ULONG v27; // ecx
  _BYTE *v28; // rcx
  UNICODE_STRING *p_DestinationString; // rcx
  int v31; // [rsp+40h] [rbp-278h]
  char v32; // [rsp+44h] [rbp-274h]
  char v33; // [rsp+45h] [rbp-273h]
  char v34; // [rsp+46h] [rbp-272h]
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-268h] BYREF
  PVOID v37; // [rsp+60h] [rbp-258h] BYREF
  PPRIVILEGE_SET Privileges; // [rsp+68h] [rbp-250h]
  _DWORD v39[4]; // [rsp+70h] [rbp-248h] BYREF
  __int128 Parameter; // [rsp+80h] [rbp-238h] BYREF
  UNICODE_STRING v41; // [rsp+90h] [rbp-228h]
  __int128 v42; // [rsp+A0h] [rbp-218h]
  __int64 v43; // [rsp+B0h] [rbp-208h]
  _DWORD *v44; // [rsp+B8h] [rbp-200h]
  PVOID Object[2]; // [rsp+C0h] [rbp-1F8h] BYREF
  __int64 v46; // [rsp+D0h] [rbp-1E8h]
  PVOID v47; // [rsp+D8h] [rbp-1E0h] BYREF
  _QWORD v48[2]; // [rsp+E0h] [rbp-1D8h] BYREF
  PULONG v49; // [rsp+F0h] [rbp-1C8h]
  __m128i v50; // [rsp+100h] [rbp-1B8h]
  _BYTE v51[288]; // [rsp+110h] [rbp-1A8h] BYREF
  _BYTE v52[64]; // [rsp+230h] [rbp-88h] BYREF

  v49 = ResultLength;
  v39[2] = KeyValueInformationClass;
  *(_OWORD *)v51 = 0LL;
  DestinationString = 0LL;
  LODWORD(Object[0]) = 0;
  memset(&v51[177], 0, 71);
  Parameter = 0LL;
  v41 = 0LL;
  v42 = 0LL;
  v43 = 0LL;
  LODWORD(v44) = 0;
  memset(&v51[256], 0, 32);
  v46 = 0LL;
  if ( CmpTraceRoutine )
    EtwGetKernelTraceTimestamp((LARGE_INTEGER *)&v51[256], 0x20000u);
  v32 = 0;
  v33 = 0;
  v37 = 0LL;
  v39[0] = 0;
  RtlInitUnicodeString(&DestinationString, 0LL);
  Privileges = 0LL;
  memset(&v51[16], 0, 72);
  memset(&v51[160], 0, 17);
  v48[1] = v48;
  v48[0] = v48;
  CmpInitializeThreadInfo((_KAFFINITY_EX *)v51);
  v47 = 0LL;
  v34 = CmpAcquireShutdownRundown(v11, v10, v12, v13);
  if ( !v34 )
  {
    v17 = -1073741431;
    v31 = -1073741431;
    goto LABEL_71;
  }
  if ( (unsigned int)KeyValueInformationClass > KeyValuePartialInformationAlign64 )
  {
    if ( CmpTraceRoutine )
    {
      if ( KeyHandle )
      {
        PreviousMode = KeGetCurrentThread()->PreviousMode;
        Object[0] = 0LL;
        if ( ObReferenceObjectByHandle(KeyHandle, 0, (POBJECT_TYPE)CmKeyObjectType, PreviousMode, Object, 0LL) >= 0 )
          ObfDereferenceObject(Object[0]);
      }
    }
    v17 = -1073741811;
    v31 = -1073741811;
    goto LABEL_71;
  }
  v19 = KeGetCurrentThread()->PreviousMode;
  v17 = CmObReferenceObjectByHandle((_DWORD)KeyHandle, 1, v15, (unsigned __int8)v19, (__int64)&v37, 0LL);
  v31 = v17;
  if ( v17 < 0 )
    goto LABEL_71;
  if ( CmpTraceRoutine && v37 )
    v46 = *((_QWORD *)v37 + 1);
  if ( (_BYTE)v19 == 1 )
  {
    v50 = 0LL;
    v20 = 0x7FFFFFFF0000LL;
    v21 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)ValueName < 0x7FFFFFFF0000LL )
      v21 = (__int64)ValueName;
    v50.m128i_i32[0] = *(_DWORD *)v21;
    v22 = *(_QWORD *)(v21 + 8);
    v50.m128i_i64[1] = v22;
    DestinationString = (UNICODE_STRING)v50;
    if ( (unsigned __int16)_mm_cvtsi128_si32(v50) && (v22 & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v23 = Length;
    if ( Length && ((unsigned __int8)KeyValueInformation & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (unsigned __int64)ResultLength < 0x7FFFFFFF0000LL )
      v20 = (__int64)ResultLength;
    *(_DWORD *)v20 = *(_DWORD *)v20;
  }
  else
  {
    DestinationString = *ValueName;
    v23 = Length;
  }
  DestinationString.MaximumLength = DestinationString.Length;
  if ( CmpDoesBufferRequireCapturing(v19, (unsigned __int64)DestinationString.Buffer) )
  {
    if ( (_WORD)v15 )
    {
      if ( (unsigned int)v15 > 0x40 )
      {
        Privileges = (PPRIVILEGE_SET)CmpAllocateTransientPoolWithQuota();
        if ( !Privileges )
        {
          v17 = -1073741670;
          v31 = -1073741670;
          goto LABEL_71;
        }
        Buffer = DestinationString.Buffer;
        v15 = DestinationString.Length;
      }
      else
      {
        Privileges = (PPRIVILEGE_SET)v52;
      }
      if ( Privileges )
      {
        memmove(Privileges, Buffer, (unsigned __int16)v15);
        v15 = DestinationString.Length;
      }
    }
    else
    {
      Privileges = 0LL;
    }
    Buffer = Privileges;
    DestinationString.Buffer = (wchar_t *)Privileges;
  }
  if ( (v15 & 1) != 0 )
  {
    v17 = -1073741811;
    v31 = -1073741811;
    goto LABEL_71;
  }
  while ( (_WORD)v15 && !*((_WORD *)Buffer + ((unsigned __int64)(unsigned __int16)v15 >> 1) - 1) )
  {
    LOWORD(v15) = v15 - 2;
    DestinationString.Length = v15;
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v33 = 1;
  if ( CmpCallBackCount && !CmpIsRegistryLockAcquired() )
  {
    *(_QWORD *)&v51[16] = v37;
    *(_QWORD *)&v51[24] = &DestinationString;
    *(_DWORD *)&v51[32] = KeyValueInformationClass;
    *(_QWORD *)&v51[40] = KeyValueInformation;
    *(_DWORD *)&v51[48] = v23;
    *(_QWORD *)&v51[56] = v49;
    v25 = CmpCallCallBacksEx(8u, (__int64)&v51[16], 0LL, 1, 0x17u, (__int64)v37, (__int64)v48);
    if ( v25 < 0 )
    {
      v17 = 0;
      if ( v25 != -1073740541 )
        v17 = v25;
      v31 = v17;
      goto LABEL_71;
    }
    v32 = 1;
  }
  v17 = CmKeyBodyRemapToVirtualForEnum(&v37, v19, 1, &v47);
  v31 = v17;
  if ( v17 < 0 )
    goto LABEL_71;
  v17 = CmpBounceContextStart((__int64)&v51[160], (unsigned __int64)KeyValueInformation, v23, v19, 3);
  v31 = v17;
  if ( v17 < 0 )
    goto LABEL_71;
  *(_QWORD *)&Parameter = 0LL;
  v41 = DestinationString;
  *(_QWORD *)&v42 = (unsigned int)KeyValueInformationClass;
  *((_QWORD *)&v42 + 1) = *(_QWORD *)&v51[168];
  v43 = v23;
  v44 = v39;
  if ( v47 )
  {
    *((_QWORD *)&Parameter + 1) = v47;
    if ( (unsigned int)Feature_RegistryStackExpand__private_IsEnabledDeviceUsageNoInline() )
    {
      v17 = KeExpandKernelStackAndCallout((PEXPAND_STACK_CALLOUT)CmQueryValueKeyCallout, &Parameter, 0x4800uLL);
      v31 = v17;
      if ( v17 < 0 )
        goto LABEL_71;
      ValueKey = Parameter;
    }
    else
    {
      *(UNICODE_STRING *)Object = v41;
      ValueKey = CmQueryValueKey(
                   *((__int64 *)&Parameter + 1),
                   (unsigned __int16 *)Object,
                   v42,
                   *((size_t *)&v42 + 1),
                   v43,
                   (__int64)v44);
      LODWORD(Parameter) = ValueKey;
    }
    v17 = ValueKey;
    v31 = ValueKey;
    if ( ValueKey >= 0 || ValueKey == -1073741789 || ValueKey == -2147483643 )
    {
LABEL_67:
      v27 = v39[0];
      Buffer = v49;
      *v49 = v39[0];
      if ( ValueKey != -1073741789 )
      {
        if ( v27 < v23 )
          v23 = v27;
        CmpBounceContextCopyDataToCallerBuffer((__int64)&v51[160], v23);
      }
      goto LABEL_71;
    }
    if ( ValueKey != -1073741772 )
      goto LABEL_71;
  }
  *((_QWORD *)&Parameter + 1) = v37;
  if ( (unsigned int)Feature_RegistryStackExpand__private_IsEnabledDeviceUsageNoInline() )
  {
    v17 = KeExpandKernelStackAndCallout((PEXPAND_STACK_CALLOUT)CmQueryValueKeyCallout, &Parameter, 0x4800uLL);
    v31 = v17;
    if ( v17 < 0 )
      goto LABEL_71;
    ValueKey = Parameter;
  }
  else
  {
    *(UNICODE_STRING *)Object = v41;
    ValueKey = CmQueryValueKey(
                 *((__int64 *)&Parameter + 1),
                 (unsigned __int16 *)Object,
                 v42,
                 *((size_t *)&v42 + 1),
                 v43,
                 (__int64)v44);
    LODWORD(Parameter) = ValueKey;
  }
  v17 = ValueKey;
  v31 = ValueKey;
  if ( ValueKey >= 0 || ValueKey == -1073741789 || ValueKey == -2147483643 )
    goto LABEL_67;
LABEL_71:
  if ( v47 )
    ObfDereferenceObject(v47);
  if ( v32 )
  {
    if ( CmpCallBackCount && !CmpIsRegistryLockAcquired() && (_QWORD *)v48[0] != v48 )
    {
      *(_DWORD *)&v51[108] = 0;
      memset(&v51[124], 0, 28);
      *(_QWORD *)&v51[96] = v37;
      *(_DWORD *)&v51[104] = v17;
      *(_DWORD *)&v51[120] = v17;
      *(_QWORD *)&v51[112] = &v51[16];
      CmpCallCallBacksEx(0x17u, (__int64)&v51[96], 0LL, 0, 0x17u, (__int64)v37, (__int64)v48);
      v17 = *(_DWORD *)&v51[120];
    }
    v31 = v17;
  }
  if ( v33 )
  {
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), (__int64)Buffer, v15, v16);
    v17 = v31;
  }
  if ( v37 )
    ObfDereferenceObject(v37);
  v28 = *(_BYTE **)&v51[168];
  if ( *(_QWORD *)&v51[168] && *(_QWORD *)&v51[168] != *(_QWORD *)&v51[160] && *(_BYTE **)&v51[168] != &v51[177] )
  {
    if ( (v51[176] & 1) != 0 )
      ExFreeToLookasideListEx(&CmpBounceBufferLookaside, *(PVOID *)&v51[168]);
    else
      CmSiFreeMemory(*(PPRIVILEGE_SET *)&v51[168]);
  }
  if ( CmpTraceRoutine )
  {
    p_DestinationString = &DestinationString;
    LOBYTE(p_DestinationString) = 16;
    guard_dispatch_icall_no_overrides(p_DestinationString);
  }
  if ( Privileges )
  {
    v28 = v52;
    if ( Privileges != (PPRIVILEGE_SET)v52 )
      CmSiFreeMemory(Privileges);
  }
  if ( v34 )
    CmpReleaseShutdownRundown(v28);
  CmCleanupThreadInfo((_KAFFINITY_EX **)v51);
  return v17;
}
