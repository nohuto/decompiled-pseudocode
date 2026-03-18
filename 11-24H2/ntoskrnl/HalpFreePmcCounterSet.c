/*
 * XREFs of HalpFreePmcCounterSet @ 0x140545BE0
 * Callers:
 *     <none>
 * Callees:
 *     KeSetSystemGroupAffinityThread @ 0x140339650 (KeSetSystemGroupAffinityThread.c)
 *     KeRevertToUserGroupAffinityThread @ 0x14033A250 (KeRevertToUserGroupAffinityThread.c)
 *     HalpMmAllocCtxFree @ 0x14037CBAC (HalpMmAllocCtxFree.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     HalpNotifyActorIfPmuAvailable @ 0x1406FDEA0 (HalpNotifyActorIfPmuAvailable.c)
 */

void *__fastcall HalpFreePmcCounterSet(_QWORD *a1)
{
  void *result; // rax
  unsigned int v3; // ecx
  __int64 v4; // r8
  __int64 v5; // r9
  unsigned __int8 CurrentIrql; // di
  _QWORD *v7; // rcx
  void **v8; // rax
  __int64 v9; // rsi
  __int64 v10; // rcx
  struct _GROUP_AFFINITY v11; // [rsp+20h] [rbp-38h] BYREF
  struct _GROUP_AFFINITY PreviousAffinity; // [rsp+30h] [rbp-28h] BYREF

  result = &HalpSampleProfilingCounters;
  v11 = 0LL;
  PreviousAffinity = 0LL;
  if ( a1 != (_QWORD *)&HalpSampleProfilingCounters )
  {
    v3 = *((_DWORD *)KiGlobalState + *((unsigned int *)a1 + 4));
    *(_QWORD *)&v11.Group = (unsigned __int16)(v3 >> 6);
    v11.Mask = 1LL << (v3 & 0x3F);
    KeSetSystemGroupAffinityThread(&v11, &PreviousAffinity);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 15);
    v7 = (_QWORD *)*a1;
    if ( *(_QWORD **)(*a1 + 8LL) != a1 || (v8 = (void **)a1[1], *v8 != a1) )
      __fastfail(3u);
    *v8 = v7;
    v9 = 0LL;
    for ( v7[1] = v8; (unsigned int)v9 < *((_DWORD *)a1 + 5); v9 = (unsigned int)(v9 + 1) )
    {
      guard_dispatch_icall_no_overrides(LODWORD(a1[5 * v9 + 5]), &a1[5 * v9 + 6], v4, v5);
      _InterlockedDecrement(&dword_140FC1D8C);
    }
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
    KeRevertToUserGroupAffinityThread(&PreviousAffinity);
    HalpMmAllocCtxFree(v10, (__int64)a1);
    return (void *)HalpNotifyActorIfPmuAvailable(0LL, 0LL);
  }
  return result;
}
