/*
 * XREFs of UsbhHubDispatchPortEvent @ 0x140007260
 * Callers:
 *     UsbhHubRunPortChangeQueue @ 0x1400083A0 (UsbhHubRunPortChangeQueue.c)
 *     UsbhHubProcessTimeoutObj @ 0x140038DCC (UsbhHubProcessTimeoutObj.c)
 * Callees:
 *     PdoExt @ 0x140006D10 (PdoExt.c)
 *     UsbhWaitConnect @ 0x140006D60 (UsbhWaitConnect.c)
 *     Usbh_UsbdReadFrameCounter @ 0x14000835C (Usbh_UsbdReadFrameCounter.c)
 *     UsbhException @ 0x1400094F8 (UsbhException.c)
 *     FdoExt @ 0x14000BE50 (FdoExt.c)
 *     UsbhDropDevice @ 0x14001846C (UsbhDropDevice.c)
 *     UsbhAcquireEnumBusLock @ 0x140018F14 (UsbhAcquireEnumBusLock.c)
 *     UsbhSignalResumeEvent @ 0x140019994 (UsbhSignalResumeEvent.c)
 *     UsbhReleaseEnumBusLockEx @ 0x140028B10 (UsbhReleaseEnumBusLockEx.c)
 *     Log @ 0x1400298B0 (Log.c)
 *     UsbhSignalSuspendEvent @ 0x14002AFB4 (UsbhSignalSuspendEvent.c)
 *     UsbhHandleSuspend @ 0x1400325D0 (UsbhHandleSuspend.c)
 *     UsbhEnumerate1 @ 0x140034800 (UsbhEnumerate1.c)
 *     UsbhEnumerate2 @ 0x140034CF0 (UsbhEnumerate2.c)
 *     UsbhTrapFatal_Dbg @ 0x14003964C (UsbhTrapFatal_Dbg.c)
 *     WPP_RECORDER_SF_ @ 0x14003D980 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x14003DA58 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dD @ 0x14003DB54 (WPP_RECORDER_SF_dD.c)
 *     WPP_RECORDER_SF_dq @ 0x14003DE14 (WPP_RECORDER_SF_dq.c)
 *     UsbhSignalSyncDeviceReset @ 0x140047888 (UsbhSignalSyncDeviceReset.c)
 *     UsbhHandleOvercurrent @ 0x14005750C (UsbhHandleOvercurrent.c)
 */

