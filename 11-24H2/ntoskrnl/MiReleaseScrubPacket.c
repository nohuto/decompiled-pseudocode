/*
 * XREFs of MiReleaseScrubPacket @ 0x1407FD9F4
 * Callers:
 *     MiInitializeScrubPacket @ 0x1407FD6E0 (MiInitializeScrubPacket.c)
 *     MiScrubMemoryWorker @ 0x1407FDAD0 (MiScrubMemoryWorker.c)
 * Callees:
 *     MiDeleteUltraThreadContext @ 0x14020C870 (MiDeleteUltraThreadContext.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __fastcall MiReleaseScrubPacket(__int64 a1)
{
  void *v2; // rcx

  MiDeleteUltraThreadContext(a1 + 48);
  v2 = *(void **)(a1 + 176);
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
}
