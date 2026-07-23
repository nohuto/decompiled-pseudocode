/*
 * XREFs of PopDiagGetPowerSchemeInfo @ 0x1404C7BDC
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x1402B63C0 (PopCaptureSleepStudyStatistics.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopDiagGetPowerSchemeInfo(_QWORD *a1, _QWORD *a2, _DWORD *a3)
{
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 result; // rax
  __int64 v8; // rax

  v3 = *a1 - *(_QWORD *)&GUID_MAX_POWER_SAVINGS.Data1;
  if ( *a1 == *(_QWORD *)&GUID_MAX_POWER_SAVINGS.Data1 )
    v3 = a1[1] - *(_QWORD *)GUID_MAX_POWER_SAVINGS.Data4;
  if ( v3 )
  {
    v4 = *a1 - *(_QWORD *)&GUID_MIN_POWER_SAVINGS.Data1;
    if ( *a1 == *(_QWORD *)&GUID_MIN_POWER_SAVINGS.Data1 )
      v4 = a1[1] - *(_QWORD *)GUID_MIN_POWER_SAVINGS.Data4;
    if ( v4 )
    {
      v5 = *a1 - *(_QWORD *)&GUID_TYPICAL_POWER_SAVINGS.Data1;
      if ( *a1 == *(_QWORD *)&GUID_TYPICAL_POWER_SAVINGS.Data1 )
        v5 = a1[1] - *(_QWORD *)GUID_TYPICAL_POWER_SAVINGS.Data4;
      if ( v5 )
        *a3 |= 0x10u;
    }
  }
  v6 = *a2 - *(_QWORD *)&GUID_MAX_POWER_SAVINGS.Data1;
  if ( *a2 == *(_QWORD *)&GUID_MAX_POWER_SAVINGS.Data1 )
    v6 = a2[1] - *(_QWORD *)GUID_MAX_POWER_SAVINGS.Data4;
  if ( !v6 )
  {
    result = *a3 & 0xFFFFFFF0 | 1;
LABEL_23:
    *a3 = result;
    return result;
  }
  v8 = *a2 - *(_QWORD *)&GUID_MIN_POWER_SAVINGS.Data1;
  if ( *a2 == *(_QWORD *)&GUID_MIN_POWER_SAVINGS.Data1 )
    v8 = a2[1] - *(_QWORD *)GUID_MIN_POWER_SAVINGS.Data4;
  if ( !v8 )
  {
    result = *a3 & 0xFFFFFFF0 | 2;
    goto LABEL_23;
  }
  result = *a2 - *(_QWORD *)&GUID_TYPICAL_POWER_SAVINGS.Data1;
  if ( *a2 == *(_QWORD *)&GUID_TYPICAL_POWER_SAVINGS.Data1 )
    result = a2[1] - *(_QWORD *)GUID_TYPICAL_POWER_SAVINGS.Data4;
  if ( !result )
  {
    result = *a3 & 0xFFFFFFF0 | 4;
    goto LABEL_23;
  }
  return result;
}
