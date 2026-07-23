/*
 * XREFs of PpmRemoveIdleStates @ 0x1405CC7D0
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x14022F250 (KxReleaseSpinLock.c)
 *     KxAcquireSpinLock @ 0x1402850F0 (KxAcquireSpinLock.c)
 *     KeAddProcessorAffinityEx @ 0x140287740 (KeAddProcessorAffinityEx.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
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
    guard_dispatch_icall_no_overrides(v3, v5);
    KxAcquireSpinLock(&PpmIdleVetoLock);
    *(_QWORD *)(a1 + 34880) = 0LL;
    KxReleaseSpinLock((volatile signed __int64 *)&PpmIdleVetoLock);
    *(_QWORD *)(a1 + 34888) = 0LL;
    ExFreePoolWithTag(v2, 0x694D5050u);
  }
  return 0LL;
}
