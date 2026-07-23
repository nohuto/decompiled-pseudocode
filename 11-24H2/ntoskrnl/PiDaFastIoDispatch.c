/*
 * XREFs of PiDaFastIoDispatch @ 0x1408C20F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     PiCMFastIoDeviceDispatch @ 0x1408C0C50 (PiCMFastIoDeviceDispatch.c)
 */

char __fastcall PiDaFastIoDispatch(__int64 a1, __int64 a2, int a3, __int64 a4, __int64 a5, int a6, int a7, _DWORD *a8)
{
  unsigned __int64 v8; // rax
  char (__fastcall *v9)(__int64, __int64, int, __int64, __int64, int, int, _DWORD *); // rax

  v8 = *(_QWORD *)(a1 + 24);
  if ( v8 >= 5 )
    return 0;
  v9 = (char (__fastcall *)(__int64, __int64, int, __int64, __int64, int, int, _DWORD *))qword_140001BC0[3 * v8];
  if ( !v9 )
    return 0;
  if ( v9 == PiCMFastIoDeviceDispatch )
    return PiCMFastIoDeviceDispatch(a1, a2, a3, a4, a5, a6, a7, a8);
  return guard_dispatch_icall_no_overrides(a1, a2);
}
