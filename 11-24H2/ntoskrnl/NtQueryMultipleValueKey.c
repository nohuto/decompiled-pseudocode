/*
 * XREFs of NtQueryMultipleValueKey @ 0x1409618D0
 * Callers:
 *     <none>
 * Callees:
 *     RtlRaiseStatus @ 0x1402360C0 (RtlRaiseStatus.c)
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     EtwGetKernelTraceTimestamp @ 0x1403AEC60 (EtwGetKernelTraceTimestamp.c)
 *     CmpInitializeThreadInfo @ 0x1403F0160 (CmpInitializeThreadInfo.c)
 *     CmpCleanupThreadInfo @ 0x140414BA0 (CmpCleanupThreadInfo.c)
 *     CmpIsRegistryLockAcquired @ 0x140414BC0 (CmpIsRegistryLockAcquired.c)
 *     CmSiFreeMemory @ 0x140464550 (CmSiFreeMemory.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     CmpCallCallBacksEx @ 0x140843FD0 (CmpCallCallBacksEx.c)
 *     CmQueryMultipleValueKey @ 0x140870B80 (CmQueryMultipleValueKey.c)
 *     ProbeForWrite @ 0x1408BDF50 (ProbeForWrite.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x1408E4560 (CmKeyBodyRemapToVirtualForEnum.c)
 *     CmpCaptureKeyValueArray @ 0x140961F60 (CmpCaptureKeyValueArray.c)
 *     CmpBounceContextCleanup @ 0x1409629E0 (CmpBounceContextCleanup.c)
 *     CmpBounceContextStart @ 0x140962A30 (CmpBounceContextStart.c)
 *     CmObReferenceObjectByHandle @ 0x140BBB350 (CmObReferenceObjectByHandle.c)
 *     CmpAcquireShutdownRundown @ 0x140BBB400 (CmpAcquireShutdownRundown.c)
 *     CmpReleaseShutdownRundown @ 0x140BBB880 (CmpReleaseShutdownRundown.c)
 *     CmpAttachToRegistryProcess @ 0x140BBB8E0 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140BBB920 (CmpDetachFromRegistryProcess.c)
 */

