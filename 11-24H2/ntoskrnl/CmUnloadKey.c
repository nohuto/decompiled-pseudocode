/*
 * XREFs of CmUnloadKey @ 0x14092D238
 * Callers:
 *     NtUnloadKey2 @ 0x1407D18E0 (NtUnloadKey2.c)
 *     NtUnloadKey @ 0x14092D090 (NtUnloadKey.c)
 *     NtUnloadKeyEx @ 0x140A93CE0 (NtUnloadKeyEx.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     KeResetEvent @ 0x14029EAC0 (KeResetEvent.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     KeDelayExecutionThread @ 0x14031B140 (KeDelayExecutionThread.c)
 *     CmpIsRegistryLockAcquired @ 0x140414BC0 (CmpIsRegistryLockAcquired.c)
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     CmpAllocateTransientPoolWithQuota @ 0x14044E170 (CmpAllocateTransientPoolWithQuota.c)
 *     CmSiFreeMemory @ 0x140464550 (CmSiFreeMemory.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     CmpCallCallBacksEx @ 0x140843FD0 (CmpCallCallBacksEx.c)
 *     ObReferenceObjectByHandle @ 0x140847200 (ObReferenceObjectByHandle.c)
 *     SeSinglePrivilegeCheck @ 0x140850150 (SeSinglePrivilegeCheck.c)
 *     ObReferenceObjectByNameEx @ 0x14086BC94 (ObReferenceObjectByNameEx.c)
 *     ExRaiseDatatypeMisalignment @ 0x1408A3890 (ExRaiseDatatypeMisalignment.c)
 *     ExWnfHiveUnloaded @ 0x14092D110 (ExWnfHiveUnloaded.c)
 *     CmpInitializeParseContext @ 0x14092F540 (CmpInitializeParseContext.c)
 *     CmpCleanupParseContext @ 0x14092F5F0 (CmpCleanupParseContext.c)
 *     CmConvertHandleToKernelHandle @ 0x14092FAC0 (CmConvertHandleToKernelHandle.c)
 *     CmpPerformUnloadKey @ 0x140963D3C (CmpPerformUnloadKey.c)
 *     CmpAcquireHiveLoadUnloadRundown @ 0x140BBBAD0 (CmpAcquireHiveLoadUnloadRundown.c)
 *     CmpReleaseHiveLoadUnloadRundown @ 0x140BBBB10 (CmpReleaseHiveLoadUnloadRundown.c)
 *     CmpIsHiveLoadUnloadRundownActive @ 0x140BBBE48 (CmpIsHiveLoadUnloadRundownActive.c)
 */

