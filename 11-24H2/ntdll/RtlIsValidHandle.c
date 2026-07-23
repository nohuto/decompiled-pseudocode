/*
 * XREFs of RtlIsValidHandle @ 0x18007B710
 * Callers:
 *     RtlpFreeHandleForAtom @ 0x18007B6A8 (RtlpFreeHandleForAtom.c)
 * Callees:
 *     <none>
 */

BOOLEAN __cdecl RtlIsValidHandle(PRTL_HANDLE_TABLE HandleTable, PRTL_HANDLE_TABLE_ENTRY Handle)
{
  if ( !Handle
    || Handle < HandleTable->CommittedHandles
    || Handle >= HandleTable->UnCommittedHandles
    || ((HandleTable->SizeOfHandleTableEntry - 1) & (unsigned int)Handle) != 0 )
  {
    return 0;
  }
  else
  {
    return Handle->Flags & 1;
  }
}
