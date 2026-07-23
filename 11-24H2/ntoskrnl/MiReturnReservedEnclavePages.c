/*
 * XREFs of MiReturnReservedEnclavePages @ 0x140B658E0
 * Callers:
 *     MiAddPagesToEnclave @ 0x14046D958 (MiAddPagesToEnclave.c)
 *     MiInitializeEnclave @ 0x1407F7DE8 (MiInitializeEnclave.c)
 *     MiDeleteEnclavePages @ 0x140B6FC18 (MiDeleteEnclavePages.c)
 * Callees:
 *     MiUnlinkPageChainHead @ 0x140349AD0 (MiUnlinkPageChainHead.c)
 *     MiReturnEnclavePage @ 0x1404CE13C (MiReturnEnclavePage.c)
 */

void __fastcall MiReturnReservedEnclavePages(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // rdi
  __int64 *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9

  if ( a2 )
  {
    v2 = a2;
    v3 = a1 + 96;
    do
    {
      v4 = MiUnlinkPageChainHead(v3);
      if ( !v4 )
        break;
      MiReturnEnclavePage(0xAAAAAAAAAAAAAAABuLL * ((__int64)(v4 + 0x44000000000LL) >> 4), v5, v6, v7);
      --v2;
    }
    while ( v2 );
  }
}
