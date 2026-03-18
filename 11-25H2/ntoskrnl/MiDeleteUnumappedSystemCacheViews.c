/*
 * XREFs of MiDeleteUnumappedSystemCacheViews @ 0x14066B148
 * Callers:
 *     MiDeletePartitionResources @ 0x1407EBEB4 (MiDeletePartitionResources.c)
 * Callees:
 *     MiIssueFlushTbEntire @ 0x14026F7B8 (MiIssueFlushTbEntire.c)
 *     ExAcquireSpinLockExclusive @ 0x1402BEA90 (ExAcquireSpinLockExclusive.c)
 *     MiReleaseSpinLockExclusive @ 0x140329B80 (MiReleaseSpinLockExclusive.c)
 *     MiRebalanceSystemCacheFreedViews @ 0x1403B5110 (MiRebalanceSystemCacheFreedViews.c)
 *     MiReturnSystemCacheRegionsToKva @ 0x1403B6388 (MiReturnSystemCacheRegionsToKva.c)
 *     MiGetSystemCacheRegionsToFree @ 0x14047FF14 (MiGetSystemCacheRegionsToFree.c)
 */

void __fastcall MiDeleteUnumappedSystemCacheViews(__int64 a1)
{
  KIRQL v2; // di
  int v3; // ecx
  _QWORD *v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  signed __int32 v7[8]; // [rsp+0h] [rbp-38h] BYREF
  _QWORD *v8[3]; // [rsp+20h] [rbp-18h] BYREF

  v8[1] = v8;
  v8[0] = v8;
  v2 = ExAcquireSpinLockExclusive(&dword_140E2F078);
  _InterlockedOr(v7, 0);
  MiRebalanceSystemCacheFreedViews(a1, KiTbFlushTimeStamp, 0);
  v3 = 0;
  v4 = (_QWORD *)(a1 + 2176);
  while ( !*v4 )
  {
    v4 += 4;
    if ( (unsigned int)++v3 >= 4 )
    {
      if ( v3 == 4 )
        goto LABEL_6;
      break;
    }
  }
  MiIssueFlushTbEntire(2LL, 2);
  MiRebalanceSystemCacheFreedViews(a1, 0, 1);
LABEL_6:
  MiGetSystemCacheRegionsToFree(a1, v8);
  MiReleaseSpinLockExclusive(&dword_140E2F078, v2);
  if ( v8[0] != v8 )
    MiReturnSystemCacheRegionsToKva(a1, v8, v5, v6);
}
