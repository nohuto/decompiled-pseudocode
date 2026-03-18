/*
 * XREFs of VidSchSubmitWaitToHwQueue @ 0x1400034F0
 * Callers:
 *     ?EndPreparation@VIDMM_GLOBAL@@QEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1400AB430 (-EndPreparation@VIDMM_GLOBAL@@QEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z.c)
 * Callees:
 *     ?VidSchiAcquireSyncObjectForHwQueue@@YAJPEAU_VIDSCH_SYNC_OBJECT@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x14000396C (-VidSchiAcquireSyncObjectForHwQueue@@YAJPEAU_VIDSCH_SYNC_OBJECT@@PEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x140004FE8 (DxgkLogInternalTriageEvent.c)
 *     VidSchiSubmitCommandPacketToHwQueue @ 0x14001CD20 (VidSchiSubmitCommandPacketToHwQueue.c)
 *     VidSchiAllocateHwQueuePacket @ 0x1400E5340 (VidSchiAllocateHwQueuePacket.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall VidSchSubmitWaitToHwQueue(__int64 a1, __int64 a2, _DWORD *a3)
{
  bool v3; // zf
  struct _VIDSCH_SYNC_OBJECT *v5; // rdi
  __int64 v6; // rax
  __int64 v8; // r14
  __int64 HwQueuePacket; // rax
  __int64 v10; // rbx
  struct _KTHREAD *CurrentThread; // rax
  int v12; // r12d
  __int64 v13; // r14
  __int64 *v14; // rdi
  __int64 *v15; // rcx
  __int64 **v16; // rax
  __int64 **v17; // rax
  struct _VIDSCH_SYNC_OBJECT *v19; // rax
  __int64 v20; // rax
  int v21; // ecx
  int v22; // r8d
  struct _KLOCK_QUEUE_HANDLE v23; // [rsp+50h] [rbp-48h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+68h] [rbp-30h] BYREF

  v3 = *(_DWORD *)(a2 + 48) == 5;
  v5 = (struct _VIDSCH_SYNC_OBJECT *)a2;
  v6 = *(_QWORD *)(a1 + 40);
  memset(&LockHandle, 0, sizeof(LockHandle));
  v8 = *(_QWORD *)(*(_QWORD *)(v6 + 16) + 24LL);
  if ( v3 && *(_BYTE *)(a2 + 29) )
    return 3221225760LL;
  HwQueuePacket = VidSchiAllocateHwQueuePacket(a1, 0LL);
  v10 = HwQueuePacket;
  if ( HwQueuePacket )
  {
    *(_DWORD *)HwQueuePacket = 895576406;
    *(_DWORD *)(HwQueuePacket + 48) = 4;
    *(_QWORD *)(HwQueuePacket + 56) = MEMORY[0xFFFFF78000000320];
    *(_DWORD *)(HwQueuePacket + 52) = 2;
    *(_QWORD *)(HwQueuePacket + 96) = a1;
    CurrentThread = KeGetCurrentThread();
    *(_DWORD *)(v10 + 752) &= ~1u;
    *(_QWORD *)(v10 + 104) = CurrentThread;
    *(_QWORD *)(v10 + 72) = 0LL;
    *(_QWORD *)(v10 + 800) = a3;
    WdLogSingleEntry3(4LL, v5, a3, a1);
    WdLogGlobalForLineNumber = 5222;
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v8 + 1984), &LockHandle);
    *(_QWORD *)(v10 + 760) = v5;
    v12 = VidSchiAcquireSyncObjectForHwQueue(v5, (struct _VIDSCH_QUEUE_PACKET *)v10);
    if ( v12 < 0 || (*(_DWORD *)(v10 + 752) & 1) != 0 )
    {
      v13 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 40) + 16LL) + 24LL);
      WdLogSingleEntry2(4LL, v10, a1);
      WdLogGlobalForLineNumber = 2187;
      if ( !*(_BYTE *)(v13 + 7059)
        || *(_DWORD *)(v10 + 48) != 4
        || (*(LARGE_INTEGER *)(56LL * *(unsigned int *)(v10 + 744) + v10 + 296) = KeQueryPerformanceCounter(0LL),
            *(_DWORD *)(56LL * *(unsigned int *)(v10 + 744) + v10 + 304) = *(_DWORD *)(v10 + 48),
            RtlCaptureStackBackTrace(1u, 5u, (PVOID *)(v10 + 56LL * *(unsigned int *)(v10 + 744) + 312), 0LL),
            *(_DWORD *)(v10 + 744) = ((unsigned __int8)*(_DWORD *)(v10 + 744) + 1) & 7,
            !*(_QWORD *)(v10 + 768))
        && !*(_QWORD *)(v10 + 776)
        && !*(_QWORD *)(v10 + 176)
        && !*(_QWORD *)(v10 + 184) )
      {
        *(_QWORD *)(v10 + 56) = MEMORY[0xFFFFF78000000320];
        *(_DWORD *)(v10 + 52) = 0;
        v13 += 1992LL;
        v14 = (__int64 *)(v10 + 8);
        memset(&v23, 0, sizeof(v23));
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)v13, &v23);
        v15 = *(__int64 **)(v10 + 8);
        if ( *(__int64 **)(*v14 + 8) == v14 )
        {
          v16 = *(__int64 ***)(v10 + 16);
          if ( *v16 == v14 )
          {
            *v16 = v15;
            v15[1] = (__int64)v16;
            if ( a1 != -256 )
              --*(_DWORD *)(a1 + 256);
            KeReleaseInStackQueuedSpinLock(&v23);
            a3 = (_DWORD *)(a1 + 232);
            memset(&v23, 0, sizeof(v23));
            v10 = a1 + 216;
            KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)v13, &v23);
            v17 = *(__int64 ***)(a1 + 224);
            if ( *v17 == (__int64 *)(a1 + 216) )
            {
              *v14 = v10;
              v14[1] = (__int64)v17;
              *v17 = v14;
              *(_QWORD *)(a1 + 224) = v14;
              if ( a1 != -232 )
                ++*a3;
              KeReleaseInStackQueuedSpinLock(&v23);
              goto LABEL_17;
            }
          }
        }
LABEL_12:
        __fastfail(3u);
      }
      g_DxgMmsBugcheckExportIndex = 1;
      WdLogSingleEntry5(0LL, 281LL, 61440LL, v10, a1, 0LL);
      WdLogGlobalForLineNumber = 906;
      while ( 1 )
      {
        ExFreePoolWithTag((char *)v5 - 8, 0);
LABEL_17:
        memset(&v23, 0, sizeof(v23));
        v5 = 0LL;
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)v13, &v23);
        v19 = *(struct _VIDSCH_SYNC_OBJECT **)v10;
        if ( *(_QWORD *)v10 == v10 )
          break;
        if ( *a3 > 0x10u )
        {
          v5 = *(struct _VIDSCH_SYNC_OBJECT **)v10;
          if ( *((_QWORD *)v19 + 1) != v10 )
            goto LABEL_12;
          v20 = *(_QWORD *)v19;
          if ( *(struct _VIDSCH_SYNC_OBJECT **)(v20 + 8) != v5 )
            goto LABEL_12;
          *(_QWORD *)v10 = v20;
          *(_QWORD *)(v20 + 8) = v10;
          --*a3;
        }
        KeReleaseInStackQueuedSpinLock(&v23);
        if ( !v5 )
          goto LABEL_23;
      }
      KeReleaseInStackQueuedSpinLock(&v23);
LABEL_23:
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      return (unsigned int)v12;
    }
    else
    {
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      VidSchiSubmitCommandPacketToHwQueue((struct _VIDSCH_QUEUE_PACKET *)v10);
      return 0LL;
    }
  }
  else
  {
    WdLogSingleEntry1(1LL, -1073741801LL);
    WdLogGlobalForLineNumber = 5194;
    DxgkLogInternalTriageEvent(
      v21,
      0x40000,
      v22,
      (unsigned int)L"Failed to allocate queue packet, returning 0x%I64x",
      -1073741801LL,
      0LL,
      0LL,
      0LL);
    return 3221225495LL;
  }
}
