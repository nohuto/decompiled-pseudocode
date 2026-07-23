/*
 * XREFs of MmUnmapProtectedKernelPageRange @ 0x140A87C74
 * Callers:
 *     PsDispatchIumService @ 0x1404E66B4 (PsDispatchIumService.c)
 * Callees:
 *     MiInsertTbFlushEntry @ 0x1402137F0 (MiInsertTbFlushEntry.c)
 *     MiInitializeTbFlushList @ 0x140214780 (MiInitializeTbFlushList.c)
 *     MiFlushTbList @ 0x1402A1330 (MiFlushTbList.c)
 *     MiVaToFlushVm @ 0x1402FC5EC (MiVaToFlushVm.c)
 *     MiGetPteAddress @ 0x140429FD0 (MiGetPteAddress.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
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
