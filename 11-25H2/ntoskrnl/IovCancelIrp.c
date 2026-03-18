/*
 * XREFs of IovCancelIrp @ 0x140B726F0
 * Callers:
 *     IoCancelIrp @ 0x14041B240 (IoCancelIrp.c)
 * Callees:
 *     ViWdBeforeCancelIrp @ 0x140B8CA98 (ViWdBeforeCancelIrp.c)
 *     VfIrpDatabaseEntryReleaseLock @ 0x140B94004 (VfIrpDatabaseEntryReleaseLock.c)
 *     IovpLogStackTrace @ 0x140B96A8C (IovpLogStackTrace.c)
 *     VfIrpDatabaseEntryFindAndLock @ 0x140B970A4 (VfIrpDatabaseEntryFindAndLock.c)
 */

__int64 __fastcall IovCancelIrp(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rbx

  IovpLogStackTrace(a1);
  result = VfIrpDatabaseEntryFindAndLock(a1);
  v3 = result;
  if ( result )
  {
    if ( *(_QWORD *)(result + 248) )
      ViWdBeforeCancelIrp();
    return VfIrpDatabaseEntryReleaseLock(v3);
  }
  return result;
}
