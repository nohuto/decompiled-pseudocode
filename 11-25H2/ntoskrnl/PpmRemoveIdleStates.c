/*
 * XREFs of PpmRemoveIdleStates @ 0x1405CAA00
 * Callers:
 *     <none>
 * Callees:
 *     KxAcquireSpinLock @ 0x140253560 (KxAcquireSpinLock.c)
 *     KeAddProcessorAffinityEx @ 0x140256160 (KeAddProcessorAffinityEx.c)
 *     KxReleaseSpinLock @ 0x14034A6E0 (KxReleaseSpinLock.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PpmRemoveIdleStates(__int64 a1)
{
  void *v2; // rdi
  __int64 v3; // rcx
  _DWORD v5[2]; // [rsp+20h] [rbp-128h] BYREF
  _BYTE v6[264]; // [rsp+28h] [rbp-120h] BYREF

  memset_0(v6, 0, 0x100uLL);
  v2 = *(void **)(a1 + 34880);
  if ( v2 )
  {
    v5[1] = 0;
    v5[0] = 2097153;
    memset_0(v6, 0, 0x100uLL);
    KeAddProcessorAffinityEx((unsigned __int16 *)v5, *(_DWORD *)(a1 + 36));
    LOBYTE(v3) = 1;
    guard_dispatch_icall_no_overrides(v3);
    KxAcquireSpinLock(&PpmIdleVetoLock);
    *(_QWORD *)(a1 + 34880) = 0LL;
    KxReleaseSpinLock((volatile signed __int64 *)&PpmIdleVetoLock);
    *(_QWORD *)(a1 + 34888) = 0LL;
    ExFreePoolWithTag(v2, 0x694D5050u);
  }
  return 0LL;
}
