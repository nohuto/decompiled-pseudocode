/*
 * XREFs of ViIovPluginUnload @ 0x1406A4090
 * Callers:
 *     <none>
 * Callees:
 *     IopUpdateFunctionPointers @ 0x14059661C (IopUpdateFunctionPointers.c)
 *     IovUtilUninitialize @ 0x140B92D5C (IovUtilUninitialize.c)
 *     VfMajorInit @ 0x140B92F10 (VfMajorInit.c)
 *     VfIrpDatabaseUninitialize @ 0x140BA4110 (VfIrpDatabaseUninitialize.c)
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
