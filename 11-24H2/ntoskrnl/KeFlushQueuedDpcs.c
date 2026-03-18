/*
 * XREFs of KeFlushQueuedDpcs @ 0x140204EA0
 * Callers:
 *     KeCleanupThreadState @ 0x140444DEC (KeCleanupThreadState.c)
 *     ExpTimeZoneCleanupSiloState @ 0x1407B698C (ExpTimeZoneCleanupSiloState.c)
 *     ExpPartitionDestroy @ 0x1407BFCAC (ExpPartitionDestroy.c)
 *     MiDeletePartitionResources @ 0x1407FBD44 (MiDeletePartitionResources.c)
 *     MmPageEntireDriver @ 0x140A3E710 (MmPageEntireDriver.c)
 *     IopDeleteDriver @ 0x140A8AC00 (IopDeleteDriver.c)
 * Callees:
 *     PoCopyDeepIdleMask @ 0x140205068 (PoCopyDeepIdleMask.c)
 *     ?KiComplementAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z @ 0x140205180 (-KiComplementAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z.c)
 *     ?KiAndAffinityEx@@YAKPEAU_KAFFINITY_EX@@00G@Z @ 0x140205220 (-KiAndAffinityEx@@YAKPEAU_KAFFINITY_EX@@00G@Z.c)
 *     KeAddProcessorAffinityEx @ 0x140257130 (KeAddProcessorAffinityEx.c)
 *     KeGenericProcessorCallback @ 0x1403390A4 (KeGenericProcessorCallback.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

void KeFlushQueuedDpcs(void)
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // r8
  unsigned __int8 CurrentIrql; // bl
  __int64 v4; // rdx
  unsigned __int64 v5; // rdi
  unsigned __int16 v6; // bx
  unsigned int Count; // esi
  unsigned __int64 v8; // rdx
  signed __int32 v9[12]; // [rsp+8h] [rbp-100h] BYREF
  struct _KAFFINITY_EX v10; // [rsp+38h] [rbp-D0h] BYREF
  struct _KAFFINITY_EX v11; // [rsp+148h] [rbp+40h] BYREF

  memset_0(&v11.8, 0, sizeof(v11.8));
  memset_0(&v10.8, 0, sizeof(v10.8));
  *(_QWORD *)&v11.Count = 2097153LL;
  memset_0(&v11.8, 0, sizeof(v11.8));
  *(_QWORD *)&v10.Count = 2097153LL;
  memset_0(&v10.8, 0, sizeof(v10.8));
  _InterlockedOr(v9, 0);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(v0) = 2;
    LOBYTE(v1) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(v1, v0, v2);
  }
  PoCopyDeepIdleMask(&v11);
  if ( KiIrqlFlags )
  {
    LOBYTE(v4) = CurrentIrql;
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v4);
  }
  __writecr8(CurrentIrql);
  KiComplementAffinityEx(&v10, v10.Size, &v11);
  KiAndAffinityEx(&v10, &KeActiveProcessors, &v10, v10.Size);
  v5 = v11.Bitmap[0];
  v6 = 0;
  Count = v11.Count;
  while ( 1 )
  {
    while ( v5 )
    {
      _BitScanForward64(&v8, v5);
      v5 &= ~(1LL << v8);
      if ( *(_DWORD *)(KiProcessorBlock[*((unsigned int *)qword_140F21E78 + 64 * v6 + (unsigned __int8)v8)] + 14524) )
        KeAddProcessorAffinityEx(&v10);
    }
    if ( ++v6 >= Count )
      break;
    v5 = v11.Bitmap[v6];
  }
  KeGenericProcessorCallback(&v10, KiFlushQueuedDpcsWorker, 0LL, 2LL);
}
