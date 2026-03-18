/*
 * XREFs of KeFlushQueuedDpcs @ 0x1402670A0
 * Callers:
 *     KeCleanupThreadState @ 0x140204878 (KeCleanupThreadState.c)
 *     ExpTimeZoneCleanupSiloState @ 0x1407A74EC (ExpTimeZoneCleanupSiloState.c)
 *     ExpPartitionDestroy @ 0x1407B04DC (ExpPartitionDestroy.c)
 *     MiDeletePartitionResources @ 0x1407EBEB4 (MiDeletePartitionResources.c)
 *     MmPageEntireDriver @ 0x140A3A3F0 (MmPageEntireDriver.c)
 *     IopDeleteDriver @ 0x140A86150 (IopDeleteDriver.c)
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x140256160 (KeAddProcessorAffinityEx.c)
 *     KiGetDeepIdleProcessors @ 0x1402671F0 (KiGetDeepIdleProcessors.c)
 *     KeGenericProcessorCallback @ 0x140277E30 (KeGenericProcessorCallback.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

void KeFlushQueuedDpcs(void)
{
  unsigned __int64 v0; // rdi
  unsigned __int16 v1; // bx
  unsigned int Count; // esi
  unsigned __int64 v3; // rdx
  __int64 v4; // rdx
  struct _KAFFINITY_EX v5; // [rsp+38h] [rbp-D0h] BYREF
  struct _KAFFINITY_EX v6; // [rsp+148h] [rbp+40h] BYREF

  memset_0(&v5.8, 0, sizeof(v5.8));
  memset_0(&v6.8, 0, sizeof(v6.8));
  *(_QWORD *)&v5.Count = 2097153LL;
  memset_0(&v5.8, 0, sizeof(v5.8));
  *(_QWORD *)&v6.Count = 2097153LL;
  memset_0(&v6.8, 0, sizeof(v6.8));
  KiGetDeepIdleProcessors(&v5, &v6);
  v0 = v5.Bitmap[0];
  v1 = 0;
  Count = v5.Count;
  while ( 1 )
  {
    while ( v0 )
    {
      _BitScanForward64(&v3, v0);
      v0 &= ~(1LL << v3);
      v4 = *((unsigned int *)qword_140F216A8 + 64 * v1 + (unsigned __int8)v3);
      if ( *(_DWORD *)(KiProcessorBlock[v4] + 14524) )
        KeAddProcessorAffinityEx(&v6.Count, v4);
    }
    if ( ++v1 >= Count )
      break;
    v0 = v5.Bitmap[v1];
  }
  KeGenericProcessorCallback(&v6, KiFlushQueuedDpcsWorker, 0LL, 2LL);
}
