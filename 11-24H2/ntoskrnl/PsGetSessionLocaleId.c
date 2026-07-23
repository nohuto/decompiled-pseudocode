/*
 * XREFs of PsGetSessionLocaleId @ 0x140921964
 * Callers:
 *     PspUserThreadStartup @ 0x1409212E0 (PspUserThreadStartup.c)
 *     NtQueryDefaultLocale @ 0x140921FD0 (NtQueryDefaultLocale.c)
 * Callees:
 *     <none>
 */

__int64 PsGetSessionLocaleId()
{
  _KPROCESS *Process; // rcx
  unsigned __int64 CycleTime; // rax

  Process = KeGetCurrentThread()->ApcState.Process;
  CycleTime = Process[1].CycleTime;
  if ( !CycleTime || (Process[3].ActiveGroupsMask.Masks[1] & 0x100000000000LL) != 0 )
    return (unsigned int)PsDefaultThreadLocaleId;
  else
    return *(unsigned int *)(CycleTime + 48);
}
