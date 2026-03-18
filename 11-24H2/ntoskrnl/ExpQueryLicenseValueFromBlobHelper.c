/*
 * XREFs of ExpQueryLicenseValueFromBlobHelper @ 0x1404AFA20
 * Callers:
 *     ExpConsumeAddonPolicySetCacheProvider @ 0x1407B8540 (ExpConsumeAddonPolicySetCacheProvider.c)
 *     SLGetSubscriptionPfn @ 0x1407B9708 (SLGetSubscriptionPfn.c)
 *     SLQueryLicenseValueInternal @ 0x1407B99EC (SLQueryLicenseValueInternal.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140257E40 (KeLeaveCriticalRegion.c)
 *     ExfReleasePushLockShared @ 0x14025DE00 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x14034050C (ExfAcquirePushLockSharedEx.c)
 *     sub_1407B9488 @ 0x1407B9488 (sub_1407B9488.c)
 */

__int64 __fastcall ExpQueryLicenseValueFromBlobHelper(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6)
{
  signed __int64 *v10; // rdi
  _QWORD *v11; // rsi
  _DWORD *v12; // rax
  unsigned int v14; // [rsp+30h] [rbp-48h]
  struct _KTHREAD *CurrentThread; // [rsp+40h] [rbp-38h]

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v10 = (signed __int64 *)(a1 + 46840);
  v11 = KeAbPreAcquire(a1 + 46840, 0LL);
  if ( _InterlockedCompareExchange64(v10, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v10, 0, v11, (__int64)v10);
  if ( v11 )
    *((_BYTE *)v11 + 10) = 1;
  if ( *(_BYTE *)(a1 + 46828) == 1 && !*(_DWORD *)(a1 + 46824) )
    goto LABEL_10;
  v12 = *(_DWORD **)a1;
  if ( !*(_QWORD *)a1 )
  {
    v12 = *(_DWORD **)(a1 + 46832);
    if ( !v12 )
      goto LABEL_8;
  }
  if ( *v12 == 24 )
  {
LABEL_10:
    v14 = -1073741772;
    goto LABEL_14;
  }
  if ( *v12 < 0x18u )
  {
LABEL_8:
    v14 = -1073741762;
    goto LABEL_14;
  }
  v14 = sub_1407B9488(a1, a2, a3, a4, a5, a6);
LABEL_14:
  if ( _InterlockedCompareExchange64(v10, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v10);
  KeAbPostRelease((ULONG_PTR)v10);
  KeLeaveCriticalRegion();
  return v14;
}
