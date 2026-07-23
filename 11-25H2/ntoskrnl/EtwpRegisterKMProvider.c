/*
 * XREFs of EtwpRegisterKMProvider @ 0x1408B74C4
 * Callers:
 *     DbgkpStartSystemErrorHandler @ 0x1408B7284 (DbgkpStartSystemErrorHandler.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x1408B73B4 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 *     EtwRegister @ 0x1408B7480 (EtwRegister.c)
 *     EtwRegisterClassicProvider @ 0x140A896F0 (EtwRegisterClassicProvider.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     EtwEventEnabled @ 0x140252BF0 (EtwEventEnabled.c)
 *     EtwWrite @ 0x140257AF0 (EtwWrite.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExfReleasePushLock @ 0x1402BCA80 (ExfReleasePushLock.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     EtwpUpdateEnableMask @ 0x140896F0C (EtwpUpdateEnableMask.c)
 *     EtwpGetSchematizedFilterSize @ 0x140898F94 (EtwpGetSchematizedFilterSize.c)
 *     EtwpComputeRegEntryEnableInfo @ 0x14089B4A0 (EtwpComputeRegEntryEnableInfo.c)
 *     EtwpFindOrCreateGuidEntry @ 0x14089B79C (EtwpFindOrCreateGuidEntry.c)
 *     EtwpUnreferenceGuidEntry @ 0x14089E370 (EtwpUnreferenceGuidEntry.c)
 *     EtwpTrackProviderRegistration @ 0x14089E6D0 (EtwpTrackProviderRegistration.c)
 *     EtwpCopySchematizedFilters @ 0x14089E8F4 (EtwpCopySchematizedFilters.c)
 *     EtwpAddKmRegEntry @ 0x1408B78D8 (EtwpAddKmRegEntry.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpRegisterKMProvider(
        __int64 a1,
        ULONGLONG a2,
        int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        _QWORD *a7)
{
  ULONGLONG v7; // r15
  bool v10; // zf
  __int64 v11; // rax
  unsigned int v12; // ebx
  volatile signed __int64 *v13; // rcx
  ULONG v14; // r9d
  signed __int64 v15; // rax
  signed __int64 v16; // rdx
  unsigned __int64 v17; // rtt
  __int64 v18; // rax
  _QWORD *v20; // rsi
  struct _KTHREAD *v21; // rax
  unsigned __int64 *v22; // rdi
  char *v23; // rcx
  __int64 *v24; // rax
  __int64 *v25; // rbx
  int v26; // edx
  _DWORD *v27; // r14
  int v28; // r9d
  _BYTE *v29; // rbx
  __int64 v30; // rcx
  char *v31; // rsi
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v33; // rbx
  __int64 *v34; // rax
  __int64 *v35; // rdi
  unsigned __int8 v36; // cl
  int v37; // edx
  int v38; // r8d
  signed __int64 *v39; // rbx
  signed __int64 v40; // rax
  signed __int64 v41; // rdx
  signed __int64 v42; // rtt
  unsigned int SchematizedFilterSize; // r15d
  char *Pool2; // rax
  PVOID P; // [rsp+40h] [rbp-91h] BYREF
  int v46; // [rsp+48h] [rbp-89h]
  __int64 v47; // [rsp+50h] [rbp-81h]
  __int64 v48; // [rsp+58h] [rbp-79h] BYREF
  _QWORD *v49; // [rsp+60h] [rbp-71h]
  _OWORD v50[2]; // [rsp+68h] [rbp-69h] BYREF
  ULONGLONG v51; // [rsp+88h] [rbp-49h]
  int v52; // [rsp+90h] [rbp-41h]
  int v53; // [rsp+94h] [rbp-3Dh]
  __int128 v54; // [rsp+98h] [rbp-39h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+A8h] [rbp-29h] BYREF

  v7 = a2;
  v51 = a2;
  v47 = a5;
  *a7 = 0LL;
  v11 = *(_QWORD *)a2 - *(_QWORD *)&SecurityProviderGuid.Data1;
  v10 = *(_QWORD *)a2 == *(_QWORD *)&SecurityProviderGuid.Data1;
  P = 0LL;
  v48 = 0LL;
  memset(v50, 0, sizeof(v50));
  if ( v10 )
    v11 = *(_QWORD *)(a2 + 8) - *(_QWORD *)SecurityProviderGuid.Data4;
  if ( !v11 )
    return 3221225506LL;
  if ( !a4 && a5 || a3 != 3 && (a3 != 2 || !a4) )
    return 3221225485LL;
  v12 = EtwpFindOrCreateGuidEntry(a1, (_DWORD *)a2, 0, 0, &P);
  if ( !v12 )
  {
    v20 = P;
    if ( *((_QWORD *)P + 50) )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v33 = (unsigned __int64 *)(v20[50] + 408LL);
      v34 = KeAbPreAcquire((__int64)v33, 0LL);
      v35 = v34;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v33, 0LL) )
        ExfAcquirePushLockExclusiveEx(v33, v34, (__int64)v33);
      if ( v35 )
        *((_BYTE *)v35 + 10) = 1;
      *(_QWORD *)(v20[50] + 416LL) = KeGetCurrentThread();
    }
    v21 = KeGetCurrentThread();
    v22 = (unsigned __int64 *)((char *)P + 408);
    v23 = (char *)P + 408;
    --v21->KernelApcDisable;
    v24 = KeAbPreAcquire((__int64)v23, 0LL);
    v25 = v24;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v22, 0LL) )
      ExfAcquirePushLockExclusiveEx(v22, v24, (__int64)v22);
    if ( v25 )
      *((_BYTE *)v25 + 10) = 1;
    v26 = a3;
    v27 = P;
    v28 = v47;
    v49 = P;
    *((_QWORD *)P + 52) = KeGetCurrentThread();
    v46 = EtwpAddKmRegEntry((_DWORD)v27, v26, a4, v28, (__int64)&v48);
    v12 = v46;
    if ( v46 >= 0 )
    {
      v29 = (_BYTE *)v48;
      *(_QWORD *)(v48 + 48) = a6;
      *a7 = v29;
      if ( v27[24] )
        EtwpUpdateEnableMask((__int64)v27, (v29[98] & 8) != 0, 0, 0, v29 + 100);
      v30 = v20[50];
      v31 = 0LL;
      if ( v30 && *(_DWORD *)(v30 + 96) )
        EtwpUpdateEnableMask(v30, (v29[98] & 8) != 0, 1, 0, v29 + 102);
      EtwpComputeRegEntryEnableInfo((__int64)v29, (__int64)v50);
      EtwpTrackProviderRegistration((__int64)v29);
      if ( a4 )
      {
        if ( (v29[98] & 8) != 0 )
        {
          if ( (*((_BYTE *)v27 + 91) & 1) != 0 )
          {
            v36 = *((_BYTE *)v27 + 90);
            v37 = v27[20];
            v38 = v27[21];
            LOWORD(v51) = *((_WORD *)v27 + 44);
            WORD1(v51) = v36;
            HIDWORD(v51) = v37;
            v52 = v38;
            v53 = 0;
            guard_dispatch_icall_no_overrides(v27 + 10);
          }
        }
        else if ( LODWORD(v50[0]) )
        {
          v54 = 0LL;
          SchematizedFilterSize = EtwpGetSchematizedFilterSize((__int64)v27, v29[100]);
          if ( SchematizedFilterSize )
          {
            Pool2 = (char *)ExAllocatePool2(0x100uLL);
            v31 = Pool2;
            if ( Pool2 )
            {
              *(_QWORD *)&v54 = Pool2;
              *((_QWORD *)&v54 + 1) = SchematizedFilterSize | 0x8000000000000000uLL;
              EtwpCopySchematizedFilters(Pool2, (__int64)v27, v29[100]);
            }
          }
          guard_dispatch_icall_no_overrides(&CPER_EMPTY_GUID);
          if ( v31 )
            ExFreePoolWithTag(v31, 0);
          v7 = v51;
        }
      }
      if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_PROVIDER_REGISTER) )
      {
        v14 = 0;
        if ( v7 )
        {
          UserData.Ptr = v7;
          v14 = 1;
          *(_QWORD *)&UserData.Size = 16LL;
        }
        EtwWrite(EtwpEventTracingProvRegHandle, &ETW_EVENT_PROVIDER_REGISTER, 0LL, v14, &UserData);
      }
      v12 = v46;
    }
    v49[52] = 0LL;
    _m_prefetchw(v22);
    v15 = *v22;
    v16 = *v22 - 16;
    if ( (*v22 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v16 = 0LL;
    if ( (v15 & 2) != 0 || (v17 = *v22, v17 != _InterlockedCompareExchange64((volatile signed __int64 *)v22, v16, v15)) )
      ExfReleasePushLock(v22);
    KeAbPostRelease((ULONG_PTR)v22);
    KeLeaveCriticalRegion();
    v13 = (volatile signed __int64 *)P;
    v18 = *((_QWORD *)P + 50);
    if ( !v18 )
      goto LABEL_20;
    *(_QWORD *)(v18 + 416) = 0LL;
    v39 = (signed __int64 *)(*((_QWORD *)v13 + 50) + 408LL);
    _m_prefetchw(v39);
    v40 = *v39;
    v41 = *v39 - 16;
    if ( (*v39 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v41 = 0LL;
    if ( (v40 & 2) != 0 || (v42 = *v39, v42 != _InterlockedCompareExchange64(v39, v41, v40)) )
      ExfReleasePushLock(v39);
    KeAbPostRelease((ULONG_PTR)v39);
    KeLeaveCriticalRegion();
    v12 = v46;
  }
  v13 = (volatile signed __int64 *)P;
LABEL_20:
  if ( v13 )
    EtwpUnreferenceGuidEntry(v13);
  return v12;
}
