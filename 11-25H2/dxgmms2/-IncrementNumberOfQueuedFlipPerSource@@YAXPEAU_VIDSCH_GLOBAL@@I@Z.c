/*
 * XREFs of ?IncrementNumberOfQueuedFlipPerSource@@YAXPEAU_VIDSCH_GLOBAL@@I@Z @ 0x1400271C8
 * Callers:
 *     VidSchiCompleteFlipEntry @ 0x14000A1C0 (VidSchiCompleteFlipEntry.c)
 *     ?VidSchiSubmitDisablePlanesFlip@@YAJPEAU_VIDSCH_DEVICE@@I@Z @ 0x140027BAC (-VidSchiSubmitDisablePlanesFlip@@YAJPEAU_VIDSCH_DEVICE@@I@Z.c)
 *     VidSchiRedirectedFlipWaitOnSyncObject @ 0x14002AEC0 (VidSchiRedirectedFlipWaitOnSyncObject.c)
 *     VidSchiEnsureVSyncEnabled @ 0x1400D94C0 (VidSchiEnsureVSyncEnabled.c)
 * Callees:
 *     <none>
 */

void __fastcall IncrementNumberOfQueuedFlipPerSource(struct _VIDSCH_GLOBAL *a1, unsigned int a2)
{
  if ( *((_BYTE *)a1 + 2468) )
    a1 = (struct _VIDSCH_GLOBAL *)((char *)a1 + 4 * a2);
  _InterlockedIncrement((volatile signed __int32 *)a1 + 199);
}
