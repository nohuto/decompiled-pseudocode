/*
 * XREFs of RtlIsValidIndexHandle @ 0x1800E9E50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN __cdecl RtlIsValidIndexHandle(
        PRTL_HANDLE_TABLE HandleTable,
        ULONG HandleIndex,
        PRTL_HANDLE_TABLE_ENTRY *Handle)
{
  PRTL_HANDLE_TABLE_ENTRY CommittedHandles; // r9
  _RTL_HANDLE_TABLE_ENTRY *v4; // rax

  CommittedHandles = HandleTable->CommittedHandles;
  v4 = (PRTL_HANDLE_TABLE_ENTRY)((char *)CommittedHandles + HandleIndex * HandleTable->SizeOfHandleTableEntry);
  if ( !v4
    || v4 < CommittedHandles
    || v4 >= HandleTable->UnCommittedHandles
    || ((HandleTable->SizeOfHandleTableEntry - 1) & (unsigned int)v4) != 0
    || (v4->Flags & 1) == 0 )
  {
    return 0;
  }
  *Handle = v4;
  return 1;
}
