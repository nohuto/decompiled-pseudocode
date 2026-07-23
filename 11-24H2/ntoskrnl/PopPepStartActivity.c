/*
 * XREFs of PopPepStartActivity @ 0x1402C2730
 * Callers:
 *     PopPepWork @ 0x1402BEEE0 (PopPepWork.c)
 *     PopPepProcessEvent @ 0x1402C0980 (PopPepProcessEvent.c)
 * Callees:
 *     PopPepStartComponentActivatingActivity @ 0x1402BFA70 (PopPepStartComponentActivatingActivity.c)
 *     PopPepStartDevicePowerOnActivity @ 0x140478D00 (PopPepStartDevicePowerOnActivity.c)
 *     PopPepStartDevicePowerOffActivity @ 0x14047E8F0 (PopPepStartDevicePowerOffActivity.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PopPepStartActivity(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        volatile signed __int32 *a5,
        __int64 a6)
{
  __int64 v7; // rbx
  __int64 (__fastcall *v8)(); // rax
  __int64 result; // rax

  v7 = a4;
  _InterlockedDecrement(a5);
  v8 = off_140001078[17 * a4];
  if ( (char *)v8 == (char *)PopPepStartComponentActivatingActivity )
  {
    LOBYTE(result) = PopPepStartComponentActivatingActivity(a1, a2, a6);
  }
  else if ( (char *)v8 == (char *)PopPepStartDevicePowerOnActivity )
  {
    LOBYTE(result) = PopPepStartDevicePowerOnActivity(a1, a2, a6);
  }
  else if ( (char *)v8 == (char *)PopPepStartDevicePowerOffActivity )
  {
    LOBYTE(result) = PopPepStartDevicePowerOffActivity(a1, a2, a6);
  }
  else
  {
    LOBYTE(result) = guard_dispatch_icall_no_overrides(a1, a2);
  }
  **(_DWORD **)(a3 + 8 * v7) &= ~2u;
  **(_DWORD **)(a3 + 8 * v7) &= ~8u;
  **(_DWORD **)(a3 + 8 * v7) |= 4u;
  return (unsigned __int8)result;
}
