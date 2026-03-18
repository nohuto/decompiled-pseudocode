/*
 * XREFs of RtlFindDynamicEnforcedAddressInRanges @ 0x140898234
 * Callers:
 *     KiCheckUserAddressCetCompat @ 0x1408981A8 (KiCheckUserAddressCetCompat.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140206F00 (KeLeaveCriticalRegion.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x14029B450 (ExfReleasePushLockShared.c)
 *     ExfAcquirePushLockSharedEx @ 0x14029B5A0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     RtlpDynamicEnforcedAddressRangesTreeCompare @ 0x140778538 (RtlpDynamicEnforcedAddressRangesTreeCompare.c)
 */

bool __fastcall RtlFindDynamicEnforcedAddressInRanges(_QWORD **a1, __int64 a2)
{
  signed __int64 *v2; // rdi
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v5; // rbx
  _QWORD *v6; // rbx
  int v7; // eax
  __int64 v9; // [rsp+20h] [rbp-48h] BYREF
  __int128 v10; // [rsp+28h] [rbp-40h]
  __int64 v11; // [rsp+38h] [rbp-30h]
  __int64 v12; // [rsp+40h] [rbp-28h]

  v11 = a2;
  v2 = (signed __int64 *)(a1 + 1);
  v12 = 1LL;
  v10 = 0LL;
  v9 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v5 = KeAbPreAcquire((__int64)(a1 + 1), 0LL);
  if ( _InterlockedCompareExchange64(v2, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v2, 0, v5, (unsigned __int64)v2);
  if ( v5 )
    *((_BYTE *)v5 + 10) = 1;
  v6 = *a1;
  while ( v6 )
  {
    v7 = RtlpDynamicEnforcedAddressRangesTreeCompare((__int64)&v9, (__int64)v6);
    if ( v7 >= 0 )
    {
      if ( v7 <= 0 )
        break;
      v6 = (_QWORD *)v6[1];
    }
    else
    {
      v6 = (_QWORD *)*v6;
    }
  }
  if ( _InterlockedCompareExchange64(v2, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v2);
  KeAbPostRelease((ULONG_PTR)v2);
  KeLeaveCriticalRegion();
  return v6 != 0LL;
}
