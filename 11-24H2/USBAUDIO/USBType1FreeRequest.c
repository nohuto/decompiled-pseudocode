/*
 * XREFs of USBType1FreeRequest @ 0x140007FA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall USBType1FreeRequest(PIRP *Buffer)
{
  IoFreeIrp(Buffer[2]);
  ExFreePool(Buffer);
}
