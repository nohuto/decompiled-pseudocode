/*
 * XREFs of NtQueryValueKey @ 0x140AE41C0
 * Callers:
 *     ExpWatchProductTypeWork @ 0x1406F6C60 (ExpWatchProductTypeWork.c)
 *     IopLoadDriver @ 0x1409C90C0 (IopLoadDriver.c)
 *     InitSafeBoot @ 0x140C0B900 (InitSafeBoot.c)
 *     IoInitSystemPreDrivers @ 0x140C1AA0C (IoInitSystemPreDrivers.c)
 *     IopProtectSystemPartition @ 0x140C1E3BC (IopProtectSystemPartition.c)
 *     ExpWatchProductTypeInitialization @ 0x140C416CC (ExpWatchProductTypeInitialization.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x1402595C0 (KiLeaveCriticalRegionUnsafe.c)
 *     KeExpandKernelStackAndCallout @ 0x14027BAB0 (KeExpandKernelStackAndCallout.c)
 *     ExFreeToLookasideListEx @ 0x1402CD350 (ExFreeToLookasideListEx.c)
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     EtwGetKernelTraceTimestamp @ 0x1403C00A0 (EtwGetKernelTraceTimestamp.c)
 *     CmpInitializeThreadInfo @ 0x1403FA250 (CmpInitializeThreadInfo.c)
 *     CmpCleanupThreadInfo @ 0x14041EE60 (CmpCleanupThreadInfo.c)
 *     CmpIsRegistryLockAcquired @ 0x14041EE80 (CmpIsRegistryLockAcquired.c)
 *     RtlInitUnicodeString @ 0x1404241A0 (RtlInitUnicodeString.c)
 *     CmpAllocateTransientPoolWithQuota @ 0x1404590C0 (CmpAllocateTransientPoolWithQuota.c)
 *     CmSiFreeMemory @ 0x14046B8D0 (CmSiFreeMemory.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     CmpCallCallBacksEx @ 0x140847D10 (CmpCallCallBacksEx.c)
 *     ObReferenceObjectByHandle @ 0x14084AF40 (ObReferenceObjectByHandle.c)
 *     ExRaiseDatatypeMisalignment @ 0x14089B1F0 (ExRaiseDatatypeMisalignment.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x14090CE40 (CmKeyBodyRemapToVirtualForEnum.c)
 *     CmpDoesBufferRequireCapturing @ 0x14097A110 (CmpDoesBufferRequireCapturing.c)
 *     CmpBounceContextStart @ 0x14097A220 (CmpBounceContextStart.c)
 *     CmpBounceContextCopyDataToCallerBuffer @ 0x1409DF4D0 (CmpBounceContextCopyDataToCallerBuffer.c)
 *     CmObReferenceObjectByHandle @ 0x140BB9350 (CmObReferenceObjectByHandle.c)
 *     CmpAcquireShutdownRundown @ 0x140BB9400 (CmpAcquireShutdownRundown.c)
 *     CmpReleaseShutdownRundown @ 0x140BB9880 (CmpReleaseShutdownRundown.c)
 */

