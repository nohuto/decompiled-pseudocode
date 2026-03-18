/*
 * XREFs of VmFreePreallocationForRangeCreate @ 0x14079EBF0
 * Callers:
 *     <none>
 * Callees:
 *     VmpDecodePreallocationRangeHandle @ 0x14079F1DC (VmpDecodePreallocationRangeHandle.c)
 *     VmpFreeMemoryRanges @ 0x140A5D7A4 (VmpFreeMemoryRanges.c)
 */

__int64 __fastcall VmFreePreallocationForRangeCreate(__int64 a1)
{
  struct _LIST_ENTRY *Blink; // rcx
  void *v3; // rax

  Blink = KeGetCurrentThread()->ApcState.Process[3].ProcessListEntry.Blink;
  if ( !Blink )
    NT_ASSERT("0");
  v3 = (void *)VmpDecodePreallocationRangeHandle(Blink, a1);
  return VmpFreeMemoryRanges(v3);
}
