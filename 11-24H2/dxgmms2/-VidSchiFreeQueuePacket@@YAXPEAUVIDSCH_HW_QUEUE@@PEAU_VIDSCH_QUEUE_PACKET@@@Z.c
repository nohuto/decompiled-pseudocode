/*
 * XREFs of ?VidSchiFreeQueuePacket@@YAXPEAUVIDSCH_HW_QUEUE@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1400228C0
 * Callers:
 *     VidSchSignalSyncObjectsFromGpu @ 0x14000FC30 (VidSchSignalSyncObjectsFromGpu.c)
 *     VidSchCreateHwQueue @ 0x1400224D0 (VidSchCreateHwQueue.c)
 *     VidSchSubmitSignalToHwQueue @ 0x140031EF0 (VidSchSubmitSignalToHwQueue.c)
 *     VidSchSubmitCommandToHwQueue @ 0x140048F00 (VidSchSubmitCommandToHwQueue.c)
 *     VidSchEnqueueCpuEvent @ 0x1400E46B0 (VidSchEnqueueCpuEvent.c)
 * Callees:
 *     <none>
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall VidSchiFreeQueuePacket(struct VIDSCH_HW_QUEUE *a1, struct _VIDSCH_QUEUE_PACKET *a2)
{
  struct _VIDSCH_QUEUE_PACKET **v2; // rdi
  _DWORD *v3; // rsi
  struct _VIDSCH_QUEUE_PACKET *v4; // rbx
  __int64 v6; // r15
  bool v7; // zf
  __int64 v8; // rcx
  struct _VIDSCH_QUEUE_PACKET ***v9; // rax
  struct VIDSCH_HW_QUEUE **v10; // rax
  __int64 *v11; // rdi
  __int64 *v12; // rax
  __int64 v13; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-20h] BYREF

  v4 = a2;
  v6 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 5) + 16LL) + 24LL);
  WdLogSingleEntry2(4LL, a2, a1);
  v7 = *(_BYTE *)(v6 + 7059) == 0;
  WdLogGlobalForLineNumber = 2195;
  if ( !v7
    && *((_DWORD *)v4 + 12) == 4
    && ((*((LARGE_INTEGER *)v4 + 7 * *((unsigned int *)v4 + 186) + 37) = KeQueryPerformanceCounter(0LL),
         *((_DWORD *)v4 + 14 * *((unsigned int *)v4 + 186) + 76) = *((_DWORD *)v4 + 12),
         RtlCaptureStackBackTrace(1u, 5u, (PVOID *)v4 + 7 * *((unsigned int *)v4 + 186) + 39, 0LL),
         v7 = *((_QWORD *)v4 + 96) == 0LL,
         *((_DWORD *)v4 + 186) = ((unsigned __int8)*((_DWORD *)v4 + 186) + 1) & 7,
         !v7)
     || *((_QWORD *)v4 + 97)
     || *((_QWORD *)v4 + 22)
     || *((_QWORD *)v4 + 23)) )
  {
    g_DxgMmsBugcheckExportIndex = 1;
    v10 = (struct VIDSCH_HW_QUEUE **)WdLogSingleEntry5(0LL, 281LL, 61440LL, v4, a1, 0LL);
    WdLogGlobalForLineNumber = 906;
  }
  else
  {
    *((_QWORD *)v4 + 7) = MEMORY[0xFFFFF78000000320];
    *((_DWORD *)v4 + 13) = 0;
    v6 += 1992LL;
    v2 = (struct _VIDSCH_QUEUE_PACKET **)((char *)v4 + 8);
    memset(&LockHandle, 0, sizeof(LockHandle));
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)v6, &LockHandle);
    v8 = *((_QWORD *)v4 + 1);
    if ( *((struct _VIDSCH_QUEUE_PACKET ***)*v2 + 1) != v2 )
      goto LABEL_8;
    v9 = (struct _VIDSCH_QUEUE_PACKET ***)*((_QWORD *)v4 + 2);
    if ( *v9 != v2 )
      goto LABEL_8;
    *v9 = (struct _VIDSCH_QUEUE_PACKET **)v8;
    *(_QWORD *)(v8 + 8) = v9;
    if ( a1 != (struct VIDSCH_HW_QUEUE *)-256LL )
      --*((_DWORD *)a1 + 64);
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    v3 = (_DWORD *)((char *)a1 + 232);
    memset(&LockHandle, 0, sizeof(LockHandle));
    v4 = (struct VIDSCH_HW_QUEUE *)((char *)a1 + 216);
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)v6, &LockHandle);
    v10 = (struct VIDSCH_HW_QUEUE **)*((_QWORD *)a1 + 28);
    if ( *v10 != (struct VIDSCH_HW_QUEUE *)((char *)a1 + 216) )
LABEL_8:
      __fastfail(3u);
  }
  *v2 = v4;
  v2[1] = (struct _VIDSCH_QUEUE_PACKET *)v10;
  *v10 = (struct VIDSCH_HW_QUEUE *)v2;
  *((_QWORD *)v4 + 1) = v2;
  if ( v3 )
    ++*v3;
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  while ( 1 )
  {
    memset(&LockHandle, 0, sizeof(LockHandle));
    v11 = 0LL;
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)v6, &LockHandle);
    v12 = *(__int64 **)v4;
    if ( *(struct _VIDSCH_QUEUE_PACKET **)v4 != v4 && *v3 > 0x10u )
    {
      v11 = *(__int64 **)v4;
      if ( (struct _VIDSCH_QUEUE_PACKET *)v12[1] != v4 )
        goto LABEL_8;
      v13 = *v12;
      if ( *(__int64 **)(v13 + 8) != v11 )
        goto LABEL_8;
      *(_QWORD *)v4 = v13;
      *(_QWORD *)(v13 + 8) = v4;
      --*v3;
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    if ( !v11 )
      break;
    ExFreePoolWithTag(v11 - 1, 0);
  }
}
