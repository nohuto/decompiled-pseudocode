/*
 * XREFs of PopPepStartActivity @ 0x1402BC628
 * Callers:
 *     PopPepProcessEvent @ 0x1402BD780 (PopPepProcessEvent.c)
 *     PopPepWork @ 0x14034D020 (PopPepWork.c)
 * Callees:
 *     PopPepStartComponentActivatingActivity @ 0x14034E210 (PopPepStartComponentActivatingActivity.c)
 *     PopPepStartDevicePowerOnActivity @ 0x14034E240 (PopPepStartDevicePowerOnActivity.c)
 *     PopPepStartDevicePowerOffActivity @ 0x14034E320 (PopPepStartDevicePowerOffActivity.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall PopPepStartActivity(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        volatile signed __int32 *a5,
        __int64 a6)
{
  __int64 v7; // rbx
  __int64 (__fastcall *v8)(); // rax
  char result; // al

  v7 = a4;
  _InterlockedDecrement(a5);
  v8 = off_140001B78[17 * a4];
  if ( (char *)v8 == (char *)PopPepStartComponentActivatingActivity )
  {
    result = PopPepStartComponentActivatingActivity(a1, a2, a6);
  }
  else if ( (char *)v8 == (char *)PopPepStartDevicePowerOnActivity )
  {
    result = PopPepStartDevicePowerOnActivity(a1, a2, a6);
  }
  else if ( (char *)v8 == (char *)PopPepStartDevicePowerOffActivity )
  {
    result = PopPepStartDevicePowerOffActivity(a1, a2, a6);
  }
  else
  {
    result = guard_dispatch_icall_no_overrides(a1, a2);
  }
  **(_DWORD **)(a3 + 8 * v7) &= ~2u;
  **(_DWORD **)(a3 + 8 * v7) &= ~8u;
  **(_DWORD **)(a3 + 8 * v7) |= 4u;
  return result;
}
