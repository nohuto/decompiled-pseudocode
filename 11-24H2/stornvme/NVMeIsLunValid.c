/*
 * XREFs of NVMeIsLunValid @ 0x140001AC0
 * Callers:
 *     ScsiReadCapacityRequest @ 0x140001940 (ScsiReadCapacityRequest.c)
 *     ProcessIrpCommand @ 0x140014990 (ProcessIrpCommand.c)
 * Callees:
 *     Feature_EnableLunValidCheckContainment__private_IsEnabledDeviceUsageNoInline @ 0x14001F720 (Feature_EnableLunValidCheckContainment__private_IsEnabledDeviceUsageNoInline.c)
 */

bool __fastcall NVMeIsLunValid(__int64 a1, unsigned __int8 a2)
{
  __int64 v2; // rbx

  v2 = *(_QWORD *)(a1 + 8LL * a2 + 1672);
  return (!(unsigned int)Feature_EnableLunValidCheckContainment__private_IsEnabledDeviceUsageNoInline() || v2)
      && !*(_BYTE *)(v2 + 66)
      && !*(_WORD *)(v2 + 48);
}
