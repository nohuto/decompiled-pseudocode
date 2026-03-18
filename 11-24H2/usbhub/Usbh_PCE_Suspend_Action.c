/*
 * XREFs of Usbh_PCE_Suspend_Action @ 0x1400129AC
 * Callers:
 *     UsbhDispatch_PortChangeQueueEventEx @ 0x140008E90 (UsbhDispatch_PortChangeQueueEventEx.c)
 * Callees:
 *     UsbhUnlockPcqWithTag @ 0x140001F30 (UsbhUnlockPcqWithTag.c)
 *     UsbhInsertQueuePortChangeObject @ 0x140003F90 (UsbhInsertQueuePortChangeObject.c)
 *     UsbhFlushPortChangeQueue @ 0x14000481C (UsbhFlushPortChangeQueue.c)
 *     FdoExt @ 0x14000BE50 (FdoExt.c)
 *     UsbhWaitEventWithTimeoutEx @ 0x140010ED0 (UsbhWaitEventWithTimeoutEx.c)
 *     UsbhSetSuspendPending @ 0x1400133B0 (UsbhSetSuspendPending.c)
 *     UsbhHubQueueProcessChangeWorker @ 0x14001421C (UsbhHubQueueProcessChangeWorker.c)
 *     UsbhWait @ 0x14001A1D4 (UsbhWait.c)
 *     UsbhPCE_Suspend @ 0x14001E150 (UsbhPCE_Suspend.c)
 *     Log @ 0x1400298B0 (Log.c)
 *     UsbhSignalSuspendEvent @ 0x14002AFB4 (UsbhSignalSuspendEvent.c)
 *     UsbhiSignalSuspendEvent @ 0x14002BDEC (UsbhiSignalSuspendEvent.c)
 *     UsbhSetPcqEventStatus @ 0x140032510 (UsbhSetPcqEventStatus.c)
 *     WPP_RECORDER_SF_d @ 0x14003DA58 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dd @ 0x14003DC1C (WPP_RECORDER_SF_dd.c)
 *     UsbhHubSyncSuspendPortEvent @ 0x140042C7C (UsbhHubSyncSuspendPortEvent.c)
 *     UsbhPCE_ResumeDone @ 0x1400435C8 (UsbhPCE_ResumeDone.c)
 */

