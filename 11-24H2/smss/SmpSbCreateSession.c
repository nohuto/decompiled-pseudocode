/*
 * XREFs of SmpSbCreateSession @ 0x140007470
 * Callers:
 *     SmpExecPgm @ 0x140006F70 (SmpExecPgm.c)
 *     SmpLoadSubSystem @ 0x140016D30 (SmpLoadSubSystem.c)
 * Callees:
 *     SmpUnlockKnownSubSysList @ 0x1400079F0 (SmpUnlockKnownSubSysList.c)
 *     SmLogFailureInt @ 0x140008078 (SmLogFailureInt.c)
 *     SmpLockKnownSubSysList @ 0x140009840 (SmpLockKnownSubSysList.c)
 *     SmpCheckSubSysStatus @ 0x14000B880 (SmpCheckSubSysStatus.c)
 *     SmpLogFailure @ 0x14000D7F0 (SmpLogFailure.c)
 *     SmpTerminate @ 0x14001913C (SmpTerminate.c)
 *     SmpDisposeSubSysSynch @ 0x14001942C (SmpDisposeSubSysSynch.c)
 *     SmpWaitForStatusChange @ 0x1400195CC (SmpWaitForStatusChange.c)
 *     memset_0 @ 0x14001EF9F (memset_0.c)
 */

