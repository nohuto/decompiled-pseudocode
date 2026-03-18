/*
 * XREFs of VidSchiIsHardwareCompletedDependingCommandForFlip @ 0x1400237E0
 * Callers:
 *     VidSchiSubmitMmIoFlipCommand @ 0x1400124E0 (VidSchiSubmitMmIoFlipCommand.c)
 *     ?VidSchiSubmitHwQueueMmIoFlipCommand@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x140027780 (-VidSchiSubmitHwQueueMmIoFlipCommand@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     VidSchUnwaitFlipQueue @ 0x14002A240 (VidSchUnwaitFlipQueue.c)
 * Callees:
 *     VidSchiUpdateLastCompletedPresentTimestamp @ 0x140023930 (VidSchiUpdateLastCompletedPresentTimestamp.c)
 *     ?DdiNotifyFocusPresent@ADAPTER_RENDER@@QEAAJXZ @ 0x1400240D0 (-DdiNotifyFocusPresent@ADAPTER_RENDER@@QEAAJXZ.c)
 */

__int64 __fastcall VidSchiIsHardwareCompletedDependingCommandForFlip(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v3; // rdx
  unsigned int v4; // r8d
  __int64 v5; // r11
  __int64 v6; // rax
  unsigned int v7; // r9d
  unsigned int v8; // r10d
  bool v9; // cc
  __int64 v11; // rcx
  unsigned __int64 v12; // r8
  __int64 v13; // rcx

  v1 = *(_QWORD *)(a1 + 1040);
  if ( !*(_BYTE *)(v1 + 204) )
  {
    v3 = 0LL;
    if ( !_InterlockedCompareExchange((volatile signed __int32 *)(v1 + 200), 0, 0) )
    {
      if ( (*(_DWORD *)(a1 + 1152) & 0x4000) != 0 )
      {
        while ( (unsigned int)v3 < *(_DWORD *)(a1 + 1092) )
        {
          v11 = *(_QWORD *)(a1 + 8LL * (unsigned int)v3);
          v12 = *(_QWORD *)(a1 + 8LL * (unsigned int)v3 + 512);
          if ( !*(_BYTE *)(v11 + 29) )
          {
            if ( *(_DWORD *)(v11 + 48) == 6 || *(_BYTE *)(v11 + 30) )
            {
              if ( **(_QWORD **)(v11 + 72) < v12 )
                return 0LL;
            }
            else if ( **(_DWORD **)(v11 + 72) - (int)v12 < 0 )
            {
              return 0LL;
            }
          }
          LODWORD(v3) = v3 + 1;
        }
      }
      else
      {
        v4 = *(_DWORD *)(a1 + 1092);
        if ( v4 )
          v5 = *(_QWORD *)(a1 + 8LL * (v4 - 1));
        else
          v5 = 0LL;
        while ( (unsigned int)v3 < v4 )
        {
          v6 = *(_QWORD *)(a1 + 8LL * (unsigned int)v3);
          if ( v6 )
          {
            v7 = *(_DWORD *)(a1 + 8LL * (unsigned int)v3 + 524);
            v8 = *(_DWORD *)(v6 + 164);
            v9 = v7 <= v8;
            if ( v7 == v8 )
            {
              if ( *(_DWORD *)(a1 + 8LL * (unsigned int)v3 + 520) > *(_DWORD *)(v6 + 160) )
                return 0LL;
              v9 = v7 <= v8;
            }
            if ( !v9 )
              return 0LL;
          }
          v3 = (unsigned int)(v3 + 1);
        }
        if ( v5 )
        {
          LOBYTE(v3) = 1;
          VidSchiUpdateLastCompletedPresentTimestamp(v5, v3, 0LL);
        }
      }
      if ( (*(_DWORD *)(a1 + 1152) & 0x8000) != 0 )
      {
        v13 = *(_QWORD *)(v1 + 32);
        if ( *(_BYTE *)(v13 + 56) )
          ADAPTER_RENDER::DdiNotifyFocusPresent(*(ADAPTER_RENDER **)(v13 + 8));
      }
    }
  }
  return 1LL;
}
