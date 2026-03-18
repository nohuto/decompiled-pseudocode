/*
 * XREFs of _dynamic_initializer_for__CCommonRegistryData::SuperWetTiming::PeriodicFenceMinDifferenceMicroseconds__ @ 0x180006E10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 dynamic_initializer_for__CCommonRegistryData::SuperWetTiming::PeriodicFenceMinDifferenceMicroseconds__()
{
  __int64 result; // rax
  int v1; // ecx
  int v2; // [rsp+50h] [rbp+8h] BYREF

  v2 = 0;
  result = GetPersistedRegistryValueW(
             L"SuperWetTiming",
             L"Software\\Microsoft\\Windows\\Dwm\\GpuAccelInkTiming",
             L"PeriodicFenceMinDifferenceMicroseconds",
             16LL,
             0LL,
             &v2,
             4,
             0LL);
  v1 = 500;
  if ( !(_DWORD)result )
    v1 = v2;
  CCommonRegistryData::SuperWetTiming::PeriodicFenceMinDifferenceMicroseconds = v1;
  return result;
}
