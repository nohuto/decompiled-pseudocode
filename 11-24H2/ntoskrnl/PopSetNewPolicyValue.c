/*
 * XREFs of PopSetNewPolicyValue @ 0x1409A2CCC
 * Callers:
 *     PopUmpoProcessPowerMessage @ 0x140A181C4 (PopUmpoProcessPowerMessage.c)
 * Callees:
 *     PopSetPowerSettingValue @ 0x1409A2EB4 (PopSetPowerSettingValue.c)
 *     PopStateIsSessionSpecific @ 0x1409A32B8 (PopStateIsSessionSpecific.c)
 *     RtlStringFromGUIDEx @ 0x1409A3470 (RtlStringFromGUIDEx.c)
 *     PpmSetProfilePolicySetting @ 0x1409A3A64 (PpmSetProfilePolicySetting.c)
 *     ExFreePool @ 0x140B74850 (ExFreePool.c)
 */

__int64 __fastcall PopSetNewPolicyValue(__int64 a1)
{
  __int64 v1; // rsi
  unsigned int v3; // edi
  __int64 v4; // rax
  unsigned int v5; // ebp
  unsigned int v6; // r15d
  unsigned int v7; // eax
  __int64 v8; // rax
  UNICODE_STRING v10; // [rsp+30h] [rbp-28h] BYREF

  v1 = a1 + 20;
  v10 = 0LL;
  v3 = 0;
  if ( RtlStringFromGUIDEx((PGUID)(a1 + 20), &v10, 1u) >= 0 && v10.Buffer )
    ExFreePool(v10.Buffer);
  if ( !(unsigned __int8)PopStateIsSessionSpecific(v1) )
  {
    v4 = *(_QWORD *)(a1 + 36) - *(_QWORD *)&GUID_PROCESSOR_SETTINGS_SUBGROUP.Data1;
    v5 = *(_DWORD *)(a1 + 52);
    v6 = *(_DWORD *)(a1 + 56);
    if ( !v4 )
      v4 = *(_QWORD *)(a1 + 44) - *(_QWORD *)GUID_PROCESSOR_SETTINGS_SUBGROUP.Data4;
    if ( v4 )
      return (unsigned int)PopSetPowerSettingValue(v1, 0xFFFFFFFFLL, v5, v6, a1 + 60);
    v7 = PpmSetProfilePolicySetting((int)a1 + 4, v1, v5, (int)a1 + 60, *(_DWORD *)(a1 + 56));
    if ( v7 != -1073741275 )
      v3 = v7;
    v8 = *(_QWORD *)(a1 + 4) - *(_QWORD *)&CPER_EMPTY_GUID.Data1;
    if ( !v8 )
      v8 = *(_QWORD *)(a1 + 12) - *(_QWORD *)CPER_EMPTY_GUID.Data4;
    if ( !v8 )
      return (unsigned int)PopSetPowerSettingValue(v1, 0xFFFFFFFFLL, v5, v6, a1 + 60);
  }
  return v3;
}
