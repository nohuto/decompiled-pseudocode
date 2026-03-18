/*
 * XREFs of UsbhReset2Complete @ 0x140028D20
 * Callers:
 *     UsbhReset1Complete @ 0x1400188C0 (UsbhReset1Complete.c)
 * Callees:
 *     PdoExt @ 0x140006D10 (PdoExt.c)
 *     Usbh_UsbdReadFrameCounter @ 0x14000835C (Usbh_UsbdReadFrameCounter.c)
 *     UsbhException @ 0x1400094F8 (UsbhException.c)
 *     FdoExt @ 0x14000BE50 (FdoExt.c)
 *     UsbhFdoCheckUpstreamConnectionState @ 0x140012820 (UsbhFdoCheckUpstreamConnectionState.c)
 *     Usb_Disconnected @ 0x1400155D4 (Usb_Disconnected.c)
 *     UsbhUnlinkPdoDeviceHandle @ 0x140015900 (UsbhUnlinkPdoDeviceHandle.c)
 *     Usbh_Disconnect_PdoEvent @ 0x140016318 (Usbh_Disconnect_PdoEvent.c)
 *     UsbhEtwLogHubIrpEvent @ 0x140018260 (UsbhEtwLogHubIrpEvent.c)
 *     UsbhCancelResetTimeout @ 0x14001855C (UsbhCancelResetTimeout.c)
 *     UsbhResetPort @ 0x140018C04 (UsbhResetPort.c)
 *     UsbhAcquireEnumBusLock @ 0x140018F14 (UsbhAcquireEnumBusLock.c)
 *     UsbhWait @ 0x14001A1D4 (UsbhWait.c)
 *     UsbhAcquirePdoStateLock @ 0x140023C80 (UsbhAcquirePdoStateLock.c)
 *     UsbhBusConnectPdo @ 0x1400243D4 (UsbhBusConnectPdo.c)
 *     UsbhFreeID @ 0x14002796C (UsbhFreeID.c)
 *     UsbhSetupDevice @ 0x1400280C8 (UsbhSetupDevice.c)
 *     UsbhReleaseEnumBusLockEx @ 0x140028B10 (UsbhReleaseEnumBusLockEx.c)
 *     Log @ 0x1400298B0 (Log.c)
 *     UsbhDisablePort @ 0x140029930 (UsbhDisablePort.c)
 *     UsbhBusUnlatchPdo @ 0x140029F90 (UsbhBusUnlatchPdo.c)
 *     UsbhInitializeDevice @ 0x14002A2B4 (UsbhInitializeDevice.c)
 *     UsbhAllocateTimeoutObject @ 0x14002A488 (UsbhAllocateTimeoutObject.c)
 *     WPP_RECORDER_SF_d @ 0x14003DA58 (WPP_RECORDER_SF_d.c)
 *     UsbhPCE_Check @ 0x14004317C (UsbhPCE_Check.c)
 *     UsbhBusIf_GetContainerIdForPort @ 0x140056D90 (UsbhBusIf_GetContainerIdForPort.c)
 *     UsbhBusIf_SetContainerIdForPort @ 0x140056EA8 (UsbhBusIf_SetContainerIdForPort.c)
 *     UsbhSetEnumerationFailed @ 0x140058C08 (UsbhSetEnumerationFailed.c)
 *     UsbhBuildContainerID @ 0x140059400 (UsbhBuildContainerID.c)
 *     UsbhInsertDeviceIntoGlobalList @ 0x14005C26C (UsbhInsertDeviceIntoGlobalList.c)
 *     __security_check_cookie @ 0x140060F40 (__security_check_cookie.c)
 */

