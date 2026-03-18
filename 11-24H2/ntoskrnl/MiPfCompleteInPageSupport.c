/*
 * XREFs of MiPfCompleteInPageSupport @ 0x140397338
 * Callers:
 *     MiPfCompletePrefetchIos @ 0x1402A9824 (MiPfCompletePrefetchIos.c)
 *     MiPrefetchVirtualMemory @ 0x1402A98D0 (MiPrefetchVirtualMemory.c)
 *     MmWaitForCacheManagerPrefetch @ 0x140397244 (MmWaitForCacheManagerPrefetch.c)
 *     MiPfCompleteCoalescedIo @ 0x140397438 (MiPfCompleteCoalescedIo.c)
 * Callees:
 *     MiFinishHardFault @ 0x1402F0070 (MiFinishHardFault.c)
 *     MiInitializePageFaultPacket @ 0x1403975B0 (MiInitializePageFaultPacket.c)
 *     MiWaitForInPageComplete @ 0x140398598 (MiWaitForInPageComplete.c)
 *     MiMapWorkingSetTypeToVm @ 0x14047013C (MiMapWorkingSetTypeToVm.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

__int64 __fastcall MiPfCompleteInPageSupport(__int64 a1, __int64 a2)
{
  __int64 v5; // [rsp+30h] [rbp-C8h] BYREF
  _BYTE v6[56]; // [rsp+40h] [rbp-B8h] BYREF
  __int64 v7; // [rsp+78h] [rbp-80h]

  memset_0(v6, 0, 0x98uLL);
  v5 = 0LL;
  if ( a2 == 1 )
    a2 = MiMapWorkingSetTypeToVm((*(_DWORD *)(a1 + 192) >> 1) & 0xF);
  *(_DWORD *)(a1 + 192) |= 0x2000000u;
  MiInitializePageFaultPacket(0, 0, 0, 0, 0LL, (__int64)v6);
  v7 = a2;
  MiWaitForInPageComplete(v6, a1, &v5);
  return MiFinishHardFault((__int64)v6, ((*(_QWORD *)(a1 + 224) >> 18) & 0x3FFFFFF8LL) - 0x904C0000000LL, a1, 0LL);
}
