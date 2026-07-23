/*
 * XREFs of VfIrpDatabaseCheckExFreePool @ 0x140BA5E64
 * Callers:
 *     VfPoolCheckIncorrectFreeApi @ 0x140B9C3D8 (VfPoolCheckIncorrectFreeApi.c)
 * Callees:
 *     ViIrpDatabaseAcquireLockShared @ 0x140613CAC (ViIrpDatabaseAcquireLockShared.c)
 *     ViIrpDatabaseReleaseLockShared @ 0x140613CF0 (ViIrpDatabaseReleaseLockShared.c)
 *     VfUtilAddressRangeFitNoLock @ 0x140B841E4 (VfUtilAddressRangeFitNoLock.c)
 *     CarReportRuleViolationFromNt @ 0x140B8F914 (CarReportRuleViolationFromNt.c)
 *     ViIrpDatabaseFindPointer @ 0x140BA6150 (ViIrpDatabaseFindPointer.c)
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
