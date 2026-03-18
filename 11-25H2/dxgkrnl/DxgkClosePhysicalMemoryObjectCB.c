/*
 * XREFs of DxgkClosePhysicalMemoryObjectCB @ 0x140010070
 * Callers:
 *     <none>
 * Callees:
 *     SmmClosePhysicalObject @ 0x14001094C (SmmClosePhysicalObject.c)
 */

__int64 __fastcall DxgkClosePhysicalMemoryObjectCB(struct SYSMM_ADAPTER_OBJECT **a1)
{
  return SmmClosePhysicalObject(*a1);
}
