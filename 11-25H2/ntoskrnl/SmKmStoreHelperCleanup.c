/*
 * XREFs of SmKmStoreHelperCleanup @ 0x1403960C8
 * Callers:
 *     ?SmStCleanup@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x140396200 (-SmStCleanup@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 * Callees:
 *     SmKmStoreHelperSendCommand @ 0x14020CD34 (SmKmStoreHelperSendCommand.c)
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     KeWaitForSingleObject @ 0x14029C6A0 (KeWaitForSingleObject.c)
 */

LONG_PTR __fastcall SmKmStoreHelperCleanup(PVOID *a1)
{
  LONG_PTR result; // rax

  if ( *a1 )
  {
    SmKmStoreHelperSendCommand((__int64)a1, 1, 0LL, 1u);
    KeWaitForSingleObject(*a1, Executive, 0, 0, 0LL);
    return ObfDereferenceObjectWithTag(*a1, 0x746C6644u);
  }
  return result;
}
