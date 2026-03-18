/*
 * XREFs of CmUnloadKey @ 0x14092B0F8
 * Callers:
 *     NtUnloadKey2 @ 0x1407D13F0 (NtUnloadKey2.c)
 *     NtUnloadKey @ 0x14092AF50 (NtUnloadKey.c)
 *     NtUnloadKeyEx @ 0x140A974B0 (NtUnloadKeyEx.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     KeResetEvent @ 0x14028EEC0 (KeResetEvent.c)
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     KeDelayExecutionThread @ 0x14033BC60 (KeDelayExecutionThread.c)
 *     CmpIsRegistryLockAcquired @ 0x14041EE80 (CmpIsRegistryLockAcquired.c)
 *     RtlInitUnicodeString @ 0x1404241A0 (RtlInitUnicodeString.c)
 *     CmpAllocateTransientPoolWithQuota @ 0x1404590C0 (CmpAllocateTransientPoolWithQuota.c)
 *     CmSiFreeMemory @ 0x14046B8D0 (CmSiFreeMemory.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     ZwClose @ 0x1406A65F0 (ZwClose.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     CmpCallCallBacksEx @ 0x140847D10 (CmpCallCallBacksEx.c)
 *     ObReferenceObjectByHandle @ 0x14084AF40 (ObReferenceObjectByHandle.c)
 *     SeSinglePrivilegeCheck @ 0x140853E90 (SeSinglePrivilegeCheck.c)
 *     ObReferenceObjectByNameEx @ 0x1408679A4 (ObReferenceObjectByNameEx.c)
 *     ExRaiseDatatypeMisalignment @ 0x14089B1F0 (ExRaiseDatatypeMisalignment.c)
 *     ExWnfHiveUnloaded @ 0x14092AFD0 (ExWnfHiveUnloaded.c)
 *     CmpInitializeParseContext @ 0x14092D400 (CmpInitializeParseContext.c)
 *     CmpCleanupParseContext @ 0x14092D4B0 (CmpCleanupParseContext.c)
 *     CmConvertHandleToKernelHandle @ 0x14092D980 (CmConvertHandleToKernelHandle.c)
 *     CmpPerformUnloadKey @ 0x14097B52C (CmpPerformUnloadKey.c)
 *     CmpAcquireHiveLoadUnloadRundown @ 0x140BB9AD0 (CmpAcquireHiveLoadUnloadRundown.c)
 *     CmpReleaseHiveLoadUnloadRundown @ 0x140BB9B10 (CmpReleaseHiveLoadUnloadRundown.c)
 *     CmpIsHiveLoadUnloadRundownActive @ 0x140BB9E48 (CmpIsHiveLoadUnloadRundownActive.c)
 */

