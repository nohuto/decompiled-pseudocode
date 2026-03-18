/*
 * XREFs of Usbh_PCE_psPAUSED_Action @ 0x140004BE4
 * Callers:
 *     UsbhDispatch_PortChangeQueueEventEx @ 0x140008E90 (UsbhDispatch_PortChangeQueueEventEx.c)
 * Callees:
 *     UsbhUnlockPcqWithTag @ 0x140001F30 (UsbhUnlockPcqWithTag.c)
 *     UsbhFlushPortChangeQueue @ 0x14000481C (UsbhFlushPortChangeQueue.c)
 *     UsbhFreePortChangeQueueObject @ 0x1400048F4 (UsbhFreePortChangeQueueObject.c)
 *     PdoExt @ 0x140006D10 (PdoExt.c)
 *     FdoExt @ 0x14000BE50 (FdoExt.c)
 *     UsbhCancelResetTimeout @ 0x14001855C (UsbhCancelResetTimeout.c)
 *     UsbhReleaseEnumBusLockEx @ 0x140028B10 (UsbhReleaseEnumBusLockEx.c)
 *     Log @ 0x1400298B0 (Log.c)
 *     UsbhBusUnlatchPdo @ 0x140029F90 (UsbhBusUnlatchPdo.c)
 *     UsbhSignalPauseEvent @ 0x1400342C4 (UsbhSignalPauseEvent.c)
 *     WPP_RECORDER_SF_d @ 0x14003DA58 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dq @ 0x14003DE14 (WPP_RECORDER_SF_dq.c)
 *     UsbhSignalSyncDeviceReset @ 0x140047888 (UsbhSignalSyncDeviceReset.c)
 */

