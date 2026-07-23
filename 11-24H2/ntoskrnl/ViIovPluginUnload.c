/*
 * XREFs of ViIovPluginUnload @ 0x1406A5090
 * Callers:
 *     <none>
 * Callees:
 *     IopUpdateFunctionPointers @ 0x14059364C (IopUpdateFunctionPointers.c)
 *     IovUtilUninitialize @ 0x140B94D5C (IovUtilUninitialize.c)
 *     VfMajorInit @ 0x140B94F10 (VfMajorInit.c)
 *     VfIrpDatabaseUninitialize @ 0x140BA6110 (VfIrpDatabaseUninitialize.c)
 */

__int64 ViIovPluginUnload()
{
  __int64 result; // rax

  LODWORD(VfRuleClasses) = VfRuleClasses | 0xFFFFFFEF;
  IopUpdateFunctionPointers(1, 0, 0);
  _InterlockedExchange(&IovpDisabledWithoutReboot, 1);
  IovUtilUninitialize();
  result = VfMajorInit();
  if ( !ViPacketCount )
    result = VfIrpDatabaseUninitialize();
  _InterlockedAnd((volatile signed __int32 *)&KeNumberProcessorsGroup0[9], 0xFFFFFFEF);
  return result;
}
