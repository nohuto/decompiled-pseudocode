/*
 * XREFs of RtlFreeOemString @ 0x18013C270
 * Callers:
 *     <none>
 * Callees:
 *     RtlpSysVolFree @ 0x180001470 (RtlpSysVolFree.c)
 */

void __stdcall RtlFreeOemString(POEM_STRING OemString)
{
  char *Buffer; // rcx

  Buffer = OemString->Buffer;
  if ( Buffer )
    RtlpSysVolFree((__int64)Buffer);
}
