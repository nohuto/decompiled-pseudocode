/*
 * XREFs of MmUnmapProtectedKernelPageRange @ 0x140A8B784
 * Callers:
 *     PsDispatchIumService @ 0x14048D020 (PsDispatchIumService.c)
 * Callees:
 *     MiVaToFlushVm @ 0x1402293EC (MiVaToFlushVm.c)
 *     MiInitializeTbFlushList @ 0x140233BB0 (MiInitializeTbFlushList.c)
 *     MiInsertTbFlushEntry @ 0x1402432E0 (MiInsertTbFlushEntry.c)
 *     MiFlushTbList @ 0x140291730 (MiFlushTbList.c)
 *     MiGetPteAddress @ 0x140437550 (MiGetPteAddress.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 */

void __fastcall MmUnmapProtectedKernelPageRange(unsigned __int64 a1, __int64 a2)
{
  __int64 PteAddress; // rdi
  void *v5; // rax
  _BYTE v6[208]; // [rsp+40h] [rbp-E8h] BYREF

  memset_0(v6, 0, 0xC8uLL);
  PteAddress = MiGetPteAddress(a1);
  v5 = MiVaToFlushVm(a1);
  MiInitializeTbFlushList((__int64)v6, (__int64)v5, 20, 8, 1);
  for ( ; a2; --a2 )
  {
    if ( (*(_QWORD *)PteAddress & 1) != 0 )
    {
      MiInsertTbFlushEntry((__int64)v6, PteAddress << 25 >> 16, 1LL, 0);
      *(_QWORD *)PteAddress = CLFS_LSN_NULL_EXT;
    }
    PteAddress += 8LL;
  }
  MiFlushTbList((__int64)v6);
}
