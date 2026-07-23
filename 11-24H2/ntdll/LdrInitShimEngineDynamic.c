/*
 * XREFs of LdrInitShimEngineDynamic @ 0x1800ACB80
 * Callers:
 *     <none>
 * Callees:
 *     LdrpReleaseLoaderLock @ 0x180031810 (LdrpReleaseLoaderLock.c)
 *     LdrpGetShimEngineInterface @ 0x180036888 (LdrpGetShimEngineInterface.c)
 *     LdrpLogInternal @ 0x180040780 (LdrpLogInternal.c)
 *     LdrpAcquireLoaderLock @ 0x180049720 (LdrpAcquireLoaderLock.c)
 *     LdrFindEntryForAddress @ 0x18007AA10 (LdrFindEntryForAddress.c)
 *     LdrpPinModule @ 0x180089BC8 (LdrpPinModule.c)
 *     LdrpDrainWorkQueue @ 0x1800AB680 (LdrpDrainWorkQueue.c)
 *     LdrpDropLastInProgressCount @ 0x1800ACA84 (LdrpDropLastInProgressCount.c)
 *     LdrpLoadShimEngine @ 0x1800AD9B0 (LdrpLoadShimEngine.c)
 */

__int64 __fastcall LdrInitShimEngineDynamic(PVOID DllHandle, __int64 a2)
{
  char v4; // di
  NTSTATUS EntryForAddress; // eax
  __int64 v6; // rcx
  unsigned __int8 ShimEngine; // bl
  PLDR_DATA_TABLE_ENTRY Entry; // [rsp+50h] [rbp+18h] BYREF

  Entry = 0LL;
  if ( (NtCurrentTeb()->SameTebFlags & 0x1000) != 0 )
  {
    v4 = 1;
  }
  else
  {
    v4 = 0;
    LdrpDrainWorkQueue(0);
  }
  LdrpAcquireLoaderLock();
  if ( !g_pShimEngineModule )
  {
    g_pShimEngineModule = DllHandle;
    LdrpGetShimEngineInterface();
  }
  EntryForAddress = LdrFindEntryForAddress(DllHandle, &Entry);
  if ( EntryForAddress < 0 )
  {
    LdrpLogInternal(
      "minkernel\\ldr\\ldrinit.c",
      3789,
      (__int64)"LdrInitShimEngineDynamic",
      0,
      "Finding the shim engine entry failed with status 0x%08lx\n",
      EntryForAddress);
    ShimEngine = 0;
  }
  else
  {
    LdrpPinModule((__int64)Entry);
    ShimEngine = LdrpLoadShimEngine(*(wchar_t **)(a2 + 8));
  }
  LOBYTE(v6) = -ShimEngine;
  LdrpReleaseLoaderLock(v6, 2, ShimEngine == 0 ? 0xC0000001 : 0);
  if ( !v4 )
    LdrpDropLastInProgressCount();
  return ShimEngine;
}