__int64 __fastcall NtQueryValueKey(
        HANDLE Handle,
        UNICODE_STRING *a2,
        unsigned int a3,
        unsigned __int64 a4,
        unsigned int a5,
        void *a6)
{
  unsigned int v7; // r15d
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  const void *Buffer; // rdx
  __int64 Length; // r8
  __int64 v16; // r9
  char v17; // r12
  int v18; // ebx
  KPROCESSOR_MODE PreviousMode; // r9
  int v20; // r15d
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  unsigned int v24; // esi
  PVOID v25; // rbx
  struct _KTHREAD *CurrentThread; // rax
  int v27; // eax
  int v28; // eax
  unsigned int v29; // ecx
  unsigned __int64 *v30; // rcx
  UNICODE_STRING *p_DestinationString; // rcx
  int v33; // [rsp+44h] [rbp-274h]
  char v34; // [rsp+48h] [rbp-270h]
  char v35; // [rsp+49h] [rbp-26Fh]
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-268h] BYREF
  PVOID v38; // [rsp+60h] [rbp-258h] BYREF
  PPRIVILEGE_SET Privileges; // [rsp+68h] [rbp-250h]
  PVOID Object; // [rsp+70h] [rbp-248h] BYREF
  _DWORD v41[4]; // [rsp+78h] [rbp-240h] BYREF
  __int64 v42; // [rsp+88h] [rbp-230h]
  PVOID v43; // [rsp+90h] [rbp-228h] BYREF
  _QWORD v44[3]; // [rsp+98h] [rbp-220h] BYREF
  __int128 Parameter; // [rsp+B0h] [rbp-208h] BYREF
  UNICODE_STRING v46; // [rsp+C0h] [rbp-1F8h]
  __int128 v47; // [rsp+D0h] [rbp-1E8h]
  __int64 v48; // [rsp+E0h] [rbp-1D8h]
  _DWORD *v49; // [rsp+E8h] [rbp-1D0h]
  int v50; // [rsp+F0h] [rbp-1C8h]
  __m128i v51; // [rsp+100h] [rbp-1B8h]
  __int128 v52; // [rsp+110h] [rbp-1A8h] BYREF
  __int128 v53; // [rsp+120h] [rbp-198h]
  __int128 v54; // [rsp+130h] [rbp-188h]
  __int128 v55; // [rsp+140h] [rbp-178h]
  __int64 v56; // [rsp+150h] [rbp-168h]
  PVOID v57; // [rsp+160h] [rbp-158h] BYREF
  int v58; // [rsp+168h] [rbp-150h]
  int v59; // [rsp+16Ch] [rbp-14Ch]
  __int128 *v60; // [rsp+170h] [rbp-148h]
  int v61; // [rsp+178h] [rbp-140h]
  __int128 v62; // [rsp+17Ch] [rbp-13Ch]
  __int64 v63; // [rsp+18Ch] [rbp-12Ch]
  int v64; // [rsp+194h] [rbp-124h]
  _KAFFINITY_EX v65; // [rsp+198h] [rbp-120h] BYREF

  v7 = a3;
  Object = a6;
  v41[2] = a3;
  memset(&v65, 0, 24);
  DestinationString = 0LL;
  v50 = 0;
  memset((char *)&v65.StaticBitmap[4] + 1, 0, 71);
  Parameter = 0LL;
  v46 = 0LL;
  v47 = 0LL;
  v48 = 0LL;
  LODWORD(v49) = 0;
  memset(&v65.StaticBitmap[14], 0, 32);
  v42 = 0LL;
  if ( CmpTraceRoutine )
    EtwGetKernelTraceTimestamp((LARGE_INTEGER *)&v65.StaticBitmap[14], 0x20000u);
  v34 = 0;
  v35 = 0;
  v38 = 0LL;
  v41[0] = 0;
  RtlInitUnicodeString(&DestinationString, 0LL);
  Privileges = 0LL;
  v52 = 0LL;
  v53 = 0LL;
  v54 = 0LL;
  v55 = 0LL;
  v56 = 0LL;
  memset(&v65.StaticBitmap[2], 0, 17);
  v44[1] = v44;
  v44[0] = v44;
  CmpInitializeThreadInfo(&v65);
  v43 = 0LL;
  v17 = CmpAcquireShutdownRundown(v11, v10, v12, v13);
  if ( !v17 )
  {
    v18 = -1073741431;
    v33 = -1073741431;
    goto LABEL_69;
  }
  if ( v7 > 4 )
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
    v18 = -1073741811;
    v33 = -1073741811;
    goto LABEL_69;
  }
  v20 = KeGetCurrentThread()->PreviousMode;
  v18 = CmObReferenceObjectByHandle((_DWORD)Handle, 1, Length, (unsigned __int8)v20, (__int64)&v38, 0LL);
  v33 = v18;
  if ( v18 < 0 )
    goto LABEL_68;
  if ( CmpTraceRoutine && v38 )
    v42 = *((_QWORD *)v38 + 1);
  if ( (_BYTE)v20 == 1 )
  {
    v51 = 0LL;
    v21 = 0x7FFFFFFF0000LL;
    v22 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a2 < 0x7FFFFFFF0000LL )
      v22 = (__int64)a2;
    v51.m128i_i32[0] = *(_DWORD *)v22;
    v23 = *(_QWORD *)(v22 + 8);
    v51.m128i_i64[1] = v23;
    DestinationString = (UNICODE_STRING)v51;
    if ( (unsigned __int16)_mm_cvtsi128_si32(v51) && (v23 & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    v24 = a5;
    if ( a5 && (a4 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v25 = Object;
    if ( (unsigned __int64)Object < 0x7FFFFFFF0000LL )
      v21 = (__int64)Object;
    *(_DWORD *)v21 = *(_DWORD *)v21;
  }
  else
  {
    DestinationString = *a2;
    v24 = a5;
    v25 = Object;
  }
  DestinationString.MaximumLength = DestinationString.Length;
  if ( CmpDoesBufferRequireCapturing(v20, (unsigned __int64)DestinationString.Buffer) )
  {
    if ( (_WORD)Length )
    {
      if ( (unsigned int)Length > 0x40 )
      {
        Privileges = (PPRIVILEGE_SET)CmpAllocateTransientPoolWithQuota();
        if ( !Privileges )
        {
          v18 = -1073741670;
          v33 = -1073741670;
          v7 = a3;
          goto LABEL_69;
        }
        Buffer = DestinationString.Buffer;
        Length = DestinationString.Length;
      }
      else
      {
        Privileges = (PPRIVILEGE_SET)&v65.StaticBitmap[18];
      }
      if ( Privileges )
      {
        memmove(Privileges, Buffer, (unsigned __int16)Length);
        Length = DestinationString.Length;
      }
    }
    else
    {
      Privileges = 0LL;
    }
    Buffer = Privileges;
    DestinationString.Buffer = (wchar_t *)Privileges;
  }
  if ( (Length & 1) != 0 )
  {
    v18 = -1073741811;
    v33 = -1073741811;
    v7 = a3;
    goto LABEL_69;
  }
  while ( (_WORD)Length && !*((_WORD *)Buffer + ((unsigned __int64)(unsigned __int16)Length >> 1) - 1) )
  {
    LOWORD(Length) = Length - 2;
    DestinationString.Length = Length;
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v35 = 1;
  if ( CmpCallBackCount && !CmpIsRegistryLockAcquired() )
  {
    *(_QWORD *)&v52 = v38;
    *((_QWORD *)&v52 + 1) = &DestinationString;
    LODWORD(v53) = a3;
    *((_QWORD *)&v53 + 1) = a4;
    LODWORD(v54) = v24;
    *((_QWORD *)&v54 + 1) = v25;
    v27 = CmpCallCallBacksEx(8u, (__int64)&v52, 0LL, 1, 0x17u, (__int64)v38, (__int64)v44);
    if ( v27 < 0 )
    {
      v18 = 0;
      if ( v27 != -1073740541 )
        v18 = v27;
      v33 = v18;
      goto LABEL_68;
    }
    v34 = 1;
  }
  v18 = CmKeyBodyRemapToVirtualForEnum(&v38, v20, 1, &v43);
  v33 = v18;
  if ( v18 < 0 || (v18 = CmpBounceContextStart((__int64)&v65.StaticBitmap[2], a4, v24, v20, 3), v33 = v18, v18 < 0) )
  {
LABEL_68:
    v7 = a3;
    goto LABEL_69;
  }
  *(_QWORD *)&Parameter = 0LL;
  v46 = DestinationString;
  v7 = a3;
  *(_QWORD *)&v47 = a3;
  *((_QWORD *)&v47 + 1) = v65.StaticBitmap[3];
  v48 = v24;
  v49 = v41;
  if ( !v43 )
    goto LABEL_59;
  *((_QWORD *)&Parameter + 1) = v43;
  v18 = KeExpandKernelStackAndCallout((PEXPAND_STACK_CALLOUT)CmQueryValueKeyCallout, &Parameter, 0x4800uLL);
  v33 = v18;
  if ( v18 < 0 )
    goto LABEL_69;
  v28 = Parameter;
  v18 = Parameter;
  v33 = Parameter;
  if ( (int)Parameter < 0 && (_DWORD)Parameter != -1073741789 && (_DWORD)Parameter != -2147483643 )
  {
    if ( (_DWORD)Parameter != -1073741772 )
      goto LABEL_69;
LABEL_59:
    *((_QWORD *)&Parameter + 1) = v38;
    v18 = KeExpandKernelStackAndCallout((PEXPAND_STACK_CALLOUT)CmQueryValueKeyCallout, &Parameter, 0x4800uLL);
    v33 = v18;
    if ( v18 < 0 )
      goto LABEL_69;
    v28 = Parameter;
    v18 = Parameter;
    v33 = Parameter;
    if ( (int)Parameter < 0 && (_DWORD)Parameter != -1073741789 && (_DWORD)Parameter != -2147483643 )
      goto LABEL_69;
  }
  v29 = v41[0];
  Buffer = Object;
  *(_DWORD *)Object = v41[0];
  if ( v28 != -1073741789 )
  {
    if ( v29 < v24 )
      v24 = v29;
    CmpBounceContextCopyDataToCallerBuffer((__int64)&v65.StaticBitmap[2], v24);
  }
LABEL_69:
  if ( v43 )
    ObfDereferenceObject(v43);
  if ( v34 )
  {
    if ( CmpCallBackCount && !CmpIsRegistryLockAcquired() && (_QWORD *)v44[0] != v44 )
    {
      v59 = 0;
      v62 = 0LL;
      v63 = 0LL;
      v64 = 0;
      v57 = v38;
      v58 = v18;
      v61 = v18;
      v60 = &v52;
      CmpCallCallBacksEx(0x17u, (__int64)&v57, 0LL, 0, 0x17u, (__int64)v38, (__int64)v44);
      v18 = v61;
    }
    v33 = v18;
  }
  if ( v35 )
  {
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), (__int64)Buffer, Length, v16);
    v18 = v33;
  }
  if ( v38 )
    ObfDereferenceObject(v38);
  v30 = (unsigned __int64 *)v65.StaticBitmap[3];
  if ( v65.StaticBitmap[3]
    && v65.StaticBitmap[3] != v65.StaticBitmap[2]
    && (_KAFFINITY_EX *)v65.StaticBitmap[3] != (_KAFFINITY_EX *)((char *)&v65.StaticBitmap[4] + 1) )
  {
    if ( (v65.StaticBitmap[4] & 1) != 0 )
      ExFreeToLookasideListEx(&CmpBounceBufferLookaside, (PVOID)v65.StaticBitmap[3]);
    else
      CmSiFreeMemory((PPRIVILEGE_SET)v65.StaticBitmap[3]);
  }
  if ( CmpTraceRoutine )
  {
    p_DestinationString = &DestinationString;
    LOBYTE(p_DestinationString) = 16;
    guard_dispatch_icall_no_overrides(p_DestinationString, &v65.StaticBitmap[14], (unsigned int)v18, v7);
  }
  if ( Privileges )
  {
    v30 = &v65.StaticBitmap[18];
    if ( Privileges != (PPRIVILEGE_SET)&v65.StaticBitmap[18] )
      CmSiFreeMemory(Privileges);
  }
  if ( v17 )
    CmpReleaseShutdownRundown(v30);
  CmpCleanupThreadInfo((_KAFFINITY_EX **)&v65);
  return (unsigned int)v18;
}
