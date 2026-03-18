/*
 * XREFs of VfRemoveVerifierEntry @ 0x140B9C4D4
 * Callers:
 *     NtSetSystemInformation @ 0x140AE1300 (NtSetSystemInformation.c)
 * Callees:
 *     VfSuspectDriversRemove @ 0x140B9AEA4 (VfSuspectDriversRemove.c)
 */

__int64 __fastcall VfRemoveVerifierEntry(const UNICODE_STRING *a1)
{
  if ( (_QWORD)ViVerifierDriverAddedThunkListHead )
    return VfSuspectDriversRemove(a1);
  else
    return 3221225659LL;
}
