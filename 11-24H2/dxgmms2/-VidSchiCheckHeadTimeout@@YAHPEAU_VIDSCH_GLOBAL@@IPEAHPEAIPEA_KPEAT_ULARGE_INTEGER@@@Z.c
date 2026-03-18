/*
 * XREFs of ?VidSchiCheckHeadTimeout@@YAHPEAU_VIDSCH_GLOBAL@@IPEAHPEAIPEA_KPEAT_ULARGE_INTEGER@@@Z @ 0x140011DD0
 * Callers:
 *     VidSchiCheckFlipQueueTimeout @ 0x140011CC0 (VidSchiCheckFlipQueueTimeout.c)
 * Callees:
 *     ?ProcessHwQueues@HwQueueStagingList@@QEAAXPEAU_KLOCK_QUEUE_HANDLE@@@Z @ 0x1400122E0 (-ProcessHwQueues@HwQueueStagingList@@QEAAXPEAU_KLOCK_QUEUE_HANDLE@@@Z.c)
 *     ?Release@AcquireSpinLock@@QEAAXXZ @ 0x14001FEE0 (-Release@AcquireSpinLock@@QEAAXXZ.c)
 *     McTemplateK0pqqx_EtwWriteTransfer @ 0x14004A614 (McTemplateK0pqqx_EtwWriteTransfer.c)
 *     VidSchiSkipXboxVsyncTimeout @ 0x14004AC78 (VidSchiSkipXboxVsyncTimeout.c)
 *     ?VidSchiObserveHwFlipQueueUpdates@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IPEAPEAU_KEVENT@@PEA_N@Z @ 0x140054454 (-VidSchiObserveHwFlipQueueUpdates@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IPEAPEAU_KEVEN.c)
 */

__int64 __fastcall VidSchiCheckHeadTimeout(
        KSPIN_LOCK *a1,
        unsigned int a2,
        int *a3,
        unsigned int *a4,
        unsigned __int64 *a5,
        union _ULARGE_INTEGER *a6)
{
  unsigned int v7; // r15d
  unsigned int *v8; // rbx
  KSPIN_LOCK *v9; // r12
  KSPIN_LOCK v10; // r13
  int i; // esi
  KSPIN_LOCK v13; // r14
  LARGE_INTEGER *v14; // r14
  LARGE_INTEGER PerformanceCounter; // rbx
  LARGE_INTEGER *v16; // r13
  LONG HighPart; // eax
  bool v18; // zf
  unsigned __int64 *v19; // rcx
  LARGE_INTEGER v20; // rcx
  unsigned __int64 v21; // rbx
  unsigned __int64 v22; // r8
  char v23; // r15
  LARGE_INTEGER v24; // r8
  _DWORD *QuadPart; // rcx
  unsigned int v26; // r9d
  int v27; // eax
  char v28; // cl
  char j; // r10
  unsigned __int64 v30; // rcx
  unsigned int LowPart; // edx
  KSPIN_LOCK v32; // r8
  __int64 v33; // rax
  LARGE_INTEGER v34; // rdx
  int v35; // eax
  KSPIN_LOCK v36; // [rsp+40h] [rbp-49h]
  KSPIN_LOCK *v37; // [rsp+48h] [rbp-41h] BYREF
  _QWORD v38[2]; // [rsp+50h] [rbp-39h] BYREF
  char v39; // [rsp+60h] [rbp-29h]
  int v40; // [rsp+64h] [rbp-25h]
  char *v41; // [rsp+68h] [rbp-21h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+70h] [rbp-19h] BYREF
  __int16 v43; // [rsp+88h] [rbp-1h]
  __int64 v44; // [rsp+E0h] [rbp+57h] BYREF
  unsigned int v45; // [rsp+E8h] [rbp+5Fh]
  int *v46; // [rsp+F0h] [rbp+67h]
  unsigned int *v47; // [rsp+F8h] [rbp+6Fh]