void __fastcall Usbh_PCE_Suspend_Action(__int64 a1, __int64 a2, __int64 a3, int *a4)
{
  int v5; // r15d
  KIRQL v8; // al
  __int64 v9; // r8
  KIRQL v10; // r14
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rcx
  int v19; // eax
  __int64 v20; // rsi
  __int64 v21; // r8
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // rdx
  __int64 v26; // rcx
  unsigned __int16 v27; // dx
  __int64 v28; // r8
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rax
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rcx
  __int64 v35; // rdx
  int v36; // eax
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // rax
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // rax
  __int64 v43; // rdx
  __int64 v44; // r8
  __int64 v45; // r9
  __int64 v46; // rax
  unsigned __int16 v47; // dx
  __int64 v48; // rcx
  int v49; // edx
  __int64 v50; // rax
  __int64 v51; // rdx
  __int64 v52; // r8
  unsigned __int16 v53; // dx
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // [rsp+40h] [rbp-10h] BYREF
  _DWORD *v57; // [rsp+48h] [rbp-8h]

  v56 = 0LL;
  v5 = 0;
  v57 = FdoExt(a1);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      16,
      (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
      *(_WORD *)(a2 + 4));
  UsbhWaitEventWithTimeoutEx(a1, (void *)(a2 + 824), 660000, 825258049, 2u, a2);
  v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 440));
  v9 = *(unsigned __int16 *)(a2 + 4);
  v10 = v8;
  *(_DWORD *)(a2 + 448) = 1;
  if ( (UsbhLogMask & 0x10) != 0 )
  {
    if ( a1 )
    {
      v11 = *(_QWORD *)(a1 + 64);
      if ( v11 )
      {
        v12 = *(_QWORD *)(v11 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v11 + 880)) & *(_DWORD *)(v11 + 884));
        *(_DWORD *)v12 = 724267376;
        *(_QWORD *)(v12 + 8) = 0LL;
        *(_QWORD *)(v12 + 16) = 10LL;
        *(_QWORD *)(v12 + 24) = v9;
      }
    }
  }
  v13 = *(unsigned __int16 *)(a2 + 4);
  v14 = *(int *)(a2 + 12);
  if ( (UsbhLogMask & 0x10) != 0 )
  {
    if ( a1 )
    {
      v15 = *(_QWORD *)(a1 + 64);
      if ( v15 )
      {
        v16 = *(_QWORD *)(v15 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v15 + 880)) & *(_DWORD *)(v15 + 884));
        *(_DWORD *)v16 = 724267376;
        *(_QWORD *)(v16 + 8) = 0LL;
        *(_QWORD *)(v16 + 16) = v14;
        *(_QWORD *)(v16 + 24) = v13;
      }
    }
  }
  v17 = ((unsigned __int8)*(_DWORD *)(a2 + 2400) + 1) & 0x1F;
  *(_DWORD *)(a2 + 2400) = v17;
  v18 = a2 + 32 * (v17 + 43);
  *(_DWORD *)v18 = 10;
  v19 = *(_DWORD *)(a2 + 12);
  *(_DWORD *)(v18 + 8) = -1;
  *(_DWORD *)(v18 + 4) = v19;
  *(_QWORD *)(v18 + 12) = 0LL;
  *(_QWORD *)(v18 + 20) = 0LL;
  *(_DWORD *)(v18 + 28) = 0;
  v20 = *(int *)(a2 + 12);
  if ( *(_BYTE *)(a2 + 2839) || *(_BYTE *)(a2 + 2840) )
  {
    *a4 = -1073741667;
    UsbhiSignalSuspendEvent(a1, a2);
    UsbhUnlockPcqWithTag(a1, a2, v10, 0);
    return;
  }
  v21 = *(unsigned __int16 *)(a2 + 4);
  *(_QWORD *)(a2 + 736) = KeGetCurrentThread();
  if ( (UsbhLogMask & 0x200) != 0 )
  {
    if ( a1 )
    {
      v22 = *(_QWORD *)(a1 + 64);
      if ( v22 )
      {
        v23 = *(_QWORD *)(v22 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v22 + 880)) & *(_DWORD *)(v22 + 884));
        *(_DWORD *)v23 = 812658737;
        *(_QWORD *)(v23 + 8) = 0LL;
        *(_QWORD *)(v23 + 16) = v20;
        *(_QWORD *)(v23 + 24) = v21;
      }
    }
  }
  _InterlockedIncrement((volatile signed __int32 *)(a3 + 144));
  UsbhSetSuspendPending(a1, a2, v21, v14);
  if ( (int)v20 > 10 )
  {
    if ( (_DWORD)v20 == 11 )
      goto LABEL_44;
    if ( (_DWORD)v20 == 12 || (_DWORD)v20 == 13 )
    {
LABEL_74:
      Log(a1, 512, 825258041, v20, *(unsigned __int16 *)(a2 + 4));
      v55 = 32LL * *(unsigned int *)(a2 + 2400);
      *(_QWORD *)(a2 + 736) = 0LL;
      *(_DWORD *)(a2 + 12) = v20;
      *(_DWORD *)(v55 + a2 + 1384) = v20;
      UsbhUnlockPcqWithTag(a1, a2, v10, 0);
      UsbhWaitEventWithTimeoutEx(a1, (void *)(a2 + 472), 660000, 825258041, 4u, a2);
      UsbhPCE_Suspend(a1, a3, *(unsigned __int16 *)(a2 + 4));
      _InterlockedDecrement((volatile signed __int32 *)(a3 + 144));
      return;
    }
    if ( (_DWORD)v20 != 14 )
    {
      switch ( (_DWORD)v20 )
      {
        case 0xF:
          Log(a1, 512, 825258081, 15, *(unsigned __int16 *)(a2 + 4));
          *(_QWORD *)(a2 + 736) = 0LL;
          UsbhFlushPortChangeQueue(a1, a2, v44, v45);
          v46 = 32LL * *(unsigned int *)(a2 + 2400);
          *(_DWORD *)(a2 + 12) = 15;
          *(_DWORD *)(v46 + a2 + 1384) = 15;
          break;
        case 0x10:
        case 0x11:
          goto LABEL_74;
        case 0x12:
          Log(a1, 512, 825258039, 18, *(unsigned __int16 *)(a2 + 4));
          UsbhSetPcqEventStatus(a1, a2, 1LL);
          UsbhUnlockPcqWithTag(a1, v51, v10, 0);
          UsbhWaitEventWithTimeoutEx(a1, (void *)(a2 + 712), 660000, 825258039, 3u, a2);
          v52 = *(unsigned __int16 *)(a2 + 4);
          *(_QWORD *)(a2 + 736) = 0LL;
          UsbhPCE_ResumeDone(a1, a2 + 24, v52);
          goto LABEL_37;
        case 0x14:
          break;
        default:
          goto LABEL_70;
      }
      UsbhUnlockPcqWithTag(a1, a2, v10, 0);
      goto LABEL_54;
    }
LABEL_72:
    Log(a1, 512, 825258035, v20, *(unsigned __int16 *)(a2 + 4));
    v53 = *(_WORD *)(a2 + 4);
    LODWORD(v56) = 0x40000;
    *(_QWORD *)(a2 + 736) = 0LL;
    v5 = UsbhInsertQueuePortChangeObject(a1, v53, &v56, 0LL, 0LL);
    if ( v5 >= 0 )
    {
      v54 = 32LL * *(unsigned int *)(a2 + 2400);
      *(_DWORD *)(a2 + 12) = 10;
      *(_DWORD *)(v54 + a2 + 1384) = 10;
      goto LABEL_46;
    }
    goto LABEL_45;
  }
  switch ( (_DWORD)v20 )
  {
    case 0xA:
LABEL_50:
      Log(a1, 512, 825258040, v20, *(unsigned __int16 *)(a2 + 4));
      v39 = 32LL * *(unsigned int *)(a2 + 2400);
      *(_QWORD *)(a2 + 736) = 0LL;
      *(_DWORD *)(a2 + 12) = v20;
      *(_DWORD *)(v39 + a2 + 1384) = v20;
      goto LABEL_46;
    case 1:
      UsbhiSignalSuspendEvent(a1, a2);
      Log(a1, 512, 825258038, 1, *(unsigned __int16 *)(a2 + 4));
      *(_QWORD *)(a2 + 736) = 0LL;
      goto LABEL_46;
    case 2:
      v24 = *(unsigned __int16 *)(a2 + 4);
      if ( (UsbhLogMask & 0x200) != 0 )
      {
        if ( a1 )
        {
          v25 = *(_QWORD *)(a1 + 64);
          if ( v25 )
          {
            v26 = *(_QWORD *)(v25 + 888)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v25 + 880)) & *(_DWORD *)(v25 + 884));
            *(_DWORD *)v26 = 896544817;
            *(_QWORD *)(v26 + 8) = 0LL;
            *(_QWORD *)(v26 + 16) = v20;
            *(_QWORD *)(v26 + 24) = v24;
          }
        }
      }
      v27 = *(_WORD *)(a2 + 4);
      LODWORD(v56) = 0x40000;
      *(_QWORD *)(a2 + 736) = 0LL;
      v5 = UsbhInsertQueuePortChangeObject(a1, v27, &v56, 0LL, 0LL);
      if ( v5 >= 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
          WPP_RECORDER_SF_d(
            WPP_GLOBAL_Control->DeviceExtension,
            0,
            1,
            17,
            (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
            *(_WORD *)(a2 + 4));
        v28 = *(unsigned __int16 *)(a2 + 4);
        if ( (UsbhLogMask & 8) != 0 )
        {
          if ( a1 )
          {
            v29 = *(_QWORD *)(a1 + 64);
            if ( v29 )
            {
              v30 = *(_QWORD *)(v29 + 888)
                  + 32LL
                  * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v29 + 880)) & *(_DWORD *)(v29 + 884));
              *(_DWORD *)v30 = 827353457;
              *(_QWORD *)(v30 + 8) = 0LL;
              *(_QWORD *)(v30 + 16) = a2;
              *(_QWORD *)(v30 + 24) = v28;
            }
          }
        }
        v31 = 32LL * *(unsigned int *)(a2 + 2400);
        *(_DWORD *)(a2 + 12) = 9;
        *(_DWORD *)(v31 + a2 + 1384) = 9;
        v32 = *(unsigned __int16 *)(a2 + 4);
        v33 = *(int *)(a2 + 12);
        if ( (UsbhLogMask & 0x10) != 0 )
        {
          if ( a1 )
          {
            v34 = *(_QWORD *)(a1 + 64);
            if ( v34 )
            {
              v35 = *(_QWORD *)(v34 + 888)
                  + 32LL
                  * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v34 + 880)) & *(_DWORD *)(v34 + 884));
              *(_DWORD *)v35 = 757952880;
              *(_QWORD *)(v35 + 8) = 0LL;
              *(_QWORD *)(v35 + 16) = v33;
              *(_QWORD *)(v35 + 24) = v32;
            }
          }
        }
        v36 = *(_DWORD *)(a2 + 12);
        v37 = 32 * (*(unsigned int *)(a2 + 2400) + 43LL);
        *(_DWORD *)(a2 + 448) = 0;
        *(_DWORD *)(v37 + a2 + 8) = v36;
        KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 440), v10);
        UsbhHubQueueProcessChangeWorker(v38, a2);
        goto LABEL_37;
      }
      Log(a1, 8, 1902727218, a2, *(unsigned __int16 *)(a2 + 4));
      UsbhiSignalSuspendEvent(a1, a2);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_dd(
          WPP_GLOBAL_Control->DeviceExtension,
          v49,
          1,
          18,
          (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
          *(_WORD *)(a2 + 4),
          v5);
      goto LABEL_46;
    case 3:
      goto LABEL_72;
    case 4:
      Log(a1, 512, 825258036, 4, *(unsigned __int16 *)(a2 + 4));
      v47 = *(_WORD *)(a2 + 4);
      LODWORD(v56) = 0x40000;
      v5 = UsbhInsertQueuePortChangeObject(a1, v47, &v56, 0LL, 0LL);
      if ( v5 >= 0 )
      {
        v48 = 32LL * *(unsigned int *)(a2 + 2400);
        *(_DWORD *)(a2 + 12) = 9;
        *(_DWORD *)(v48 + a2 + 1384) = 9;
        goto LABEL_46;
      }
      goto LABEL_45;
    case 5:
      goto LABEL_74;
    case 6:
      Log(a1, 512, 825258034, 6, *(unsigned __int16 *)(a2 + 4));
      *(_QWORD *)(a2 + 736) = 0LL;
      UsbhFlushPortChangeQueue(a1, a2, v40, v41);
      v42 = 32LL * *(unsigned int *)(a2 + 2400);
      *(_DWORD *)(a2 + 12) = 11;
      *(_DWORD *)(v42 + a2 + 1384) = 11;
      UsbhUnlockPcqWithTag(a1, a2, v10, 0);
      *(_DWORD *)(a2 + 400) = UsbhHubSyncSuspendPortEvent(a1, v43, a2);
LABEL_54:
      UsbhSignalSuspendEvent(a1, a2);
      goto LABEL_37;
  }
  if ( (_DWORD)v20 != 7 )
  {
    if ( (unsigned int)(v20 - 8) <= 1 )
      goto LABEL_50;
LABEL_70:
    Log(a1, 512, 825258072, v20, *(unsigned __int16 *)(a2 + 4));
    v50 = 32LL * *(unsigned int *)(a2 + 2400);
    *(_QWORD *)(a2 + 736) = 0LL;
    *(_DWORD *)(a2 + 12) = 19;
    *(_DWORD *)(v50 + a2 + 1384) = 19;
    goto LABEL_46;
  }
LABEL_44:
  Log(a1, 512, 825258033, v20, *(unsigned __int16 *)(a2 + 4));
  *(_QWORD *)(a2 + 736) = 0LL;
LABEL_45:
  UsbhiSignalSuspendEvent(a1, a2);
LABEL_46:
  UsbhUnlockPcqWithTag(a1, a2, v10, 0);
LABEL_37:
  UsbhWaitEventWithTimeoutEx(a1, (void *)(a2 + 744), 660000, 825258104, 5u, a2);
  if ( (v57[640] & 1) != 0 && *((_BYTE *)v57 + 5235) == 32 )
    UsbhWait(a1, 10LL);
  _InterlockedDecrement((volatile signed __int32 *)(a3 + 144));
  *a4 = v5;
}
