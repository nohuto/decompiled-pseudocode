/*
 * XREFs of XilRegister_GetOperationalRegisters @ 0x14003CD04
 * Callers:
 *     RootHub_PrepareHardware @ 0x14007E08C (RootHub_PrepareHardware.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall XilRegister_GetOperationalRegisters(__int64 a1)
{
  return *(_QWORD *)(a1 + 32);
}
