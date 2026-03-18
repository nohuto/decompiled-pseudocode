/*
 * XREFs of Usbh_PCE_wDone_Action @ 0x14002B050
 * Callers:
 *     UsbhDispatch_PortChangeQueueEventEx @ 0x140008E90 (UsbhDispatch_PortChangeQueueEventEx.c)
 * Callees:
 *     UsbhUnlockPcqWithTag @ 0x140001F30 (UsbhUnlockPcqWithTag.c)
 *     UsbhFlushPortChangeQueue @ 0x14000481C (UsbhFlushPortChangeQueue.c)
 *     FdoExt @ 0x14000BE50 (FdoExt.c)
 *     UsbhHubQueueProcessChangeWorker @ 0x14001421C (UsbhHubQueueProcessChangeWorker.c)
 *     Log @ 0x1400298B0 (Log.c)
 *     UsbhLogSignalSuspendEvent @ 0x14002BA4C (UsbhLogSignalSuspendEvent.c)
 *     UsbhSetPcqEventStatus @ 0x140032510 (UsbhSetPcqEventStatus.c)
 *     WPP_RECORDER_SF_d @ 0x14003DA58 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dq @ 0x14003DE14 (WPP_RECORDER_SF_dq.c)
 */

void __fastcall Usbh_PCE_wDone_Action(__int64 a1, __int64 a2, char a3)
{
  __int64 v6; // rdx
  int v7; // r8d
  __int64 v8; // r9
  __int64 v9; // rcx
  KIRQL v10; // al
  __int64 v11; // rdx
  __int64 v12; // r8
  KIRQL v13; // r14
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // r8
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rdx
  __int64 v34; // rcx
  int v35; // eax
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // rax
  __int64 v45; // r8
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // r9
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // rax
  __int64 v53; // r8
  __int64 v54; // r9
  __int64 v55; // rcx
  __int64 v56; // rdx
  int v57; // eax
  __int64 v58; // rdx
  __int64 v59; // r8
  __int64 v60; // r9
  __int64 v61; // rax
  __int64 v62; // rax
  int v63; // r9d
  __int64 v64; // rax
  __int64 v65; // rax
  __int64 v66; // rcx

  FdoExt(a1);
  v8 = *(unsigned __int16 *)(a2 + 4);
  if ( (UsbhLogMask & 0x200) != 0 )
  {
    if ( a1 )
    {
      v6 = *(_QWORD *)(a1 + 64);
      if ( v6 )
      {
        v9 = *(_QWORD *)(v6 + 888)
           + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v6 + 880)) & *(_DWORD *)(v6 + 884));
        *(_DWORD *)v9 = 812660319;
        *(_QWORD *)(v9 + 8) = 0LL;
        *(_QWORD *)(v9 + 16) = a2;
        *(_QWORD *)(v9 + 24) = v8;
      }
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_dq(
      WPP_GLOBAL_Control->DeviceExtension,
      v6,
      v7,
      36,
      (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
      *(_WORD *)(a2 + 4),
      a3);
  v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 440));
  v12 = *(unsigned __int16 *)(a2 + 4);
  v13 = v10;
  *(_DWORD *)(a2 + 448) = 1;
  if ( (UsbhLogMask & 0x10) != 0 )
  {
    if ( a1 )
    {
      v11 = *(_QWORD *)(a1 + 64);
      if ( v11 )
      {
        v14 = *(_QWORD *)(v11 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v11 + 880)) & *(_DWORD *)(v11 + 884));
        *(_DWORD *)v14 = 724267376;
        *(_QWORD *)(v14 + 8) = 0LL;
        *(_QWORD *)(v14 + 16) = 6LL;
        *(_QWORD *)(v14 + 24) = v12;
      }
    }
  }
  v15 = *(unsigned __int16 *)(a2 + 4);
  v16 = *(int *)(a2 + 12);
  if ( (UsbhLogMask & 0x10) != 0 )
  {
    if ( a1 )
    {
      v11 = *(_QWORD *)(a1 + 64);
      if ( v11 )
      {
        v17 = *(_QWORD *)(v11 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v11 + 880)) & *(_DWORD *)(v11 + 884));
        *(_DWORD *)v17 = 724267376;
        *(_QWORD *)(v17 + 8) = 0LL;
        *(_QWORD *)(v17 + 16) = v16;
        *(_QWORD *)(v17 + 24) = v15;
      }
    }
  }
  v18 = ((unsigned __int8)*(_DWORD *)(a2 + 2400) + 1) & 0x1F;
  *(_DWORD *)(a2 + 2400) = v18;
  v19 = a2 + 32 * (v18 + 43);
  *(_DWORD *)v19 = 6;
  *(_DWORD *)(v19 + 4) = *(_DWORD *)(a2 + 12);
  *(_DWORD *)(v19 + 8) = -1;
  *(_QWORD *)(v19 + 12) = 0LL;
  *(_QWORD *)(v19 + 20) = 0LL;
  *(_DWORD *)(v19 + 28) = 0;
  v20 = *(int *)(a2 + 12);
  v21 = *(unsigned __int16 *)(a2 + 4);
  if ( (UsbhLogMask & 0x200) != 0 )
  {
    if ( a1 )
    {
      v11 = *(_QWORD *)(a1 + 64);
      if ( v11 )
      {
        v22 = *(_QWORD *)(v11 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v11 + 880)) & *(_DWORD *)(v11 + 884));
        *(_DWORD *)v22 = 829437535;
        *(_QWORD *)(v22 + 8) = 0LL;
        *(_QWORD *)(v22 + 16) = v20;
        *(_QWORD *)(v22 + 24) = v21;
      }
    }
  }
  if ( (_DWORD)v20 == 3 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_dq(
        WPP_GLOBAL_Control->DeviceExtension,
        v11,
        3,
        38,
        (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
        *(_WORD *)(a2 + 4),
        a2);
    v27 = *(unsigned __int16 *)(a2 + 4);
    if ( (UsbhLogMask & 0x200) != 0 )
    {
      if ( a1 )
      {
        v28 = *(_QWORD *)(a1 + 64);
        if ( v28 )
        {
          v29 = *(_QWORD *)(v28 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v28 + 880)) & *(_DWORD *)(v28 + 884));
          *(_DWORD *)v29 = 879769183;
          *(_QWORD *)(v29 + 8) = 0LL;
          *(_QWORD *)(v29 + 16) = 0LL;
          *(_QWORD *)(v29 + 24) = v27;
        }
      }
    }
    v30 = 32LL * *(unsigned int *)(a2 + 2400);
    *(_DWORD *)(a2 + 12) = 2;
    *(_DWORD *)(v30 + a2 + 1384) = 2;
    *(_QWORD *)(a2 + 384) = 0LL;
    goto LABEL_36;
  }
  if ( (_DWORD)v20 == 12 )
  {
    v37 = *(unsigned __int16 *)(a2 + 4);
    if ( (UsbhLogMask & 0x200) != 0 )
    {
      if ( a1 )
      {
        v38 = *(_QWORD *)(a1 + 64);
        if ( v38 )
        {
          v39 = *(_QWORD *)(v38 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v38 + 880)) & *(_DWORD *)(v38 + 884));
          *(_DWORD *)v39 = 862991967;
          *(_QWORD *)(v39 + 8) = 0LL;
          *(_QWORD *)(v39 + 16) = 0LL;
          *(_QWORD *)(v39 + 24) = v37;
        }
      }
    }
    v40 = *(unsigned __int16 *)(a2 + 4);
    v41 = *(int *)(a2 + 12);
    if ( (UsbhLogMask & 0x10) != 0 )
    {
      if ( a1 )
      {
        v42 = *(_QWORD *)(a1 + 64);
        if ( v42 )
        {
          v43 = *(_QWORD *)(v42 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v42 + 880)) & *(_DWORD *)(v42 + 884));
          *(_DWORD *)v43 = 1986359664;
          *(_QWORD *)(v43 + 8) = 0LL;
          *(_QWORD *)(v43 + 16) = v41;
          *(_QWORD *)(v43 + 24) = v40;
        }
      }
    }
    *(_DWORD *)(32 * (*(unsigned int *)(a2 + 2400) + 43LL) + a2 + 24) = 30;
    KeSetEvent((PRKEVENT)(a2 + 472), 0, 0);
    v44 = 32LL * *(unsigned int *)(a2 + 2400);
    *(_QWORD *)(a2 + 384) = 0LL;
    *(_DWORD *)(a2 + 12) = 6;
    *(_DWORD *)(v44 + a2 + 1384) = 6;
