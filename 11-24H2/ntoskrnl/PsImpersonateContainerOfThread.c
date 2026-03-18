/*
 * XREFs of PsImpersonateContainerOfThread @ 0x140492240
 * Callers:
 *     NtAlpcImpersonateClientContainerOfPort @ 0x1407418D0 (NtAlpcImpersonateClientContainerOfPort.c)
 * Callees:
 *     PspUpdateContainerImpersonation @ 0x1402A11C4 (PspUpdateContainerImpersonation.c)
 */

__int64 __fastcall PsImpersonateContainerOfThread(void *a1)
{
  return PspUpdateContainerImpersonation((ULONG_PTR)KeGetCurrentThread(), a1);
}
