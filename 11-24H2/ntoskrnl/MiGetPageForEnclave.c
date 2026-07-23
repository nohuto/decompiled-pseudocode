/*
 * XREFs of MiGetPageForEnclave @ 0x14046DE64
 * Callers:
 *     MiAddPagesToEnclave @ 0x14046D958 (MiAddPagesToEnclave.c)
 *     MiCopyPagesIntoEnclave @ 0x140A29D18 (MiCopyPagesIntoEnclave.c)
 * Callees:
 *     MiUnlinkPageChainHead @ 0x140349AD0 (MiUnlinkPageChainHead.c)
 *     MiAllocateEnclavePages @ 0x1403F85DC (MiAllocateEnclavePages.c)
 */

__int64 __fastcall MiGetPageForEnclave(__int64 a1)
{
  __int64 *v1; // rax
  __int64 v2; // r10
  __int128 v4; // [rsp+30h] [rbp-28h] BYREF
  __int64 v5; // [rsp+40h] [rbp-18h]

  v5 = 0LL;
  v4 = 0LL;
  v1 = MiUnlinkPageChainHead(a1 + 96);
  if ( v1 )
    return 0xAAAAAAAAAAAAAAABuLL * ((__int64)(v1 + 0x44000000000LL) >> 4);
  MiAllocateEnclavePages(
    v2,
    *(unsigned __int16 *)(*(_QWORD *)(KiProcessorBlock[KeGetCurrentThread()->IdealProcessor] + 192) + 138LL),
    0,
    1LL,
    (__int64 *)&v4);
  v1 = MiUnlinkPageChainHead((__int64)&v4);
  if ( v1 )
    return 0xAAAAAAAAAAAAAAABuLL * ((__int64)(v1 + 0x44000000000LL) >> 4);
  else
    return -1LL;
}
