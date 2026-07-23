/*
 * XREFs of PsspDumpObject_Event @ 0x180105560
 * Callers:
 *     PsspWalkHandleTable @ 0x1800BBE1C (PsspWalkHandleTable.c)
 * Callees:
 *     NtQueryEvent @ 0x180160B10 (NtQueryEvent.c)
 */

NTSTATUS __fastcall PsspDumpObject_Event(void *a1, void *a2, unsigned int a3, ULONG *ReturnLength)
{
  *ReturnLength = 0;
  if ( a3 < 8 )
    return -1073741789;
  else
    return NtQueryEvent(a1, EventBasicInformation, a2, 8u, ReturnLength);
}