void __fastcall Usbh_PCE_psPAUSED_Action(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v7; // rax
  __int64 v8; // r10
  __int16 v9; // cx
  __int64 v10; // r13
  __int64 v11; // rdx
  __int64 v12; // rcx
  KIRQL v13; // al
  __int64 v14; // rdx
  __int64 v15; // r8
  KIRQL v16; // r14
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rcx
  int v23; // eax
  int v24; // esi
  __int64 v25; // rax
  __int64 v26; // rsi
  __int64 v27; // r8
  __int64 v28; // rdx
  __int64 v29; // rcx
  KIRQL v30; // bp
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // r9
  _QWORD **v35; // rsi
  _QWORD *v36; // r8
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rcx
  __int64 v40; // rdx
  int v41; // eax
  __int64 v42; // rdx
  __int64 v43; // rbp
  __int64 v44; // rsi
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // rdx
  __int64 v48; // r8
  __int64 v49; // r9
  KIRQL v50; // r15
  __int64 v51; // rcx
  __int64 v52; // r14
  __int64 v53; // rdx
  __int64 v54; // r8
  __int64 v55; // r9
  __int64 v56; // rcx
  __int64 v57; // r8
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // rbp
  __int64 Pool2; // rax
  _QWORD *v62; // rax
  _QWORD *v63; // rdx
  __int64 v64; // rdx
  __int64 v65; // rcx
  _QWORD *v66; // rax
  int v67; // esi
  int v68; // esi
  __int64 v69; // rax
  __int64 v70; // rax
  __int64 v71; // rax
  KIRQL v72; // r14
  int v73; // r9d

  v7 = FdoExt(a1, a2, a3, a4);
  v8 = *(unsigned __int16 *)(a2 + 4);
  LOBYTE(v9) = *(_WORD *)(a2 + 4);
  v10 = v7;
  if ( (UsbhLogMask & 0x200) != 0 )
  {
    if ( a1 )
    {
      v11 = *(_QWORD *)(a1 + 64);
      if ( v11 )
      {
        v12 = *(_QWORD *)(v11 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v11 + 880)) & *(_DWORD *)(v11 + 884));
        *(_DWORD *)v12 = 812661041;
        *(_QWORD *)(v12 + 8) = 0LL;
        *(_QWORD *)(v12 + 16) = a2;
        *(_QWORD *)(v12 + 24) = v8;
        v9 = *(_WORD *)(a2 + 4);
      }
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_dq(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)WPP_GLOBAL_Control,
      (unsigned int)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
      45,
      (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
      v9,
      a3);
  v13 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 440));
  v15 = *(unsigned __int16 *)(a2 + 4);
  *(_DWORD *)(a2 + 448) = 1;
  v16 = v13;
  if ( (UsbhLogMask & 0x10) != 0 )
  {
    if ( a1 )
    {
      v14 = *(_QWORD *)(a1 + 64);
      if ( v14 )
      {
        v17 = *(_QWORD *)(v14 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v14 + 880)) & *(_DWORD *)(v14 + 884));
        *(_DWORD *)v17 = 724267376;
        *(_QWORD *)(v17 + 8) = 0LL;
        *(_QWORD *)(v17 + 16) = 19LL;
        *(_QWORD *)(v17 + 24) = v15;
      }
    }
  }
  v18 = *(unsigned __int16 *)(a2 + 4);
  v19 = *(int *)(a2 + 12);
  if ( (UsbhLogMask & 0x10) != 0 )
  {
    if ( a1 )
    {
      v14 = *(_QWORD *)(a1 + 64);
      if ( v14 )
      {
        v20 = *(_QWORD *)(v14 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v14 + 880)) & *(_DWORD *)(v14 + 884));
        *(_DWORD *)v20 = 724267376;
        *(_QWORD *)(v20 + 8) = 0LL;
        *(_QWORD *)(v20 + 16) = v19;
        *(_QWORD *)(v20 + 24) = v18;
      }
    }
  }
  v21 = ((unsigned __int8)*(_DWORD *)(a2 + 2400) + 1) & 0x1F;
  *(_DWORD *)(a2 + 2400) = v21;
  v22 = a2 + 32 * (v21 + 43);
  *(_DWORD *)v22 = 19;
  v23 = *(_DWORD *)(a2 + 12);
  *(_DWORD *)(v22 + 8) = -1;
  *(_DWORD *)(v22 + 4) = v23;
  *(_QWORD *)(v22 + 12) = 0LL;
  *(_QWORD *)(v22 + 20) = 0LL;
  *(_DWORD *)(v22 + 28) = 0;
  v24 = *(_DWORD *)(a2 + 12);
  if ( v24 == 5 || *(_DWORD *)(a2 + 12) == 6 || *(_DWORD *)(a2 + 12) == 12 || *(_DWORD *)(a2 + 12) == 16 )
  {
    v25 = 32LL * *(unsigned int *)(a2 + 2400);
    *(_DWORD *)(a2 + 12) = v24;
    *(_DWORD *)(v25 + a2 + 1384) = v24;
    v26 = FdoExt(a1, v14, v18, v19);
    v27 = *(unsigned __int16 *)(a2 + 4);
    if ( (UsbhLogMask & 0x10) != 0 )
    {
      if ( a1 )
      {
        v28 = *(_QWORD *)(a1 + 64);
        if ( v28 )
        {
          v29 = *(_QWORD *)(v28 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v28 + 880)) & *(_DWORD *)(v28 + 884));
          *(_DWORD *)v29 = 1397778803;
          *(_QWORD *)(v29 + 8) = 0LL;
          *(_QWORD *)(v29 + 16) = 0LL;
          *(_QWORD *)(v29 + 24) = v27;
        }
      }
    }
    v30 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v26 + 4944));
    if ( *(_QWORD *)(a2 + 792) )
    {
      *(_QWORD *)(a2 + 792) = 0LL;
      KeSetEvent((PRKEVENT)(a2 + 800), 0, 0);
    }
    KeReleaseSpinLock((PKSPIN_LOCK)(v26 + 4944), v30);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_d(
        WPP_GLOBAL_Control->DeviceExtension,
        0,
        1,
        55,
        (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
        *(_WORD *)(a2 + 4));
    FdoExt(a1, v31, v32, v33);
    v35 = (_QWORD **)(a2 + 456);
    while ( 1 )
    {
      v36 = *v35;
      if ( *v35 == v35 )
        break;
      if ( (_QWORD **)v36[1] != v35 )
        goto LABEL_71;
      v66 = (_QWORD *)*v36;
      if ( *(_QWORD **)(*v36 + 8LL) != v36 )
        goto LABEL_71;
      *v35 = v66;
      LOBYTE(v34) = 1;
      v66[1] = v35;
      UsbhFreePortChangeQueueObject(a1, a2, (__int64)(v36 - 2), v34);
    }
    v37 = *(unsigned __int16 *)(a2 + 4);
    v38 = *(int *)(a2 + 12);
    *(_DWORD *)(a2 + 2876) = 0;
    *(_BYTE *)(a2 + 2839) = 0;
    if ( (UsbhLogMask & 0x10) != 0 )
    {
      if ( a1 )
      {
        v39 = *(_QWORD *)(a1 + 64);
        if ( v39 )
        {
          v40 = *(_QWORD *)(v39 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v39 + 880)) & *(_DWORD *)(v39 + 884));
          *(_DWORD *)v40 = 757952880;
          *(_QWORD *)(v40 + 8) = 0LL;
          *(_QWORD *)(v40 + 16) = v38;
          *(_QWORD *)(v40 + 24) = v37;
        }
      }
    }
    v41 = *(_DWORD *)(a2 + 12);
    v42 = 32 * (*(unsigned int *)(a2 + 2400) + 43LL);
    *(_DWORD *)(a2 + 448) = 0;
    *(_DWORD *)(v42 + a2 + 8) = v41;
    KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 440), v16);
    v43 = *(unsigned __int16 *)(a2 + 4);
    v44 = 0LL;
    if ( (UsbhLogMask & 0x100) != 0 )
    {
      if ( a1 )
      {
        v45 = *(_QWORD *)(a1 + 64);
        if ( v45 )
        {
          v46 = *(_QWORD *)(v45 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v45 + 880)) & *(_DWORD *)(v45 + 884));
          *(_DWORD *)v46 = 1329877100;
          *(_QWORD *)(v46 + 8) = 0LL;
          *(_QWORD *)(v46 + 16) = v43;
          *(_QWORD *)(v46 + 24) = 1884308559LL;
        }
      }
    }
    v50 = KeAcquireSpinLockRaiseToDpc(&HubG);
    qword_14006F5E0 = (__int64)&dword_14006F5E8;
    if ( (UsbhLogMask & 8) != 0 )
    {
      if ( a1 )
      {
        v47 = *(_QWORD *)(a1 + 64);
        if ( v47 )
        {
          v51 = *(_QWORD *)(v47 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v47 + 880)) & *(_DWORD *)(v47 + 884));
          *(_DWORD *)v51 = 1413771367;
          *(_QWORD *)(v51 + 8) = 0LL;
          *(_QWORD *)(v51 + 16) = v43;
          *(_QWORD *)(v51 + 24) = 0LL;
        }
      }
    }
    if ( (_WORD)v43 )
    {
      v52 = FdoExt(a1, v47, v48, v49);
      if ( (unsigned __int16)v43 <= *(unsigned __int8 *)(FdoExt(a1, v53, v54, v55) + 2938) )
      {
        v56 = *(_QWORD *)(v52 + 3056);
        if ( v56 )
        {
          v57 = v56 + 2928 * v43 - 2928;
          if ( (UsbhLogMask & 8) != 0 )
          {
            if ( a1 )
            {
              v58 = *(_QWORD *)(a1 + 64);
              if ( v58 )
              {
                v59 = *(_QWORD *)(v58 + 888)
                    + 32LL
                    * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v58 + 880)) & *(_DWORD *)(v58 + 884));
                *(_DWORD *)v59 = 1044672615;
                *(_QWORD *)(v59 + 8) = 0LL;
                *(_QWORD *)(v59 + 16) = v43;
                *(_QWORD *)(v59 + 24) = v57;
              }
            }
          }
          if ( v57 )
          {
            v44 = *(_QWORD *)(v57 + 392);
            if ( v44 )
            {
              v60 = PdoExt(*(_QWORD *)(v57 + 392));
              Pool2 = ExAllocatePool2(64LL, 48LL, 1112885333LL);
              if ( Pool2 )
              {
                *(_DWORD *)Pool2 = 1668571500;
                *(_QWORD *)(Pool2 + 32) = v44;
                *(_DWORD *)(Pool2 + 24) = 1884308559;
                *(_QWORD *)(Pool2 + 40) = 0LL;
                v62 = (_QWORD *)(Pool2 + 8);
                v63 = *(_QWORD **)(v60 + 1280);
                if ( *v63 != v60 + 1272 )
LABEL_71:
                  __fastfail(3u);
                *v62 = v60 + 1272;
                v62[1] = v63;
                *v63 = v62;
                *(_QWORD *)(v60 + 1280) = v62;
              }
              else
              {
                ++*(_DWORD *)(v60 + 1288);
              }
            }
          }
        }
      }
    }
    qword_14006F5E0 = 0LL;
    KeReleaseSpinLock(&HubG, v50);
    if ( (UsbhLogMask & 0x200) != 0 )
    {
      if ( a1 )
      {
        v64 = *(_QWORD *)(a1 + 64);
        if ( v64 )
        {
          v65 = *(_QWORD *)(v64 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v64 + 880)) & *(_DWORD *)(v64 + 884));
          *(_DWORD *)v65 = 1634744625;
          *(_QWORD *)(v65 + 8) = 0LL;
          *(_QWORD *)(v65 + 16) = a2;
          *(_QWORD *)(v65 + 24) = v44;
        }
      }
    }
    if ( v44 )
    {
      *(_DWORD *)(a2 + 416) = 1;
      v72 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v10 + 5168));
      if ( *(_QWORD *)(PdoExt(v44) + 864) )
      {
        Log(a1, 4, 825847906, v44, 0LL);
        KeReleaseSpinLock((PKSPIN_LOCK)(v10 + 5168), v72);
        UsbhCancelResetTimeout(a1, a2, 1LL);
        UsbhReleaseEnumBusLockEx(a1, a3, *(unsigned __int16 *)(a2 + 4));
        UsbhSignalSyncDeviceReset(a1, v44, a2, 3221225473LL);
      }
      else
      {
        KeReleaseSpinLock((PKSPIN_LOCK)(v10 + 5168), v72);
      }
      UsbhBusUnlatchPdo(a1, v44, a2, v73, 0LL);
    }
  }
  else
  {
    UsbhFlushPortChangeQueue(a1, a2, v18, v19);
    v67 = v24 - 10;
    if ( v67 )
    {
      v68 = v67 - 3;
      if ( v68 )
      {
        if ( v68 == 1 )
        {
          v69 = 32LL * *(unsigned int *)(a2 + 2400);
          *(_DWORD *)(a2 + 12) = 3;
          *(_DWORD *)(v69 + a2 + 1384) = 3;
        }
      }
      else
      {
        v70 = 32LL * *(unsigned int *)(a2 + 2400);
        *(_DWORD *)(a2 + 12) = 12;
        *(_DWORD *)(v70 + a2 + 1384) = 12;
      }
    }
    else
    {
      v71 = 32LL * *(unsigned int *)(a2 + 2400);
      *(_DWORD *)(a2 + 12) = 8;
      *(_DWORD *)(v71 + a2 + 1384) = 8;
    }
    UsbhSignalPauseEvent(a1, a2);
    UsbhUnlockPcqWithTag(a1, a2, v16, 0);
  }
}
