/*
 * XREFs of IsPenIVEnabled @ 0x140217E98
 * Callers:
 *     RIMInitialize @ 0x14004FCC0 (RIMInitialize.c)
 *     ?CheckandDeliverContainerInput@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@HH@Z @ 0x1401F7794 (-CheckandDeliverContainerInput@CTouchProcessor@@AEAAXPEBUCPointerInputFrame@@HH@Z.c)
 *     ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x1401FCB24 (-GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z.c)
 * Callees:
 *     isChildPartition @ 0x1400525E0 (isChildPartition.c)
 *     UseVelocityToEnableIV @ 0x1400CE858 (UseVelocityToEnableIV.c)
 */

char __fastcall IsPenIVEnabled(__int64 a1)
{
  __int64 v1; // rcx
  char v2; // bl
  __int64 v3; // rcx

  v2 = 0;
  if ( UseVelocityToEnableIV(a1) || isChildPartition(v1) && *(_BYTE *)(W32GetUserSessionState(v3) + 19419) )
    return 1;
  return v2;
}
