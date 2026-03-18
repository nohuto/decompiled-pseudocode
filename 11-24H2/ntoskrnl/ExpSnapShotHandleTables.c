/*
 * XREFs of ExpSnapShotHandleTables @ 0x14094D7D0
 * Callers:
 *     ExpQuerySystemInformation @ 0x140ADC240 (ExpQuerySystemInformation.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x1402595C0 (KiLeaveCriticalRegionUnsafe.c)
 *     ExfReleasePushLockShared @ 0x14025DE00 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     ExfUnblockPushLock @ 0x1402C7820 (ExfUnblockPushLock.c)
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14034050C (ExfAcquirePushLockSharedEx.c)
 *     ExGetHandleAttributes @ 0x1404023F0 (ExGetHandleAttributes.c)
 *     ExGetHandlePointer @ 0x1404275E0 (ExGetHandlePointer.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     ExpBlockOnLockedHandleEntry @ 0x14084DA70 (ExpBlockOnLockedHandleEntry.c)
 *     PsLookupProcessByProcessId @ 0x14094DC80 (PsLookupProcessByProcessId.c)
 */

__int64 __fastcall ExpSnapShotHandleTables(
        __int64 (__fastcall *a1)(int, int, int, int, __int64, int, __int64),
        unsigned int a2,
        _DWORD *a3,
        unsigned int a4,
        int *a5,
        char a6)
{
  struct _KTHREAD *CurrentThread; // rbp
  int v7; // r11d
  unsigned int *v8; // r15
  __int64 v10; // r10
  unsigned int v12; // esi
  _QWORD *v13; // rbx
  __int64 i; // rdi
  unsigned int *v15; // r14
  __int64 j; // rbx
  unsigned __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // rax
  __int64 *v20; // rdi
  __int64 v21; // r8
  __int64 v22; // rbp
  unsigned int v23; // eax
  unsigned __int64 HandlePointer; // rsi
  char HandleAttributes; // al
  unsigned __int64 v26; // rcx
  unsigned int v27; // eax
  unsigned __int64 v28; // rsi
  unsigned __int8 v29; // al
  unsigned __int64 v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // r9
  signed __int32 v35[8]; // [rsp+0h] [rbp-98h] BYREF
  __int64 v36; // [rsp+20h] [rbp-78h]
  unsigned int v37; // [rsp+28h] [rbp-70h]
  unsigned int *v38; // [rsp+30h] [rbp-68h]
  PEPROCESS Process; // [rsp+40h] [rbp-58h] BYREF
  __int64 v40; // [rsp+48h] [rbp-50h]
  struct _KTHREAD *v41; // [rsp+50h] [rbp-48h]
  _DWORD *v43; // [rsp+B0h] [rbp+18h] BYREF
  unsigned int v44; // [rsp+B8h] [rbp+20h]

  v44 = a4;
  CurrentThread = KeGetCurrentThread();
  v7 = 8;
  v8 = (unsigned int *)a5;
  Process = 0LL;
  v10 = 2LL;
  v41 = CurrentThread;
  if ( a6 )
    v10 = 4LL;
  v12 = 0;
  v43 = &a3[v10];
  if ( a6 )
    v7 = 16;
  *a5 = v7;
  *a3 = 0;
  --CurrentThread->KernelApcDisable;
  v13 = KeAbPreAcquire((__int64)&HandleTableListLock, 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&HandleTableListLock, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((signed __int64 *)&HandleTableListLock, 0, v13, (__int64)&HandleTableListLock);
  if ( v13 )
    *((_BYTE *)v13 + 10) = 1;
  for ( i = HandleTableListHead; ; i = *(_QWORD *)i )
  {
    v40 = i;
    if ( ((v12 + 0x80000000) & 0x80000000) == 0 && v12 != -1073741820 )
      break;
    if ( (__int64 *)i == &HandleTableListHead )
      break;
    v15 = (unsigned int *)(i - 24);
    if ( PsLookupProcessByProcessId((HANDLE)*(unsigned int *)(i + 16), &Process) < 0 )
      continue;
    ObfDereferenceObject(Process);
    for ( j = 0LL; ((v12 + 0x80000000) & 0x80000000) != 0 || v12 == -1073741820; j += 4LL )
    {
      v17 = j & 0xFFFFFFFFFFFFFFFCuLL;
      if ( (j & 0xFFFFFFFFFFFFFFFCuLL) >= *v15 )
        break;
      v18 = *((_QWORD *)v15 + 1);
      if ( (v18 & 3) == 1 )
      {
        v19 = *(_QWORD *)(v18 + 8 * (v17 >> 10) - 1);
LABEL_18:
        v20 = (__int64 *)(v19 + 4 * (j & 0x3FC));
        goto LABEL_19;
      }
      if ( (v18 & 3) != 0 )
      {
        v19 = *(_QWORD *)(*(_QWORD *)(v18 + 8 * (v17 >> 19) - 2) + 8 * ((v17 >> 10) & 0x1FF));
        goto LABEL_18;
      }
      v20 = (__int64 *)(v18 + 4 * v17);
LABEL_19:
      if ( !v20 )
        break;
      if ( (j & 0x3FC) != 0 && *v20 )
      {
        do
        {
          while ( 1 )
          {
            _m_prefetchw(v20);
            v21 = *v20;
            if ( (*v20 & 1) != 0 )
              break;
            if ( !v21 )
              goto LABEL_40;
            ExpBlockOnLockedHandleEntry((__int64)v15, v20, v21);
          }
        }
        while ( v21 != _InterlockedCompareExchange64(v20, v21 - 1, v21) );
        ++*a3;
        v22 = v15[10];
        if ( (char *)a1 == (char *)ObpCaptureHandleInformation )
        {
          v23 = *v8 + 24;
          *v8 = v23;
          if ( v23 < 0x18 )
          {
            v12 = -1073741675;
          }
          else if ( v44 < v23 )
          {
            v12 = -1073741820;
          }
          else
          {
            HandlePointer = ExGetHandlePointer(v20);
            *(_WORD *)v43 = v22;
            HandleAttributes = ExGetHandleAttributes((unsigned int *)v20, 7);
            *((_BYTE *)v43 + 5) = HandleAttributes;
            *((_BYTE *)v43 + 4) = *(_BYTE *)(ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(HandlePointer + 24) ^ (unsigned __int64)BYTE1(HandlePointer)]
                                           + 40);
            v26 = 0LL;
            *((_WORD *)v43 + 3) = j;
            if ( !a2 )
              v26 = HandlePointer + 48;
            v12 = 0;
            *((_QWORD *)v43 + 1) = v26;
            *((_WORD *)v43 + 1) = 0;
            v43[4] = v20[1] & 0x1FFFFFF;
            v43 += 6;
          }
        }
        else if ( a1 == ObpCaptureHandleInformationEx )
        {
          v27 = *v8 + 40;
          *v8 = v27;
          if ( v27 < 0x28 )
          {
            v12 = -1073741675;
          }
          else if ( v44 < v27 )
          {
            v12 = -1073741820;
          }
          else
          {
            v28 = ExGetHandlePointer(v20);
            *((_QWORD *)v43 + 1) = v22;
            v29 = ExGetHandleAttributes((unsigned int *)v20, 7);
            v43[8] = v29;
            *((_WORD *)v43 + 15) = *(unsigned __int8 *)(ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v28 + 24) ^ (unsigned __int64)BYTE1(v28)]
                                                      + 40);
            v30 = 0LL;
            *((_QWORD *)v43 + 2) = j;
            if ( !a2 )
              v30 = v28 + 48;
            v12 = 0;
            *(_QWORD *)v43 = v30;
            *((_WORD *)v43 + 14) = 0;
            v43[6] = v20[1] & 0x1FFFFFF;
            v43 += 10;
          }
        }
        else
        {
          v38 = v8;
          v37 = v44;
          v36 = j;
          v12 = guard_dispatch_icall_no_overrides(a2, &v43, v22, v20);
        }
        _InterlockedIncrement64(v20);
        _InterlockedOr(v35, 0);
        if ( *((_QWORD *)v15 + 6) )
          ExfUnblockPushLock((__int64)(v15 + 12), 0LL);
      }
LABEL_40:
      ;
    }
    i = v40;
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&HandleTableListLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&HandleTableListLock);
  KeAbPostRelease((ULONG_PTR)&HandleTableListLock);
  KiLeaveCriticalRegionUnsafe((__int64)v41, v31, v32, v33);
  return v12;
}
