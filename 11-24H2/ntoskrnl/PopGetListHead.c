/*
 * XREFs of PopGetListHead @ 0x1409A2E44
 * Callers:
 *     PopSetPowerSettingValue @ 0x1409A2EB4 (PopSetPowerSettingValue.c)
 *     PopFindPowerSettingConfiguration @ 0x1409A3300 (PopFindPowerSettingConfiguration.c)
 * Callees:
 *     PopStateIsSessionSpecific @ 0x1409A32B8 (PopStateIsSessionSpecific.c)
 */

PVOID *__fastcall PopGetListHead(_QWORD *a1)
{
  __int64 v2; // r11
  unsigned int i; // ecx
  GUID *v5; // r9
  __int64 v6; // rdx

  if ( !(unsigned __int8)PopStateIsSessionSpecific(a1) )
    return &PopPowerSettings;
  for ( i = v2; i < 2; ++i )
  {
    v5 = PopSessionSpecificGuids[i];
    v6 = *(_QWORD *)&v5->Data1 - *a1;
    if ( *(_QWORD *)&v5->Data1 == *a1 )
      v6 = *(_QWORD *)v5->Data4 - a1[1];
    if ( !v6 )
      return (PVOID *)((char *)&PopSessionSpecificLists + 16 * i);
  }
  return (PVOID *)v2;
}
