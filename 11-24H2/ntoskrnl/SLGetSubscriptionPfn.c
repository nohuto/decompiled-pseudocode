/*
 * XREFs of SLGetSubscriptionPfn @ 0x1407B9708
 * Callers:
 *     SLQueryLicenseValueInternal @ 0x1407B99EC (SLQueryLicenseValueInternal.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExfReleasePushLockShared @ 0x14025DE00 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14034050C (ExfAcquirePushLockSharedEx.c)
 *     ExpQueryLicenseValueFromBlobHelper @ 0x1404AFA20 (ExpQueryLicenseValueFromBlobHelper.c)
 *     _local_unwind @ 0x1404FDE70 (_local_unwind.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SLGetSubscriptionPfn(__int64 a1, PVOID *a2)
{
  unsigned int v4; // r14d
  void *v5; // rax
  volatile signed __int64 *v7; // rdi
  _QWORD *v8; // rax
  _QWORD *v9; // r15
  int v10; // r15d
  _QWORD *v11; // r14
  _OWORD *Pool2; // rcx
  __int64 v13; // [rsp+0h] [rbp-88h] BYREF
  int LicenseValueFromBlobHelper; // [rsp+30h] [rbp-58h]
  PVOID P; // [rsp+38h] [rbp-50h]
  struct _KTHREAD *CurrentThread; // [rsp+40h] [rbp-48h]
  __int64 *v17; // [rsp+50h] [rbp-38h]
  unsigned int v18; // [rsp+A0h] [rbp+18h] BYREF
  struct _KTHREAD *v19; // [rsp+A8h] [rbp+20h]

  v17 = &v13;
  LicenseValueFromBlobHelper = 0;
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
        LicenseValueFromBlobHelper = -1073741595;
        local_unwind((int)v17, (int)&loc_1407B97D6);
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
    LicenseValueFromBlobHelper = ExpQueryLicenseValueFromBlobHelper(
                                   a1,
                                   (__int64)&qword_140B3B718,
                                   0LL,
                                   0LL,
                                   0,
                                   (__int64)&v18);
    if ( LicenseValueFromBlobHelper == -1073741789 )
    {
      v4 = v18;
      v5 = (void *)ExAllocatePool2(0x100uLL);
      P = v5;
      if ( !v5 || v4 > 0x82 )
      {
        LicenseValueFromBlobHelper = -1073741595;
        goto LABEL_7;
      }
      LicenseValueFromBlobHelper = ExpQueryLicenseValueFromBlobHelper(
                                     a1,
                                     (__int64)&qword_140B3B718,
                                     0LL,
                                     (__int64)v5,
                                     v4,
                                     (__int64)&v18);
    }
    v19 = KeGetCurrentThread();
    --v19->KernelApcDisable;
    v7 = (volatile signed __int64 *)(a1 + 46840);
    v8 = KeAbPreAcquire(a1 + 46840, 0LL);
    v9 = v8;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 46840), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 46840), (__int64)v8, a1 + 46840);
    if ( v9 )
      *((_BYTE *)v9 + 10) = 1;
    if ( !*(_BYTE *)(a1 + 46856) )
    {
      v10 = LicenseValueFromBlobHelper;
      if ( LicenseValueFromBlobHelper >= 0 )
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
  return (unsigned int)LicenseValueFromBlobHelper;
}
