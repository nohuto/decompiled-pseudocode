/*
 * XREFs of PpmRemoveIdleStates @ 0x1405CF0B0
 * Callers:
 *     <none>
 * Callees:
 *     KxAcquireSpinLock @ 0x140254AE0 (KxAcquireSpinLock.c)
 *     KeAddProcessorAffinityEx @ 0x140257130 (KeAddProcessorAffinityEx.c)
 *     KxReleaseSpinLock @ 0x140279CC0 (KxReleaseSpinLock.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PpmRemoveIdleStates(__int64 a1)
{
  void *v2; // rdi
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  _DWORD v7[2]; // [rsp+20h] [rbp-128h] BYREF
  _BYTE v8[264]; // [rsp+28h] [rbp-120h] BYREF

  memset_0(v8, 0, 0x100uLL);
  v2 = *(void **)(a1 + 34880);
  if ( v2 )
  {
    v7[1] = 0;
    v7[0] = 2097153;
    memset_0(v8, 0, 0x100uLL);
    KeAddProcessorAffinityEx((unsigned __int16 *)v7, *(_DWORD *)(a1 + 36));
    LOBYTE(v3) = 1;
    guard_dispatch_icall_no_overrides(v3, v7, v4, v5);
    KxAcquireSpinLock(&PpmIdleVetoLock);
    *(_QWORD *)(a1 + 34880) = 0LL;
    KxReleaseSpinLock((volatile signed __int64 *)&PpmIdleVetoLock);
    *(_QWORD *)(a1 + 34888) = 0LL;
    ExFreePoolWithTag(v2, 0x694D5050u);
  }
  return 0LL;
}
