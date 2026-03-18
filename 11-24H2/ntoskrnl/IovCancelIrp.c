/*
 * XREFs of IovCancelIrp @ 0x140B826F0
 * Callers:
 *     IoCancelIrp @ 0x140418FA0 (IoCancelIrp.c)
 * Callees:
 *     ViWdBeforeCancelIrp @ 0x140B9CA78 (ViWdBeforeCancelIrp.c)
 *     VfIrpDatabaseEntryReleaseLock @ 0x140BA3FE4 (VfIrpDatabaseEntryReleaseLock.c)
 *     IovpLogStackTrace @ 0x140BA6A6C (IovpLogStackTrace.c)
 *     VfIrpDatabaseEntryFindAndLock @ 0x140BA7084 (VfIrpDatabaseEntryFindAndLock.c)
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
