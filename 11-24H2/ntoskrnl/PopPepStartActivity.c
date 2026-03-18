/*
 * XREFs of PopPepStartActivity @ 0x140319BA0
 * Callers:
 *     PopPepWork @ 0x140316330 (PopPepWork.c)
 *     PopPepProcessEvent @ 0x140317DF0 (PopPepProcessEvent.c)
 * Callees:
 *     PopPepStartDevicePowerOffActivity @ 0x1403156D0 (PopPepStartDevicePowerOffActivity.c)
 *     PopPepStartDevicePowerOnActivity @ 0x140315700 (PopPepStartDevicePowerOnActivity.c)
 *     PopPepStartComponentActivatingActivity @ 0x140316EC0 (PopPepStartComponentActivatingActivity.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PopPepStartActivity(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        volatile signed __int32 *a5,
        __int64 a6)
{
  __int64 v7; // rbx
  char (__fastcall *v8)(__int64, __int64, __int64); // rax
  __int64 result; // rax

  v7 = (int)a4;
  _InterlockedDecrement(a5);
  v8 = (char (__fastcall *)(__int64, __int64, __int64))off_1400010C8[17 * (int)a4];
  if ( v8 == PopPepStartComponentActivatingActivity )
  {
    LOBYTE(result) = PopPepStartComponentActivatingActivity(a1, a2, a6);
  }
  else if ( v8 == PopPepStartDevicePowerOnActivity )
  {
    LOBYTE(result) = PopPepStartDevicePowerOnActivity(a1, a2, a6);
  }
  else if ( v8 == PopPepStartDevicePowerOffActivity )
  {
    LOBYTE(result) = PopPepStartDevicePowerOffActivity(a1, a2, a6);
  }
  else
  {
    LOBYTE(result) = guard_dispatch_icall_no_overrides(a1, a2, a6, a4);
  }
  **(_DWORD **)(a3 + 8 * v7) &= ~2u;
  **(_DWORD **)(a3 + 8 * v7) &= ~8u;
  **(_DWORD **)(a3 + 8 * v7) |= 4u;
  return (unsigned __int8)result;
}
