/*
 * XREFs of ?IncrementNumberOfQueuedFlipPerSource@@YAXPEAU_VIDSCH_GLOBAL@@I@Z @ 0x14001BD68
 * Callers:
 *     ?VidSchiSubmitDisablePlanesFlip@@YAJPEAU_VIDSCH_DEVICE@@I@Z @ 0x14001C74C (-VidSchiSubmitDisablePlanesFlip@@YAJPEAU_VIDSCH_DEVICE@@I@Z.c)
 *     VidSchiRedirectedFlipWaitOnSyncObject @ 0x14001EFE0 (VidSchiRedirectedFlipWaitOnSyncObject.c)
 *     VidSchiCompleteFlipEntry @ 0x14002AB90 (VidSchiCompleteFlipEntry.c)
 *     VidSchiEnsureVSyncEnabled @ 0x1400D5120 (VidSchiEnsureVSyncEnabled.c)
 * Callees:
 *     <none>
 */

void __fastcall IncrementNumberOfQueuedFlipPerSource(struct _VIDSCH_GLOBAL *a1, unsigned int a2)
{
  if ( *((_BYTE *)a1 + 2468) )
    a1 = (struct _VIDSCH_GLOBAL *)((char *)a1 + 4 * a2);
  _InterlockedIncrement((volatile signed __int32 *)a1 + 199);
}
