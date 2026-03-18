/*
 * XREFs of GreSfmGetNotificationTokens @ 0x140087980
 * Callers:
 *     <none>
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x140012644 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     ?GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z @ 0x14001FC40 (-GreReleaseSemaphoreSharedInternal@@YAXPEAUHSEMAPHORE__@@@Z.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x14001FC70 (EtwTraceGreLockReleaseSemaphore.c)
 *     EngAcquireSemaphoreShared @ 0x140021030 (EngAcquireSemaphoreShared.c)
 *     ?GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ @ 0x140021F20 (-GreGetCurrentThreadCrossSessionCheck@@YAPEAU_GRETHREAD@@XZ.c)
 *     UserIsCurrentProcessDwm @ 0x140024300 (UserIsCurrentProcessDwm.c)
 *     ?W32ReleasePushLockExclusive@@YAXPEAVW32_PUSH_LOCK@@@Z @ 0x1400403D0 (-W32ReleasePushLockExclusive@@YAXPEAVW32_PUSH_LOCK@@@Z.c)
 *     ?GreEnterCriticalRegionAndAcquirePushLockExclusive@@YAXPEAVW32_PUSH_LOCK@@@Z @ 0x140040560 (-GreEnterCriticalRegionAndAcquirePushLockExclusive@@YAXPEAVW32_PUSH_LOCK@@@Z.c)
 *     ?GetNotificationTokens@SfmTokenArray@@QEAAJIPEAIPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x140087B10 (-GetNotificationTokens@SfmTokenArray@@QEAAJIPEAIPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 */

__int64 __fastcall GreSfmGetNotificationTokens(__int64 a1, unsigned int *a2, struct _D3DKMT_PRESENTHISTORYTOKEN *a3)
{
  unsigned int v5; // ebp
  __int64 v6; // r14
  struct _ERESOURCE *v7; // rdi
  struct _GRETHREAD *v8; // rax
  struct _GRETHREAD *v9; // rbx
  __int64 v10; // r8
  char v11; // cl
  int v12; // r8d
  struct W32_PUSH_LOCK *v13; // rbx
  unsigned int NotificationTokens; // eax
  __int64 v15; // rcx
  unsigned int v16; // esi
  __int64 SessionState; // rax
  struct _GRETHREAD *v18; // rax
  int v21; // edx
  unsigned __int64 i; // rcx
  int v23; // eax
  unsigned int v24; // [rsp+58h] [rbp+10h] BYREF
  LONG NumberOfWaitingThreads; // [rsp+60h] [rbp+18h] BYREF

  v24 = 0;
  v5 = a1;
  v6 = *(_QWORD *)(W32GetSessionState(a1) + 88);
  v7 = (struct _ERESOURCE *)(*(_QWORD *)v6 + 520LL);
  EngAcquireSemaphoreShared((HSEMAPHORE)v7);
  v8 = GreGetCurrentThreadCrossSessionCheck();
  v9 = v8;
  if ( v8 )
  {
    v10 = *(_QWORD *)v8;
    if ( (*(_QWORD *)v8 & 0xFFFFFFFFFFFFFF80uLL) != 0 && (*(_QWORD *)v8 & 0x80u) == 0LL )
    {
      v21 = 37;
      for ( i = 0LL; i < 0x40; ++i )
      {
        v23 = i;
        if ( !_bittest64(&v10, i) )
          v23 = v21;
        v21 = v23;
      }
      if ( v23 > 7 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM();
    }
    v11 = *((_BYTE *)v9 + 15);
    *((_BYTE *)v9 + 15) = v11 + 1;
    if ( !v11 )
      *(_QWORD *)v9 |= 0x80uLL;
  }
  if ( UserIsCurrentProcessDwm() )
  {
    v13 = (struct W32_PUSH_LOCK *)(*(_QWORD *)(v6 + 4232) + 32LL);
    if ( *(_QWORD *)(v6 + 4232) != -32LL )
      GreEnterCriticalRegionAndAcquirePushLockExclusive(v13);
    NotificationTokens = SfmTokenArray::GetNotificationTokens(*(SfmTokenArray **)(v6 + 4232), v5, &v24, a3);
    v15 = *(_QWORD *)(v6 + 4232);
    v16 = NotificationTokens;
    if ( !*(_DWORD *)(v15 + 12) )
    {
      NumberOfWaitingThreads = 0;
      SessionState = W32GetSessionState(v15);
      ZwResetEvent(*(HANDLE *)(*(_QWORD *)(*(_QWORD *)(SessionState + 88) + 4232LL) + 24LL), &NumberOfWaitingThreads);
    }
    if ( v13 )
      W32ReleasePushLockExclusive(v13);
  }
  else
  {
    v16 = -1073741790;
  }
  *a2 = v24;
  EtwTraceGreLockReleaseSemaphore((__int64)L"DwmState", (int)v7, v12);
  v18 = GreGetCurrentThreadCrossSessionCheck();
  if ( v18 )
  {
    if ( (*((_BYTE *)v18 + 15))-- == 1 )
      *(_QWORD *)v18 &= ~0x80uLL;
  }
  GreReleaseSemaphoreSharedInternal(v7);
  return v16;
}
