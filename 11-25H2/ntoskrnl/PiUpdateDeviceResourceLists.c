/*
 * XREFs of PiUpdateDeviceResourceLists @ 0x14072A1DC
 * Callers:
 *     PiProcessQueryDeviceState @ 0x140833E34 (PiProcessQueryDeviceState.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140286F40 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14029C580 (ExAcquireFastMutex.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     PnpCopyResourceList @ 0x140727358 (PnpCopyResourceList.c)
 *     IopQueryBusResourceUpdateInterface @ 0x140727958 (IopQueryBusResourceUpdateInterface.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiUpdateDeviceResourceLists(__int64 a1)
{
  void *v1; // rcx
  __int64 result; // rax
  _QWORD *v3; // r14
  int v4; // ebx
  PVOID P; // [rsp+58h] [rbp+10h] BYREF
  void *Src; // [rsp+60h] [rbp+18h]

  Src = 0LL;
  v1 = *(void **)(a1 + 32);
  P = 0LL;
  result = IopQueryBusResourceUpdateInterface(v1, &P);
  if ( (int)result >= 0 )
  {
    v3 = P;
    v4 = guard_dispatch_icall_no_overrides(*((_QWORD *)P + 1));
    if ( v4 >= 0 )
      v4 = 0;
    guard_dispatch_icall_no_overrides(v3[1]);
    ExFreePoolWithTag(v3, 0);
    return (unsigned int)v4;
  }
  return result;
}
