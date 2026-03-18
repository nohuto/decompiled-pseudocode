/*
 * XREFs of ExpSnapShotHandleTables @ 0x140921A40
 * Callers:
 *     ExpQuerySystemInformation @ 0x1409DB5B0 (ExpQuerySystemInformation.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x14029B450 (ExfReleasePushLockShared.c)
 *     ExfAcquirePushLockSharedEx @ 0x14029B5A0 (ExfAcquirePushLockSharedEx.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x14029B9E0 (KiLeaveCriticalRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     ExfUnblockPushLock @ 0x14036EA10 (ExfUnblockPushLock.c)
 *     ExGetHandleAttributes @ 0x1403FA940 (ExGetHandleAttributes.c)
 *     ExGetHandlePointer @ 0x140431FD0 (ExGetHandlePointer.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     ExpBlockOnLockedHandleEntry @ 0x140851898 (ExpBlockOnLockedHandleEntry.c)
 *     PsLookupProcessByProcessId @ 0x140921F20 (PsLookupProcessByProcessId.c)
 */

__int64 __fastcall ExpSnapShotHandleTables(
        __int64 (__fastcall *a1)(int, int, int, int, __int64, int, __int64),
        unsigned int a2,
        _DWORD *a3,
        unsigned int a4,
        _DWORD *a5,
        char a6)
{
  struct _KTHREAD *CurrentThread; // rbp
  int v7; // r11d
  __int64 v9; // r10
  unsigned int v11; // esi
  __int64 *v12; // rbx
  __int64 i; // rdi
  unsigned int *v14; // r14
  __int64 j; // rbx
  unsigned __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // rax
  __int64 *v19; // rdi
  __int64 v20; // r8
  __int64 v21; // rbp
  unsigned int v22; // eax
  unsigned __int64 HandlePointer; // rsi
  unsigned __int64 v24; // rcx
  unsigned int v25; // eax
  unsigned __int64 v26; // rsi
  unsigned __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // r9
  signed __int32 v32[8]; // [rsp+0h] [rbp-98h] BYREF
  __int64 v33; // [rsp+20h] [rbp-78h]
  unsigned int v34; // [rsp+28h] [rbp-70h]
  _DWORD *v35; // [rsp+30h] [rbp-68h]
  PEPROCESS Process; // [rsp+40h] [rbp-58h] BYREF
  __int64 v37; // [rsp+48h] [rbp-50h]
  struct _KTHREAD *v38; // [rsp+50h] [rbp-48h]
  _DWORD *v40; // [rsp+B0h] [rbp+18h]

  CurrentThread = KeGetCurrentThread();
  v7 = 8;
  Process = 0LL;
  v9 = 2LL;
  v38 = CurrentThread;
  if ( a6 )
    v9 = 4LL;
  v11 = 0;
  v40 = &a3[v9];
  if ( a6 )
    v7 = 16;
  *a5 = v7;
  *a3 = 0;
  --CurrentThread->KernelApcDisable;
  v12 = KeAbPreAcquire((__int64)&HandleTableListLock, 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&HandleTableListLock, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((signed __int64 *)&HandleTableListLock, 0, v12, (unsigned __int64)&HandleTableListLock);
  if ( v12 )
    *((_BYTE *)v12 + 10) = 1;
  for ( i = HandleTableListHead; ; i = *(_QWORD *)i )
  {
    v37 = i;
    if ( ((v11 + 0x80000000) & 0x80000000) == 0 && v11 != -1073741820 )
      break;
    if ( (__int64 *)i == &HandleTableListHead )
      break;
    v14 = (unsigned int *)(i - 24);
    if ( PsLookupProcessByProcessId((HANDLE)*(unsigned int *)(i + 16), &Process) < 0 )
      continue;
    ObfDereferenceObject(Process);
    for ( j = 0LL; ((v11 + 0x80000000) & 0x80000000) != 0 || v11 == -1073741820; j += 4LL )
    {
      v16 = j & 0xFFFFFFFFFFFFFFFCuLL;
      if ( (j & 0xFFFFFFFFFFFFFFFCuLL) >= *v14 )
        break;
      v17 = *((_QWORD *)v14 + 1);
      if ( (v17 & 3) == 1 )
      {
        v18 = *(_QWORD *)(v17 + 8 * (v16 >> 10) - 1);
LABEL_18:
        v19 = (__int64 *)(v18 + 4 * (j & 0x3FC));
        goto LABEL_19;
      }
      if ( (v17 & 3) != 0 )
      {
        v18 = *(_QWORD *)(*(_QWORD *)(v17 + 8 * (v16 >> 19) - 2) + 8 * ((v16 >> 10) & 0x1FF));
        goto LABEL_18;
      }
      v19 = (__int64 *)(v17 + 4 * v16);
LABEL_19:
      if ( !v19 )
        break;
      if ( (j & 0x3FC) != 0 && *v19 )
      {
        do
        {
          while ( 1 )
          {
            _m_prefetchw(v19);
            v20 = *v19;
            if ( (*v19 & 1) != 0 )
              break;
            if ( !v20 )
              goto LABEL_40;
            ExpBlockOnLockedHandleEntry((__int64)v14, v19, v20);
          }
        }
        while ( v20 != _InterlockedCompareExchange64(v19, v20 - 1, v20) );
        ++*a3;
        v21 = v14[10];
        if ( (char *)a1 == (char *)ObpCaptureHandleInformation )
        {
          v22 = *a5 + 24;
          *a5 = v22;
          if ( v22 < 0x18 )
          {
            v11 = -1073741675;
          }
          else if ( a4 < v22 )
          {
            v11 = -1073741820;
          }
          else
          {
            HandlePointer = ExGetHandlePointer(v19);
            *(_WORD *)v40 = v21;
            *((_BYTE *)v40 + 5) = ExGetHandleAttributes((unsigned int *)v19, 7);
            *((_BYTE *)v40 + 4) = *(_BYTE *)(ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(HandlePointer + 24) ^ (unsigned __int64)BYTE1(HandlePointer)]
                                           + 40);
            v24 = 0LL;
            *((_WORD *)v40 + 3) = j;
            if ( !a2 )
              v24 = HandlePointer + 48;
            v11 = 0;
            *((_QWORD *)v40 + 1) = v24;
            *((_WORD *)v40 + 1) = 0;
            v40[4] = v19[1] & 0x1FFFFFF;
            v40 += 6;
          }
        }
        else if ( a1 == ObpCaptureHandleInformationEx )
        {
          v25 = *a5 + 40;
          *a5 = v25;
          if ( v25 < 0x28 )
          {
            v11 = -1073741675;
          }
          else if ( a4 < v25 )
          {
            v11 = -1073741820;
          }
          else
          {
            v26 = ExGetHandlePointer(v19);
            *((_QWORD *)v40 + 1) = v21;
            v40[8] = (unsigned __int8)ExGetHandleAttributes((unsigned int *)v19, 7);
            *((_WORD *)v40 + 15) = *(unsigned __int8 *)(ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v26 + 24) ^ (unsigned __int64)BYTE1(v26)]
                                                      + 40);
            v27 = 0LL;
            *((_QWORD *)v40 + 2) = j;
            if ( !a2 )
              v27 = v26 + 48;
            v11 = 0;
            *(_QWORD *)v40 = v27;
            *((_WORD *)v40 + 14) = 0;
            v40[6] = v19[1] & 0x1FFFFFF;
            v40 += 10;
          }
        }
        else
        {
          v35 = a5;
          v34 = a4;
          v33 = j;
          v11 = guard_dispatch_icall_no_overrides(a2);
        }
        _InterlockedIncrement64(v19);
        _InterlockedOr(v32, 0);
        if ( *((_QWORD *)v14 + 6) )
          ExfUnblockPushLock((__int64)(v14 + 12), 0LL);
      }
LABEL_40:
      ;
    }
    i = v37;
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&HandleTableListLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&HandleTableListLock);
  KeAbPostRelease((ULONG_PTR)&HandleTableListLock);
  KiLeaveCriticalRegionUnsafe((__int64)v38, v28, v29, v30);
  return v11;
}
