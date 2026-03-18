/*
 * XREFs of PsImpersonateContainerOfThread @ 0x1404955A4
 * Callers:
 *     NtAlpcImpersonateClientContainerOfPort @ 0x1407358B0 (NtAlpcImpersonateClientContainerOfPort.c)
 * Callees:
 *     PspUpdateContainerImpersonation @ 0x1403061BC (PspUpdateContainerImpersonation.c)
 */

__int64 __fastcall PsImpersonateContainerOfThread(PVOID Object)
{
  return PspUpdateContainerImpersonation((ULONG_PTR)KeGetCurrentThread(), Object);
}
