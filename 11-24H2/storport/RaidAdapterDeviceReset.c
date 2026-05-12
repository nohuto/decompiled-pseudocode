/*
 * XREFs of RaidAdapterDeviceReset @ 0x140059DAC
 * Callers:
 *     RaidAdapterStorageDeviceResetIoctl @ 0x140062A2C (RaidAdapterStorageDeviceResetIoctl.c)
 * Callees:
 *     GatewayRegisterForEmptyNotification @ 0x1400076AC (GatewayRegisterForEmptyNotification.c)
 *     RaidPauseAdapterQueue @ 0x1400078E0 (RaidPauseAdapterQueue.c)
 *     RaidAcquireAdapterRemoveLock @ 0x140009B34 (RaidAcquireAdapterRemoveLock.c)
 *     RaidIsAdapterControlSupported @ 0x14001C7B0 (RaidIsAdapterControlSupported.c)
 *     StorReset @ 0x140040430 (StorReset.c)
 *     RaidAdapterSetPauseTimer @ 0x14006179C (RaidAdapterSetPauseTimer.c)
 *     RaidResumeAndRestartAdapterQueues @ 0x1400664A8 (RaidResumeAndRestartAdapterQueues.c)
 *     RaidRequestDIrpForAssociatedUnits @ 0x1400787A8 (RaidRequestDIrpForAssociatedUnits.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 */

__int64 __fastcall RaidAdapterDeviceReset(__int64 a1, __int64 a2, __int64 a3)
{
  union _LARGE_INTEGER *Timeout; // r15
  int v8; // esi
  int v9; // r14d
  unsigned int v10; // ebx
  union _LARGE_INTEGER *v11; // rsi
  struct _SLIST_ENTRY *v12; // rax
  int v13; // r14d
  unsigned int v14; // ebx
  PSLIST_ENTRY v15; // rax
  unsigned int v16; // ecx
  __int64 v17; // r9
  KIRQL v18; // bl
  _DWORD *v19; // rax
  int v20; // edx
  int v21; // eax
  unsigned int *v22; // rcx
  unsigned int v23; // eax
  unsigned int v24; // eax
  struct _KEVENT Event[2]; // [rsp+30h] [rbp-49h] BYREF
  __int64 v26; // [rsp+60h] [rbp-19h]
  __int128 v27; // [rsp+68h] [rbp-11h]
  __int64 v28; // [rsp+78h] [rbp-1h]
  union _SLIST_HEADER SListHead; // [rsp+80h] [rbp+7h] BYREF

  v26 = 0LL;
  Timeout = 0LL;
  v28 = 0LL;
  SListHead = 0LL;
  memset(Event, 0, sizeof(Event));
  v27 = 0LL;
  if ( !*(_QWORD *)(a1 + 5376) )
    return 3221225488LL;
  if ( !RaidIsAdapterControlSupported(a1 + 376, 22) )
    return 3221225659LL;
  if ( _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 328), 1, 0) == 1 )
    return 3221226614LL;
  if ( (int)RaidAcquireAdapterRemoveLock(a1) >= 0 )
  {
    RaidPauseAdapterQueue(a1);
    if ( *(int *)(a1 + 4664) > 1 )
    {
      v9 = 0;
      v10 = KeQueryHighestNodeNumber() + 1;
      InitializeSListHead(&SListHead);
      do
      {
        if ( v10 )
        {
          v11 = Timeout;
          Timeout = (union _LARGE_INTEGER *)v10;
          do
          {
            v12 = ExpInterlockedPopEntrySList((PSLIST_HEADER)((char *)v11 + *(_QWORD *)(a1 + 4672)));
            if ( v12 )
            {
              ExpInterlockedPushEntrySList(&SListHead, v12);
              ++v9;
            }
            else
            {
              _mm_pause();
            }
            v11 += 8;
            Timeout = (union _LARGE_INTEGER *)((char *)Timeout - 1);
          }
          while ( Timeout );
        }
      }
      while ( v9 < *(_DWORD *)(a1 + 4664) );
    }
    KeInitializeEvent(Event, SynchronizationEvent, 0);
    if ( !GatewayRegisterForEmptyNotification(
            *(_QWORD *)(a1 + 960),
            *(_QWORD *)(a1 + 8),
            a3,
            (__int64)Event,
            (void (__fastcall *)(__int64, __int64, __int64))&RaidAdapterStopOnGatewayEmpty) )
      KeWaitForSingleObject(Event, Executive, 0, 0, Timeout);
    v8 = StorReset(*(_QWORD *)(a1 + 616) + 16LL, *(_DWORD *)(a2 + 8), 2, *(_QWORD *)(a2 + 16));
    if ( *(int *)(a1 + 4664) > 1 )
    {
      v13 = (int)Timeout;
      v14 = KeQueryHighestNodeNumber() + 1;
      do
      {
        v15 = ExpInterlockedPopEntrySList(&SListHead);
        if ( v15 )
        {
          ExpInterlockedPushEntrySList(
            (PSLIST_HEADER)(*(_QWORD *)(a1 + 4672) + ((unsigned __int64)(HIDWORD(v15[1].Next) % v14) << 6)),
            v15);
          ++v13;
        }
      }
      while ( v13 < *(_DWORD *)(a1 + 4664) );
    }
    if ( v8 >= 0 && (v16 = *(_DWORD *)(a1 + 600)) != 0 )
    {
      v17 = v16 / 0xF4240 + 1;
      if ( v16 == 1000000 * (v16 / 0xF4240) )
        v17 = v16 / 0xF4240;
      RaidAdapterSetPauseTimer(a1, a1 + 4136, a1 + 4200, v17);
    }
    else
    {
      v18 = KfRaiseIrql(2u);
      RaidResumeAndRestartAdapterQueues(a1);
      KeLowerIrql(v18);
    }
    v19 = *(_DWORD **)(a1 + 6144);
    if ( !v19 || (*v19 & 0xA0) == 0 )
      goto LABEL_46;
    v20 = RaidRequestDIrpForAssociatedUnits(a1, 0LL);
    if ( v20 == 259 )
    {
      KeWaitForSingleObject((PVOID)(*(_QWORD *)(a1 + 6144) + 56LL), Executive, 0, 0, Timeout);
      v20 = (int)Timeout;
    }
    else if ( v8 >= 0 )
    {
      v21 = v8;
      if ( v20 < 0 )
        v21 = -1073741436;
      v8 = v21;
    }
    v22 = *(unsigned int **)(a1 + 6144);
    v23 = *v22;
    if ( v20 < 0 )
    {
      v24 = v23 | 0x40;
    }
    else if ( (v23 & 0x20) != 0 )
    {
      v24 = v23 & 0xFFFFFFDF;
    }
    else
    {
      if ( (v23 & 0x80u) == 0 )
      {
LABEL_46:
        ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 336));
        goto LABEL_47;
      }
      v24 = v23 & 0xFFFFFF7F;
    }
    *v22 = v24;
    goto LABEL_46;
  }
  v8 = -1073741436;
LABEL_47:
  *(_DWORD *)(a1 + 328) = (_DWORD)Timeout;
  return (unsigned int)v8;
}
