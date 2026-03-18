/*
 * XREFs of ?SubmitRenderToHwQueue@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@PEAPEAUVIDSCH_HW_QUEUE@@PEAU_KLOCK_QUEUE_HANDLE@@@Z @ 0x14000E8B0
 * Callers:
 *     ?VidSchiReleasePacketToGpu@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@PEAPEAUVIDSCH_HW_QUEUE@@PEAU_KLOCK_QUEUE_HANDLE@@@Z @ 0x140011740 (-VidSchiReleasePacketToGpu@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@PEAPEAUVIDSCH_H.c)
 * Callees:
 *     ?VidSchiSetInterruptTargetPresentId@@YAJPEAU_VIDSCH_GLOBAL@@II_K_NI@Z @ 0x14000A1A4 (-VidSchiSetInterruptTargetPresentId@@YAJPEAU_VIDSCH_GLOBAL@@II_K_NI@Z.c)
 *     ?VidSchiCalibrateHwClock@@YAXPEAU_VIDSCH_NODE@@@Z @ 0x14000E788 (-VidSchiCalibrateHwClock@@YAXPEAU_VIDSCH_NODE@@@Z.c)
 *     ?VidSchiSignalSyncObjectsFromCpu@@YAJPEAVHwQueueStagingList@@IPEAPEAU_VIDSCH_SYNC_OBJECT@@U_D3DDDICB_SIGNALFLAGS@@PEB_KPEAPEAUVIDSCH_HW_QUEUE@@@Z @ 0x14000EF50 (-VidSchiSignalSyncObjectsFromCpu@@YAJPEAVHwQueueStagingList@@IPEAPEAU_VIDSCH_SYNC_OBJECT@@U_D3DD.c)
 *     VidSchiMarkDeviceAsError @ 0x14001FF30 (VidSchiMarkDeviceAsError.c)
 *     ?VidSchiCompleteHwQueuePacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@_N@Z @ 0x140028980 (-VidSchiCompleteHwQueuePacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@_N@Z.c)
 *     McTemplateK0pxpqq_EtwWriteTransfer @ 0x140039F14 (McTemplateK0pxpqq_EtwWriteTransfer.c)
 *     ?ValidateMockDriverState@DXGADAPTER@@QEAAXW4_MOCKDRIVERSTATE_VIOLATION@@PEBX@Z @ 0x14004B708 (-ValidateMockDriverState@DXGADAPTER@@QEAAXW4_MOCKDRIVERSTATE_VIOLATION@@PEBX@Z.c)
 *     __security_check_cookie @ 0x140055E20 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140055E60 (_guard_dispatch_icall.c)
 *     memset @ 0x140056340 (memset.c)
 */

void __fastcall SubmitRenderToHwQueue(
        struct HwQueueStagingList *a1,
        LARGE_INTEGER *a2,
        struct VIDSCH_HW_QUEUE **a3,
        struct _KLOCK_QUEUE_HANDLE *a4)
{
  LARGE_INTEGER v4; // r15
  LARGE_INTEGER v7; // rsi
  LARGE_INTEGER v8; // rdi
  __int64 v9; // r14
  __int64 v10; // r13
  bool v11; // zf
  LARGE_INTEGER v12; // rsi
  LONGLONG v13; // rax
  int v14; // eax
  int v15; // ecx
  unsigned int v16; // ecx
  DWORD v17; // eax
  KIRQL v18; // bl
  LARGE_INTEGER PerformanceCounter; // r12
  int v20; // edx
  int v21; // r8d
  int v22; // r13d
  struct _KLOCK_QUEUE_HANDLE *v23; // r15
  LARGE_INTEGER v24; // rdx
  __int64 v25; // rbx
  __int64 v26; // rcx
  LARGE_INTEGER *v27; // rax
  LARGE_INTEGER v28; // rcx
  __int64 v29; // r9
  unsigned int LowPart; // edx
  __int64 v31; // rdi
  LARGE_INTEGER *v32; // rsi
  LONGLONG v33; // r8
  unsigned __int64 *QuadPart; // rdx
  unsigned __int64 v35; // rax
  __int64 v36; // rcx
  unsigned int v37; // r13d
  _QWORD *v38; // r9
  unsigned int v39; // r8d
  DWORD v40; // [rsp+40h] [rbp-C0h]
  __int128 v42; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v43; // [rsp+60h] [rbp-A0h]
  __int128 v44; // [rsp+70h] [rbp-90h]
  __int128 v45; // [rsp+80h] [rbp-80h]
  PKLOCK_QUEUE_HANDLE LockHandle; // [rsp+90h] [rbp-70h]
  LARGE_INTEGER v47; // [rsp+98h] [rbp-68h]
  LARGE_INTEGER *v48; // [rsp+A0h] [rbp-60h]
  _DWORD v49[2]; // [rsp+A8h] [rbp-58h] BYREF
  _BYTE *v50; // [rsp+B0h] [rbp-50h]
  __int64 v51; // [rsp+B8h] [rbp-48h]
  _BYTE v52[128]; // [rsp+C0h] [rbp-40h] BYREF