NTSTATUS __cdecl NtQueryMultipleValueKey(
        HANDLE KeyHandle,
        PKEY_VALUE_ENTRY ValueEntries,
        ULONG EntryCount,
        PVOID ValueBuffer,
        PULONG BufferLength,
        PULONG RequiredBufferLength)
{
  __int64 v6; // r14
  int v8; // edi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 i; // r8
  int v15; // r9d
  unsigned int PreviousMode; // r15d
  NTSTATUS v17; // edi
  __int64 v18; // rdi
  PULONG v19; // rax
  struct _KTHREAD *CurrentThread; // rax
  int v21; // eax
  __int64 v22; // rcx
  __int64 v24; // rcx
  __int64 v25; // rcx
  char v26; // [rsp+40h] [rbp-218h]
  char v27; // [rsp+41h] [rbp-217h]
  ULONG Length; // [rsp+44h] [rbp-214h] BYREF
  char Length_4; // [rsp+48h] [rbp-210h]
  ULONG v30; // [rsp+50h] [rbp-208h]
  __int128 Object; // [rsp+58h] [rbp-200h] BYREF
  unsigned int v32[2]; // [rsp+68h] [rbp-1F0h] BYREF
  volatile void *Address; // [rsp+70h] [rbp-1E8h]
  PVOID v34; // [rsp+78h] [rbp-1E0h] BYREF
  _QWORD v35[4]; // [rsp+80h] [rbp-1D8h] BYREF
  __int64 v36; // [rsp+A0h] [rbp-1B8h]
  PPRIVILEGE_SET v37; // [rsp+A8h] [rbp-1B0h] BYREF
  PPRIVILEGE_SET v38; // [rsp+B0h] [rbp-1A8h] BYREF
  int v39; // [rsp+B8h] [rbp-1A0h]
  _QWORD v40[3]; // [rsp+C0h] [rbp-198h] BYREF
  __int64 v41; // [rsp+D8h] [rbp-180h]
  __int128 v42; // [rsp+E0h] [rbp-178h]
  __int64 v43; // [rsp+F0h] [rbp-168h]
  _KAFFINITY_EX v44; // [rsp+F8h] [rbp-160h] BYREF

  Address = ValueBuffer;
  v6 = EntryCount;
  v8 = (int)KeyHandle;
  v35[2] = ValueEntries;
  v30 = EntryCount;
  v35[3] = BufferLength;
  memset(&v44, 0, 24);
  Length = 0;
  v32[0] = 0;
  v39 = 0;
  memset_0(&v44.StaticBitmap[22], 0, 0x58uLL);
  memset(&v44.StaticBitmap[12], 0, 80);
  v36 = 0LL;
  if ( CmpTraceRoutine )
    EtwGetKernelTraceTimestamp((LARGE_INTEGER *)&v44.StaticBitmap[12], 0x20000u);
  v26 = 0;
  v27 = 0;
  Object = 0uLL;
  memset_0(&v44.StaticBitmap[2], 0, 0x48uLL);
  v35[1] = v35;
  v35[0] = v35;
  CmpInitializeThreadInfo(&v44);
  v34 = 0LL;
  v37 = 0LL;
  v38 = 0LL;
  Length_4 = CmpAcquireShutdownRundown(v10, v9, v11, v12);
  if ( !Length_4 )
  {
    v17 = -1073741431;
    goto LABEL_30;
  }
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  LOBYTE(v15) = PreviousMode;
  v17 = CmObReferenceObjectByHandle(v8, 1, i, v15, (__int64)&Object, 0LL);
  if ( v17 >= 0 )
  {
    if ( CmpTraceRoutine && (_QWORD)Object )
      v36 = *(_QWORD *)(Object + 8);
    if ( (_BYTE)PreviousMode == 1 )
    {
      v18 = 0x7FFFFFFF0000LL;
      v19 = (PULONG)0x7FFFFFFF0000LL;
      if ( (unsigned __int64)BufferLength < 0x7FFFFFFF0000LL )
        v19 = BufferLength;
      Length = *v19;
      if ( (unsigned int)v6 > 0x10000 )
        RtlRaiseStatus(-1073741670);
      ProbeForWrite(ValueEntries, 24 * v6, 4u);
      if ( RequiredBufferLength )
      {
        if ( (unsigned __int64)RequiredBufferLength < 0x7FFFFFFF0000LL )
          v18 = (__int64)RequiredBufferLength;
        *(_DWORD *)v18 = *(_DWORD *)v18;
      }
      ProbeForWrite(Address, Length, 4u);
    }
    else
    {
      Length = *BufferLength;
    }
    LOBYTE(i) = PreviousMode;
    v17 = CmpCaptureKeyValueArray((_DWORD)ValueEntries, v6, i, (unsigned int)&Object + 8, (__int64)&v37, (__int64)&v38);
    if ( v17 >= 0 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v27 = 1;
      if ( !CmpCallBackCount || CmpIsRegistryLockAcquired() )
      {
LABEL_22:
        v17 = CmKeyBodyRemapToVirtualForEnum((PVOID *)&Object, PreviousMode, 1, &v34);
        if ( v17 >= 0 )
        {
          v17 = CmpBounceContextStart(&v44.StaticBitmap[22], Address, Length, PreviousMode, 4);
          if ( v17 >= 0 )
          {
            CmpAttachToRegistryProcess((PRKAPC_STATE)&v44.StaticBitmap[16]);
            v17 = CmQueryMultipleValueKey(
                    Object,
                    (__int64)v34,
                    *((__int64 *)&Object + 1),
                    v6,
                    v44.StaticBitmap[23],
                    &Length,
                    v32);
            CmpDetachFromRegistryProcess(&v44.StaticBitmap[16]);
            if ( RequiredBufferLength )
              *RequiredBufferLength = v32[0];
            if ( (int)(v17 + 0x80000000) < 0 || v17 == -2147483643 )
            {
              i = Length;
              v13 = v44.StaticBitmap[23];
              if ( v44.StaticBitmap[22] != v44.StaticBitmap[23] )
                memmove((void *)v44.StaticBitmap[22], (const void *)v44.StaticBitmap[23], Length);
            }
          }
        }
        goto LABEL_30;
      }
      *(_OWORD *)&v44.StaticBitmap[2] = Object;
      LODWORD(v44.StaticBitmap[4]) = v6;
      v44.StaticBitmap[5] = (unsigned __int64)Address;
      v44.StaticBitmap[6] = (unsigned __int64)&Length;
      v44.StaticBitmap[7] = (unsigned __int64)RequiredBufferLength;
      v21 = CmpCallCallBacksEx(9u, (__int64)&v44.StaticBitmap[2], 0LL, 1, 0x18u, Object, (__int64)v35);
      if ( v21 >= 0 )
      {
        v26 = 1;
        goto LABEL_22;
      }
      v17 = 0;
      if ( v21 != -1073740541 )
        v17 = v21;
    }
  }
LABEL_30:
  if ( v34 )
    ObfDereferenceObject(v34);
  if ( v26 && CmpCallBackCount && !CmpIsRegistryLockAcquired() && (_QWORD *)v35[0] != v35 )
  {
    v42 = 0LL;
    v43 = 0LL;
    v40[0] = Object;
    v40[1] = (unsigned int)v17;
    v41 = (unsigned int)v17;
    v40[2] = &v44.StaticBitmap[2];
    CmpCallCallBacksEx(0x18u, (__int64)v40, 0LL, 0, 0x18u, Object, (__int64)v35);
    v17 = v41;
  }
  if ( *((_QWORD *)&Object + 1) )
  {
    *BufferLength = Length;
    if ( ((v17 + 0x80000000) & 0x80000000) != 0 || v17 == -2147483643 )
    {
      for ( i = 0LL; ; i = (unsigned int)(i + 1) )
      {
        v32[1] = i;
        if ( (unsigned int)i >= (unsigned int)v6 )
          break;
        v13 = 3 * i;
        v24 = *((_QWORD *)&Object + 1);
        *(&ValueEntries->DataLength + 2 * v13) = *(_DWORD *)(*((_QWORD *)&Object + 1) + 24 * i + 8);
        *(&ValueEntries->DataOffset + 2 * v13) = *(_DWORD *)(v24 + 24 * i + 12);
        *(&ValueEntries->Type + 2 * v13) = *(_DWORD *)(v24 + 24 * i + 16);
      }
    }
  }
  if ( v27 )
    KeLeaveCriticalRegion();
  if ( (_QWORD)Object )
    ObfDereferenceObject((PVOID)Object);
  CmpBounceContextCleanup(&v44.StaticBitmap[22], v13, i);
  if ( CmpTraceRoutine )
  {
    v25 = v36;
    LOBYTE(v25) = 19;
    guard_dispatch_icall_no_overrides(v25, &v44.StaticBitmap[12]);
  }
  if ( Length_4 )
    CmpReleaseShutdownRundown(v22);
  if ( *((_QWORD *)&Object + 1) )
    CmSiFreeMemory(*((PPRIVILEGE_SET *)&Object + 1));
  if ( v37 )
    CmSiFreeMemory(v37);
  if ( v38 )
    CmSiFreeMemory(v38);
  CmpCleanupThreadInfo((_KAFFINITY_EX **)&v44);
  return v17;
}
