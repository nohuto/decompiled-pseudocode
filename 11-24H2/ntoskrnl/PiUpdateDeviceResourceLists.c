/*
 * XREFs of PiUpdateDeviceResourceLists @ 0x14073439C
 * Callers:
 *     PiProcessQueryDeviceState @ 0x1408B91C4 (PiProcessQueryDeviceState.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x1402C7000 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14031DD30 (ExAcquireFastMutex.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     PnpCopyResourceList @ 0x140731524 (PnpCopyResourceList.c)
 *     IopQueryBusResourceUpdateInterface @ 0x140731B24 (IopQueryBusResourceUpdateInterface.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiUpdateDeviceResourceLists(__int64 a1)
{
  void *v1; // rcx
  __int64 result; // rax
  _QWORD *v3; // r14
  __int64 v4; // rdx
  int v5; // ebx
  PVOID P; // [rsp+58h] [rbp+10h] BYREF
  void *Src; // [rsp+60h] [rbp+18h] BYREF

  Src = 0LL;
  v1 = *(void **)(a1 + 32);
  P = 0LL;
  result = IopQueryBusResourceUpdateInterface(v1, &P);
  if ( (int)result >= 0 )
  {
    v3 = P;
    v5 = guard_dispatch_icall_no_overrides(*((_QWORD *)P + 1), &Src);
    if ( v5 >= 0 )
      v5 = 0;
    guard_dispatch_icall_no_overrides(v3[1], v4);
    ExFreePoolWithTag(v3, 0);
    return (unsigned int)v5;
  }
  return result;
}
