/*
 * XREFs of VidSchiReadCommandFromContextQueue @ 0x140020C70
 * Callers:
 *     VidSchiDrainContextFromWorkerThread @ 0x14004FE18 (VidSchiDrainContextFromWorkerThread.c)
 *     VidSchiSubmitQueueCommandDirect @ 0x1400504CC (VidSchiSubmitQueueCommandDirect.c)
 * Callees:
 *     VidSchiProfilePerformanceTick @ 0x1400211F0 (VidSchiProfilePerformanceTick.c)
 *     VidSchiUpdateContextStatus @ 0x1400260E0 (VidSchiUpdateContextStatus.c)
 */

__int64 __fastcall VidSchiReadCommandFromContextQueue(__int64 a1, int a2, _BYTE *a3)
{
  __int64 v3; // rbp
  __int64 v7; // rdi
  __int64 v8; // r15
  char v9; // al
  __int64 v10; // rdx
  unsigned int v11; // eax
  int v12; // ecx
  unsigned int v13; // ecx
  int v14; // eax
  unsigned int v15; // eax
  int v16; // ecx
  unsigned int v17; // ecx
  unsigned int v19; // ecx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-38h] BYREF

  v3 = *(_QWORD *)(a1 + 96);
  v7 = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v8 = *(_QWORD *)(v3 + 24);
  if ( !a2 )
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v8 + 1984), &LockHandle);
  v9 = *(_DWORD *)(a1 + 184) & 1;
  *a3 = v9;
  if ( v9 )
  {
    v7 = *(_QWORD *)(a1 + 648);
    if ( v7 )
    {
      --*(_DWORD *)(a1 + 780);
      --*(_DWORD *)(v3 + 3008);
      --*(_DWORD *)(v8 + 776);
      v10 = *(_QWORD *)(v7 + 32);
      if ( v10 == a1 + 664 )
      {
        *(_DWORD *)(a1 + 644) &= 0xFFFFFFF0;
        *(_QWORD *)(a1 + 648) = 0LL;
        VidSchiUpdateContextStatus(a1, 1LL, 19098LL);
      }
      else
      {
        *(_QWORD *)(a1 + 648) = v10 - 32;
        if ( v10 == 32 )
        {
          v19 = *(_DWORD *)(a1 + 644) & 0xFFFFFFF8;
          *(_DWORD *)(a1 + 644) = v19;
          v17 = v19 & 0xFFFFFFF7;
        }
        else
        {
          v11 = ((unsigned int)(*(_DWORD *)(v10 + 16) - 4) <= 1) | *(_DWORD *)(a1 + 644) & 0xFFFFFFFE;
          v12 = 0;
          *(_DWORD *)(a1 + 644) = v11;
          if ( *(_DWORD *)(v10 + 16) == 3 )
            v12 = 2;
          v13 = v11 & 0xFFFFFFFD | v12;
          *(_DWORD *)(a1 + 644) = v13;
          v14 = 0;
          if ( *(_DWORD *)(v10 + 16) == 7 )
            v14 = 4;
          v15 = v13 & 0xFFFFFFFB | v14;
          *(_DWORD *)(a1 + 644) = v15;
          v16 = 0;
          if ( *(_DWORD *)(v10 + 16) == 6 )
            v16 = 8;
          v17 = v15 & 0xFFFFFFF7 | v16;
        }
        *(_DWORD *)(a1 + 644) = v17;
      }
      VidSchiProfilePerformanceTick(5, v8, 0, 0, 0LL, v7, 0LL, 0LL);
    }
  }
  if ( !a2 )
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  return v7;
}
