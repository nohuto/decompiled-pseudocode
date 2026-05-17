/*
 * XREFs of LdrInitShimEngineDynamic @ 0x180064C50
 * Callers:
 *     <none>
 * Callees:
 *     LdrpDropLastInProgressCount @ 0x180001F40 (LdrpDropLastInProgressCount.c)
 *     LdrpDrainWorkQueue @ 0x180003E20 (LdrpDrainWorkQueue.c)
 *     LdrpReleaseLoaderLock @ 0x180004E10 (LdrpReleaseLoaderLock.c)
 *     LdrpGetShimEngineInterface @ 0x180009E88 (LdrpGetShimEngineInterface.c)
 *     LdrpLogInternal @ 0x180013D80 (LdrpLogInternal.c)
 *     LdrpAcquireLoaderLock @ 0x18001CD20 (LdrpAcquireLoaderLock.c)
 *     LdrFindEntryForAddress @ 0x180064BF0 (LdrFindEntryForAddress.c)
 *     LdrpLoadShimEngine @ 0x180065AE0 (LdrpLoadShimEngine.c)
 *     LdrpPinModule @ 0x18006D2E8 (LdrpPinModule.c)
 */

__int64 __fastcall LdrInitShimEngineDynamic(unsigned __int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rcx
  char v7; // di
  int EntryForAddress; // eax
  __int64 v9; // rcx
  unsigned __int8 ShimEngine; // bl
  __int64 v12; // [rsp+50h] [rbp+18h] BYREF

  v12 = 0LL;
  v5 = 4096LL;
  if ( (NtCurrentTeb()->SameTebFlags & 0x1000) != 0 )
  {
    v7 = 1;
  }
  else
  {
    v7 = 0;
    LdrpDrainWorkQueue(0);
  }
  LdrpAcquireLoaderLock(v5, a2, a3, a4);
  if ( !g_pShimEngineModule )
  {
    g_pShimEngineModule = a1;
    LdrpGetShimEngineInterface();
  }
  EntryForAddress = LdrFindEntryForAddress(a1, &v12);
  if ( EntryForAddress < 0 )
  {
    LdrpLogInternal(
      (__int64)"minkernel\\ldr\\ldrinit.c",
      3789,
      (__int64)"LdrInitShimEngineDynamic",
      0,
      "Finding the shim engine entry failed with status 0x%08lx\n",
      EntryForAddress);
    ShimEngine = 0;
  }
  else
  {
    LdrpPinModule(v12);
    ShimEngine = LdrpLoadShimEngine(*(wchar_t **)(a2 + 8));
  }
  LOBYTE(v9) = -ShimEngine;
  LdrpReleaseLoaderLock(v9, 2u, ShimEngine == 0 ? 0xC0000001 : 0);
  if ( !v7 )
    LdrpDropLastInProgressCount();
  return ShimEngine;
}
