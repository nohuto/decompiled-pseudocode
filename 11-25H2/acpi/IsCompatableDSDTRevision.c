/*
 * XREFs of IsCompatableDSDTRevision @ 0x140008AC0
 * Callers:
 *     ParseAcquire @ 0x140002BC0 (ParseAcquire.c)
 *     ParseIntObj @ 0x140006630 (ParseIntObj.c)
 *     Store @ 0x140006870 (Store.c)
 *     WriteObject @ 0x140006BD0 (WriteObject.c)
 *     ExprOp2_64 @ 0x1400072C0 (ExprOp2_64.c)
 *     LogOp2_32 @ 0x140007938 (LogOp2_32.c)
 *     LNot @ 0x140008BB0 (LNot.c)
 *     ParseOpcode @ 0x14000E5F0 (ParseOpcode.c)
 *     ConvertToBuffer @ 0x14002E0E0 (ConvertToBuffer.c)
 *     ExprOp1 @ 0x14002E650 (ExprOp1.c)
 *     CondRefOf @ 0x14002EE00 (CondRefOf.c)
 *     Concat @ 0x14002F1F0 (Concat.c)
 *     ToString @ 0x14002F8D0 (ToString.c)
 *     ConvertToString @ 0x14002FAA4 (ConvertToString.c)
 *     Match @ 0x140041A20 (Match.c)
 *     Match_64 @ 0x140041A60 (Match_64.c)
 *     Match_32 @ 0x140041C14 (Match_32.c)
 *     OSInterface @ 0x140051490 (OSInterface.c)
 *     ProcessWait @ 0x140054330 (ProcessWait.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140070B90 (_guard_dispatch_icall.c)
 */

_BOOL8 IsCompatableDSDTRevision()
{
  unsigned int v1; // [rsp+30h] [rbp+8h] BYREF

  v1 = 0;
  if ( !ghGetAcpiTableVersion )
    return 0LL;
  ghGetAcpiTableVersion(1413763908LL, &v1);
  return v1 >= 2;
}
