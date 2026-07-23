/*
 * XREFs of RtlIsValidHandle @ 0x180068820
 * Callers:
 *     RtlpFreeHandleForAtom @ 0x1800687B8 (RtlpFreeHandleForAtom.c)
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
