/*
 * XREFs of CrmComparisonRoutineACBatteryOver25OrBatteryOver75 @ 0x18006B460
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CrmComparisonRoutineACBatteryOver25OrBatteryOver75(__int64 a1, __int64 *a2)
{
  __int64 v2; // rax
  unsigned int v3; // edx

  v2 = *a2;
  v3 = 0;
  if ( !(_DWORD)v2 && HIDWORD(v2) >= 0x19 || HIDWORD(v2) >= 0x4B )
    return 2;
  return v3;
}
