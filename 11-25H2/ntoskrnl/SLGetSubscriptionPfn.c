/*
 * XREFs of SLGetSubscriptionPfn @ 0x1407AA258
 * Callers:
 *     SLQueryLicenseValueInternal @ 0x1407AA53C (SLQueryLicenseValueInternal.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x14029B450 (ExfReleasePushLockShared.c)
 *     ExfAcquirePushLockSharedEx @ 0x14029B5A0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     sub_1404AEFE0 @ 0x1404AEFE0 (sub_1404AEFE0.c)
 *     _local_unwind @ 0x1404FB6F0 (_local_unwind.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SLGetSubscriptionPfn(__int64 a1, PVOID *a2)
{
  unsigned int v4; // r14d
  void *v5; // rax
  volatile signed __int64 *v7; // rdi
  __int64 *v8; // rax
  __int64 *v9; // r15
  int v10; // r15d
  __int64 *v11; // r14
  _OWORD *Pool2; // rcx
  __int64 v13; // [rsp+0h] [rbp-88h] BYREF
  int v14; // [rsp+30h] [rbp-58h]
  PVOID P; // [rsp+38h] [rbp-50h]
  struct _KTHREAD *CurrentThread; // [rsp+40h] [rbp-48h]
  __int64 *v17; // [rsp+50h] [rbp-38h]
  unsigned int v18; // [rsp+A0h] [rbp+18h] BYREF
  struct _KTHREAD *v19; // [rsp+A8h] [rbp+20h]

  v17 = &v13;
  v14 = 0;
  P = 0LL;
  v4 = 0;
  v18 = 0;
  if ( *(_BYTE *)(a1 + 46856) )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v7 = (volatile signed __int64 *)(a1 + 46840);
    v11 = KeAbPreAcquire(a1 + 46840, 0LL);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 46840), 17LL, 0LL) )
      ExfAcquirePushLockSharedEx((signed __int64 *)(a1 + 46840), 0, v11, a1 + 46840);
    if ( v11 )
      *((_BYTE *)v11 + 10) = 1;
    if ( *(_BYTE *)(a1 + 46856) )
    {
      Pool2 = (_OWORD *)ExAllocatePool2(0x100uLL);
      P = Pool2;
      if ( !Pool2 )
      {
        v14 = -1073741595;
        local_unwind(v17, &loc_1407AA326);
      }
      *Pool2 = *(_OWORD *)(a1 + 46858);
      Pool2[1] = *(_OWORD *)(a1 + 46874);
      Pool2[2] = *(_OWORD *)(a1 + 46890);
      Pool2[3] = *(_OWORD *)(a1 + 46906);
      Pool2[4] = *(_OWORD *)(a1 + 46922);
      Pool2[5] = *(_OWORD *)(a1 + 46938);
      Pool2[6] = *(_OWORD *)(a1 + 46954);
      Pool2[7] = *(_OWORD *)(a1 + 46970);
      *((_WORD *)Pool2 + 64) = *(_WORD *)(a1 + 46986);
    }
    if ( _InterlockedCompareExchange64(v7, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(a1 + 46840));
  }
  else
  {
    v14 = sub_1404AEFE0(a1, (__int64)&qword_140B2C458, 0LL, 0LL, 0, (__int64)&v18);
    if ( v14 == -1073741789 )
    {
      v4 = v18;
      v5 = (void *)ExAllocatePool2(0x100uLL);
      P = v5;
      if ( !v5 || v4 > 0x82 )
      {
        v14 = -1073741595;
        goto LABEL_7;
      }
      v14 = sub_1404AEFE0(a1, (__int64)&qword_140B2C458, 0LL, (__int64)v5, v4, (__int64)&v18);
    }
    v19 = KeGetCurrentThread();
    --v19->KernelApcDisable;
    v7 = (volatile signed __int64 *)(a1 + 46840);
    v8 = KeAbPreAcquire(a1 + 46840, 0LL);
    v9 = v8;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 46840), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 46840), v8, a1 + 46840);
    if ( v9 )
      *((_BYTE *)v9 + 10) = 1;
    if ( !*(_BYTE *)(a1 + 46856) )
    {
      v10 = v14;
      if ( v14 >= 0 )
        memmove((void *)(a1 + 46858), P, v4);
      if ( (int)(v10 + 0x80000000) < 0 || v10 == -1073741772 )
        *(_BYTE *)(a1 + 46856) = 1;
    }
    if ( (_InterlockedExchangeAdd64(v7, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 46840));
  }
  KeAbPostRelease((ULONG_PTR)v7);
  KeLeaveCriticalRegion();
  *a2 = P;
  P = 0LL;
LABEL_7:
  if ( P )
    ExFreePoolWithTag(P, 0);
  return (unsigned int)v14;
}
