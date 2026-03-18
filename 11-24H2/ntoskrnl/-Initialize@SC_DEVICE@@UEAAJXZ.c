/*
 * XREFs of ?Initialize@SC_DEVICE@@UEAAJXZ @ 0x14069EBE0
 * Callers:
 *     ?Initialize@SC_DISK@@UEAAJXZ @ 0x14069D970 (-Initialize@SC_DISK@@UEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     PspUserApcKernelRoutine @ 0x1408A8FB0 (PspUserApcKernelRoutine.c)
 */

__int64 __fastcall SC_DEVICE::Initialize(SC_DEVICE *this, __int64 a2, __int64 a3, __int64 a4)
{
  int v5; // ebx
  _OWORD *v6; // rcx
  _OWORD *v8; // [rsp+20h] [rbp-38h] BYREF
  DEVPROPKEY v9; // [rsp+28h] [rbp-30h] BYREF

  v8 = 0LL;
  v9 = DEVPKEY_Device_ClassGuid;
  v5 = guard_dispatch_icall_no_overrides(this, &v9, &v8, a4);
  if ( v5 < 0 )
  {
    return 0;
  }
  else
  {
    v6 = v8;
    *(_OWORD *)((char *)this + 8) = *v8;
    PspUserApcKernelRoutine(v6);
  }
  return (unsigned int)v5;
}
