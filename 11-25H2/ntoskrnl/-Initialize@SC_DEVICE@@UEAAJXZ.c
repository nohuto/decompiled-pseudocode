/*
 * XREFs of ?Initialize@SC_DEVICE@@UEAAJXZ @ 0x140693840
 * Callers:
 *     ?Initialize@SC_DISK@@UEAAJXZ @ 0x1406925D0 (-Initialize@SC_DISK@@UEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     PspUserApcKernelRoutine @ 0x1408E08C0 (PspUserApcKernelRoutine.c)
 */

__int64 __fastcall SC_DEVICE::Initialize(SC_DEVICE *this)
{
  int v2; // ebx

  v2 = guard_dispatch_icall_no_overrides(this);
  if ( v2 < 0 )
  {
    return 0;
  }
  else
  {
    *(_OWORD *)((char *)this + 8) = MEMORY[0];
    PspUserApcKernelRoutine(0LL);
  }
  return (unsigned int)v2;
}
