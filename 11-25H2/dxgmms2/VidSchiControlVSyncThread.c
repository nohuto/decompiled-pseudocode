/*
 * XREFs of VidSchiControlVSyncThread @ 0x140039A40
 * Callers:
 *     <none>
 * Callees:
 *     ?VidSchiVSyncDisabledOnAllPlanes@@YA_NPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@I@Z @ 0x14002D93C (-VidSchiVSyncDisabledOnAllPlanes@@YA_NPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@I@Z.c)
 *     ?VidSchiControlIndependentVidPnVSyncThread@@YAXPEAU_VIDSCH_GLOBAL@@@Z @ 0x140039BAC (-VidSchiControlIndependentVidPnVSyncThread@@YAXPEAU_VIDSCH_GLOBAL@@@Z.c)
 *     VidSchiControlVSync @ 0x1400D9A20 (VidSchiControlVSync.c)
 */

void __fastcall VidSchiControlVSyncThread(struct _VIDSCH_GLOBAL *a1)
{
  struct _ERESOURCE *v2; // rbp
  char v3; // cl
  signed __int32 v4; // eax
  int v5; // esi
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  if ( *((_BYTE *)a1 + 2468) )
  {
    VidSchiControlIndependentVidPnVSyncThread(a1);
  }
  else
  {
    v2 = (struct _ERESOURCE *)((char *)a1 + 1344);
    ExAcquireResourceExclusiveLite((PERESOURCE)((char *)a1 + 1344), 1u);
    v3 = *((_BYTE *)a1 + 2064);
    v4 = _InterlockedCompareExchange((volatile signed __int32 *)a1 + 632, 0, 0);
    if ( v3
      && !v4
      && !*((_DWORD *)a1 + 538)
      && !*(_DWORD *)(*((_QWORD *)a1 + 2) + 3152LL)
      && !*((_DWORD *)a1 + 199)
      && !*((_DWORD *)a1 + 217)
      && !*((_DWORD *)a1 + 539) )
    {
      memset(&LockHandle, 0, sizeof(LockHandle));
      v5 = 0;
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)a1 + 248, &LockHandle);
      if ( *((_BYTE *)a1 + 59) )
      {
        v5 = (unsigned __int8)VidSchiVSyncDisabledOnAllPlanes(a1, *((struct _VIDSCH_PRESENT_INFO **)a1 + 429), -1);
      }
      else if ( *((_DWORD *)a1 + 648) >= *((_DWORD *)a1 + 665) )
      {
        *((_DWORD *)a1 + 648) = -1;
        v5 = 1;
      }
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      if ( v5 )
      {
        VidSchiControlVSync(a1, 0LL, 3LL, 4294967293LL);
        *((_BYTE *)a1 + 2469) = 1;
      }
    }
    ExReleaseResourceLite(v2);
    _InterlockedExchange((volatile __int32 *)a1 + 630, 0);
  }
}
