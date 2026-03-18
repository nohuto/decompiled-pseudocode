/*
 * XREFs of sub_1409E0444 @ 0x1409E0444
 * Callers:
 *     WbCreateHeapExecutedBlock @ 0x1408FDAD8 (WbCreateHeapExecutedBlock.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x14025DE00 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     KeLeaveGuardedRegion @ 0x1402BB460 (KeLeaveGuardedRegion.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14034050C (ExfAcquirePushLockSharedEx.c)
 *     sub_1408F9924 @ 0x1408F9924 (sub_1408F9924.c)
 *     sub_1409E067C @ 0x1409E067C (sub_1409E067C.c)
 *     sub_1409E0720 @ 0x1409E0720 (sub_1409E0720.c)
 *     sub_1409E11D8 @ 0x1409E11D8 (sub_1409E11D8.c)
 */

__int64 __fastcall sub_1409E0444(__int64 a1, unsigned int a2, _QWORD *a3, _QWORD *a4)
{
  PVOID *v6; // r15
  PVOID *v7; // rsi
  int v8; // r14d
  struct _KTHREAD *CurrentThread; // rax
  signed __int64 *v10; // rdi
  _QWORD *v11; // rsi
  unsigned int i; // esi
  __int64 v13; // rcx
  struct _KTHREAD *v15; // rax
  _QWORD *v16; // rax
  __int64 v17; // r8
  _QWORD *v18; // rsi
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
    v11 = KeAbPreAcquire(a1 + 224, 0LL);
    if ( _InterlockedCompareExchange64(v10, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(v10, 0, v11, (__int64)v10);
    if ( v11 )
      *((_BYTE *)v11 + 10) = 1;
    for ( i = 0; i < *(_DWORD *)(a1 + 188); ++i )
    {
      v6 = *(PVOID **)(*(_DWORD *)(a1 + 184) * i + *(_QWORD *)(a1 + 200));
      v8 = sub_1409E11D8(v6, a2, v20);
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
      v8 = sub_1409E0720(0LL, &BaseAddress);
      if ( v8 < 0 )
        goto LABEL_19;
      v7 = BaseAddress;
      v8 = sub_1409E11D8(BaseAddress, a2, v20);
      if ( v8 < 0 )
        goto LABEL_18;
      v15 = KeGetCurrentThread();
      --v15->SpecialApcDisable;
      v16 = KeAbPreAcquire((__int64)v10, 0LL);
      v18 = v16;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v10, 0LL) )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v10, (__int64)v16, (__int64)v10);
      if ( v18 )
        *((_BYTE *)v18 + 10) = 1;
      v8 = sub_1408F9924((unsigned int *)(a1 + 184), (__int64)BaseAddress, v17, (int)BaseAddress[4], 8, 0xFFFFFFFF);
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
  sub_1409E067C(v7);
  return (unsigned int)v8;
}
