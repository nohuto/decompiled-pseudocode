/*
 * XREFs of EtwpRegisterKMProvider @ 0x140A57524
 * Callers:
 *     DbgkpStartSystemErrorHandler @ 0x140A572E4 (DbgkpStartSystemErrorHandler.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x140A57414 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 *     EtwRegister @ 0x140A574E0 (EtwRegister.c)
 *     EtwRegisterClassicProvider @ 0x140A8E710 (EtwRegisterClassicProvider.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExfReleasePushLock @ 0x14025E260 (ExfReleasePushLock.c)
 *     EtwEventEnabled @ 0x1402A1BD0 (EtwEventEnabled.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     EtwWrite @ 0x14041C1B0 (EtwWrite.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     EtwpUpdateEnableMask @ 0x14083658C (EtwpUpdateEnableMask.c)
 *     EtwpGetSchematizedFilterSize @ 0x1408384F4 (EtwpGetSchematizedFilterSize.c)
 *     EtwpComputeRegEntryEnableInfo @ 0x14083A9D0 (EtwpComputeRegEntryEnableInfo.c)
 *     EtwpFindOrCreateGuidEntry @ 0x14083ACCC (EtwpFindOrCreateGuidEntry.c)
 *     EtwpUnreferenceGuidEntry @ 0x14083D760 (EtwpUnreferenceGuidEntry.c)
 *     EtwpTrackProviderRegistration @ 0x14083DAD0 (EtwpTrackProviderRegistration.c)
 *     EtwpCopySchematizedFilters @ 0x14083DD00 (EtwpCopySchematizedFilters.c)
 *     EtwpAddKmRegEntry @ 0x140A57938 (EtwpAddKmRegEntry.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
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
  _QWORD *v24; // rax
  _QWORD *v25; // rbx
  int v26; // edx
  ULONG_PTR v27; // r14
  int v28; // r9d
  __int64 v29; // rbx
  __int64 v30; // rcx
  char *v31; // rsi
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v33; // rbx
  _QWORD *v34; // rax
  _QWORD *v35; // rdi
  unsigned __int8 v36; // cl
  __int64 v37; // rdx
  int v38; // r8d
  __int64 *v39; // rbx
  signed __int64 v40; // rax
  signed __int64 v41; // rdx
  __int64 v42; // rtt
  __int64 v43; // r8
  unsigned int SchematizedFilterSize; // r15d
  char *Pool2; // rax
  ULONG_PTR BugCheckParameter2; // [rsp+40h] [rbp-91h] BYREF
  int v47; // [rsp+48h] [rbp-89h]
  __int64 v48; // [rsp+50h] [rbp-81h]
  __int64 v49; // [rsp+58h] [rbp-79h] BYREF
  ULONG_PTR v50; // [rsp+60h] [rbp-71h]
  __int128 v51; // [rsp+68h] [rbp-69h] BYREF
  __int128 v52; // [rsp+78h] [rbp-59h]
  ULONGLONG v53; // [rsp+88h] [rbp-49h] BYREF
  int v54; // [rsp+90h] [rbp-41h]
  int v55; // [rsp+94h] [rbp-3Dh]
  __int128 v56; // [rsp+98h] [rbp-39h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+A8h] [rbp-29h] BYREF

  v7 = a2;
  v53 = a2;
  v48 = a5;
  *a7 = 0LL;
  v11 = *(_QWORD *)a2 - SecurityProviderGuid;
  v10 = *(_QWORD *)a2 == (_QWORD)SecurityProviderGuid;
  BugCheckParameter2 = 0LL;
  v49 = 0LL;
  v51 = 0LL;
  v52 = 0LL;
  if ( v10 )
    v11 = *(_QWORD *)(a2 + 8) - *((_QWORD *)&SecurityProviderGuid + 1);
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
      v34 = KeAbPreAcquire((__int64)v33, 0LL);
      v35 = v34;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v33, 0LL) )
        ExfAcquirePushLockExclusiveEx(v33, (__int64)v34, (__int64)v33);
      if ( v35 )
        *((_BYTE *)v35 + 10) = 1;
      *(_QWORD *)(*(_QWORD *)(v20 + 656) + 672LL) = KeGetCurrentThread();
    }
    v21 = KeGetCurrentThread();
    v22 = (unsigned __int64 *)(BugCheckParameter2 + 664);
    v23 = BugCheckParameter2 + 664;
    --v21->KernelApcDisable;
    v24 = KeAbPreAcquire(v23, 0LL);
    v25 = v24;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v22, 0LL) )
      ExfAcquirePushLockExclusiveEx(v22, (__int64)v24, (__int64)v22);
    if ( v25 )
      *((_BYTE *)v25 + 10) = 1;
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
      EtwpComputeRegEntryEnableInfo(v29, (__int64)&v51);
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
            LOWORD(v53) = *(_WORD *)(v27 + 88);
            WORD1(v53) = v36;
            HIDWORD(v53) = v37;
            LOBYTE(v37) = 1;
            v54 = v38;
            v55 = 0;
            guard_dispatch_icall_no_overrides(v27 + 40, v37, &v53, v48);
          }
        }
        else if ( (_DWORD)v51 )
        {
          v56 = 0LL;
          SchematizedFilterSize = EtwpGetSchematizedFilterSize(v27, *(_WORD *)(v29 + 100));
          if ( SchematizedFilterSize )
          {
            Pool2 = (char *)ExAllocatePool2(0x100uLL);
            v31 = Pool2;
            if ( Pool2 )
            {
              *(_QWORD *)&v56 = Pool2;
              *((_QWORD *)&v56 + 1) = SchematizedFilterSize | 0x8000000000000000uLL;
              EtwpCopySchematizedFilters(Pool2, v27, *(_WORD *)(v29 + 100));
            }
          }
          LOBYTE(v43) = BYTE4(v51);
          guard_dispatch_icall_no_overrides(&CPER_EMPTY_GUID, 1LL, v43, v52);
          if ( v31 )
            ExFreePoolWithTag(v31, 0);
          v7 = v53;
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
    v39 = (__int64 *)(v13[82] + 664);
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
