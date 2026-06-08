/*
 * XREFs of sub_140006700 @ 0x140006700
 * Callers:
 *     sub_14002E7F4 @ 0x14002E7F4 (sub_14002E7F4.c)
 *     sub_1400395E0 @ 0x1400395E0 (sub_1400395E0.c)
 *     sub_14003CB24 @ 0x14003CB24 (sub_14003CB24.c)
 *     sub_14003DA60 @ 0x14003DA60 (sub_14003DA60.c)
 *     ?GetRegisteredLocation@@YAHPEAD@Z @ 0x14003E85C (-GetRegisteredLocation@@YAHPEAD@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140006700(unsigned int a1)
{
  return *((_QWORD *)&DeviceObject.Queue.ListEntry.Flink->Flink + a1);
}
