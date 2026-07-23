/*
 * XREFs of PsUnregisterSyscallProvider @ 0x1407712F0
 * Callers:
 *     <none>
 * Callees:
 *     ExWaitForRundownProtectionRelease @ 0x1402BB610 (ExWaitForRundownProtectionRelease.c)
 *     PspDereferenceSyscallProvider @ 0x1405E1EC0 (PspDereferenceSyscallProvider.c)
 */

__int64 __fastcall PsUnregisterSyscallProvider(struct _EX_RUNDOWN_REF *a1)
{
  ExWaitForRundownProtectionRelease(a1 + 7);
  _InterlockedExchange64((volatile __int64 *)&a1[7], 1LL);
  return PspDereferenceSyscallProvider((volatile signed __int64 *)a1);
}