__int64 __fastcall UsbhReset2Complete(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v6; // r15d
  __int64 v7; // rdx
  __int64 v8; // rcx
  _DWORD *v9; // r13
  KSPIN_LOCK *v10; // rbx
  KIRQL v11; // al
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  int FrameCounter; // eax
  __int64 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // rcx
  int v19; // eax
  __int64 v20; // rbx
  __int64 v21; // r8
  __int64 v22; // rdx
  __int64 v23; // rcx
  unsigned int v24; // r13d
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rdx
  int v28; // eax
  KSPIN_LOCK *v29; // rax
  KSPIN_LOCK *v30; // r14
  int inserted; // r13d
  KIRQL v32; // al
  __int64 v33; // rdx
  int v34; // r9d
  int v35; // r9d
  __int64 v37; // r8
  __int64 v38; // rdx
  __int64 v39; // rcx
  int v40; // eax
  __int64 v41; // r8
  int v42; // ebx
  __int64 v43; // rdx
  __int64 v44; // rcx
  unsigned __int16 v45; // r8
  __int64 v46; // rdx
  int v47; // r9d
  _DWORD *v48; // rax
  int v49; // r9d
  _DWORD *v50; // r14
  __int64 v51; // [rsp+20h] [rbp-49h]
  __int64 v52; // [rsp+20h] [rbp-49h]
  __int64 v53; // [rsp+20h] [rbp-49h]
  __int64 v54; // [rsp+20h] [rbp-49h]
  __int64 v55; // [rsp+20h] [rbp-49h]
  __int64 v56; // [rsp+20h] [rbp-49h]
  __int64 v57; // [rsp+28h] [rbp-41h]
  __int64 v58; // [rsp+28h] [rbp-41h]
  __int64 v59; // [rsp+28h] [rbp-41h]
  unsigned int v60; // [rsp+50h] [rbp-19h]
  char v61; // [rsp+54h] [rbp-15h]
  KIRQL v62; // [rsp+55h] [rbp-14h]
  int v63; // [rsp+58h] [rbp-11h]
  _DWORD *v64; // [rsp+60h] [rbp-9h]
  int v65; // [rsp+68h] [rbp-1h] BYREF
  unsigned int v66; // [rsp+6Ch] [rbp+3h] BYREF
  PVOID P; // [rsp+70h] [rbp+7h] BYREF
  _DWORD v68[2]; // [rsp+78h] [rbp+Fh] BYREF
  __int16 v69; // [rsp+80h] [rbp+17h]
  __int16 v70; // [rsp+82h] [rbp+19h]

  v65 = 0;
  v66 = 0;
  v70 = 0;
  v6 = 1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      32,
      (__int64)&WPP_8026ecaf353e33c620bb7ebcf688be2f_Traceguids,
      *(_WORD *)(a2 + 4));
  if ( (UsbhLogMask & 0x400) != 0 )
  {
    if ( a1 )
    {
      v7 = *(_QWORD *)(a1 + 64);
      if ( v7 )
      {
        v8 = *(_QWORD *)(v7 + 888)
           + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v7 + 880)) & *(_DWORD *)(v7 + 884));
        *(_DWORD *)v8 = 1664242288;
        *(_QWORD *)(v8 + 8) = 0LL;
        *(_QWORD *)(v8 + 16) = a2;
        *(_QWORD *)(v8 + 24) = 0LL;
      }
    }
  }
  v64 = FdoExt(a1);
  v9 = v64;
  v10 = (KSPIN_LOCK *)(FdoExt(a1) + 766);
  v11 = KeAcquireSpinLockRaiseToDpc(v10);
  KeReleaseSpinLock(v10, v11);
  UsbhCancelResetTimeout(a1, a2, 0);
  LODWORD(v57) = 0;
  LODWORD(v51) = *(unsigned __int16 *)(a2 + 4);
  UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_ENUM_RESET2_COMPLETE, v51, v57);
  FrameCounter = Usbh_UsbdReadFrameCounter(a1, v12, v13, v14);
  v16 = *(unsigned int *)(a2 + 544);
  *(_DWORD *)(a2 + 852) = FrameCounter;
  v68[0] = FrameCounter - *(_DWORD *)(a2 + 848);
  v69 = *(_WORD *)(a2 + 4);
  v68[1] = v16;
  if ( (UsbhLogMask & 0x400) != 0 )
  {
    if ( a1 )
    {
      v17 = *(_QWORD *)(a1 + 64);
      if ( v17 )
      {
        v18 = *(_QWORD *)(v17 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v17 + 880)) & *(_DWORD *)(v17 + 884));
        *(_DWORD *)v18 = 825388645;
        *(_QWORD *)(v18 + 8) = 0LL;
        *(_QWORD *)(v18 + 16) = a2;
        *(_QWORD *)(v18 + 24) = v16;
      }
    }
  }
  UsbhWait(a1, *(_DWORD *)(a2 + 544) != 0 ? 100 : 15);
  v63 = 30;
  v19 = UsbhInitializeDevice(a1, a3, a2);
  LODWORD(v58) = 0;
  LODWORD(v52) = *(unsigned __int16 *)(a2 + 4);
  v20 = v19;
  UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_ENUM_INITIALIZE_DEVICE_COMPLETE, v52, v58);
  v21 = *(unsigned __int16 *)(a2 + 4);
  if ( (UsbhLogMask & 0x400) != 0 )
  {
    if ( a1 )
    {
      v22 = *(_QWORD *)(a1 + 64);
      if ( v22 )
      {
        v23 = *(_QWORD *)(v22 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v22 + 880)) & *(_DWORD *)(v22 + 884));
        *(_DWORD *)v23 = 842165861;
        *(_QWORD *)(v23 + 8) = 0LL;
        *(_QWORD *)(v23 + 16) = v21;
        *(_QWORD *)(v23 + 24) = v20;
      }
    }
  }
  if ( (int)v20 >= 0 )
  {
    v24 = 0;
    v61 = 0;
    v63 = 32;
    UsbhReleaseEnumBusLockEx(a1, *(_QWORD *)(a2 + 376), *(_WORD *)(a2 + 4));
    UsbhAcquirePdoStateLock(v25, *(_QWORD *)(a2 + 376), 12);
    if ( a3 && PdoExt(a3)[281] == 3 )
    {
      Log(a1, 1024, 1936999531, a2, *(unsigned __int16 *)(a2 + 4));
      v26 = *(_QWORD *)(a2 + 376);
      LODWORD(v20) = 0;
      v61 = 1;
      *(_DWORD *)(v26 + 136) = 0;
      qword_14006F5E0 = 0LL;
      *(_DWORD *)(v26 + 88) = 1734964085;
      KeReleaseSpinLock(&HubG, *(_BYTE *)(v26 + 132));
    }
    else
    {
      v27 = *(_QWORD *)(a2 + 376);
      *(_DWORD *)(v27 + 136) = 0;
      qword_14006F5E0 = 0LL;
      *(_DWORD *)(v27 + 88) = 1734964085;
      KeReleaseSpinLock(&HubG, *(_BYTE *)(v27 + 132));
      v28 = UsbhSetupDevice(a1, a3, &v65);
      v20 = v28;
      LODWORD(v59) = v28;
      LODWORD(v53) = *(unsigned __int16 *)(a2 + 4);
      UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_ENUM_SETUP_DEVICE_COMPLETE, v53, v59);
      Log(a1, 1024, 1701720627, *(unsigned __int16 *)(a2 + 4), v20);
    }
    while ( 1 )
    {
      if ( (int)v20 >= 0 )
      {
        v20 = (int)UsbhFdoCheckUpstreamConnectionState(a1, &v66);
        Log(a1, 1024, 1701720628, *(unsigned __int16 *)(a2 + 4), v20);
      }
      Log(a1, 1024, 1936999534, a2, *(unsigned __int16 *)(a2 + 4));
      if ( (v20 & 0xC0000000) == 0xC0000000 )
        break;
      v29 = (KSPIN_LOCK *)PdoExt(a3);
      v30 = v29;
      if ( (*((_DWORD *)v29 + 355) & 0x200) == 0 || v61 == 1 )
        goto LABEL_41;
      v60 = v24 + 1;
      inserted = 4;
      v32 = KeAcquireSpinLockRaiseToDpc(v29 + 351);
      v62 = v32;
      if ( !*((_DWORD *)v30 + 704) )
      {
        inserted = UsbhInsertDeviceIntoGlobalList(a1, a3);
        v32 = v62;
        if ( inserted == 1 )
          *((_DWORD *)v30 + 704) = 1;
      }
      KeReleaseSpinLock(v30 + 351, v32);
      if ( inserted == 3 )
      {
        LODWORD(v59) = -1073741823;
        LODWORD(v53) = *(unsigned __int16 *)(a2 + 4);
        UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_ENUM_DUPE_SERIAL_NUMBER, v53, v59);
        UsbhException(
          a1,
          *(unsigned __int16 *)(a2 + 4),
          40LL,
          (const void *)v30[267],
          *((_DWORD *)v30 + 533),
          v20,
          0,
          usbfile_busfunc_c,
          1932,
          0);
        UsbhFreeID((__int64)(v30 + 266));
        *((_DWORD *)v30 + 355) &= ~0x200u;
        goto LABEL_41;
      }
      if ( inserted != 2 )
      {
        if ( inserted == 4 )
        {
          LODWORD(v20) = -1073741823;
          goto LABEL_43;
        }
        goto LABEL_41;
      }
      if ( (unsigned int)UsbhPCE_Check(a1, a2, *(_QWORD *)(a2 + 376)) )
      {
        LODWORD(v20) = -1073741823;
        *(_DWORD *)(a2 + 544) = 3;
        goto LABEL_43;
      }
      UsbhWait(a1, dword_14006F590);
      v24 = v60;
      if ( v60 > dword_14006F594 )
      {
        LODWORD(v20) = -1073741823;
        LODWORD(v59) = -1073741823;
        LODWORD(v53) = *(unsigned __int16 *)(a2 + 4);
        UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_ENUM_REPLICANT_TIMEOUT, v53, v59);
        UsbhException(a1, *(unsigned __int16 *)(a2 + 4), 70LL, 0LL, 0, -1073741823, 0, usbfile_busfunc_c, 1987, 0);
        PdoExt(a3)[705] = 1073807363;
        goto LABEL_43;
      }
    }
    if ( Usb_Disconnected(v20) )
    {
      Log(a1, 1024, 1701720644, v34, v33);
      UsbhBusUnlatchPdo(a1, a3, a2, v35, 0LL);
      LODWORD(v59) = v20;
      LODWORD(v54) = *(unsigned __int16 *)(a2 + 4);
      UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_ENUM_HUB_DISCONNECT, v54, v59);
      Usbh_Disconnect_PdoEvent(a1, a3, 3, *(_QWORD *)(a2 + 376));
      return 3LL;
    }
    Log(a1, 1024, 1701725522, v34, v33);
    UsbhDisablePort(a1, a2);
