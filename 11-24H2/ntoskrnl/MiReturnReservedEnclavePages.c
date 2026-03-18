/*
 * XREFs of MiReturnReservedEnclavePages @ 0x140B63810
 * Callers:
 *     MiAddPagesToEnclave @ 0x140473CEC (MiAddPagesToEnclave.c)
 *     MiInitializeEnclave @ 0x1407F7674 (MiInitializeEnclave.c)
 *     MiDeleteEnclavePages @ 0x140B6E178 (MiDeleteEnclavePages.c)
 * Callees:
 *     MiUnlinkPageChainHead @ 0x1402E8490 (MiUnlinkPageChainHead.c)
 *     MiReturnEnclavePage @ 0x1404D4E64 (MiReturnEnclavePage.c)
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
