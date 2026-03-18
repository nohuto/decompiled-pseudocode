/*
 * XREFs of IsPTPIVEnabled @ 0x14004FBE8
 * Callers:
 *     RIMInitialize @ 0x14004FCC0 (RIMInitialize.c)
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x14018D9A8 (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 *     ?CheckandDeliverContainerInput@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@HH@Z @ 0x1401F7794 (-CheckandDeliverContainerInput@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@HH@Z.c)
 *     ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x1401FCB24 (-GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z.c)
 * Callees:
 *     isChildPartition @ 0x1400525E0 (isChildPartition.c)
 *     UseVelocityToEnableIV @ 0x1400CE858 (UseVelocityToEnableIV.c)
 */

char IsPTPIVEnabled()
{
  char v0; // bl
  __int64 v1; // rcx

  v0 = 0;
  if ( (unsigned __int8)UseVelocityToEnableIV()
    || (unsigned __int8)isChildPartition() && *(_BYTE *)(W32GetUserSessionState(v1) + 19420) )
  {
    return 1;
  }
  return v0;
}
