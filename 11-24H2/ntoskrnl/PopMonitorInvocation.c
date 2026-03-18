/*
 * XREFs of PopMonitorInvocation @ 0x140AC930C
 * Callers:
 *     NtPowerInformation @ 0x1409F0230 (NtPowerInformation.c)
 * Callees:
 *     Feature_AggressiveInputSuppression__private_IsEnabledPreCheck @ 0x1404F97A4 (Feature_AggressiveInputSuppression__private_IsEnabledPreCheck.c)
 *     PopTraceMonitorOnRequestUserInput @ 0x140758954 (PopTraceMonitorOnRequestUserInput.c)
 *     PopProcessSessionDisplayStateChange @ 0x1409BBD90 (PopProcessSessionDisplayStateChange.c)
 *     PopIsInputSuppressionEngaged @ 0x140A37828 (PopIsInputSuppressionEngaged.c)
 *     PopAcquirePolicyLock @ 0x140B67CB0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140B67D00 (PopReleasePolicyLock.c)
 */

__int64 __fastcall PopMonitorInvocation(__int64 a1, __int64 a2)
{
  unsigned int v2; // edi
  unsigned int v3; // ebx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v9; // [rsp+20h] [rbp-8h]

  v2 = *(_DWORD *)(a1 + 4);
  v3 = 0;
  if ( *(_BYTE *)a1 )
  {
    PopAcquirePolicyLock(a1, a2);
    if ( PopIsInputSuppressionEngaged(v2) )
    {
      Feature_AggressiveInputSuppression__private_IsEnabledPreCheck();
      PopTraceMonitorOnRequestUserInput();
    }
    v3 = PopProcessSessionDisplayStateChange(1, v2);
    PopReleasePolicyLock(v5, v4, v6, v7, v9);
  }
  return v3;
}
