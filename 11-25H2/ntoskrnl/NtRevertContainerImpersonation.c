/*
 * XREFs of NtRevertContainerImpersonation @ 0x140462420
 * Callers:
 *     <none>
 * Callees:
 *     PspRevertContainerImpersonation @ 0x140308400 (PspRevertContainerImpersonation.c)
 */

__int64 __fastcall NtRevertContainerImpersonation(__int64 a1, __int64 a2, signed __int32 *a3)
{
  return PspRevertContainerImpersonation((ULONG_PTR)KeGetCurrentThread(), a2, a3);
}
