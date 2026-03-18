/*
 * XREFs of NtAllocateUserPhysicalPagesEx @ 0x1407F9BB0
 * Callers:
 *     <none>
 * Callees:
 *     MiAllocateUserPhysicalPages @ 0x1407F84C8 (MiAllocateUserPhysicalPages.c)
 */

NTSTATUS __fastcall NtAllocateUserPhysicalPagesEx(void *a1, unsigned __int64 *a2, volatile void *a3, volatile void *a4)
{
  return MiAllocateUserPhysicalPages(a1, a2, a3, a4);
}
