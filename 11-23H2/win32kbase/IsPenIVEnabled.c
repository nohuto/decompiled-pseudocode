/*
 * XREFs of IsPenIVEnabled @ 0x1C00A86CC
 * Callers:
 *     RIMInitialize @ 0x1C00A7FE0 (RIMInitialize.c)
 *     ?CheckandDeliverContainerInput@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@HH@Z @ 0x1C01BC678 (-CheckandDeliverContainerInput@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@HH@Z.c)
 *     ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x1C01C4EF8 (-GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z.c)
 * Callees:
 *     isChildPartition @ 0x1C004FE70 (isChildPartition.c)
 *     UseVelocityToEnableIV @ 0x1C004FE94 (UseVelocityToEnableIV.c)
 */

char IsPenIVEnabled()
{
  char v0; // bl

  v0 = 0;
  if ( UseVelocityToEnableIV() || isChildPartition() && byte_1C02908A7 )
    return 1;
  return v0;
}
