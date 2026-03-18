/*
 * XREFs of NtAllocateUserPhysicalPages @ 0x1407F9B90
 * Callers:
 *     <none>
 * Callees:
 *     MiAllocateUserPhysicalPages @ 0x1407F84C8 (MiAllocateUserPhysicalPages.c)
 */

NTSTATUS __fastcall NtAllocateUserPhysicalPages(void *a1, unsigned __int64 *a2, volatile void *a3)
{
  return MiAllocateUserPhysicalPages(a1, a2, a3, 0LL);
}
