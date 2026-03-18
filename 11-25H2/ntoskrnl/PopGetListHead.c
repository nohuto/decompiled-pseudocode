/*
 * XREFs of PopGetListHead @ 0x140964A44
 * Callers:
 *     PopSetPowerSettingValue @ 0x140964AB4 (PopSetPowerSettingValue.c)
 *     PopFindPowerSettingConfiguration @ 0x140964F00 (PopFindPowerSettingConfiguration.c)
 * Callees:
 *     PopStateIsSessionSpecific @ 0x140964EB8 (PopStateIsSessionSpecific.c)
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
