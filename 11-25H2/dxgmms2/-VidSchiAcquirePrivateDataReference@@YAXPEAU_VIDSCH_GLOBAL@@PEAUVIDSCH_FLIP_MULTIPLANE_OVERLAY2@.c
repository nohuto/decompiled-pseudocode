/*
 * XREFs of ?VidSchiAcquirePrivateDataReference@@YAXPEAU_VIDSCH_GLOBAL@@PEAUVIDSCH_FLIP_MULTIPLANE_OVERLAY2@@@Z @ 0x14002A250
 * Callers:
 *     ?VidSchiPostponePresentHistoryToken@@YAXPEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_HW_QUEUE@@PEAU_VIDSCH_DEVICE@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_INTEGER@@PEAU_VIDSCH_GLOBAL@@@Z @ 0x1400148EC (-VidSchiPostponePresentHistoryToken@@YAXPEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_HW_QUEUE@@PEAU_VIDSCH_DE.c)
 *     VidSchiRedirectedFlipWaitOnSyncObject @ 0x14002AEC0 (VidSchiRedirectedFlipWaitOnSyncObject.c)
 *     VidSchSubmitCommand @ 0x1400D6BF0 (VidSchSubmitCommand.c)
 * Callees:
 *     <none>
 */

void __fastcall VidSchiAcquirePrivateDataReference(
        struct _VIDSCH_GLOBAL *a1,
        struct VIDSCH_FLIP_MULTIPLANE_OVERLAY2 *a2)
{
  unsigned int i; // eax
  __int64 v4; // rdx

  for ( i = 0; i < *((_DWORD *)a1 + 38); ++i )
  {
    v4 = *(_QWORD *)((char *)a2 + i * ((8 * *((_DWORD *)a2 + 2) + 231) & 0xFFFFFFF8) + 200);
    if ( v4 )
      _InterlockedIncrement((volatile signed __int32 *)(v4 + 12));
  }
}
