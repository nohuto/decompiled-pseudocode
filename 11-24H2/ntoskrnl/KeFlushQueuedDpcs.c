/*
 * XREFs of KeFlushQueuedDpcs @ 0x14032C480
 * Callers:
 *     KeCleanupThreadState @ 0x14043CF94 (KeCleanupThreadState.c)
 *     ExpTimeZoneCleanupSiloState @ 0x1407B6DDC (ExpTimeZoneCleanupSiloState.c)
 *     ExpPartitionDestroy @ 0x1407C00FC (ExpPartitionDestroy.c)
 *     MiDeletePartitionResources @ 0x1407FC4B4 (MiDeletePartitionResources.c)
 *     MmPageEntireDriver @ 0x140A34020 (MmPageEntireDriver.c)
 *     IopDeleteDriver @ 0x140A86F40 (IopDeleteDriver.c)
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x140287740 (KeAddProcessorAffinityEx.c)
 *     KeGenericProcessorCallback @ 0x140318580 (KeGenericProcessorCallback.c)
 *     PoCopyDeepIdleMask @ 0x14032C648 (PoCopyDeepIdleMask.c)
 *     ?KiComplementAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z @ 0x14032C760 (-KiComplementAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z.c)
 *     ?KiAndAffinityEx@@YAKPEAU_KAFFINITY_EX@@00G@Z @ 0x14032C800 (-KiAndAffinityEx@@YAKPEAU_KAFFINITY_EX@@00G@Z.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

void KeFlushQueuedDpcs(void)
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  unsigned __int8 CurrentIrql; // bl
  __int64 v3; // rdx
  unsigned __int64 v4; // rdi
  unsigned __int16 v5; // bx
  unsigned int Count; // esi
  unsigned __int64 v7; // rdx
  __int64 v8; // rdx
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
    KiRaiseIrqlProcessIrqlFlags(v1, v0);
  }
  PoCopyDeepIdleMask(&v11);
  if ( KiIrqlFlags )
  {
    LOBYTE(v3) = CurrentIrql;
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v3);
  }
  __writecr8(CurrentIrql);
  KiComplementAffinityEx(&v10, v10.Size, &v11);
  KiAndAffinityEx(&v10, &KeActiveProcessors, &v10, v10.Size);
  v4 = v11.Bitmap[0];
  v5 = 0;
  Count = v11.Count;
  while ( 1 )
  {
    while ( v4 )
    {
      _BitScanForward64(&v7, v4);
      v4 &= ~(1LL << v7);
      v8 = *((unsigned int *)qword_140F22998 + 64 * v5 + (unsigned __int8)v7);
      if ( *(_DWORD *)(KiProcessorBlock[v8] + 14524) )
        KeAddProcessorAffinityEx(&v10.Count, v8);
    }
    if ( ++v5 >= Count )
      break;
    v4 = v11.Bitmap[v5];
  }
  KeGenericProcessorCallback((__int64 *)&v10, (char (__fastcall *)(__int64, __int64))KiFlushQueuedDpcsWorker, 0LL, 2);
}
