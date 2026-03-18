/*
 * XREFs of _dynamic_initializer_for__CCommonRegistryData::AllowableTimeDriftMs__ @ 0x180007440
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 dynamic_initializer_for__CCommonRegistryData::AllowableTimeDriftMs__()
{
  __int64 result; // rax
  int v1; // ecx
  int v2; // [rsp+50h] [rbp+8h] BYREF

  v2 = 0;
  result = GetPersistedRegistryValueW(
             L"DWMSwitches",
             L"Software\\Microsoft\\Windows\\Dwm",
             L"AllowableTimeDriftMs",
             16LL,
             0LL,
             &v2,
             4,
             0LL);
  v1 = 250;
  if ( !(_DWORD)result )
    v1 = v2;
  CCommonRegistryData::AllowableTimeDriftMs = v1;
  return result;
}
