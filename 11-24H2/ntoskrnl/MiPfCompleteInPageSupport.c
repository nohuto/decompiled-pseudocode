/*
 * XREFs of MiPfCompleteInPageSupport @ 0x140352CB4
 * Callers:
 *     MiPfCompleteCoalescedIo @ 0x140351964 (MiPfCompleteCoalescedIo.c)
 *     MiPfCompletePrefetchIos @ 0x140351AD0 (MiPfCompletePrefetchIos.c)
 *     MiPrefetchVirtualMemory @ 0x140351B80 (MiPrefetchVirtualMemory.c)
 *     MmWaitForCacheManagerPrefetch @ 0x140352BC0 (MmWaitForCacheManagerPrefetch.c)
 * Callees:
 *     MiFinishHardFault @ 0x140255E80 (MiFinishHardFault.c)
 *     MiWaitForInPageComplete @ 0x140350CE8 (MiWaitForInPageComplete.c)
 *     MiInitializePageFaultPacket @ 0x140351870 (MiInitializePageFaultPacket.c)
 *     MiMapWorkingSetTypeToVm @ 0x14046A564 (MiMapWorkingSetTypeToVm.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall MiPfCompleteInPageSupport(ULONG_PTR a1, __int64 a2)
{
  unsigned int v5[4]; // [rsp+30h] [rbp-C8h] BYREF
  _BYTE v6[56]; // [rsp+40h] [rbp-B8h] BYREF
  __int64 v7; // [rsp+78h] [rbp-80h]

  memset_0(v6, 0, 0x98uLL);
  *(_QWORD *)v5 = 0LL;
  if ( a2 == 1 )
    a2 = MiMapWorkingSetTypeToVm((*(_DWORD *)(a1 + 192) >> 1) & 0xF);
  *(_DWORD *)(a1 + 192) |= 0x2000000u;
  MiInitializePageFaultPacket(0LL, 0LL, 0, 0LL, 0LL, (__int64)v6);
  v7 = a2;
  MiWaitForInPageComplete((__int64)v6, a1, v5);
  return MiFinishHardFault(
           (unsigned __int64)v6,
           ((*(_QWORD *)(a1 + 224) >> 18) & 0x3FFFFFF8LL) - 0x904C0000000LL,
           a1,
           0LL);
}
