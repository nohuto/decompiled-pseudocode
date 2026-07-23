/*
 * XREFs of MiReleaseScrubPacket @ 0x1407FE164
 * Callers:
 *     MiInitializeScrubPacket @ 0x1407FDE50 (MiInitializeScrubPacket.c)
 *     MiScrubMemoryWorker @ 0x1407FE240 (MiScrubMemoryWorker.c)
 * Callees:
 *     MiDeleteUltraThreadContext @ 0x140335BD0 (MiDeleteUltraThreadContext.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

void __fastcall MiReleaseScrubPacket(__int64 a1)
{
  void *v2; // rcx

  MiDeleteUltraThreadContext(a1 + 48);
  v2 = *(void **)(a1 + 176);
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
}
