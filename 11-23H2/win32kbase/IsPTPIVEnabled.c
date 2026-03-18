/*
 * XREFs of IsPTPIVEnabled @ 0x1C00A8700
 * Callers:
 *     RIMInitialize @ 0x1C00A7FE0 (RIMInitialize.c)
 *     ?CheckandDeliverContainerInput@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@HH@Z @ 0x1C01BC678 (-CheckandDeliverContainerInput@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@HH@Z.c)
 *     ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x1C01C4EF8 (-GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z.c)
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x1C01F9444 (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 * Callees:
 *     isChildPartition @ 0x1C004FE70 (isChildPartition.c)
 *     UseVelocityToEnableIV @ 0x1C004FE94 (UseVelocityToEnableIV.c)
 */

char IsPTPIVEnabled()
{
  char v0; // bl

  v0 = 0;
  if ( UseVelocityToEnableIV() || isChildPartition() && byte_1C02908A4 )
    return 1;
  return v0;
}
