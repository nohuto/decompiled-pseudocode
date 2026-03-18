/*
 * XREFs of ?VidSchiSynchronouslyUpdateFlipQueueLogs@@YAXPEAU_VIDSCH_GLOBAL@@IQEAKI@Z @ 0x14003A150
 * Callers:
 *     ?VidSchiUpdateHwPresentTimeForImmediateFlip@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_FLIP_QUEUE_ENTRY@@I@Z @ 0x140039FC4 (-VidSchiUpdateHwPresentTimeForImmediateFlip@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_FLIP_QUEUE_ENTRY.c)
 *     ?VidSchiObserveHwFlipQueueUpdates@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IPEAPEAU_KEVENT@@PEA_N@Z @ 0x140054454 (-VidSchiObserveHwFlipQueueUpdates@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IPEAPEAU_KEVEN.c)
 * Callees:
 *     ?VidSchiCommitFlipQueueLogUpdate@@YAXAEAU_VIDSCH_PLANE_STATE@@IIQEAK_N@Z @ 0x14003A25C (-VidSchiCommitFlipQueueLogUpdate@@YAXAEAU_VIDSCH_PLANE_STATE@@IIQEAK_N@Z.c)
 *     __security_check_cookie @ 0x140055E20 (__security_check_cookie.c)
 */

void __fastcall VidSchiSynchronouslyUpdateFlipQueueLogs(
        struct _VIDSCH_GLOBAL *a1,
        unsigned int a2,
        unsigned int *const a3,
        int a4)
{
  __int64 v8; // r14
  unsigned int i; // ebx
  __int64 v10; // rsi
  __int64 v11; // r9
  __int64 v12; // rcx
  _BYTE v13[8]; // [rsp+30h] [rbp-68h] BYREF
  struct _VIDSCH_GLOBAL *v14; // [rsp+38h] [rbp-60h] BYREF
  unsigned int v15; // [rsp+40h] [rbp-58h]
  unsigned int v16; // [rsp+44h] [rbp-54h]
  unsigned int v17[2]; // [rsp+48h] [rbp-50h]

  v8 = *((_QWORD *)a1 + a2 + 429);
  if ( *(_QWORD *)(v8 + 32) )
  {
    for ( i = 0; i < *((_DWORD *)a1 + 38); ++i )
    {
      if ( i == a4 || a4 == -1 )
      {
        v10 = 304LL * i;
        if ( a4 != -1 || *(_DWORD *)(v10 + v8 + 200) )
        {
          v11 = *((unsigned int *)a1 + 8);
          v12 = *((_QWORD *)a1 + 3);
          *(_QWORD *)v17 = 0LL;
          v14 = a1;
          v15 = a2;
          v16 = i;
          v13[0] = 0;
          DpSynchronizeExecution(v12, VidSchiUpdateFlipQueueLogAtISR, &v14, v11, v13);
          if ( *(_DWORD *)(v10 + v8 + 376) != v17[0] )
            VidSchiCommitFlipQueueLogUpdate((struct _VIDSCH_PLANE_STATE *)(v10 + v8 + 152), i, v17[0], a3, 0);
        }
      }
    }
  }
}
