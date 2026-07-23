/*
 * XREFs of ObFastReferenceObjectLocked @ 0x1403517CC
 * Callers:
 *     MiCompleteProtoPteFault @ 0x14034D360 (MiCompleteProtoPteFault.c)
 *     MiReferenceInPageFile @ 0x140350A90 (MiReferenceInPageFile.c)
 *     MiPrepareToFlushSubsection @ 0x14043F1F4 (MiPrepareToFlushSubsection.c)
 *     MiNotifyUserOfLostData @ 0x140673608 (MiNotifyUserOfLostData.c)
 *     MiNoPagesLastChance @ 0x140685ADC (MiNoPagesLastChance.c)
 *     ObpLookupObjectName @ 0x1408A58B0 (ObpLookupObjectName.c)
 *     PspReferenceSystemDll @ 0x1409222A8 (PspReferenceSystemDll.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x14031F8C0 (ObfReferenceObjectWithTag.c)
 */

unsigned __int64 __fastcall ObFastReferenceObjectLocked(_QWORD *a1, ULONG a2)
{
  unsigned __int64 v2; // rbx

  v2 = *a1 & 0xFFFFFFFFFFFFFFF0uLL;
  if ( v2 )
    ObfReferenceObjectWithTag((PVOID)(*a1 & 0xFFFFFFFFFFFFFFF0uLL), a2);
  return v2;
}
