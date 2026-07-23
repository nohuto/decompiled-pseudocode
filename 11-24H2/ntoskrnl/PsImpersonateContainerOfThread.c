/*
 * XREFs of PsImpersonateContainerOfThread @ 0x1403B4C38
 * Callers:
 *     NtAlpcImpersonateClientContainerOfPort @ 0x14073F800 (NtAlpcImpersonateClientContainerOfPort.c)
 * Callees:
 *     PspUpdateContainerImpersonation @ 0x1403B4C5C (PspUpdateContainerImpersonation.c)
 */

__int64 __fastcall PsImpersonateContainerOfThread(PVOID Object)
{
  return PspUpdateContainerImpersonation((ULONG_PTR)KeGetCurrentThread(), Object);
}
