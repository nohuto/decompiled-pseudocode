/*
 * XREFs of RtlFreeOemString @ 0x140A998E0
 * Callers:
 *     <none>
 * Callees:
 *     ExFreePool @ 0x140B74850 (ExFreePool.c)
 */

void __stdcall RtlFreeOemString(POEM_STRING OemString)
{
  char *Buffer; // rcx

  Buffer = OemString->Buffer;
  if ( Buffer )
    ExFreePool(Buffer);
}
