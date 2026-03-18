/*
 * XREFs of DxgkClosePhysicalMemoryObjectCB @ 0x14001F500
 * Callers:
 *     <none>
 * Callees:
 *     SmmClosePhysicalObject @ 0x14001FDDC (SmmClosePhysicalObject.c)
 */

__int64 __fastcall DxgkClosePhysicalMemoryObjectCB(struct SYSMM_ADAPTER_OBJECT **a1)
{
  return SmmClosePhysicalObject(*a1);
}
