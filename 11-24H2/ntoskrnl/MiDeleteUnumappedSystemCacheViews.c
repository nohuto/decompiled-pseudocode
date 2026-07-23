/*
 * XREFs of MiDeleteUnumappedSystemCacheViews @ 0x140677C60
 * Callers:
 *     MiDeletePartitionResources @ 0x1407FC4B4 (MiDeletePartitionResources.c)
 * Callees:
 *     MiReleaseSpinLockExclusive @ 0x14029EA30 (MiReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     MiReturnSystemCacheRegionsToKva @ 0x140353754 (MiReturnSystemCacheRegionsToKva.c)
 *     MiRebalanceSystemCacheFreedViews @ 0x140355700 (MiRebalanceSystemCacheFreedViews.c)
 *     MiIssueFlushTbEntire @ 0x14039E5D8 (MiIssueFlushTbEntire.c)
 *     MiGetSystemCacheRegionsToFree @ 0x14047A114 (MiGetSystemCacheRegionsToFree.c)
 */

void __fastcall MiDeleteUnumappedSystemCacheViews(__int64 a1)
{
  KIRQL v2; // di
  __int64 v3; // r8
  int v4; // ecx
  _QWORD *v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  signed __int32 v8[8]; // [rsp+0h] [rbp-38h] BYREF
  _QWORD *v9[3]; // [rsp+20h] [rbp-18h] BYREF

  v9[1] = v9;
  v9[0] = v9;
  v2 = ExAcquireSpinLockExclusive(&dword_140E2F3F8);
  _InterlockedOr(v8, 0);
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
  MiGetSystemCacheRegionsToFree(a1, v9);
  MiReleaseSpinLockExclusive(&dword_140E2F3F8, v2);
  if ( v9[0] != v9 )
    MiReturnSystemCacheRegionsToKva(a1, v9, v6, v7);
}