  v4 = a2[12];
  LockHandle = a4;
  v48 = *(LARGE_INTEGER **)(v4.QuadPart + 40);
  v7 = v48[2];
  v8 = v48[1];
  v47 = v7;
  v9 = *(_QWORD *)(v7.QuadPart + 24);
  v10 = *(_QWORD *)(v8.QuadPart + 40);
  ++*(_DWORD *)(v4.QuadPart + 152);
  a2[10].LowPart |= 0x40u;
  if ( *(_QWORD *)(v4.QuadPart + 104) && a2[157].LowPart == 1 )
    VidSchiSignalSyncObjectsFromCpu(
      a1,
      1u,
      (struct _VIDSCH_SYNC_OBJECT **)(v4.QuadPart + 104),
      0,
      (const unsigned __int64 *)&a2[162].QuadPart,
      a3);
  if ( (*(_BYTE *)(v9 + 3268) & 1) != 0
    || *(_DWORD *)(v9 + 3244)
    || *(_BYTE *)(v8.QuadPart + 204)
    || _InterlockedCompareExchange((volatile signed __int32 *)(v8.QuadPart + 200), 0, 0)
    || *(_BYTE *)(v4.QuadPart + 145) )
  {
    v31 = *(_QWORD *)(*(_QWORD *)(v4.QuadPart + 40) + 16LL);
    v32 = (LARGE_INTEGER *)(*(_QWORD *)(v31 + 184) + 112LL * *(unsigned int *)(v31 + 196));
    memset(v32, 0, 0x70uLL);
    *(_DWORD *)(v31 + 196) = (*(_DWORD *)(v31 + 196) + 1) & (*(_DWORD *)(v31 + 192) - 1);
    v32[1] = KeQueryPerformanceCounter(0LL);
    v32->LowPart = 9;
    if ( a2[6].LowPart )
    {
      v33 = v4.QuadPart + 56;
      v32[3] = a2[96];
      *(LARGE_INTEGER *)(v4.QuadPart + 64) = a2[96];
      QuadPart = (unsigned __int64 *)a2[98].QuadPart;
    }
    else
    {
      v32[a2[157].LowPart + 3] = a2[156];
      v33 = v4.QuadPart + 8 * (a2[157].LowPart + 2LL * a2[157].LowPart + 7);
      *(LARGE_INTEGER *)(v33 + 8) = a2[156];
      QuadPart = (unsigned __int64 *)a2[159].QuadPart;
    }
    if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v4.QuadPart + 40) + 16LL) + 24LL) + 48LL) )
    {
      v35 = *(_QWORD *)(v33 + 8);
      if ( v35 > *QuadPart )
        *QuadPart = v35;
    }
    else
    {
      v36 = *(_QWORD *)(v33 + 8);
      if ( *(_DWORD *)QuadPart - (int)v36 < 0 )
        *(_DWORD *)QuadPart = v36;
    }
    v32[2] = v4;
    LOBYTE(v32[5].LowPart) = 1;
    VidSchiCompleteHwQueuePacket(a1, (struct _VIDSCH_QUEUE_PACKET *)a2, 0);
  }
  else
  {
    v11 = (a2[6].LowPart & 0xFFFFFFF7) == 0;
    a2[7].QuadPart = MEMORY[0xFFFFF78000000320];
    a2[6].HighPart = 9;
    if ( v11 )
      ++*(_QWORD *)(v10 + 2840);
    if ( (a2[9].LowPart & 0x4000) != 0 && (*(_DWORD *)(v8.QuadPart + 48) & 2) != 0 )
    {
      a2[10].LowPart |= 0x80u;
      _InterlockedIncrement((volatile signed __int32 *)(v9 + 868));
      if ( *(_BYTE *)(v9 + 59) )
      {
        LowPart = a2[21].LowPart;
        if ( LowPart < *(_DWORD *)(v9 + 40) )
          VidSchiSetInterruptTargetPresentId((struct _VIDSCH_GLOBAL *)v9, LowPart, 0, 0LL, 0, 0);
      }
    }
    if ( (a2[8].LowPart & 0x80u) != 0 )
    {
      v37 = a2[119].LowPart;
      memset(v52, 0, sizeof(v52));
      v39 = 0;
      if ( v37 )
      {
        v38 = v52;
        do
        {
          if ( v39 >= 0x10 )
            break;
          ++v39;
          *v38 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)((char *)v38 + (char *)a2 - v52 + 960) + 96LL) + 48LL);
          ++v38;
        }
        while ( v39 < v37 );
      }
      v49[0] = v37;
      v49[1] = 0;
      v50 = v52;
      v51 = *(_QWORD *)(*(_QWORD *)(v8.QuadPart + 40) + 8LL);
      DXGADAPTER::ValidateMockDriverState(*(_QWORD *)(v9 + 16), 1LL, v49, v38);
    }
    VidSchiCalibrateHwClock((struct _VIDSCH_NODE *)v7.QuadPart);
    v12 = a2[96];
    *((_QWORD *)&v44 + 1) = 0LL;
    *(_QWORD *)&v42 = *(_QWORD *)(v4.QuadPart + 112);
    *((LARGE_INTEGER *)&v42 + 1) = a2[156];
    v45 = *(_OWORD *)&a2[158].LowPart;
    *(LARGE_INTEGER *)&v43 = a2[99];
    DWORD2(v43) = a2[100].HighPart;
    if ( v12.QuadPart )
    {
      HIDWORD(v43) = *(_DWORD *)(v12.QuadPart + 8);
      v13 = v12.QuadPart + 16;
    }
    else
    {
      v28 = a2[95];
      if ( v28.QuadPart )
      {
        HIDWORD(v43) = a2[103].HighPart;
        v13 = *(_QWORD *)(v28.QuadPart + 120);
      }
      else
      {
        HIDWORD(v43) = 0;
        v13 = 0LL;
      }
    }
    *(_QWORD *)&v44 = v13;
    v14 = a2[9].LowPart & 0x80;
    v15 = (a2[9].LowPart >> 10) & 0x40;
    a2[96].QuadPart = 0LL;
    v16 = DWORD2(v44) & 0xFFFFFFF9 | ((v14 | (unsigned int)v15) >> 5);
    v17 = a2[157].LowPart;
    v18 = 0;
    DWORD2(v44) = v16;
    v40 = v17;
    if ( a4 )
    {
      KeReleaseInStackQueuedSpinLock(a4);
      v18 = KfRaiseIrql(2u);
    }
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    v22 = ((__int64 (__fastcall *)(_QWORD, __int128 *))DxgCoreInterface[57])(*(_QWORD *)(v9 + 8), &v42);
    if ( (byte_140081241 & 1) != 0 )
    {
      v29 = *(_QWORD *)(v4.QuadPart + 48);
      if ( !v29 )
        LODWORD(v29) = v4.LowPart;
      McTemplateK0pxpqq_EtwWriteTransfer(v43, v20, v21, v29, SBYTE8(v42), v43, v22, *(_DWORD *)(v8.QuadPart + 1832));
    }
    v23 = LockHandle;
    if ( LockHandle )
    {
      KeLowerIrql(v18);
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v9 + 1984), v23);
    }
    if ( v12.QuadPart && _InterlockedExchangeAdd((volatile signed __int32 *)(v12.QuadPart + 12), 0xFFFFFFFF) == 1 )
    {
      if ( *(_QWORD *)v12.QuadPart )
        ExFreeToLookasideListEx(*(PLOOKASIDE_LIST_EX *)v12.QuadPart, (PVOID)v12.QuadPart);
      else
        ExFreePoolWithTag((PVOID)v12.QuadPart, 0);
    }
    v24 = v47;
    v25 = *(_QWORD *)(v47.QuadPart + 184) + 112LL * *(unsigned int *)(v47.QuadPart + 196);
    *(_OWORD *)v25 = 0LL;
    *(_OWORD *)(v25 + 16) = 0LL;
    *(_OWORD *)(v25 + 32) = 0LL;
    *(_OWORD *)(v25 + 48) = 0LL;
    *(_OWORD *)(v25 + 64) = 0LL;
    *(_OWORD *)(v25 + 80) = 0LL;
    *(_OWORD *)(v25 + 96) = 0LL;
    *(_DWORD *)(v24.QuadPart + 196) = (*(_DWORD *)(v24.QuadPart + 196) + 1) & (*(_DWORD *)(v24.QuadPart + 192) - 1);
    if ( !PerformanceCounter.QuadPart )
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
    *(LARGE_INTEGER *)(v25 + 8) = PerformanceCounter;
    *(_DWORD *)v25 = 8;
    v26 = *((_QWORD *)&v42 + 1);
    *(_DWORD *)(v25 + 88) = v40;
    v27 = v48;
    *(_QWORD *)(v25 + 80) = v26;
    *(_OWORD *)(v25 + 16) = v42;
    *(_OWORD *)(v25 + 32) = v43;
    *(_OWORD *)(v25 + 48) = v44;
    *(_OWORD *)(v25 + 64) = v45;
    *(_DWORD *)(v25 + 92) = v22;
    v27[27] = PerformanceCounter;
    if ( (int)(v22 + 0x80000000) >= 0 && v22 != -1073741822 )
      VidSchiMarkDeviceAsError(a1);
  }
}
