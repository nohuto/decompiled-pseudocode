/*
 * XREFs of ObFastReferenceObjectLocked @ 0x140439B8C
 * Callers:
 *     MiReferenceInPageFile @ 0x140208E60 (MiReferenceInPageFile.c)
 *     MiPrepareToFlushSubsection @ 0x140439A60 (MiPrepareToFlushSubsection.c)
 *     MiNotifyUserOfLostData @ 0x140666988 (MiNotifyUserOfLostData.c)
 *     MiNoPagesLastChance @ 0x140679124 (MiNoPagesLastChance.c)
 *     ObpLookupObjectName @ 0x14085CB70 (ObpLookupObjectName.c)
 *     PspReferenceSystemDll @ 0x14090BA68 (PspReferenceSystemDll.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x14029B2A0 (ObfReferenceObjectWithTag.c)
 */

unsigned __int64 __fastcall ObFastReferenceObjectLocked(_QWORD *a1, ULONG a2)
{
  unsigned __int64 v2; // rbx

  v2 = *a1 & 0xFFFFFFFFFFFFFFF0uLL;
  if ( v2 )
    ObfReferenceObjectWithTag((PVOID)(*a1 & 0xFFFFFFFFFFFFFFF0uLL), a2);
  return v2;
}
