/*
 * XREFs of EtwpRegisterKMProvider @ 0x1409EA1C4
 * Callers:
 *     DbgkpStartSystemErrorHandler @ 0x1409E9F88 (DbgkpStartSystemErrorHandler.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x1409EA0B8 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 *     EtwRegister @ 0x1409EA180 (EtwRegister.c)
 *     EtwRegisterClassicProvider @ 0x140A8AD80 (EtwRegisterClassicProvider.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExfReleasePushLock @ 0x14028E870 (ExfReleasePushLock.c)
 *     EtwEventEnabled @ 0x1402D1300 (EtwEventEnabled.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     EtwWrite @ 0x14040FFB0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     EtwpUpdateEnableMask @ 0x14083745C (EtwpUpdateEnableMask.c)
 *     EtwpComputeRegEntryEnableInfo @ 0x140837AF0 (EtwpComputeRegEntryEnableInfo.c)
 *     EtwpFindOrCreateGuidEntry @ 0x14083866C (EtwpFindOrCreateGuidEntry.c)
 *     EtwpUnreferenceGuidEntry @ 0x140839DC0 (EtwpUnreferenceGuidEntry.c)
 *     EtwpTrackProviderRegistration @ 0x14083A130 (EtwpTrackProviderRegistration.c)
 *     EtwpCopySchematizedFilters @ 0x14083A308 (EtwpCopySchematizedFilters.c)
 *     EtwpGetSchematizedFilterSize @ 0x1409E9380 (EtwpGetSchematizedFilterSize.c)
 *     EtwpAddKmRegEntry @ 0x1409EA5D8 (EtwpAddKmRegEntry.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpRegisterKMProvider(
        __int64 a1,
        ULONGLONG a2,
        int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 *a7)
{
  ULONGLONG v7; // r15
  bool v10; // zf
  __int64 v11; // rax
  unsigned int v12; // ebx
  __int64 *v13; // rcx
  ULONG v14; // r9d
  signed __int64 v15; // rax
  signed __int64 v16; // rdx
  unsigned __int64 v17; // rtt
  __int64 v18; // rax
  ULONG_PTR v20; // rsi
  struct _KTHREAD *v21; // rax
  unsigned __int64 *v22; // rdi
  __int64 v23; // rcx
  char *v24; // rax
  char *v25; // rbx
  int v26; // edx
  ULONG_PTR v27; // r14
  int v28; // r9d
  __int64 v29; // rbx
  __int64 v30; // rcx
  char *v31; // rsi
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v33; // rbx
  char *v34; // rax
  char *v35; // rdi
  unsigned __int8 v36; // cl
  __int64 v37; // rdx
  int v38; // r8d
  signed __int64 *v39; // rbx
  signed __int64 v40; // rax
  signed __int64 v41; // rdx
  signed __int64 v42; // rtt
  unsigned int SchematizedFilterSize; // eax
  unsigned int v44; // r15d
  char *Pool2; // rax
  ULONG_PTR BugCheckParameter2; // [rsp+40h] [rbp-91h] BYREF
  int v47; // [rsp+48h] [rbp-89h]
  __int64 v48; // [rsp+50h] [rbp-81h]
  __int64 v49; // [rsp+58h] [rbp-79h] BYREF
  ULONG_PTR v50; // [rsp+60h] [rbp-71h]
  _OWORD v51[2]; // [rsp+68h] [rbp-69h] BYREF
  ULONGLONG v52; // [rsp+88h] [rbp-49h]
  int v53; // [rsp+90h] [rbp-41h]
  int v54; // [rsp+94h] [rbp-3Dh]
  __int128 v55; // [rsp+98h] [rbp-39h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+A8h] [rbp-29h] BYREF

  v7 = a2;
  v52 = a2;
  v48 = a5;
  *a7 = 0LL;
  v11 = *(_QWORD *)a2 - *(_QWORD *)&SecurityProviderGuid.Data1;
  v10 = *(_QWORD *)a2 == *(_QWORD *)&SecurityProviderGuid.Data1;
  BugCheckParameter2 = 0LL;
  v49 = 0LL;
  memset(v51, 0, sizeof(v51));
  if ( v10 )
    v11 = *(_QWORD *)(a2 + 8) - *(_QWORD *)SecurityProviderGuid.Data4;
  if ( !v11 )
    return 3221225506LL;
  if ( !a4 && a5 || a3 != 3 && (a3 != 2 || !a4) )
    return 3221225485LL;
  v12 = EtwpFindOrCreateGuidEntry(a1, (_DWORD *)a2, 0, 0, &BugCheckParameter2);
  if ( !v12 )
  {
    v20 = BugCheckParameter2;
    if ( *(_QWORD *)(BugCheckParameter2 + 656) )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      v33 = (unsigned __int64 *)(*(_QWORD *)(v20 + 656) + 664LL);
      v34 = (char *)KeAbPreAcquire((__int64)v33, 0LL);
      v35 = v34;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v33, 0LL) )
        ExfAcquirePushLockExclusiveEx(v33, v34, (__int64)v33);
      if ( v35 )
        v35[10] = 1;
      *(_QWORD *)(*(_QWORD *)(v20 + 656) + 672LL) = KeGetCurrentThread();
    }
    v21 = KeGetCurrentThread();
    v22 = (unsigned __int64 *)(BugCheckParameter2 + 664);
    v23 = BugCheckParameter2 + 664;
    --v21->KernelApcDisable;
    v24 = (char *)KeAbPreAcquire(v23, 0LL);
    v25 = v24;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v22, 0LL) )
      ExfAcquirePushLockExclusiveEx(v22, v24, (__int64)v22);
    if ( v25 )
      v25[10] = 1;
    v26 = a3;
    v27 = BugCheckParameter2;
    v28 = v48;
    v50 = BugCheckParameter2;
    *(_QWORD *)(BugCheckParameter2 + 672) = KeGetCurrentThread();
    v47 = EtwpAddKmRegEntry(v27, v26, a4, v28, (__int64)&v49);
    v12 = v47;
    if ( v47 >= 0 )
    {
      v29 = v49;
      *(_QWORD *)(v49 + 48) = a6;
      *a7 = v29;
      if ( *(_DWORD *)(v27 + 96) )
        EtwpUpdateEnableMask(v27, (*(_BYTE *)(v29 + 98) & 8) != 0, 0, 0, (_WORD *)(v29 + 100));
      v30 = *(_QWORD *)(v20 + 656);
      v31 = 0LL;
      if ( v30 && *(_DWORD *)(v30 + 96) )
        EtwpUpdateEnableMask(v30, (*(_BYTE *)(v29 + 98) & 8) != 0, 1, 0, (_WORD *)(v29 + 104));
      EtwpComputeRegEntryEnableInfo(v29, (__int64)v51);
      EtwpTrackProviderRegistration(v29);
      if ( a4 )
      {
        if ( (*(_BYTE *)(v29 + 98) & 8) != 0 )
        {
          if ( (*(_BYTE *)(v27 + 91) & 1) != 0 )
          {
            v36 = *(_BYTE *)(v27 + 90);
            v37 = *(unsigned int *)(v27 + 80);
            v38 = *(_DWORD *)(v27 + 84);
            LOWORD(v52) = *(_WORD *)(v27 + 88);
            WORD1(v52) = v36;
            HIDWORD(v52) = v37;
            LOBYTE(v37) = 1;
            v53 = v38;
            v54 = 0;
            guard_dispatch_icall_no_overrides(v27 + 40, v37);
          }
        }
        else if ( LODWORD(v51[0]) )
        {
          v55 = 0LL;
          SchematizedFilterSize = EtwpGetSchematizedFilterSize(v27, *(_WORD *)(v29 + 100));
          v44 = SchematizedFilterSize;
          if ( SchematizedFilterSize )
          {
            Pool2 = (char *)ExAllocatePool2(0x100uLL, SchematizedFilterSize, 0x46777445u);
            v31 = Pool2;
            if ( Pool2 )
            {
              *(_QWORD *)&v55 = Pool2;
              *((_QWORD *)&v55 + 1) = v44 | 0x8000000000000000uLL;
              EtwpCopySchematizedFilters(Pool2, v27, *(_WORD *)(v29 + 100));
            }
          }
          guard_dispatch_icall_no_overrides(&CPER_EMPTY_GUID, 1LL);
          if ( v31 )
            ExFreePoolWithTag(v31, 0);
          v7 = v52;
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
      v12 = v47;
    }
    *(_QWORD *)(v50 + 672) = 0LL;
    _m_prefetchw(v22);
    v15 = *v22;
    v16 = *v22 - 16;
    if ( (*v22 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v16 = 0LL;
    if ( (v15 & 2) != 0 || (v17 = *v22, v17 != _InterlockedCompareExchange64((volatile signed __int64 *)v22, v16, v15)) )
      ExfReleasePushLock(v22);
    KeAbPostRelease((ULONG_PTR)v22);
    KeLeaveCriticalRegion();
    v13 = (__int64 *)BugCheckParameter2;
    v18 = *(_QWORD *)(BugCheckParameter2 + 656);
    if ( !v18 )
      goto LABEL_20;
    *(_QWORD *)(v18 + 672) = 0LL;
    v39 = (signed __int64 *)(v13[82] + 664);
    _m_prefetchw(v39);
    v40 = *v39;
    v41 = *v39 - 16;
    if ( (*v39 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
      v41 = 0LL;
    if ( (v40 & 2) != 0 || (v42 = *v39, v42 != _InterlockedCompareExchange64(v39, v41, v40)) )
      ExfReleasePushLock(v39);
    KeAbPostRelease((ULONG_PTR)v39);
    KeLeaveCriticalRegion();
    v12 = v47;
  }
  v13 = (__int64 *)BugCheckParameter2;
LABEL_20:
  if ( v13 )
    EtwpUnreferenceGuidEntry(v13);
  return v12;
}
