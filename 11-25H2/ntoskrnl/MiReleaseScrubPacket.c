/*
 * XREFs of MiReleaseScrubPacket @ 0x1407EDB64
 * Callers:
 *     MiInitializeScrubPacket @ 0x1407ED850 (MiInitializeScrubPacket.c)
 *     MiScrubMemoryWorker @ 0x1407EDC40 (MiScrubMemoryWorker.c)
 * Callees:
 *     MiDeleteUltraThreadContext @ 0x140211630 (MiDeleteUltraThreadContext.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

void __fastcall MiReleaseScrubPacket(__int64 a1)
{
  void *v2; // rcx

  MiDeleteUltraThreadContext(a1 + 48);
  v2 = *(void **)(a1 + 176);
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
}