LABEL_36:
    v31 = *(unsigned __int16 *)(a2 + 4);
    v32 = *(int *)(a2 + 12);
    if ( (UsbhLogMask & 0x10) != 0 )
    {
      if ( a1 )
      {
        v33 = *(_QWORD *)(a1 + 64);
        if ( v33 )
        {
          v34 = *(_QWORD *)(v33 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v33 + 880)) & *(_DWORD *)(v33 + 884));
          *(_DWORD *)v34 = 757952880;
          *(_QWORD *)(v34 + 24) = v31;
          *(_QWORD *)(v34 + 16) = v32;
          *(_QWORD *)(v34 + 8) = 0LL;
        }
      }
    }
    v35 = *(_DWORD *)(a2 + 12);
    v36 = 32 * (*(unsigned int *)(a2 + 2400) + 43LL);
    *(_DWORD *)(a2 + 448) = 0;
    *(_DWORD *)(v36 + a2 + 8) = v35;
LABEL_41:
    KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 440), v13);
    return;
  }
  switch ( 0x140000000uLL )
  {
    case 4uLL:
      v45 = *(unsigned __int16 *)(a2 + 4);
      if ( (UsbhLogMask & 0x200) != 0 )
      {
        if ( a1 )
        {
          v46 = *(_QWORD *)(a1 + 64);
          if ( v46 )
          {
            v47 = *(_QWORD *)(v46 + 888)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v46 + 880)) & *(_DWORD *)(v46 + 884));
            *(_DWORD *)v47 = 913323615;
            *(_QWORD *)(v47 + 8) = 0LL;
            *(_QWORD *)(v47 + 16) = a2;
            *(_QWORD *)(v47 + 24) = v45;
          }
        }
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_d(
          WPP_GLOBAL_Control->DeviceExtension,
          0,
          1,
          40,
          (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
          *(_WORD *)(a2 + 4));
      v48 = *(unsigned __int16 *)(a2 + 4);
      v49 = *(int *)(a2 + 12);
      if ( (UsbhLogMask & 0x10) != 0 )
      {
        if ( a1 )
        {
          v50 = *(_QWORD *)(a1 + 64);
          if ( v50 )
          {
            v51 = *(_QWORD *)(v50 + 888)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v50 + 880)) & *(_DWORD *)(v50 + 884));
            *(_DWORD *)v51 = 1986359664;
            *(_QWORD *)(v51 + 8) = 0LL;
            *(_QWORD *)(v51 + 16) = v49;
            *(_QWORD *)(v51 + 24) = v48;
          }
        }
      }
      *(_DWORD *)(32 * (*(unsigned int *)(a2 + 2400) + 43LL) + a2 + 24) = 30;
      KeSetEvent((PRKEVENT)(a2 + 472), 0, 0);
      v52 = 32LL * *(unsigned int *)(a2 + 2400);
      *(_QWORD *)(a2 + 384) = 0LL;
      *(_DWORD *)(a2 + 12) = 7;
      *(_DWORD *)(v52 + a2 + 1384) = 7;
      if ( (unsigned int)UsbhLogSignalSuspendEvent(a1, a2) )
        UsbhSetPcqEventStatus(a1, a2, 0LL);
      v53 = *(unsigned __int16 *)(a2 + 4);
      v54 = *(int *)(a2 + 12);
      if ( (UsbhLogMask & 0x10) != 0 && a1 )
      {
        v55 = *(_QWORD *)(a1 + 64);
        if ( v55 )
        {
          v56 = *(_QWORD *)(v55 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v55 + 880)) & *(_DWORD *)(v55 + 884));
          *(_DWORD *)v56 = 757952880;
          *(_QWORD *)(v56 + 8) = 0LL;
          *(_QWORD *)(v56 + 16) = v54;
          *(_QWORD *)(v56 + 24) = v53;
        }
      }
      v57 = *(_DWORD *)(a2 + 12);
      v58 = 32 * (*(unsigned int *)(a2 + 2400) + 43LL);
      *(_DWORD *)(a2 + 448) = 0;
      *(_DWORD *)(v58 + a2 + 8) = v57;
      goto LABEL_41;
    case 6uLL:
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_dq(
          WPP_GLOBAL_Control->DeviceExtension,
          v11,
          0x40000000u,
          41,
          (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
          *(_WORD *)(a2 + 4),
          a2);
      Log(a1, 512, 1597403191, 0LL, *(unsigned __int16 *)(a2 + 4));
      v65 = 32LL * *(unsigned int *)(a2 + 2400);
      *(_DWORD *)(a2 + 12) = 9;
      *(_DWORD *)(v65 + a2 + 1384) = 9;
      goto LABEL_81;
    case 9uLL:
      Log(a1, 512, 1597403186, a2, *(unsigned __int16 *)(a2 + 4));
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_d(
          WPP_GLOBAL_Control->DeviceExtension,
          0,
          1,
          37,
          (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
          *(_WORD *)(a2 + 4));
      UsbhSetPcqEventStatus(a1, a2, 2LL);
      KeSetEvent((PRKEVENT)(a2 + 472), 0, 0);
      v61 = 32LL * *(unsigned int *)(a2 + 2400);
      *(_DWORD *)(a2 + 12) = 6;
      *(_DWORD *)(v61 + a2 + 1384) = 6;
      goto LABEL_75;
    case 0xAuLL:
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_dq(
          WPP_GLOBAL_Control->DeviceExtension,
          v11,
          0x40000000u,
          39,
          (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
          *(_WORD *)(a2 + 4),
          a2);
      Log(a1, 512, 1597403189, 0LL, *(unsigned __int16 *)(a2 + 4));
      v64 = 32LL * *(unsigned int *)(a2 + 2400);
      *(_DWORD *)(a2 + 12) = 4;
      *(_DWORD *)(v64 + a2 + 1384) = 4;
LABEL_81:
      *(_QWORD *)(a2 + 384) = 0LL;
      UsbhUnlockPcqWithTag(a1, a2, v13, v63);
      UsbhHubQueueProcessChangeWorker(v66, a2);
      break;
    case 0xDuLL:
      Log(a1, 512, 1597403186, a2, *(unsigned __int16 *)(a2 + 4));
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_d(
          WPP_GLOBAL_Control->DeviceExtension,
          0,
          1,
          42,
          (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
          *(_WORD *)(a2 + 4));
      UsbhSetPcqEventStatus(a1, a2, 2LL);
      KeSetEvent((PRKEVENT)(a2 + 472), 0, 0);
      v62 = 32LL * *(unsigned int *)(a2 + 2400);
      *(_DWORD *)(a2 + 12) = 15;
      *(_DWORD *)(v62 + a2 + 1384) = 15;
LABEL_75:
      UsbhFlushPortChangeQueue(a1, a2, v59, v60);
      *(_QWORD *)(a2 + 384) = 0LL;
      UsbhUnlockPcqWithTag(a1, a2, v13, 0);
      break;
    default:
      v23 = *(unsigned __int16 *)(a2 + 4);
      if ( (UsbhLogMask & 0x200) != 0 )
      {
        if ( a1 )
        {
          v24 = *(_QWORD *)(a1 + 64);
          if ( v24 )
          {
            v25 = *(_QWORD *)(v24 + 888)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v24 + 880)) & *(_DWORD *)(v24 + 884));
            *(_DWORD *)v25 = 1483748959;
            *(_QWORD *)(v25 + 8) = 0LL;
            *(_QWORD *)(v25 + 16) = a2;
            *(_QWORD *)(v25 + 24) = v23;
          }
        }
      }
      v26 = 32LL * *(unsigned int *)(a2 + 2400);
      *(_DWORD *)(a2 + 12) = 19;
      *(_DWORD *)(v26 + a2 + 1384) = 19;
      goto LABEL_36;
  }
}