__int64 __fastcall CmUnloadKey(__int64 a1, unsigned int a2, char a3, LARGE_INTEGER a4)
{
  void *QuadPart; // r12
  KPROCESSOR_MODE PreviousMode; // r14
  void *v8; // r15
  char v9; // r13
  struct _KTHREAD *CurrentThread; // rax
  size_t Length; // rdi
  __int64 v12; // rdx
  __int64 v13; // r8
  wchar_t *v14; // rsi
  wchar_t *TransientPoolWithQuota; // rax
  __int64 v16; // rcx
  __int64 v17; // r8
  NTSTATUS v18; // edi
  int v19; // eax
  bool v20; // zf
  int v21; // eax
  int v22; // eax
  __int64 v23; // rcx
  unsigned int v24; // r12d
  int v25; // r14d
  __int64 v26; // r8
  char UnloadRundown; // [rsp+42h] [rbp-2E6h]
  LARGE_INTEGER Interval; // [rsp+50h] [rbp-2D8h] BYREF
  PVOID Object; // [rsp+58h] [rbp-2D0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-2C8h] BYREF
  unsigned int v33; // [rsp+70h] [rbp-2B8h]
  int v34; // [rsp+74h] [rbp-2B4h]
  HANDLE Handle; // [rsp+78h] [rbp-2B0h] BYREF
  _QWORD v36[2]; // [rsp+80h] [rbp-2A8h] BYREF
  __int128 v37; // [rsp+90h] [rbp-298h] BYREF
  __int128 v38; // [rsp+A0h] [rbp-288h]
  __int128 v39; // [rsp+B0h] [rbp-278h]
  __int64 v40; // [rsp+C0h] [rbp-268h]
  __m128i v41; // [rsp+D0h] [rbp-258h]
  _OWORD v42[2]; // [rsp+E0h] [rbp-248h] BYREF
  __int64 v43; // [rsp+100h] [rbp-228h]
  _DWORD v44[116]; // [rsp+110h] [rbp-218h] BYREF

  QuadPart = (void *)a4.QuadPart;
  Interval = a4;
  v33 = a2;
  memset_0(v44, 0, sizeof(v44));
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  CmpInitializeParseContext(v44);
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  Object = 0LL;
  v8 = 0LL;
  Handle = 0LL;
  memset(v42, 0, sizeof(v42));
  v43 = 0LL;
  v9 = 0;
  v36[1] = v36;
  v36[0] = v36;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  UnloadRundown = CmpAcquireHiveLoadUnloadRundown();
  if ( !UnloadRundown )
  {
    v18 = -1073741431;
LABEL_38:
    v14 = 0LL;
    goto LABEL_39;
  }
  if ( !SeSinglePrivilegeCheck(SeRestorePrivilege, PreviousMode) )
  {
    v18 = -1073741727;
    goto LABEL_38;
  }
  if ( (a2 & 0xFFFFFFFE) != 0 )
  {
    v18 = -1073741811;
    goto LABEL_38;
  }
  if ( PreviousMode == 1 && (a1 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  v37 = *(_OWORD *)a1;
  v38 = *(_OWORD *)(a1 + 16);
  v39 = *(_OWORD *)(a1 + 32);
  if ( PreviousMode == 1 )
  {
    v41 = 0LL;
    v16 = v38;
    if ( (unsigned __int64)v38 >= 0x7FFFFFFF0000LL )
      v16 = 0x7FFFFFFF0000LL;
    v41.m128i_i32[0] = *(_DWORD *)v16;
    v17 = *(_QWORD *)(v16 + 8);
    v41.m128i_i64[1] = v17;
    DestinationString = (UNICODE_STRING)v41;
    if ( (unsigned __int16)_mm_cvtsi128_si32(v41) && (v17 & 1) != 0 )
      ExRaiseDatatypeMisalignment();
  }
  else
  {
    DestinationString = *(UNICODE_STRING *)*(_QWORD *)(a1 + 16);
  }
  Length = DestinationString.Length;
  if ( DestinationString.Length )
  {
    TransientPoolWithQuota = (wchar_t *)CmpAllocateTransientPoolWithQuota();
    v14 = TransientPoolWithQuota;
    if ( !TransientPoolWithQuota )
    {
      v18 = -1073741670;
      v34 = -1073741670;
      goto LABEL_39;
    }
    memmove(TransientPoolWithQuota, DestinationString.Buffer, Length);
    DestinationString.Length = Length;
    DestinationString.MaximumLength = Length;
    DestinationString.Buffer = v14;
    QuadPart = (void *)Interval.QuadPart;
  }
  else
  {
    RtlInitUnicodeString(&DestinationString, 0LL);
    v14 = 0LL;
  }
  *(_QWORD *)&v38 = &DestinationString;
  v39 = 0LL;
  if ( PreviousMode == 1 )
  {
    LOBYTE(v13) = 1;
    v18 = CmConvertHandleToKernelHandle(*((_QWORD *)&v37 + 1), v12, v13, 0LL, &Handle);
    if ( v18 < 0 )
      goto LABEL_39;
    *((_QWORD *)&v37 + 1) = Handle;
  }
  v44[6] = 0;
  v44[0] = 4;
  v19 = ObReferenceObjectByNameEx(
          (__int64)&v37,
          0LL,
          0,
          (__int64)CmKeyObjectType,
          0,
          (__int64)v44,
          (PADAPTER_OBJECT *)&Object);
  if ( v19 == -1073741772 )
    v19 = -1073741811;
  v18 = v19;
  if ( v19 >= 0 )
  {
    if ( QuadPart )
    {
      Interval.QuadPart = 0LL;
      v18 = ObReferenceObjectByHandle(
              QuadPart,
              2u,
              (POBJECT_TYPE)ExEventObjectType,
              PreviousMode,
              (PVOID *)&Interval,
              0LL);
      v8 = (void *)Interval.QuadPart;
      if ( v18 < 0 )
        goto LABEL_39;
      KeResetEvent((PRKEVENT)Interval.QuadPart);
    }
    if ( !CmpCallBackCount || (v20 = CmpIsRegistryLockAcquired() == 0, v21 = 1, !v20) )
      v21 = 0;
    if ( v21 )
    {
      *(_QWORD *)&v42[0] = Object;
      *((_QWORD *)&v42[0] + 1) = v8;
      v22 = CmpCallCallBacksEx(0x22u, (__int64)v42, 0LL, 1, 0x23u, (__int64)Object, (__int64)v36);
      if ( v22 < 0 )
      {
        v18 = 0;
        if ( v22 != -1073740541 )
          v18 = v22;
        goto LABEL_39;
      }
      v9 = 1;
    }
    ExWnfHiveUnloaded(&DestinationString);
    v24 = v33;
LABEL_32:
    v25 = 0;
    while ( !(unsigned __int8)CmpIsHiveLoadUnloadRundownActive(v23) )
    {
      LOBYTE(v26) = a3;
      v18 = CmpPerformUnloadKey(Object, v24, v26, v8);
      if ( v18 != -1073741267 )
        goto LABEL_39;
      if ( (unsigned int)++v25 > 0xA )
      {
        Interval.QuadPart = -10000000LL;
        KeDelayExecutionThread(0, 0, &Interval);
        goto LABEL_32;
      }
    }
    v18 = -1073741431;
  }
LABEL_39:
  if ( v9 && CmpCallBackCount && !CmpIsRegistryLockAcquired() && (_QWORD *)v36[0] != v36 )
  {
    v39 = 0LL;
    v40 = 0LL;
    *(_QWORD *)&v37 = Object;
    *((_QWORD *)&v37 + 1) = (unsigned int)v18;
    *((_QWORD *)&v38 + 1) = (unsigned int)v18;
    *(_QWORD *)&v38 = v42;
    CmpCallCallBacksEx(0x23u, (__int64)&v37, 0LL, 0, 0x23u, (__int64)Object, (__int64)v36);
    v18 = DWORD2(v38);
  }
  if ( v8 )
    ObfDereferenceObject(v8);
  if ( Object )
    ObfDereferenceObject(Object);
  if ( v14 )
    CmSiFreeMemory((PPRIVILEGE_SET)v14);
  if ( Handle )
    ZwClose(Handle);
  CmpCleanupParseContext(v44, 0LL);
  if ( UnloadRundown )
    CmpReleaseHiveLoadUnloadRundown();
  KeLeaveCriticalRegion();
  return (unsigned int)v18;
}