  v47 = a4;
  v46 = a3;
  v45 = a2;
  v7 = 0;
  v8 = a4;
  v43 = 0;
  v9 = &a1[a2];
  v10 = v9[429];
  v36 = v10;
  v41 = (char *)(a1 + 248);
  KeAcquireInStackQueuedSpinLock(a1 + 248, &LockHandle);
  LOBYTE(v43) = 1;
  v37 = a1;
  v38[1] = v38;
  v38[0] = v38;
  v39 = 0;
  v40 = 2;
  if ( *(int *)(v10 + 4) < 4 && !*((_BYTE *)a1 + 156) )
  {
    HwQueueStagingList::ProcessHwQueues((HwQueueStagingList *)&v37, 0LL);
    if ( (_BYTE)v43 )
    {
      if ( HIBYTE(v43) )
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      else
        KeReleaseInStackQueuedSpinLock(&LockHandle);
    }
    return 0LL;
  }
  for ( i = -1; ; ++i )
  {
    if ( i == *((_DWORD *)a1 + 38) )
    {
LABEL_7:
      if ( !v39 && v40 )
        HwQueueStagingList::ProcessHwQueues((HwQueueStagingList *)&v37, 0LL);
      if ( (_BYTE)v43 )
      {
        if ( HIBYTE(v43) )
          KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        else
          KeReleaseInStackQueuedSpinLock(&LockHandle);
      }
      return v7;
    }
    v13 = v9[429];
    if ( i == -1 )
      v14 = *(LARGE_INTEGER **)(v13 + 32);
    else
      v14 = *(LARGE_INTEGER **)(v13 + 8LL * i + 40);
    if ( !v14 )
      goto LABEL_19;
    if ( (v14->LowPart & 1) != 0 )
      break;
    if ( *((_BYTE *)a1 + 59) )
    {
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
      v14[1] = PerformanceCounter;
    }
    else
    {
      PerformanceCounter.QuadPart = MEMORY[0xFFFFF78000000320];
      v14[1].QuadPart = MEMORY[0xFFFFF78000000320];
    }
    if ( !*(_DWORD *)(v10 + 3236) )
      goto LABEL_26;
    v16 = &v14[175 * (unsigned int)v14[8].HighPart];
    HighPart = v16[146].HighPart;
    if ( HighPart != 15 && HighPart != 5 )
      goto LABEL_26;
    v20 = v16[181];
    if ( v20.QuadPart <= (unsigned __int64)v16[153].QuadPart )
      v20 = v16[153];
    if ( PerformanceCounter.QuadPart <= (unsigned __int64)v20.QuadPart )
    {
      v8 = v47;
      goto LABEL_19;
    }
    v21 = PerformanceCounter.QuadPart - v20.QuadPart;
    if ( *((_BYTE *)a1 + 59) )
    {
      v32 = a1[359];
      v44 = 0LL;
      v22 = is_mul_ok(v21, 0x989680uLL)
          ? v21 * (unsigned __int128)0x989680uLL / v32
          : 10000000 * (v21 / v32) + 10000000 * (v21 % v32) / v32;
    }
    else
    {
      v22 = v21 * KeQueryTimeIncrement();
    }
    if ( v22 > 10000000 * (unsigned __int64)g_TdrConfig[1]
      && ((v18 = *((_BYTE *)a1 + 59) == 0, v23 = v45, LOBYTE(v44) = 0, v18)
       || (*((_BYTE *)a1 + 3268) & 8) != 0
       || (VidSchiObserveHwFlipQueueUpdates(
             (struct HwQueueStagingList *)&v37,
             (struct _VIDSCH_GLOBAL *)a1,
             v45,
             0LL,
             (bool *)&v44),
           !(_BYTE)v44))
      && !(unsigned __int8)VidSchiSkipXboxVsyncTimeout(a1, v14, &v16[15]) )
    {
      v14->LowPart |= 1u;
      v14[2].QuadPart = v21;
      v14[3] = v16[153];
      QuadPart = (_DWORD *)v16[164].QuadPart;
      *v46 = i;
      if ( (v16[159].LowPart & 0x10) != 0 )
        v26 = ((unsigned __int16)*QuadPart | (unsigned __int16)(*QuadPart >> 10)) & 0x3FF;
      else
        v26 = (1 << *((_DWORD *)a1 + 38)) - 1;
      v18 = !_BitScanForward((unsigned int *)&v27, v26);
      v28 = -1;
      v14[4].QuadPart = 0LL;
      if ( !v18 )
        v28 = v27;
      v14[5].LowPart = 0;
      for ( j = 0; ; ++j )
      {
        LODWORD(v44) = 0;
        if ( !v26 )
          break;
        v24 = v16[164];
        v33 = j * ((8 * *(_DWORD *)(v24.QuadPart + 8) + 231) & 0xFFFFFFF8);
        v34 = *(LARGE_INTEGER *)(v33 + v24.QuadPart + 24);
        if ( v34.QuadPart )
        {
          v14[4] = v34;
          v14[5].LowPart = *(_DWORD *)(v33 + v24.QuadPart + 16);
          break;
        }
        v35 = 1 << v28;
        v28 = -1;
        v26 &= ~v35;
        v18 = !_BitScanForward((unsigned int *)&v35, v26);
        if ( !v18 )
          v28 = v35;
      }
      v18 = (byte_140081244 & 4) == 0;
      v8 = v47;
      v30 = v14[4].QuadPart;
      LowPart = v14[5].LowPart;
      *a5 = v30;
      *v8 = LowPart;
      if ( !v18 )
        McTemplateK0pqqx_EtwWriteTransfer(v30, LowPart, v24.LowPart, a1[2], v23, LowPart, v30);
      if ( a6 )
        *a6 = (union _ULARGE_INTEGER)v14[3].QuadPart;
    }
    else
    {
LABEL_26:
      v8 = v47;
    }
    v7 = v14->LowPart & 1;
    if ( v7 )
      goto LABEL_7;
LABEL_19:
    v10 = v36;
  }
  if ( a6 )
    *a6 = (union _ULARGE_INTEGER)v14[3].QuadPart;
  v18 = v39 == 0;
  v19 = a5;
  *v46 = i;
  *v19 = v14[4].QuadPart;
  *v8 = v14[5].LowPart;
  if ( v18 && v40 )
    HwQueueStagingList::ProcessHwQueues((HwQueueStagingList *)&v37, 0LL);
  AcquireSpinLock::Release((AcquireSpinLock *)&v41);
  return 1LL;
}
