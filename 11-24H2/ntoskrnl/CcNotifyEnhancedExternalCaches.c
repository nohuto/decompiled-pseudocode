/*
 * XREFs of CcNotifyEnhancedExternalCaches @ 0x14043CDF4
 * Callers:
 *     CcNotifyExternalCachesInternal @ 0x14043C550 (CcNotifyExternalCachesInternal.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x14024DD30 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140254B20 (KeAcquireSpinLockRaiseToDpc.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

void __fastcall CcNotifyEnhancedExternalCaches(int a1, __int64 a2, __int64 a3)
{
  __int64 v5; // r8
  __int64 v6; // r9
  KIRQL v7; // r14
  _QWORD *i; // rdi
  int v9; // [rsp+20h] [rbp-50h] BYREF
  __int64 v10; // [rsp+28h] [rbp-48h]
  __int64 v11; // [rsp+30h] [rbp-40h]
  __int64 v12; // [rsp+38h] [rbp-38h]
  __int64 v13; // [rsp+40h] [rbp-30h]

  memset_0(&v9, 0, 0x40uLL);
  v7 = KeAcquireSpinLockRaiseToDpc(&CcExternalCacheListLock);
  for ( i = *(_QWORD **)(a3 + 1264); i != (_QWORD *)(a3 + 1264); i = (_QWORD *)*i )
  {
    v10 = 0LL;
    v11 = 0LL;
    v13 = 0LL;
    v12 = 0LL;
    v9 = 1;
    if ( a1 == 4 || a1 == 8 )
      goto LABEL_6;
    if ( a1 != 16 )
    {
      if ( a1 != 32 )
        goto LABEL_8;
LABEL_6:
      v10 = *(_QWORD *)(a3 + 1016);
      v11 = *(unsigned int *)(a3 + 1040);
    }
    v12 = 0x80000LL;
    v13 = 0x40000LL;
LABEL_8:
    guard_dispatch_icall_no_overrides(i - 4, &v9, v5, v6);
  }
  KeReleaseSpinLock(&CcExternalCacheListLock, v7);
}