LABEL_41:
    v9 = v64;
  }
  if ( (v20 & 0xC0000000) == 0xC0000000 )
  {
LABEL_43:
    v37 = *(unsigned __int16 *)(a2 + 4);
    P = 0LL;
    if ( _bittest(&UsbhLogMask, 0xAu) )
    {
      if ( a1 )
      {
        v38 = *(_QWORD *)(a1 + 64);
        if ( v38 )
        {
          v39 = *(_QWORD *)(v38 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v38 + 880)) & *(_DWORD *)(v38 + 884));
          *(_DWORD *)v39 = 828794227;
          *(_QWORD *)(v39 + 24) = (int)v20;
          *(_QWORD *)(v39 + 8) = 0LL;
          *(_QWORD *)(v39 + 16) = v37;
        }
      }
    }
    v40 = UsbhAllocateTimeoutObject(a1, a2, &P);
    v41 = *(unsigned int *)(a2 + 544);
    v42 = v40;
    if ( (unsigned int)v41 >= 3 || v40 < 0 )
    {
      if ( P )
        ExFreePoolWithTag(P, 0);
      LODWORD(v59) = v42;
      LODWORD(v53) = *(unsigned __int16 *)(a2 + 4);
      UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_ENUM_COMPLETE, v53, v59);
      UsbhSetEnumerationFailed(a1, a2, a3, v63, (__int64)v68, v42);
      return 0;
    }
    else
    {
      if ( _bittest(&UsbhLogMask, 0xAu) && a1 )
      {
        v43 = *(_QWORD *)(a1 + 64);
        if ( v43 )
        {
          v44 = *(_QWORD *)(v43 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v43 + 880)) & *(_DWORD *)(v43 + 884));
          *(_DWORD *)v44 = 845571443;
          *(_QWORD *)(v44 + 8) = 0LL;
          *(_QWORD *)(v44 + 16) = v41;
          *(_QWORD *)(v44 + 24) = v40;
        }
      }
      UsbhDisablePort(a1, a2);
      v45 = *(_WORD *)(a2 + 4);
      v46 = *(_QWORD *)(a2 + 376);
      ++*(_DWORD *)(a2 + 544);
      UsbhAcquireEnumBusLock(a1, v46, v45);
      UsbhUnlinkPdoDeviceHandle(a1, a3, 2017740897, 1);
      UsbhBusUnlatchPdo(a1, a3, a2, v47, 0LL);
      LODWORD(v59) = v42;
      LODWORD(v55) = *(unsigned __int16 *)(a2 + 4);
      UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_ENUM_RETRY, v55, v59);
      UsbhResetPort(a1, a2, (__int64)P);
    }
  }
  else
  {
    v48 = PdoExt(a3);
    v50 = v48;
    if ( !*((_BYTE *)v48 + 2732) && (v48[355] & 0x200) != 0 && (v48[295] & 0x10) == 0 )
      UsbhBuildContainerID(a1, a3);
    if ( !*((_BYTE *)v50 + 2732) )
      goto LABEL_65;
    if ( (v9[640] & 1) != 0 )
      UsbhBusIf_SetContainerIdForPort(a1, *((unsigned __int16 *)v50 + 714), v50 + 679);
    if ( !*((_BYTE *)v50 + 2732) )
    {
LABEL_65:
      if ( (v9[640] & 1) != 0 )
      {
        if ( (int)UsbhBusIf_GetContainerIdForPort(a1, *((unsigned __int16 *)v50 + 714), v50 + 679) >= 0 )
          *((_BYTE *)v50 + 2732) = 1;
        LODWORD(v20) = 0;
      }
    }
    UsbhBusUnlatchPdo(a1, a3, a2, v49, 0LL);
    LODWORD(v59) = v20;
    LODWORD(v56) = *(unsigned __int16 *)(a2 + 4);
    UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_ENUM_COMPLETE, v56, v59);
    PdoExt(a3)[705] = 0;
    UsbhBusConnectPdo(a1, a2);
    return 0;
  }
  return v6;
}
