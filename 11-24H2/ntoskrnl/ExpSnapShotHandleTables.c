/*
 * XREFs of ExpSnapShotHandleTables @ 0x1408F1D40
 * Callers:
 *     ExpQuerySystemInformation @ 0x140ADDAE0 (ExpQuerySystemInformation.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x140289BD0 (KiLeaveCriticalRegionUnsafe.c)
 *     ExfReleasePushLockShared @ 0x14028E410 (ExfReleasePushLockShared.c)
 *     ExfUnblockPushLock @ 0x1402BC1A0 (ExfUnblockPushLock.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14031F9EC (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     ExGetHandleAttributes @ 0x1403FC9F0 (ExGetHandleAttributes.c)
 *     ExGetHandlePointer @ 0x14041B770 (ExGetHandlePointer.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     ExpBlockOnLockedHandleEntry @ 0x140849D30 (ExpBlockOnLockedHandleEntry.c)
 *     PsLookupProcessByProcessId @ 0x1408F21F0 (PsLookupProcessByProcessId.c)
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
  char *v13; // rbx
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
  signed __int32 v32[8]; // [rsp+0h] [rbp-98h] BYREF
  __int64 v33; // [rsp+20h] [rbp-78h]
  unsigned int v34; // [rsp+28h] [rbp-70h]
  unsigned int *v35; // [rsp+30h] [rbp-68h]
  PEPROCESS Process; // [rsp+40h] [rbp-58h] BYREF
  __int64 v37; // [rsp+48h] [rbp-50h]
  struct _KTHREAD *v38; // [rsp+50h] [rbp-48h]
  _DWORD *v40; // [rsp+B0h] [rbp+18h] BYREF
  unsigned int v41; // [rsp+B8h] [rbp+20h]

  v41 = a4;
  CurrentThread = KeGetCurrentThread();
  v7 = 8;
  v8 = (unsigned int *)a5;
  Process = 0LL;
  v10 = 2LL;
  v38 = CurrentThread;
  if ( a6 )
    v10 = 4LL;
  v12 = 0;
  v40 = &a3[v10];
  if ( a6 )
    v7 = 16;
  *a5 = v7;
  *a3 = 0;
  --CurrentThread->KernelApcDisable;
  v13 = (char *)KeAbPreAcquire((__int64)&HandleTableListLock, 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&HandleTableListLock, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((signed __int64 *)&HandleTableListLock, 0, v13, (__int64)&HandleTableListLock);
  if ( v13 )
    v13[10] = 1;
  for ( i = HandleTableListHead; ; i = *(_QWORD *)i )
  {
    v37 = i;
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
          else if ( v41 < v23 )
          {
            v12 = -1073741820;
          }
          else
          {
            HandlePointer = ExGetHandlePointer(v20);
            *(_WORD *)v40 = v22;
            HandleAttributes = ExGetHandleAttributes((unsigned int *)v20, 7);
            *((_BYTE *)v40 + 5) = HandleAttributes;
            *((_BYTE *)v40 + 4) = *(_BYTE *)(ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(HandlePointer + 24) ^ (unsigned __int64)BYTE1(HandlePointer)]
                                           + 40);
            v26 = 0LL;
            *((_WORD *)v40 + 3) = j;
            if ( !a2 )
              v26 = HandlePointer + 48;
            v12 = 0;
            *((_QWORD *)v40 + 1) = v26;
            *((_WORD *)v40 + 1) = 0;
            v40[4] = v20[1] & 0x1FFFFFF;
            v40 += 6;
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
          else if ( v41 < v27 )
          {
            v12 = -1073741820;
          }
          else
          {
            v28 = ExGetHandlePointer(v20);
            *((_QWORD *)v40 + 1) = v22;
            v29 = ExGetHandleAttributes((unsigned int *)v20, 7);
            v40[8] = v29;
            *((_WORD *)v40 + 15) = *(unsigned __int8 *)(ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v28 + 24) ^ (unsigned __int64)BYTE1(v28)]
                                                      + 40);
            v30 = 0LL;
            *((_QWORD *)v40 + 2) = j;
            if ( !a2 )
              v30 = v28 + 48;
            v12 = 0;
            *(_QWORD *)v40 = v30;
            *((_WORD *)v40 + 14) = 0;
            v40[6] = v20[1] & 0x1FFFFFF;
            v40 += 10;
          }
        }
        else
        {
          v35 = v8;
          v34 = v41;
          v33 = j;
          v12 = guard_dispatch_icall_no_overrides(a2, &v40);
        }
        _InterlockedIncrement64(v20);
        _InterlockedOr(v32, 0);
        if ( *((_QWORD *)v15 + 6) )
          ExfUnblockPushLock((__int64)(v15 + 12), 0LL);
      }
LABEL_40:
      ;
    }
    i = v37;
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&HandleTableListLock, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&HandleTableListLock);
  KeAbPostRelease((ULONG_PTR)&HandleTableListLock);
  KiLeaveCriticalRegionUnsafe((__int64)v38);
  return v12;
}
