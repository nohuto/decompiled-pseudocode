/*
 * XREFs of MiDeleteUnumappedSystemCacheViews @ 0x140676A90
 * Callers:
 *     MiDeletePartitionResources @ 0x1407FBD44 (MiDeletePartitionResources.c)
 * Callees:
 *     MiReleaseSpinLockExclusive @ 0x14028EE30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14028F370 (ExAcquireSpinLockExclusive.c)
 *     MiReturnSystemCacheRegionsToKva @ 0x1402D24DC (MiReturnSystemCacheRegionsToKva.c)
 *     MiRebalanceSystemCacheFreedViews @ 0x1402D4480 (MiRebalanceSystemCacheFreedViews.c)
 *     MiIssueFlushTbEntire @ 0x1403AFDC8 (MiIssueFlushTbEntire.c)
 *     MiGetSystemCacheRegionsToFree @ 0x14047F2F4 (MiGetSystemCacheRegionsToFree.c)
 */

void __fastcall MiDeleteUnumappedSystemCacheViews(__int64 a1)
{
  KIRQL v2; // di
  __int64 v3; // r8
  int v4; // ecx
  _QWORD *v5; // rdx
  signed __int32 v6[8]; // [rsp+0h] [rbp-38h] BYREF
  _QWORD *v7[3]; // [rsp+20h] [rbp-18h] BYREF

  v7[1] = v7;
  v7[0] = v7;
  v2 = ExAcquireSpinLockExclusive(&dword_140E2F2B8);
  _InterlockedOr(v6, 0);
  MiRebalanceSystemCacheFreedViews(a1, KiTbFlushTimeStamp, 0);
  v4 = 0;
  v5 = (_QWORD *)(a1 + 2176);
  while ( !*v5 )
  {
    v5 += 4;
    if ( (unsigned int)++v4 >= 4 )
    {
      if ( v4 == 4 )
        goto LABEL_6;
      break;
    }
  }
  MiIssueFlushTbEntire(2LL, 2LL, v3);
  MiRebalanceSystemCacheFreedViews(a1, 0, 1);
LABEL_6:
  MiGetSystemCacheRegionsToFree(a1, v7);
  MiReleaseSpinLockExclusive(&dword_140E2F2B8, v2);
  if ( v7[0] != v7 )
    MiReturnSystemCacheRegionsToKva(a1, v7);
}
