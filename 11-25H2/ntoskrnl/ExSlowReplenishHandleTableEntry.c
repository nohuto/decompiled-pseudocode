/*
 * XREFs of ExSlowReplenishHandleTableEntry @ 0x14044CB0C
 * Callers:
 *     PsLookupThreadByThreadId @ 0x14084E700 (PsLookupThreadByThreadId.c)
 *     ObWaitForMultipleObjects @ 0x14084F1D0 (ObWaitForMultipleObjects.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14084FA30 (ObpReferenceObjectByHandleWithTag.c)
 *     PsOpenProcess @ 0x1408572E0 (PsOpenProcess.c)
 *     PspThreadFromTicket @ 0x1408B93E0 (PspThreadFromTicket.c)
 *     NtWriteFile @ 0x1408C32D0 (NtWriteFile.c)
 *     PsLookupProcessByProcessId @ 0x140921F20 (PsLookupProcessByProcessId.c)
 *     ObReferenceFileObjectForWrite @ 0x140970E80 (ObReferenceFileObjectForWrite.c)
 *     NtAlertThreadByThreadIdEx @ 0x1409A4E30 (NtAlertThreadByThreadIdEx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExSlowReplenishHandleTableEntry(unsigned __int64 *a1)
{
  unsigned __int64 v1; // r8
  unsigned int v2; // edx

  v1 = *a1;
  v2 = 0;
  if ( (*a1 & 0x1FFFE) >= 0xFFFE )
    return v2;
  if ( !ExpHandleTableFastRefsDisabled )
  {
    v2 = 0x7FFF - (unsigned __int16)(v1 >> 1);
    *a1 = v1 & 0xFFFFFFFFFFFE0001uLL | 0xFFFE;
    return v2;
  }
  return 0LL;
}
