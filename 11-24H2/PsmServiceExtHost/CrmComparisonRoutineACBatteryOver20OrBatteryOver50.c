/*
 * XREFs of CrmComparisonRoutineACBatteryOver20OrBatteryOver50 @ 0x18006A8C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CrmComparisonRoutineACBatteryOver20OrBatteryOver50(__int64 a1, __int64 *a2)
{
  __int64 v2; // rax
  unsigned int v3; // edx

  v2 = *a2;
  v3 = 0;
  if ( !(_DWORD)v2 && HIDWORD(v2) >= 0x14 || HIDWORD(v2) >= 0x32 )
    return 2;
  return v3;
}
