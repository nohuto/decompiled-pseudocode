/*
 * XREFs of ExSlowReplenishHandleTableEntry @ 0x14043D820
 * Callers:
 *     PsLookupThreadByThreadId @ 0x140846770 (PsLookupThreadByThreadId.c)
 *     ObWaitForMultipleObjects @ 0x140847240 (ObWaitForMultipleObjects.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x140847AA0 (ObpReferenceObjectByHandleWithTag.c)
 *     PsOpenProcess @ 0x140850610 (PsOpenProcess.c)
 *     ObReferenceFileObjectForWrite @ 0x140863440 (ObReferenceFileObjectForWrite.c)
 *     NtWriteFile @ 0x1408BEB30 (NtWriteFile.c)
 *     PspThreadFromTicket @ 0x1408EA5C0 (PspThreadFromTicket.c)
 *     PsLookupProcessByProcessId @ 0x1408F21F0 (PsLookupProcessByProcessId.c)
 *     NtAlertThreadByThreadIdEx @ 0x1409892F0 (NtAlertThreadByThreadIdEx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExSlowReplenishHandleTableEntry(unsigned __int64 *a1)
{
  unsigned __int64 v1; // r8
  __int64 result; // rax

  v1 = *a1;
  result = 0LL;
  if ( (*a1 & 0x1FFFE) < 0xFFFE && !ExpHandleTableFastRefsDisabled )
  {
    result = 0x7FFF - (unsigned int)(unsigned __int16)(v1 >> 1);
    *a1 = v1 & 0xFFFFFFFFFFFE0001uLL | 0xFFFE;
  }
  return result;
}
