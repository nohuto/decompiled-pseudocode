/*
 * XREFs of ACPIEmQueryEnableD3ColdOnSurpriseRemovalRule @ 0x1400A8718
 * Callers:
 *     ACPIFilterIrpQueryIdCompletion @ 0x14009E6C0 (ACPIFilterIrpQueryIdCompletion.c)
 *     ACPIBusIrpQueryId @ 0x1400B8CC0 (ACPIBusIrpQueryId.c)
 * Callees:
 *     ACPIComputeDeviceIdMutiStringLength @ 0x140069500 (ACPIComputeDeviceIdMutiStringLength.c)
 */

__int64 __fastcall ACPIEmQueryEnableD3ColdOnSurpriseRemovalRule(int a1, _WORD *a2)
{
  __int64 v2; // r10
  _QWORD *v4; // [rsp+20h] [rbp-38h] BYREF
  int v5; // [rsp+28h] [rbp-30h]
  int v6; // [rsp+2Ch] [rbp-2Ch]
  _QWORD v7[2]; // [rsp+30h] [rbp-28h] BYREF
  int v8; // [rsp+40h] [rbp-18h]
  int v9; // [rsp+44h] [rbp-14h]
  _QWORD *v10; // [rsp+68h] [rbp+10h] BYREF

  v6 = 0;
  v9 = 0;
  v8 = a1;
  v7[0] = a2;
  v5 = 24;
  v7[1] = 2 * ACPIComputeDeviceIdMutiStringLength(a2);
  v4 = v7;
  v10 = &v4;
  return EmClientRuleEvaluate(&GUID_EM_RULE_ACPI_DEVICE_ENABLE_D3COLD_ON_SURPRISE_REMOVAL, &v10, 1LL, v2);
}
