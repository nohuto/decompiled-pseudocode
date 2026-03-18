/*
 * XREFs of ?VidSchiUpdateFlipContextStatus@@YAHPEAU_VIDSCH_CONTEXT@@@Z @ 0x140024394
 * Callers:
 *     VidSchiCompleteFlipEntry @ 0x14000A1C0 (VidSchiCompleteFlipEntry.c)
 *     ?VidSchiUnreferenceDisplayingAllocations@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@G@Z @ 0x14000BF58 (-VidSchiUnreferenceDisplayingAllocations@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@PEAU_VI.c)
 *     VidSchiProcessFlipPendingContextList @ 0x140023B18 (VidSchiProcessFlipPendingContextList.c)
 *     VidSchiScheduleCommandToRun @ 0x140023BF0 (VidSchiScheduleCommandToRun.c)
 * Callees:
 *     VidSchiUpdateContextStatus @ 0x1400260E0 (VidSchiUpdateContextStatus.c)
 */

__int64 __fastcall VidSchiUpdateFlipContextStatus(struct _VIDSCH_CONTEXT *a1)
{
  unsigned int v1; // edi
  int v3; // eax
  unsigned int v4; // ecx
  __int64 v5; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // rdx
  char v10; // [rsp+40h] [rbp+8h] BYREF

  v1 = 0;
  if ( (*((_DWORD *)a1 + 46) & 0x10) != 0 )
  {
    *((_DWORD *)a1 + 46) &= ~0x10u;
    if ( (*((_DWORD *)a1 + 46) & 0x100) == 0 )
    {
      if ( (*((_DWORD *)a1 + 46) & 0x200) != 0 )
      {
        if ( (*((_DWORD *)a1 + 46) & 2) != 0 )
          return v1;
        v7 = 10LL;
        v8 = 25242LL;
      }
      else if ( *((struct _VIDSCH_CONTEXT **)a1 + 83) == (struct _VIDSCH_CONTEXT *)((char *)a1 + 664) )
      {
        v7 = 0LL;
        v8 = 25259LL;
      }
      else
      {
        if ( *((_DWORD *)a1 + 195) )
        {
          if ( (*((_DWORD *)a1 + 46) & 0x20) != 0 )
          {
            v9 = 4LL;
          }
          else if ( (*((_DWORD *)a1 + 46) & 0x80u) != 0 )
          {
            v9 = 8LL;
          }
          else if ( (*((_DWORD *)a1 + 46) & 0x10) != 0 )
          {
            v9 = 3LL;
          }
          else if ( (*((_DWORD *)a1 + 46) & 0x40) != 0 )
          {
            v9 = 7LL;
          }
          else
          {
            if ( (*((_DWORD *)a1 + 46) & 8) == 0 )
            {
              v3 = *((_DWORD *)a1 + 46);
              v4 = 0;
              if ( (v3 & 1) == 0 && (*((_DWORD *)a1 + 46) & 0x100) == 0 )
              {
                if ( _InterlockedCompareExchange((volatile signed __int32 *)a1 + 109, 0, 0) == 2 )
                {
                  v5 = *((_QWORD *)a1 + 12);
                  v10 = 0;
                  DpSynchronizeExecution(
                    *(_QWORD *)(*(_QWORD *)(v5 + 24) + 24LL),
                    VidSchiResetContextQuantumAtISR,
                    a1,
                    *(unsigned int *)(*(_QWORD *)(v5 + 24) + 32LL),
                    &v10);
                }
                return (unsigned int)VidSchiUpdateContextStatus(a1, 5LL, 23503LL) != 0;
              }
              return v4;
            }
            v9 = 2LL;
          }
          VidSchiUpdateContextStatus(a1, v9, 23503LL);
          return 0;
        }
        v7 = 1LL;
        v8 = 25325LL;
      }
      VidSchiUpdateContextStatus(a1, v7, v8);
    }
  }
  return v1;
}
