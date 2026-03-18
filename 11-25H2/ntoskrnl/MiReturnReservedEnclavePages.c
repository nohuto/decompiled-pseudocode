/*
 * XREFs of MiReturnReservedEnclavePages @ 0x140B536C0
 * Callers:
 *     MiAddPagesToEnclave @ 0x1403FCE98 (MiAddPagesToEnclave.c)
 *     MiInitializeEnclave @ 0x1407E77E4 (MiInitializeEnclave.c)
 *     MiDeleteEnclavePages @ 0x140B5F0CC (MiDeleteEnclavePages.c)
 * Callees:
 *     MiUnlinkPageChainHead @ 0x14033BAF0 (MiUnlinkPageChainHead.c)
 *     MiReturnEnclavePage @ 0x1404D558C (MiReturnEnclavePage.c)
 */

void __fastcall MiReturnReservedEnclavePages(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rdi
  __int64 *v4; // rax

  if ( a2 )
  {
    v2 = a2;
    v3 = a1 + 96;
    do
    {
      v4 = MiUnlinkPageChainHead(v3);
      if ( !v4 )
        break;
      MiReturnEnclavePage(0xAAAAAAAAAAAAAAABuLL * ((__int64)(v4 + 0x44000000000LL) >> 4));
      --v2;
    }
    while ( v2 );
  }
}
