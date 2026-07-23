/*
 * XREFs of MiMarkKernelPageTablePages @ 0x140B64878
 * Callers:
 *     MmMarkHiberPhase @ 0x140B64E88 (MmMarkHiberPhase.c)
 * Callees:
 *     MiWalkPageTables @ 0x14020F7D0 (MiWalkPageTables.c)
 *     MiGetAnyMultiplexedVm @ 0x140439200 (MiGetAnyMultiplexedVm.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 MiMarkKernelPageTablePages()
{
  char *AnyMultiplexedVm; // rax
  int v2; // [rsp+20h] [rbp-C8h] BYREF
  unsigned int v3; // [rsp+24h] [rbp-C4h]
  char v4; // [rsp+29h] [rbp-BFh]
  char *v5; // [rsp+40h] [rbp-A8h]
  unsigned __int64 v6; // [rsp+48h] [rbp-A0h]
  __int64 v7; // [rsp+50h] [rbp-98h]
  __int64 (__fastcall *v8)(__int64, unsigned __int64 *); // [rsp+C8h] [rbp-20h]

  memset_0(&v2, 0, 0xC0uLL);
  v2 = 8449;
  v3 = v3 & 0xFFFFFE3F | 0x40;
  v8 = MiMarkKernelPageTablePte;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
  v7 = -1LL;
  v5 = AnyMultiplexedVm;
  v6 = 0xFFFF800000000000uLL;
  v4 = 17;
  return MiWalkPageTables(&v2);
}