NTSTATUS __fastcall SmpSbCreateSession(unsigned int a1, void *a2, __int128 *a3, __int64 a4, __int128 *a5)
{
  int v8; // r13d
  _QWORD *v9; // rbx
  _QWORD **v10; // r14
  _QWORD *i; // rax
  int v12; // r14d
  int v13; // eax
  int v14; // edi
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  NTSTATUS v21; // eax
  NTSTATUS v22; // eax
  signed __int32 v23; // eax
  int v24; // eax
  void *v25; // rcx
  void *v26; // rcx
  void *v27; // rcx
  NTSTATUS result; // eax
  __int64 v29; // rax
  _QWORD *v30; // rbx
  NTSTATUS v31; // ebx
  __int64 v32; // rcx
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v34; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v35[2]; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v36; // [rsp+68h] [rbp-98h] BYREF
  int v37; // [rsp+70h] [rbp-90h]
  unsigned __int64 Parameters[3]; // [rsp+78h] [rbp-88h] BYREF
  _QWORD v39[5]; // [rsp+90h] [rbp-70h] BYREF
  int v40; // [rsp+B8h] [rbp-48h]
  int v41; // [rsp+BCh] [rbp-44h]
  signed __int32 v42; // [rsp+C0h] [rbp-40h]
  void *TargetHandle[2]; // [rsp+C8h] [rbp-38h] BYREF
  HANDLE SourceHandle[2]; // [rsp+D8h] [rbp-28h] BYREF
  __int128 v45; // [rsp+E8h] [rbp-18h]
  __int128 v46; // [rsp+F8h] [rbp-8h]
  __int128 v47; // [rsp+108h] [rbp+8h]
  __int128 v48; // [rsp+118h] [rbp+18h]
  __int64 v49; // [rsp+128h] [rbp+28h]
  int v50; // [rsp+138h] [rbp+38h]
  __int128 v51; // [rsp+140h] [rbp+40h]
  HANDLE ThreadHandle; // [rsp+1F0h] [rbp+F0h] BYREF

  memset_0(v39, 0, 0x120uLL);
  v8 = *((_DWORD *)a3 + 18);
  ThreadHandle = 0LL;
  *(_QWORD *)&DestinationString.Length = a1;
  v9 = 0LL;
  v34 = 0LL;
  v35[0] = 1LL;
  v10 = (_QWORD **)(SmpKnownSubSysTable + 24LL * (a1 & 0x1F));
  v35[1] = v10;
  RtlAcquireSRWLockShared(v10 + 2);
  for ( i = *v10; ; i = (_QWORD *)*i )
  {
    if ( i == v10 )
    {
      SmpUnlockKnownSubSysList(v35);
      if ( *((_DWORD *)a3 + 18) != 1 )
        return -1073741570;
      result = NtDuplicateObject(a2, *((HANDLE *)a3 + 2), (HANDLE)0xFFFFFFFFFFFFFFFFLL, &ThreadHandle, 2u, 0, 0);
      if ( result >= 0 )
      {
        v31 = NtResumeThread(ThreadHandle, 0LL);
        NtClose(ThreadHandle);
        return v31;
      }
      return result;
    }
    if ( *((_DWORD *)i - 2) == a1 )
    {
      if ( *((_DWORD *)i - 12) == v8 )
        v9 = i - 9;
      if ( v9 )
        break;
    }
  }
  _InterlockedIncrement((volatile signed __int32 *)v9);
  SmpUnlockKnownSubSysList(v35);
  v37 = 0;
  v12 = 0;
  v36 = 0LL;
  v13 = *((_DWORD *)v9 + 2);
  if ( (v13 & 4) == 0 )
  {
    if ( (v13 & 1) != 0 )
    {
      if ( v9[6] )
        goto LABEL_7;
LABEL_50:
      SmpLockKnownSubSysList(*((unsigned int *)v9 + 16), 1LL, &v36);
      if ( !(unsigned int)SmpCheckSubSysStatus(v9) )
        v12 = SmpWaitForStatusChange(v32, (v9[1] & 1) == 0, &v36);
      SmpUnlockKnownSubSysList(&v36);
      if ( v12 < 0 )
        goto LABEL_11;
      goto LABEL_7;
    }
    if ( *((_DWORD *)v9 + 6) == -1 )
      goto LABEL_50;
  }
LABEL_7:
  if ( (v9[1] & 4) != 0 )
  {
    v12 = -1073741823;
    SmpLogFailure("SmpWaitForSingleSubSys", 1205LL, 3221225473LL);
    v14 = -1073741823;
    goto LABEL_9;
  }
LABEL_11:
  v14 = v12;
  if ( v12 >= 0 )
  {
    v15 = *a3;
    v50 = 0;
    v16 = a3[1];
    *(_OWORD *)TargetHandle = v15;
    v17 = a3[2];
    *(_OWORD *)SourceHandle = v16;
    v18 = a3[3];
    v45 = v17;
    v19 = a3[4];
    v46 = v18;
    v20 = a3[5];
    v47 = v19;
    v49 = *((_QWORD *)a3 + 12);
    v48 = v20;
    if ( a5 )
      v51 = *a5;
    else
      v51 = 0LL;
    v21 = NtDuplicateObject(a2, *((HANDLE *)a3 + 1), (HANDLE)v9[4], &TargetHandle[1], 0x1FFFFFu, 0, 0);
    v14 = v21;
    if ( v21 < 0 )
    {
      SmLogFailureInt((unsigned int)"SmpSbCreateSession", 179, *(_DWORD *)&DestinationString.Length, 0, v21);
      goto LABEL_20;
    }
    v22 = NtDuplicateObject(a2, *((HANDLE *)a3 + 2), (HANDLE)v9[4], SourceHandle, 0x1FFFFFu, 0, 0);
    v14 = v22;
    if ( v22 < 0 )
    {
      SmLogFailureInt((unsigned int)"SmpSbCreateSession", 195, *((_DWORD *)v9 + 16), 0, v22);
    }
    else
    {
      v23 = _InterlockedIncrement((volatile signed __int32 *)v9 + 1);
      if ( !v23 )
        _InterlockedOr((volatile signed __int32 *)v9 + 2, 8u);
      v42 = v23;
      v40 = 0;
      v39[0] = 12583064LL;
      v34 = 288LL;
      v24 = NtAlpcSendWaitReceivePort(
              v9[5],
              0x20000LL,
              v39,
              0LL,
              v39,
              &v34,
              0LL,
              0LL,
              *(_DWORD *)&DestinationString.Length);
      v14 = v24;
      if ( v24 >= 0 )
      {
        v14 = v41;
        goto LABEL_20;
      }
      SmLogFailureInt((unsigned int)"SmpSbCreateSession", 232, *((_DWORD *)v9 + 16), 0, v24);
      NtDuplicateObject((HANDLE)v9[4], SourceHandle[0], 0LL, 0LL, 0, 0, 1u);
    }
    NtDuplicateObject((HANDLE)v9[4], TargetHandle[1], 0LL, 0LL, 0, 0, 1u);
    goto LABEL_20;
  }
LABEL_9:
  SmLogFailureInt((unsigned int)"SmpSbCreateSession", 148, *(_DWORD *)&DestinationString.Length, 0, v12);
LABEL_20:
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)v9, 0xFFFFFFFF) == 1 )
  {
    if ( (v9[1] & 4) != 0 && *((_DWORD *)v9 + 6) == 2 && *((_DWORD *)v9 + 16) == *(_DWORD *)SmpCoreProcessIds )
    {
      DestinationString = 0LL;
      RtlInitUnicodeString(&DestinationString, L"Core Windows subsystem terminated");
      Parameters[1] = -1073741823LL;
      Parameters[0] = (unsigned __int64)&DestinationString;
      SmpTerminate(Parameters, 1u, 2u);
      __debugbreak();
    }
    v25 = (void *)v9[2];
    if ( v25 )
      SmpDisposeSubSysSynch(v25);
    v26 = (void *)v9[5];
    if ( v26 )
      NtClose(v26);
    if ( (v9[1] & 8) != 0 )
    {
      v29 = SmpOverflowSubSysList;
      v30 = v9 + 9;
      if ( *(__int64 **)(SmpOverflowSubSysList + 8) != &SmpOverflowSubSysList )
        __fastfail(3u);
      *v30 = SmpOverflowSubSysList;
      v30[1] = &SmpOverflowSubSysList;
      *(_QWORD *)(v29 + 8) = v30;
      SmpOverflowSubSysList = (__int64)v30;
    }
    else
    {
      v27 = (void *)v9[4];
      if ( v27 )
        NtClose(v27);
      RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, v9);
    }
  }
  return v14;
}
