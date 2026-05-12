/*
 * XREFs of NvmeAdapterSystemPowerHintsEnabled @ 0x1400DAC14
 * Callers:
 *     NvmeAdapterCoalescingCallback @ 0x1400CD480 (NvmeAdapterCoalescingCallback.c)
 *     NvmePowerSettingCallback @ 0x140136080 (NvmePowerSettingCallback.c)
 * Callees:
 *     <none>
 */

char __fastcall NvmeAdapterSystemPowerHintsEnabled(__int64 a1)
{
  _QWORD *v1; // rdx
  char result; // al

  v1 = *(_QWORD **)(a1 + 160);
  result = 0;
  if ( v1[35] && v1[36] || v1[37] )
    return 1;
  return result;
}