__int64 __fastcall CmUnloadKey(__int64 a1, unsigned int a2, char a3, LARGE_INTEGER a4)
{
  void *QuadPart; // r12
  KPROCESSOR_MODE PreviousMode; // r14
  void *v8; // r15
  char v9; // r13
  struct _KTHREAD *CurrentThread; // rax
  __int64 v11; // rcx
  size_t Length; // rdi
  __int64 v13; // rdx
  __int64 v14; // r8
  wchar_t *v15; // rsi
  wchar_t *TransientPoolWithQuota; // rax
  __int64 v17; // r8
  unsigned __int16 v18; // ax
  NTSTATUS v19; // edi
  int v20; // eax
  bool v21; // zf
  int v22; // eax
  int v23; // eax
  __int64 v24; // rcx
  unsigned int v25; // r12d
  int v26; // r14d
  __int64 v27; // r8
  char UnloadRundown; // [rsp+42h] [rbp-2E6h]
  LARGE_INTEGER Interval; // [rsp+50h] [rbp-2D8h] BYREF
  PVOID Object; // [rsp+58h] [rbp-2D0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-2C8h] BYREF
  unsigned int v34; // [rsp+70h] [rbp-2B8h]
  int v35; // [rsp+74h] [rbp-2B4h]
  HANDLE Handle; // [rsp+78h] [rbp-2B0h] BYREF
  _QWORD v37[2]; // [rsp+80h] [rbp-2A8h] BYREF
  __int128 v38; // [rsp+90h] [rbp-298h] BYREF
  __int128 v39; // [rsp+A0h] [rbp-288h]
  __int128 v40; // [rsp+B0h] [rbp-278h]
  __int64 v41; // [rsp+C0h] [rbp-268h]
  __m128i v42; // [rsp+D0h] [rbp-258h]
  _OWORD v43[2]; // [rsp+E0h] [rbp-248h] BYREF
  __int64 v44; // [rsp+100h] [rbp-228h]
  _DWORD v45[116]; // [rsp+110h] [rbp-218h] BYREF

  QuadPart = (void *)a4.QuadPart;
  Interval = a4;
  v34 = a2;
  memset_0(v45, 0, sizeof(v45));
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  CmpInitializeParseContext(v45);
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  Object = 0LL;
  v8 = 0LL;
  Handle = 0LL;
  memset(v43, 0, sizeof(v43));
  v44 = 0LL;
  v9 = 0;
  v37[1] = v37;
  v37[0] = v37;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  UnloadRundown = CmpAcquireHiveLoadUnloadRundown();
  if ( !UnloadRundown )
  {
    v19 = -1073741431;
LABEL_38:
    v15 = 0LL;
    goto LABEL_39;
  }
  if ( !SeSinglePrivilegeCheck(SeRestorePrivilege, PreviousMode) )
  {
    v19 = -1073741727;
    goto LABEL_38;
  }
  if ( (a2 & 0xFFFFFFFE) != 0 )
  {
    v19 = -1073741811;
    goto LABEL_38;
  }
  if ( PreviousMode == 1 && (a1 & 3) != 0 )
    ExRaiseDatatypeMisalignment();
  v38 = *(_OWORD *)a1;
  v39 = *(_OWORD *)(a1 + 16);
  v40 = *(_OWORD *)(a1 + 32);
  if ( PreviousMode == 1 )
  {
    v42 = 0LL;
    v11 = v39;
    if ( (unsigned __int64)v39 >= 0x7FFFFFFF0000LL )
      v11 = 0x7FFFFFFF0000LL;
    v42.m128i_i32[0] = *(_DWORD *)v11;
    v17 = *(_QWORD *)(v11 + 8);
    v42.m128i_i64[1] = v17;
    DestinationString = (UNICODE_STRING)v42;
    v18 = _mm_cvtsi128_si32(v42);
    if ( v18 )
    {
      if ( (v17 & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      v11 = v18 + v17;
    }
  }
  else
  {
    DestinationString = *(UNICODE_STRING *)*(_QWORD *)(a1 + 16);
  }
  Length = DestinationString.Length;
  if ( DestinationString.Length )
  {
    TransientPoolWithQuota = (wchar_t *)CmpAllocateTransientPoolWithQuota(v11, DestinationString.Length, 0x35374D43u);
    v15 = TransientPoolWithQuota;
    if ( !TransientPoolWithQuota )
    {
      v19 = -1073741670;
      v35 = -1073741670;
      goto LABEL_39;
    }
    memmove(TransientPoolWithQuota, DestinationString.Buffer, Length);
    DestinationString.Length = Length;
    DestinationString.MaximumLength = Length;
    DestinationString.Buffer = v15;
    QuadPart = (void *)Interval.QuadPart;
  }
  else
  {
    RtlInitUnicodeString(&DestinationString, 0LL);
    v15 = 0LL;
  }
  *(_QWORD *)&v39 = &DestinationString;
  v40 = 0LL;
  if ( PreviousMode == 1 )
  {
    LOBYTE(v14) = 1;
    v19 = CmConvertHandleToKernelHandle(*((_QWORD *)&v38 + 1), v13, v14, 0LL, &Handle);
    if ( v19 < 0 )
      goto LABEL_39;
    *((_QWORD *)&v38 + 1) = Handle;
  }
  v45[6] = 0;
  v45[0] = 4;
  v20 = ObReferenceObjectByNameEx(
          (__int64)&v38,
          0LL,
          0,
          (__int64)CmKeyObjectType,
          0,
          (__int64)v45,
          (PADAPTER_OBJECT *)&Object);
  if ( v20 == -1073741772 )
    v20 = -1073741811;
  v19 = v20;
  if ( v20 >= 0 )
  {
    if ( QuadPart )
    {
      Interval.QuadPart = 0LL;
      v19 = ObReferenceObjectByHandle(
              QuadPart,
              2u,
              (POBJECT_TYPE)ExEventObjectType,
              PreviousMode,
              (PVOID *)&Interval,
              0LL);
      v8 = (void *)Interval.QuadPart;
      if ( v19 < 0 )
        goto LABEL_39;
      KeResetEvent((PRKEVENT)Interval.QuadPart);
    }
    if ( !CmpCallBackCount || (v21 = CmpIsRegistryLockAcquired() == 0, v22 = 1, !v21) )
      v22 = 0;
    if ( v22 )
    {
      *(_QWORD *)&v43[0] = Object;
      *((_QWORD *)&v43[0] + 1) = v8;
      v23 = CmpCallCallBacksEx(0x22u, (__int64)v43, 0LL, 1, 0x23u, (__int64)Object, (__int64)v37);
      if ( v23 < 0 )
      {
        v19 = 0;
        if ( v23 != -1073740541 )
          v19 = v23;
        goto LABEL_39;
      }
      v9 = 1;
    }
    ExWnfHiveUnloaded(&DestinationString);
    v25 = v34;
LABEL_32:
    v26 = 0;
    while ( !(unsigned __int8)CmpIsHiveLoadUnloadRundownActive(v24) )
    {
      LOBYTE(v27) = a3;
      v19 = CmpPerformUnloadKey(Object, v25, v27, v8);
      if ( v19 != -1073741267 )
        goto LABEL_39;
      if ( (unsigned int)++v26 > 0xA )
      {
        Interval.QuadPart = -10000000LL;
        KeDelayExecutionThread(0, 0, &Interval);
        goto LABEL_32;
      }
    }
    v19 = -1073741431;
  }
LABEL_39:
  if ( v9 && CmpCallBackCount && !CmpIsRegistryLockAcquired() && (_QWORD *)v37[0] != v37 )
  {
    v40 = 0LL;
    v41 = 0LL;
    *(_QWORD *)&v38 = Object;
    *((_QWORD *)&v38 + 1) = (unsigned int)v19;
    *((_QWORD *)&v39 + 1) = (unsigned int)v19;
    *(_QWORD *)&v39 = v43;
    CmpCallCallBacksEx(0x23u, (__int64)&v38, 0LL, 0, 0x23u, (__int64)Object, (__int64)v37);
    v19 = DWORD2(v39);
  }
  if ( v8 )
    ObfDereferenceObject(v8);
  if ( Object )
    ObfDereferenceObject(Object);
  if ( v15 )
    CmSiFreeMemory((PPRIVILEGE_SET)v15);
  if ( Handle )
    ZwClose(Handle);
  CmpCleanupParseContext(v45, 0LL);
  if ( UnloadRundown )
    CmpReleaseHiveLoadUnloadRundown();
  KeLeaveCriticalRegion();
  return (unsigned int)v19;
}
