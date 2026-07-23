/*
 * XREFs of RtlFreeHandle @ 0x1800EA560
 * Callers:
 *     <none>
 * Callees:
 *     memset$thunk$772440563353939046 @ 0x180171030 (memset$thunk$772440563353939046.c)
 */

BOOLEAN __cdecl RtlFreeHandle(PRTL_HANDLE_TABLE HandleTable, PRTL_HANDLE_TABLE_ENTRY Handle)
{
  BOOLEAN result; // al

  memset_thunk_772440563353939046(Handle, 0, HandleTable->SizeOfHandleTableEntry);
  *Handle = (_RTL_HANDLE_TABLE_ENTRY)HandleTable->FreeHandles;
  result = 1;
  HandleTable->FreeHandles = Handle;
  return result;
}
