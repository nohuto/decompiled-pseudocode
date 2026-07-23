/*
 * XREFs of sub_1409DA1F4 @ 0x1409DA1F4
 * Callers:
 *     WbCreateHeapExecutedBlock @ 0x1409203B8 (WbCreateHeapExecutedBlock.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x14028E410 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14031F9EC (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     KeLeaveGuardedRegion @ 0x140362BA0 (KeLeaveGuardedRegion.c)
 *     sub_14091C200 @ 0x14091C200 (sub_14091C200.c)
 *     sub_1409DA42C @ 0x1409DA42C (sub_1409DA42C.c)
 *     sub_1409DA4D0 @ 0x1409DA4D0 (sub_1409DA4D0.c)
 *     sub_1409DAF88 @ 0x1409DAF88 (sub_1409DAF88.c)
 */

__int64 __fastcall sub_1409DA1F4(__int64 a1, unsigned int a2, _QWORD *a3, _QWORD *a4)
{
  PVOID *v6; // r15
  PVOID *v7; // rsi
  int v8; // r14d
  struct _KTHREAD *CurrentThread; // rax
  signed __int64 *v10; // rdi
  char *v11; // rsi
  unsigned int i; // esi
  __int64 v13; // rcx
  struct _KTHREAD *v15; // rax
  char *v16; // rax
  __int64 v17; // r8
  char *v18; // rsi
  PVOID *BaseAddress; // [rsp+30h] [rbp-20h] BYREF
  _QWORD v20[3]; // [rsp+38h] [rbp-18h] BYREF

  BaseAddress = 0LL;
  v20[0] = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  v8 = 0;
  if ( a2 > 0x10000 )
  {
    v8 = -1073741811;
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    v10 = (signed __int64 *)(a1 + 224);
    --CurrentThread->SpecialApcDisable;
    v11 = (char *)KeAbPreAcquire(a1 + 224, 0LL);
    if ( _InterlockedCompareExchange64(v10, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(v10, 0, v11, (__int64)v10);
    if ( v11 )
      v11[10] = 1;
    for ( i = 0; i < *(_DWORD *)(a1 + 188); ++i )
    {
      v6 = *(PVOID **)(*(_DWORD *)(a1 + 184) * i + *(_QWORD *)(a1 + 200));
      v8 = sub_1409DAF88(v6, a2, v20);
      if ( v8 < 0 )
        goto LABEL_19;
      if ( v20[0] )
        break;
    }
    if ( _InterlockedCompareExchange64(v10, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v10);
    KeAbPostRelease((ULONG_PTR)v10);
    KeLeaveGuardedRegion();
    v13 = v20[0];
    if ( v20[0] )
    {
      v7 = BaseAddress;
    }
    else
    {
      v8 = sub_1409DA4D0(0LL, &BaseAddress);
      if ( v8 < 0 )
        goto LABEL_19;
      v7 = BaseAddress;
      v8 = sub_1409DAF88(BaseAddress, a2, v20);
      if ( v8 < 0 )
        goto LABEL_18;
      v15 = KeGetCurrentThread();
      --v15->SpecialApcDisable;
      v16 = (char *)KeAbPreAcquire((__int64)v10, 0LL);
      v18 = v16;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v10, 0LL) )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v10, v16, (__int64)v10);
      if ( v18 )
        v18[10] = 1;
      v8 = sub_14091C200((unsigned int *)(a1 + 184), (__int64)BaseAddress, v17, (int)BaseAddress[4], 8, 0xFFFFFFFF);
      if ( (_InterlockedExchangeAdd64(v10, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v10);
      KeAbPostRelease((ULONG_PTR)v10);
      KeLeaveGuardedRegion();
      if ( v8 < 0 )
      {
LABEL_19:
        v7 = BaseAddress;
        goto LABEL_18;
      }
      v6 = BaseAddress;
      v7 = 0LL;
      v13 = v20[0];
    }
    if ( a3 )
      *a3 = v13;
    if ( a4 )
      *a4 = v13 + (_BYTE *)*v6 - (_BYTE *)v6[4];
  }
LABEL_18:
  sub_1409DA42C(v7);
  return (unsigned int)v8;
}