__int64 __fastcall UsbhHubDispatchPortEvent(__int64 a1, __int64 a2, __int64 a3, unsigned __int16 *a4)
{
  __int64 v7; // rax
  int v8; // r8d
  __int64 v9; // r10
  __int16 v10; // r11
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r15
  __int64 v19; // rdi
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  KIRQL v25; // r12
  __int64 v26; // rcx
  __int64 v27; // rsi
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rdi
  __int64 Pool2; // rax
  _QWORD *v37; // rax
  _QWORD *v38; // rdx
  __int64 v39; // r9
  unsigned __int8 v40; // cl
  unsigned __int8 v41; // r8
  unsigned __int8 v42; // cl
  unsigned __int8 v43; // r8
  unsigned __int8 v44; // cl
  unsigned __int8 v45; // r12
  __int64 v46; // rdx
  __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // r9
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // rdx
  __int64 v54; // rcx
  int v55; // ecx
  int v56; // esi
  __int64 v57; // rdi
  __int64 v58; // rdx
  int v59; // eax
  __int64 v60; // rdi
  int v61; // r8d
  int v62; // eax
  int v63; // eax
  int v64; // eax
  int v65; // eax
  int v66; // eax
  __int64 v67; // rdx
  __int64 v68; // rcx
  KIRQL v69; // si
  __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // rdx
  __int64 v73; // rcx
  __int64 v74; // rdi
  __int64 *v75; // r9
  __int64 v76; // rdx
  __int64 v77; // rcx
  int v78; // eax
  __int64 *v79; // rcx
  __int64 **v80; // rax
  __int64 v81; // rdx
  __int64 v82; // rcx
  _DWORD *v84; // rax
  _DWORD *v85; // rdi
  int v86; // eax
  __int64 v87; // r8
  __int64 v88; // rdx
  struct _KEVENT *v89; // rcx
  __int64 v90; // r9
  __int64 v91; // [rsp+50h] [rbp-48h]

  v7 = FdoExt(a1, a2, a3, a4);
  v9 = *(unsigned __int16 *)(a2 + 4);
  LOBYTE(v10) = *(_WORD *)(a2 + 4);
  v91 = v7;
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
        *(_DWORD *)v12 = 729179504;
        *(_QWORD *)(v12 + 8) = 0LL;
        *(_QWORD *)(v12 + 16) = a2;
        *(_QWORD *)(v12 + 24) = v9;
        v10 = *(_WORD *)(a2 + 4);
      }
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_dq(
      WPP_GLOBAL_Control->DeviceExtension,
      (unsigned int)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
      v8,
      88,
      (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
      v10,
      0);
  v13 = *(unsigned __int16 *)(a2 + 4);
  if ( (UsbhLogMask & 0x200) != 0 )
  {
    if ( a1 )
    {
      v14 = *(_QWORD *)(a1 + 64);
      if ( v14 )
      {
        v15 = *(_QWORD *)(v14 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v14 + 880)) & *(_DWORD *)(v14 + 884));
        *(_DWORD *)v15 = 1313891184;
        *(_QWORD *)(v15 + 8) = 0LL;
        *(_QWORD *)(v15 + 16) = v13;
        *(_QWORD *)(v15 + 24) = 0LL;
      }
    }
    if ( (UsbhLogMask & 0x200) != 0 )
    {
      if ( a1 )
      {
        v16 = *(_QWORD *)(a1 + 64);
        if ( v16 )
        {
          v17 = *(_QWORD *)(v16 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v16 + 880)) & *(_DWORD *)(v16 + 884));
          *(_DWORD *)v17 = 1145332592;
          *(_QWORD *)(v17 + 8) = 0LL;
          *(_QWORD *)(v17 + 16) = a2;
          *(_QWORD *)(v17 + 24) = a3;
        }
      }
    }
  }
  v18 = 0LL;
  v19 = *(unsigned __int16 *)(a2 + 4);
  if ( (UsbhLogMask & 0x100) != 0 )
  {
    if ( a1 )
    {
      v20 = *(_QWORD *)(a1 + 64);
      if ( v20 )
      {
        v21 = *(_QWORD *)(v20 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v20 + 880)) & *(_DWORD *)(v20 + 884));
        *(_DWORD *)v21 = 1329877100;
        *(_QWORD *)(v21 + 8) = 0LL;
        *(_QWORD *)(v21 + 16) = v19;
        *(_QWORD *)(v21 + 24) = 1884308559LL;
      }
    }
  }
  v25 = KeAcquireSpinLockRaiseToDpc(&HubG);
  qword_14006F5E0 = (__int64)&dword_14006F5E8;
  if ( (UsbhLogMask & 8) != 0 )
  {
    if ( a1 )
    {
      v22 = *(_QWORD *)(a1 + 64);
      if ( v22 )
      {
        v26 = *(_QWORD *)(v22 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v22 + 880)) & *(_DWORD *)(v22 + 884));
        *(_DWORD *)v26 = 1413771367;
        *(_QWORD *)(v26 + 8) = 0LL;
        *(_QWORD *)(v26 + 16) = v19;
        *(_QWORD *)(v26 + 24) = 0LL;
      }
    }
  }
  if ( !(_WORD)v19 )
    goto LABEL_140;
  v27 = FdoExt(a1, v22, v23, v24);
  if ( (unsigned __int16)v19 > *(unsigned __int8 *)(FdoExt(a1, v28, v29, v30) + 2938) )
    goto LABEL_140;
  v31 = *(_QWORD *)(v27 + 3056);
  if ( !v31 )
    goto LABEL_140;
  v32 = v31 + 2928 * v19 - 2928;
  if ( (UsbhLogMask & 8) != 0 )
  {
    if ( a1 )
    {
      v33 = *(_QWORD *)(a1 + 64);
      if ( v33 )
      {
        v34 = *(_QWORD *)(v33 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v33 + 880)) & *(_DWORD *)(v33 + 884));
        *(_DWORD *)v34 = 1044672615;
        *(_QWORD *)(v34 + 8) = 0LL;
        *(_QWORD *)(v34 + 16) = v19;
        *(_QWORD *)(v34 + 24) = v32;
      }
    }
  }
  if ( v32 && (v18 = *(_QWORD *)(v32 + 392)) != 0 )
  {
    v35 = *(_QWORD *)(v18 + 64);
    if ( !v35 )
      UsbhTrapFatal_Dbg(*(_QWORD *)(v32 + 392), 0LL);
    if ( *(_DWORD *)v35 != 1329877064 )
      UsbhTrapFatal_Dbg(*(_QWORD *)(v32 + 392), *(_QWORD *)(v18 + 64));
    Pool2 = ExAllocatePool2(64LL, 48LL, 1112885333LL);
    if ( Pool2 )
    {
      *(_DWORD *)Pool2 = 1668571500;
      *(_QWORD *)(Pool2 + 32) = v18;
      *(_DWORD *)(Pool2 + 24) = 1884308559;
      *(_QWORD *)(Pool2 + 40) = 0LL;
      v37 = (_QWORD *)(Pool2 + 8);
      v38 = *(_QWORD **)(v35 + 1280);
      if ( *v38 != v35 + 1272 )
        goto LABEL_183;
      *v37 = v35 + 1272;
      v37[1] = v38;
      *v38 = v37;
      *(_QWORD *)(v35 + 1280) = v37;
    }
    else
    {
      ++*(_DWORD *)(v35 + 1288);
    }
    qword_14006F5E0 = 0LL;
    KeReleaseSpinLock(&HubG, v25);
    *(_DWORD *)(a2 + 416) = 1;
  }
  else
  {
LABEL_140:
    qword_14006F5E0 = 0LL;
    KeReleaseSpinLock(&HubG, v25);
  }
  v39 = *a4;
  v40 = (v18 != 0) | 0x10;
  if ( (v39 & 1) == 0 )
    v40 = v18 != 0;
  *(_WORD *)(a2 + 420) = v39;
  v41 = v40;
  v42 = v40 | 2;
  if ( (v39 & 4) == 0 )
    v42 = v41;
  v43 = v42;
  v44 = v42 | 4;
  if ( (v39 & 8) == 0 )
    v44 = v43;
  v45 = v44 | 8;
  if ( (v39 & 2) == 0 )
    v45 = v44;
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
        *(_DWORD *)v47 = 1414087210;
        *(_QWORD *)(v47 + 24) = v45;
        *(_QWORD *)(v47 + 8) = 0LL;
        *(_QWORD *)(v47 + 16) = v39;
      }
    }
  }
  v48 = *(unsigned __int16 *)(a2 + 4);
  v49 = *(unsigned int *)(a2 + 400);
  if ( (UsbhLogMask & 0x200) != 0 )
  {
    if ( a1 )
    {
      v50 = *(_QWORD *)(a1 + 64);
      if ( v50 )
      {
        v51 = *(_QWORD *)(v50 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v50 + 880)) & *(_DWORD *)(v50 + 884));
        *(_DWORD *)v51 = 844382762;
        *(_QWORD *)(v51 + 8) = 0LL;
        *(_QWORD *)(v51 + 16) = v49;
        *(_QWORD *)(v51 + 24) = v48;
      }
    }
  }
  v52 = *(unsigned int *)(a3 + 8);
  if ( (UsbhLogMask & 0x200) != 0 )
  {
    if ( a1 )
    {
      v53 = *(_QWORD *)(a1 + 64);
      if ( v53 )
      {
        v54 = *(_QWORD *)(v53 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v53 + 880)) & *(_DWORD *)(v53 + 884));
        *(_DWORD *)v54 = 861159978;
        *(_QWORD *)(v54 + 24) = v45;
        *(_QWORD *)(v54 + 8) = 0LL;
        *(_QWORD *)(v54 + 16) = v52;
      }
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_dD(
        WPP_GLOBAL_Control->DeviceExtension,
        *(unsigned __int16 *)(a2 + 4),
        v52,
        89,
        (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
        *(_WORD *)(a2 + 4),
        *(_WORD *)(a2 + 420));
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_dD(
          WPP_GLOBAL_Control->DeviceExtension,
          *(unsigned __int16 *)(a2 + 4),
          v52,
          90,
          (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
          *(_WORD *)(a2 + 4),
          *(_DWORD *)(a2 + 400));
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          WPP_RECORDER_SF_dD(
            WPP_GLOBAL_Control->DeviceExtension,
            *(unsigned __int16 *)(a2 + 4),
            v52,
            91,
            (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
            *(_WORD *)(a2 + 4),
            *(_DWORD *)(a3 + 8));
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
          WPP_RECORDER_SF_dD(
            WPP_GLOBAL_Control->DeviceExtension,
            *(unsigned __int16 *)(a2 + 4),
            v52,
            92,
            (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
            *(_WORD *)(a2 + 4),
            v45);
      }
    }
  }
  if ( (*(_WORD *)(a2 + 420) & 0x108) == 0 && (*(_DWORD *)(a3 + 8) & 0x80008) == 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_d(
        WPP_GLOBAL_Control->DeviceExtension,
        0,
        1,
        93,
        (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
        *(_WORD *)(a2 + 4));
    Log(a1, 512, 1886353240, v45, *(unsigned int *)(a3 + 8));
    v45 &= ~8u;
    UsbhSignalResumeEvent(a1, a2);
    UsbhSignalSuspendEvent(a1, a2);
    UsbhException(a1, *(unsigned __int16 *)(a2 + 4), 60, a3, 56, 0, 0, (__int64)usbfile_pchange_c, 5582, 0);
  }
  v55 = *(_DWORD *)(a3 + 8);
  v56 = *(_DWORD *)(a3 + 32);
  v57 = ((unsigned __int8)*(_DWORD *)(a2 + 856) + 1) & 0xF;
  v58 = *(unsigned __int16 *)(a2 + 420);
  v59 = *(_DWORD *)(a2 + 400);
  *(_DWORD *)(a2 + 856) = v57;
  v60 = a2 + 32 * (v57 + 27);
  *(_DWORD *)(v60 + 4) = v55;
  *(_DWORD *)v60 = v59;
  *(_BYTE *)(v60 + 18) = v45;
  *(_WORD *)(v60 + 16) = v58;
  *(_QWORD *)(v60 + 8) = v18;
  *(_BYTE *)(v60 + 19) = 0;
  *(_DWORD *)(v60 + 20) = v56;
  *(_DWORD *)(v60 + 28) = 1;
  *(_DWORD *)(v60 + 24) = Usbh_UsbdReadFrameCounter(a1, v58, v52, v49) - v56;
  if ( !v18 )
  {
LABEL_62:
    if ( (*(_DWORD *)(a3 + 8) & 0x20000) == 0 || (v90 = *(_QWORD *)(a3 + 40), v90 == v18) )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_d(
          WPP_GLOBAL_Control->DeviceExtension,
          0,
          1,
          94,
          (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
          *(_WORD *)(a2 + 4));
      v62 = *(_DWORD *)(a2 + 400);
      if ( v62 )
      {
        v63 = v62 - 1;
        if ( v63 )
        {
          v64 = v63 - 1;
          if ( v64 )
          {
            v65 = v64 - 1;
            if ( v65 )
            {
              v66 = v65 - 1;
              if ( v66 )
              {
                if ( v66 == 1 )
                  *(_DWORD *)(a2 + 400) = UsbhHandleSuspend(a1, *(_QWORD *)(a3 + 8), v45, a2, v18);
              }
              else
              {
                if ( (*(_DWORD *)(a3 + 8) & 8) != 0 )
                {
                  *(_DWORD *)(a2 + 400) = UsbhHandleOvercurrent(a1, 4, v61, a2, v18);
                }
                else
                {
                  *(_DWORD *)(a2 + 400) = 4;
                  if ( (*(_DWORD *)(a3 + 8) & 0x20000) != 0 )
                    UsbhSignalSyncDeviceReset(a1, v18, a2, 3221225473LL);
                  if ( (*(_DWORD *)(a3 + 8) & 0x10000) != 0 )
                    UsbhSignalSyncDeviceReset(a1, v18, a2, 3221225473LL);
                  if ( (*(_DWORD *)(a3 + 8) & 0x40000) != 0 )
                    UsbhSignalSuspendEvent(a1, a2);
                  if ( (*(_DWORD *)(a3 + 8) & 0x100000) != 0 )
                  {
                    UsbhSignalResumeEvent(a1, a2);
                    if ( v45 == 1 )
                    {
                      UsbhAcquireEnumBusLock(a1, *(_QWORD *)(a2 + 376), *(unsigned __int16 *)(a2 + 4));
                      UsbhDropDevice(a1, a2, v18);
                    }
                  }
                }
                if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
                  && LOWORD(WPP_GLOBAL_Control->DeviceType) )
                {
                  WPP_RECORDER_SF_(
                    WPP_GLOBAL_Control->DeviceExtension,
                    0,
                    1,
                    96,
                    (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids);
                }
                Log(a1, 512, 1885435206, *(unsigned __int16 *)(a2 + 420), v45);
              }
            }
            else
            {
              if ( (*(_DWORD *)(a3 + 8) & 8) != 0 )
                UsbhHandleOvercurrent(a1, 3, v61, a2, v18);
              *(_DWORD *)(a2 + 400) = 3;
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
                && LOWORD(WPP_GLOBAL_Control->DeviceType) )
              {
                WPP_RECORDER_SF_(
                  WPP_GLOBAL_Control->DeviceExtension,
                  0,
                  1,
                  95,
                  (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids);
              }
              Log(a1, 512, 1701999174, *(unsigned __int16 *)(a2 + 420), v45);
            }
          }
          else
          {
            *(_DWORD *)(a2 + 400) = UsbhEnumerate2(a1, *(_QWORD *)(a3 + 8), v45, a2, v18);
          }
        }
        else
        {
          *(_DWORD *)(a2 + 400) = UsbhEnumerate1(a1, *(_QWORD *)(a3 + 8), v45, a2, v18);
        }
      }
      else
      {
        *(_DWORD *)(a2 + 400) = UsbhWaitConnect(a1, *(_QWORD *)(a3 + 8), v45, a2, v18);
      }
    }
    else
    {
      Log(a1, 512, 1685222994, v90, *(unsigned int *)(a3 + 8));
      UsbhSignalSyncDeviceReset(a1, *(_QWORD *)(a3 + 40), a2, 3221225486LL);
    }
    goto LABEL_72;
  }
  v84 = PdoExt(v18);
  v85 = v84;
  if ( !*((_BYTE *)v84 + 2740) || (*(_BYTE *)(a2 + 420) & 1) != 0 )
  {
    if ( (v84[355] & 0x400000) != 0 )
    {
      KeWaitForSingleObject(v84 + 736, Executive, 0, 0, 0LL);
      if ( (v85[355] & 0x4000000) != 0 && (*(_DWORD *)(a3 + 8) & 1) != 0 )
      {
        Log(a1, 512, 1144213585, HIBYTE(v85[355]) & 1, *(unsigned __int16 *)(a2 + 420));
        v85[355] |= 0x3000000u;
        v89 = (struct _KEVENT *)(v85 + 730);
        if ( (*(_BYTE *)(a2 + 420) & 1) != 0 )
          KeSetEvent(v89, 0, 0);
        else
          KeResetEvent(v89);
        KeSetEvent((PRKEVENT)(v85 + 736), 0, 0);
        goto LABEL_72;
      }
      KeSetEvent((PRKEVENT)(v85 + 736), 0, 0);
    }
    goto LABEL_62;
  }
  v86 = *(_DWORD *)(a3 + 8);
  if ( (v86 & 0x30008) != 0 )
  {
    if ( (v86 & 0x30000) != 0 )
    {
      Log(a1, 512, 1650742098, *(_QWORD *)(a3 + 40), *(unsigned int *)(a3 + 8));
      UsbhSignalSyncDeviceReset(a1, v18, a2, 3221225473LL);
    }
    Log(a1, 512, 1650741836, 0, *(unsigned int *)(a3 + 8));
    v87 = *(unsigned __int16 *)(a2 + 4);
    if ( *(_DWORD *)(v91 + 3072) == (_DWORD)v87 )
    {
      v88 = *(_QWORD *)(a2 + 376);
      if ( *(_QWORD *)(v91 + 3080) == v88 )
        UsbhReleaseEnumBusLockEx(a1, v88, v87);
    }
    UsbhException(a1, 0, 62, 0, 0, -1073741823, -1073704960, (__int64)usbfile_pchange_c, 5639, 1);
  }
LABEL_72:
  if ( !*(_DWORD *)(a2 + 416) )
    goto LABEL_103;
  if ( (UsbhLogMask & 0x400) != 0 )
  {
    if ( a1 )
    {
      v67 = *(_QWORD *)(a1 + 64);
      if ( v67 )
      {
        v68 = *(_QWORD *)(v67 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v67 + 880)) & *(_DWORD *)(v67 + 884));
        *(_DWORD *)v68 = 827354229;
        *(_QWORD *)(v68 + 8) = 0LL;
        *(_QWORD *)(v68 + 16) = v18;
        *(_QWORD *)(v68 + 24) = a2;
      }
    }
  }
  v69 = KeAcquireSpinLockRaiseToDpc(&HubG);
  qword_14006F5E0 = (__int64)&dword_14006F5E8;
  *(_DWORD *)(a2 + 416) = 0;
  if ( (UsbhLogMask & 0x400) != 0 )
  {
    if ( a1 )
    {
      v70 = *(_QWORD *)(a1 + 64);
      if ( v70 )
      {
        v71 = *(_QWORD *)(v70 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v70 + 880)) & *(_DWORD *)(v70 + 884));
        *(_DWORD *)v71 = 844131445;
        *(_QWORD *)(v71 + 8) = 0LL;
        *(_QWORD *)(v71 + 16) = v18;
        *(_QWORD *)(v71 + 24) = a2;
      }
    }
  }
  if ( (UsbhLogMask & 0x100) != 0 )
  {
    if ( a1 )
    {
      v72 = *(_QWORD *)(a1 + 64);
      if ( v72 )
      {
        v73 = *(_QWORD *)(v72 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v72 + 880)) & *(_DWORD *)(v72 + 884));
        *(_DWORD *)v73 = 1348891236;
        *(_QWORD *)(v73 + 8) = 0LL;
        *(_QWORD *)(v73 + 16) = v18;
        *(_QWORD *)(v73 + 24) = 1884308559LL;
      }
    }
  }
  if ( !v18 )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  v74 = *(_QWORD *)(v18 + 64);
  if ( !v74 )
    UsbhTrapFatal_Dbg(v18, 0LL);
  if ( *(_DWORD *)v74 != 1329877064 )
    UsbhTrapFatal_Dbg(v18, *(_QWORD *)(v18 + 64));
  v75 = *(__int64 **)(v74 + 1272);
  if ( v75 == (__int64 *)(v74 + 1272) )
  {
LABEL_95:
    v78 = *(_DWORD *)(v74 + 1288);
    if ( v78 )
      *(_DWORD *)(v74 + 1288) = v78 - 1;
    goto LABEL_101;
  }
  while ( 1 )
  {
    if ( (UsbhLogMask & 0x100) != 0 )
    {
      if ( a1 )
      {
        v76 = *(_QWORD *)(a1 + 64);
        if ( v76 )
        {
          v77 = *(_QWORD *)(v76 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v76 + 880)) & *(_DWORD *)(v76 + 884));
          *(_DWORD *)v77 = 1064591724;
          *(_QWORD *)(v77 + 8) = 0LL;
          *(_QWORD *)(v77 + 16) = v74;
          *(_QWORD *)(v77 + 24) = 1884308559LL;
        }
      }
    }
    if ( *((_DWORD *)v75 + 4) == 1884308559 && !v75[4] )
      break;
    v75 = (__int64 *)*v75;
    if ( v75 == (__int64 *)(v74 + 1272) )
      goto LABEL_95;
  }
  v79 = (__int64 *)*v75;
  if ( *(__int64 **)(*v75 + 8) != v75 || (v80 = (__int64 **)v75[1], *v80 != v75) )
LABEL_183:
    __fastfail(3u);
  *v80 = v79;
  v79[1] = (__int64)v80;
  ExFreePoolWithTag(v75 - 1, 0);
LABEL_101:
  if ( *(_QWORD *)(v74 + 1272) == v74 + 1272 && !*(_DWORD *)(v74 + 1288) )
    KeSetEvent((PRKEVENT)(v74 + 1296), 0, 0);
  qword_14006F5E0 = 0LL;
  KeReleaseSpinLock(&HubG, v69);
LABEL_103:
  if ( (UsbhLogMask & 0x200) != 0 )
  {
    if ( a1 )
    {
      v81 = *(_QWORD *)(a1 + 64);
      if ( v81 )
      {
        v82 = *(_QWORD *)(v81 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v81 + 880)) & *(_DWORD *)(v81 + 884));
        *(_DWORD *)v82 = 762733936;
        *(_QWORD *)(v82 + 8) = 0LL;
        *(_QWORD *)(v82 + 16) = a2;
        *(_QWORD *)(v82 + 24) = 0LL;
      }
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      97,
      (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
      *(_WORD *)(a2 + 4));
  return *(unsigned int *)(a2 + 400);
}
