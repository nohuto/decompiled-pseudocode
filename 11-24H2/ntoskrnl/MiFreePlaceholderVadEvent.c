/*
 * XREFs of MiFreePlaceholderVadEvent @ 0x1409B073C
 * Callers:
 *     MiReleaseVadEventBlocks @ 0x1409B0550 (MiReleaseVadEventBlocks.c)
 *     MiFreePlaceholderStorage @ 0x140A94A68 (MiFreePlaceholderStorage.c)
 * Callees:
 *     PsReturnProcessNonPagedPoolQuota @ 0x14041B3B0 (PsReturnProcessNonPagedPoolQuota.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

unsigned __int64 __fastcall MiFreePlaceholderVadEvent(__int64 a1)
{
  void *v1; // rcx
  ULONG_PTR v2; // rbx

  v1 = *(void **)(a1 + 8);
  v2 = 88LL;
  if ( v1 )
  {
    v2 = 152LL;
    ExFreePoolWithTag(v1, 0);
  }
  return PsReturnProcessNonPagedPoolQuota((ULONG_PTR)KeGetCurrentThread()->ApcState.Process, v2);
}
