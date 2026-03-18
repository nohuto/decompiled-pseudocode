/*
 * XREFs of MiReserveEnclavePages @ 0x140393C14
 * Callers:
 *     MiAddPagesToEnclave @ 0x140473CEC (MiAddPagesToEnclave.c)
 *     MiCreateHardwareEnclave @ 0x1407F719C (MiCreateHardwareEnclave.c)
 * Callees:
 *     MiAllocateEnclavePages @ 0x140394D84 (MiAllocateEnclavePages.c)
 *     MiAppendPageChain @ 0x140450568 (MiAppendPageChain.c)
 */

__int64 __fastcall MiReserveEnclavePages(__int64 a1, int a2, int a3)
{
  __int128 v5; // [rsp+30h] [rbp-28h] BYREF
  __int64 v6; // [rsp+40h] [rbp-18h]

  v6 = 0LL;
  v5 = 0LL;
  MiAllocateEnclavePages(
    a2,
    *(unsigned __int16 *)(*(_QWORD *)(KiProcessorBlock[KeGetCurrentThread()->IdealProcessor] + 192) + 138LL),
    1,
    a3,
    (__int64)&v5);
  if ( !v6 )
    return 3221225495LL;
  MiAppendPageChain(a1 + 96, &v5);
  return 0LL;
}
