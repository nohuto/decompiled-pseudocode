/*
 * XREFs of VfIrpDatabaseCheckExFreePool @ 0x140BA3E64
 * Callers:
 *     VfPoolCheckIncorrectFreeApi @ 0x140B9A3D8 (VfPoolCheckIncorrectFreeApi.c)
 * Callees:
 *     ViIrpDatabaseAcquireLockShared @ 0x1406156EC (ViIrpDatabaseAcquireLockShared.c)
 *     ViIrpDatabaseReleaseLockShared @ 0x140615730 (ViIrpDatabaseReleaseLockShared.c)
 *     VfUtilAddressRangeFitNoLock @ 0x140B821E0 (VfUtilAddressRangeFitNoLock.c)
 *     CarReportRuleViolationFromNt @ 0x140B8D914 (CarReportRuleViolationFromNt.c)
 *     ViIrpDatabaseFindPointer @ 0x140BA4150 (ViIrpDatabaseFindPointer.c)
 */

void __fastcall VfIrpDatabaseCheckExFreePool(ULONG_PTR BugCheckParameter2)
{
  __int64 Pointer; // rbx
  KIRQL v3; // [rsp+58h] [rbp+10h] BYREF

  v3 = 0;
  if ( VfIrpDatabaseInitialized )
  {
    if ( (unsigned int)VfUtilAddressRangeFitNoLock(
                         (unsigned __int64 *)(ViIrpDatabaseAddressRanges
                                            + 16LL * (unsigned __int8)(-125 * (BugCheckParameter2 >> 12))),
                         BugCheckParameter2,
                         BugCheckParameter2 + 1) )
    {
      ViIrpDatabaseAcquireLockShared(&v3);
      Pointer = ViIrpDatabaseFindPointer(BugCheckParameter2);
      ViIrpDatabaseReleaseLockShared(v3);
      if ( Pointer )
      {
        if ( (MmVerifierData & 0x10) != 0 )
          CarReportRuleViolationFromNt(196, 261LL, BugCheckParameter2, 0LL, 0LL, 4u, 0LL);
      }
    }
  }
}
