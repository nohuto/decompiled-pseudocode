/*
 * XREFs of UsbhHubProcessIsr @ 0x14000D190
 * Callers:
 *     UsbhHubIsrWorker @ 0x1400334E0 (UsbhHubIsrWorker.c)
 * Callees:
 *     UsbhQueuePauseChange @ 0x140006628 (UsbhQueuePauseChange.c)
 *     UsbhDispatch_PortChangeQueueNullEvent @ 0x140008E28 (UsbhDispatch_PortChangeQueueNullEvent.c)
 *     UsbhDispatch_PortChangeQueueEvent @ 0x140008E50 (UsbhDispatch_PortChangeQueueEvent.c)
 *     UsbhException @ 0x1400094F8 (UsbhException.c)
 *     UsbhQueryPortState @ 0x140009A20 (UsbhQueryPortState.c)
 *     UsbhSyncSendCommand @ 0x14000A470 (UsbhSyncSendCommand.c)
 *     FdoExt @ 0x14000BE50 (FdoExt.c)
 *     UsbhEtwWrite @ 0x14000D0C0 (UsbhEtwWrite.c)
 *     UsbhDecHubBusy @ 0x14000F560 (UsbhDecHubBusy.c)
 *     UsbhIncHubBusy @ 0x14000F6F0 (UsbhIncHubBusy.c)
 *     Usb_Disconnected @ 0x1400155D4 (Usb_Disconnected.c)
 *     UsbhPostInterrupt @ 0x140020930 (UsbhPostInterrupt.c)
 *     Log @ 0x1400298B0 (Log.c)
 *     UsbhQueueWorkItemEx @ 0x14002BFA0 (UsbhQueueWorkItemEx.c)
 *     WPP_RECORDER_SF_ @ 0x14003D980 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x14003DA58 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dd @ 0x14003DC1C (WPP_RECORDER_SF_dd.c)
 *     UsbhPCE_HW_Stop @ 0x140043304 (UsbhPCE_HW_Stop.c)
 *     UsbhHubAckHubChange @ 0x140046A78 (UsbhHubAckHubChange.c)
 *     UsbhQueryHubState @ 0x140047294 (UsbhQueryHubState.c)
 *     __security_check_cookie @ 0x140060F40 (__security_check_cookie.c)
 */

__int64 __fastcall UsbhHubProcessIsr(PDEVICE_OBJECT DeviceObject, unsigned int a2, __int64 a3)
{
  __int64 v4; // r14
  void *DeviceExtension; // rdx
  __int64 v7; // rcx
  struct _KEVENT *v8; // r13
  __int64 v9; // r15
  unsigned __int16 v10; // r12
  void *v11; // rdx
  __int64 v12; // rcx
  void *v13; // rdx
  __int64 v14; // rcx
  _DWORD *v15; // rbx
  __int64 v16; // rcx
  __int64 v17; // r15
  __int64 v18; // r8
  void *v19; // rdx
  __int64 v20; // rcx
  void *v21; // rdx
  __int64 v22; // rcx
  _DWORD *v23; // r14
  __int64 v24; // rax
  __int64 v25; // r14
  void *v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rbx
  unsigned __int16 v30; // ax
  __int64 v31; // rcx
  __int64 v32; // rcx
  char v33; // bl
  _DWORD *v34; // rdx
  int v35; // ecx
  unsigned __int16 v36; // r14
  void *v37; // rdx
  __int64 v38; // rcx
  void *v39; // rdx
  __int64 v40; // rcx
  void *v41; // rdx
  __int64 v42; // rcx
  void *v43; // rdx
  __int64 v44; // rcx
  void *v45; // rdx
  __int64 v46; // rcx
  _DWORD *v47; // rbx
  __int64 v48; // rdx
  __int64 v49; // r10
  void *v50; // rdx
  __int64 v51; // rcx
  int v52; // r15d
  __int64 v53; // rbx
  void *v54; // rdx
  __int64 v55; // rcx
  _DWORD *v56; // r14
  __int64 v57; // r10
  void *v58; // rdx
  __int64 v59; // rcx
  signed __int32 v60; // eax
  __int64 v61; // rcx
  __int64 result; // rax
  __int64 v63; // r8
  void *v64; // rdx
  __int64 v65; // rcx
  void *v66; // rdx
  __int64 v67; // rcx
  void *v68; // rdx
  __int64 LockNV; // r8
  __int64 v70; // rcx
  __int16 v71; // r15
  __int64 v72; // rdx
  __int64 v73; // r9
  const void *v74; // r9
  __int64 v75; // rbx
  int v76; // eax
  char v77; // r9
  __int64 v78; // rdx
  __int64 v79; // r8
  __int16 v80; // r9
  const void *v81; // r9
  int v82; // r9d
  __int64 v83; // [rsp+20h] [rbp-A9h]
  __int64 v84; // [rsp+48h] [rbp-81h]
  unsigned __int16 v85; // [rsp+64h] [rbp-65h] BYREF
  unsigned int v86; // [rsp+68h] [rbp-61h] BYREF
  int v87; // [rsp+6Ch] [rbp-5Dh] BYREF
  __int16 v88[2]; // [rsp+70h] [rbp-59h] BYREF
  int v89; // [rsp+74h] [rbp-55h] BYREF
  int v90; // [rsp+78h] [rbp-51h] BYREF
  __int64 v91; // [rsp+80h] [rbp-49h]
  _WORD v92[4]; // [rsp+88h] [rbp-41h] BYREF
  __int64 v93; // [rsp+90h] [rbp-39h]
  unsigned int v94; // [rsp+98h] [rbp-31h] BYREF
  __int64 v95; // [rsp+A0h] [rbp-29h] BYREF
  __int64 v96; // [rsp+A8h] [rbp-21h]
  int v97; // [rsp+B0h] [rbp-19h] BYREF
  __int16 v98; // [rsp+B4h] [rbp-15h]
  __int16 v99; // [rsp+B6h] [rbp-13h]
  __int16 v100; // [rsp+B8h] [rbp-11h]
  __int16 v101; // [rsp+BAh] [rbp-Fh]
  _WORD v102[2]; // [rsp+C0h] [rbp-9h] BYREF
  int v103; // [rsp+C4h] [rbp-5h]
  int v104; // [rsp+C8h] [rbp-1h]
  int v110; // [rsp+E0h] [rbp+17h]

  v4 = a2;
  v93 = a3;
  v86 = a2;
  v87 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      36,
      (__int64)&WPP_e45bf104894738235e8d472f481bb2e2_Traceguids,
      a2);
  if ( (UsbhLogMask & 4) != 0 )
  {
    if ( DeviceObject )
    {
      DeviceExtension = DeviceObject->DeviceExtension;
      if ( DeviceExtension )
      {
        v7 = *((_QWORD *)DeviceExtension + 111)
           + 32LL
           * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)DeviceExtension + 220) & *((_DWORD *)DeviceExtension + 221));
        *(_DWORD *)v7 = 1467052649;
        *(_QWORD *)(v7 + 8) = 0LL;
        *(_QWORD *)(v7 + 16) = a3;
        *(_QWORD *)(v7 + 24) = v4;
      }
    }
  }
  v8 = (struct _KEVENT *)FdoExt((__int64)DeviceObject);
  v9 = UsbhIncHubBusy((_DWORD)DeviceObject, a3, (_DWORD)DeviceObject, 826438515, 0);
  v91 = v9;
  _InterlockedIncrement(&v8[114].Header.Lock);
  v10 = (unsigned __int8)v4;
  if ( (UsbhLogMask & 4) != 0 )
  {
    if ( DeviceObject )
    {
      v11 = DeviceObject->DeviceExtension;
      if ( v11 )
      {
        v12 = *((_QWORD *)v11 + 111)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v11 + 220) & *((_DWORD *)v11 + 221));
        *(_DWORD *)v12 = 2003923561;
        *(_QWORD *)(v12 + 16) = (unsigned __int8)v4;
        *(_QWORD *)(v12 + 8) = 0LL;
        *(_QWORD *)(v12 + 24) = 0LL;
      }
    }
  }
  if ( (_BYTE)v4 )
  {
    if ( (UsbhLogMask & 8) != 0 )
    {
      if ( DeviceObject )
      {
        v13 = DeviceObject->DeviceExtension;
        if ( v13 )
        {
          v14 = *((_QWORD *)v13 + 111)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v13 + 220) & *((_DWORD *)v13 + 221));
          *(_DWORD *)v14 = 1413771367;
          *(_QWORD *)(v14 + 16) = (unsigned __int8)v4;
          *(_QWORD *)(v14 + 8) = 0LL;
          *(_QWORD *)(v14 + 24) = 0LL;
        }
      }
    }
    v15 = FdoExt((__int64)DeviceObject);
    if ( (unsigned __int8)v4 > *((unsigned __int8 *)FdoExt((__int64)DeviceObject) + 2938) )
      goto LABEL_211;
    v16 = *((_QWORD *)v15 + 382);
    if ( !v16 )
      goto LABEL_211;
    v17 = 2928LL * (unsigned __int8)v4 - 2928;
    v18 = v17 + v16;
    v96 = v17 + v16;
    if ( (UsbhLogMask & 8) != 0 )
    {
      if ( DeviceObject )
      {
        v19 = DeviceObject->DeviceExtension;
        if ( v19 )
        {
          v20 = *((_QWORD *)v19 + 111)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v19 + 220) & *((_DWORD *)v19 + 221));
          *(_DWORD *)v20 = 1044672615;
          *(_QWORD *)(v20 + 8) = 0LL;
          *(_QWORD *)(v20 + 16) = (unsigned __int8)v4;
          *(_QWORD *)(v20 + 24) = v18;
        }
      }
    }
    if ( !v18 )
    {
LABEL_211:
      if ( (UsbhLogMask & 4) != 0 )
      {
        if ( DeviceObject )
        {
          v66 = DeviceObject->DeviceExtension;
          if ( v66 )
          {
            v67 = *((_QWORD *)v66 + 111)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v66 + 220) & *((_DWORD *)v66 + 221));
            *(_DWORD *)v67 = 1484224361;
            *(_QWORD *)(v67 + 8) = 0LL;
            *(_QWORD *)(v67 + 16) = 0LL;
            *(_QWORD *)(v67 + 24) = -1073741811LL;
          }
        }
      }
      UsbhException((__int64)DeviceObject, (unsigned __int8)v4, 1LL, 0LL, 0, -1073741811, 0, usbfile_bus_c, 3118, 0);
      KeSetEvent(v8 + 112, 0, 0);
      v9 = v91;
      goto LABEL_136;
    }
    v95 = 0LL;
    v89 = 0;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_d(
        WPP_GLOBAL_Control->DeviceExtension,
        0,
        1,
        19,
        (__int64)&WPP_e45bf104894738235e8d472f481bb2e2_Traceguids,
        v4);
    v90 = 0;
    if ( (UsbhLogMask & 8) != 0 )
    {
      if ( DeviceObject )
      {
        v21 = DeviceObject->DeviceExtension;
        if ( v21 )
        {
          v22 = *((_QWORD *)v21 + 111)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v21 + 220) & *((_DWORD *)v21 + 221));
          *(_DWORD *)v22 = 1413771367;
          *(_QWORD *)(v22 + 8) = 0LL;
          *(_QWORD *)(v22 + 16) = (unsigned __int8)v4;
          *(_QWORD *)(v22 + 24) = 0LL;
        }
      }
    }
    v23 = FdoExt((__int64)DeviceObject);
    if ( v10 > *((unsigned __int8 *)FdoExt((__int64)DeviceObject) + 2938) )
    {
      LOWORD(v24) = 0;
      v25 = 0LL;
    }
    else
    {
      v24 = *((_QWORD *)v23 + 382);
      if ( v24 )
      {
        v25 = v24 + v17;
        if ( (UsbhLogMask & 8) != 0 && DeviceObject && (v26 = DeviceObject->DeviceExtension) != 0LL )
        {
          v27 = *((_QWORD *)v26 + 111)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v26 + 220) & *((_DWORD *)v26 + 221));
          *(_DWORD *)v27 = 1044672615;
          LOWORD(v24) = 0;
          *(_QWORD *)(v27 + 8) = 0LL;
          *(_QWORD *)(v27 + 16) = v10;
          *(_QWORD *)(v27 + 24) = v25;
        }
        else
        {
          LOWORD(v24) = 0;
        }
      }
      else
      {
        v25 = 0LL;
      }
    }
    v85 = v24;
    LODWORD(v29) = UsbhQueryPortState((__int64)DeviceObject, v10, (__int64)&v89, &v90);
    if ( (int)v29 >= 0 )
    {
      v28 = 1LL;
      v71 = 1;
      while ( ((unsigned __int16)v71 & HIWORD(v89)) == 0 )
      {
        v71 *= 2;
        if ( (v71 & 0xFFE0) != 0 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
            && LOWORD(WPP_GLOBAL_Control->DeviceType) )
          {
            WPP_RECORDER_SF_(
              WPP_GLOBAL_Control->DeviceExtension,
              0,
              1,
              20,
              (__int64)&WPP_e45bf104894738235e8d472f481bb2e2_Traceguids);
          }
          Log((_DWORD)DeviceObject, 4, 1666076515, 0, 0LL);
          if ( (FdoExt((__int64)DeviceObject)[640] & 1) == 0 || (++*(_DWORD *)(v25 + 408), *(int *)(v25 + 408) >= 3) )
          {
            v90 = -1073704960;
            UsbhException((__int64)DeviceObject, v10, 10LL, &v89, 4u, v29, -1073704960, usbfile_bus_c, 1463, 0);
            LODWORD(v29) = -1073741823;
            goto LABEL_36;
          }
          break;
        }
      }
      if ( (v71 & 0x1F) == 0 )
        goto LABEL_36;
      v30 = v71 | v85;
      v85 |= v71;
    }
    else
    {
LABEL_36:
      v30 = v85;
    }
    if ( v30 )
    {
      *(_DWORD *)(v25 + 408) = 0;
      v30 = v85;
    }
    if ( (UsbhLogMask & 4) != 0 )
    {
      if ( DeviceObject )
      {
        v28 = (__int64)DeviceObject->DeviceExtension;
        if ( v28 )
        {
          v31 = *(_QWORD *)(v28 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v28 + 880)) & *(_DWORD *)(v28 + 884));
          *(_DWORD *)v31 = 1734894416;
          *(_QWORD *)(v31 + 24) = (int)v29;
          *(_QWORD *)(v31 + 8) = 0LL;
          *(_QWORD *)(v31 + 16) = v30;
          v30 = v85;
        }
      }
    }
    v87 = v90;
    if ( (UsbhLogMask & 4) != 0 )
    {
      if ( DeviceObject )
      {
        v28 = (__int64)DeviceObject->DeviceExtension;
        if ( v28 )
        {
          v32 = *(_QWORD *)(v28 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v28 + 880)) & *(_DWORD *)(v28 + 884));
          *(_DWORD *)v32 = 1751340369;
          *(_QWORD *)(v32 + 16) = v10;
          *(_QWORD *)(v32 + 24) = (int)v29;
          *(_QWORD *)(v32 + 8) = 0LL;
          v30 = v85;
        }
      }
    }
    if ( (v29 & 0xC0000000) == 0xC0000000 )
    {
LABEL_178:
      KeSetEvent(v8 + 112, 0, 0);
      if ( (unsigned __int8)Usb_Disconnected((unsigned int)v29) )
      {
        Log((_DWORD)DeviceObject, 4, 1769436977, 0, v72);
        UsbhQueuePauseChange((__int64)DeviceObject, v10, v93, v73);
        UsbhPCE_HW_Stop(DeviceObject, v10, v93);
        LOBYTE(v4) = v86;
        v9 = v91;
      }
      else
      {
        Log((_DWORD)DeviceObject, 4, 1769436978, 0, v72);
        UsbhException((__int64)DeviceObject, v10, 1LL, v74, 0, v29, v87, usbfile_bus_c, 3213, 1);
        LOBYTE(v4) = v86;
        v9 = v91;
      }
LABEL_136:
      LockNV = v8[114].Header.LockNV;
      if ( (UsbhLogMask & 4) != 0 )
      {
        if ( DeviceObject )
        {
          v68 = DeviceObject->DeviceExtension;
          if ( v68 )
          {
            v70 = *((_QWORD *)v68 + 111)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v68 + 220) & *((_DWORD *)v68 + 221));
            *(_DWORD *)v70 = 842954601;
            *(_QWORD *)(v70 + 8) = 0LL;
            *(_QWORD *)(v70 + 16) = 0LL;
            *(_QWORD *)(v70 + 24) = LockNV;
          }
        }
      }
      _InterlockedDecrement(&v8[114].Header.Lock);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_d(
          WPP_GLOBAL_Control->DeviceExtension,
          0,
          1,
          39,
          (__int64)&WPP_e45bf104894738235e8d472f481bb2e2_Traceguids,
          v4);
      return UsbhDecHubBusy(DeviceObject, v68, v9);
    }
    v33 = v86;
    v94 = v86;
    v103 = 0;
    if ( dword_14006F6D0 )
    {
      v34 = FdoExt((__int64)DeviceObject);
      v97 = v34[1298];
      v98 = *((_WORD *)v34 + 2598);
      v99 = v34[1300];
      v100 = *((_WORD *)v34 + 2614);
      v101 = *((_WORD *)v34 + 2615);
      v102[0] = *((_WORD *)v34 + 1274);
      v102[1] = *((_WORD *)v34 + 1275);
      v103 = 0;
      v104 = *((unsigned __int16 *)v34 + 2604);
      v35 = *((_WORD *)v34 + 2604) != 0;
      v103 = v35;
      if ( *((unsigned __int16 *)v34 + 2605) )
        v103 = ++v35;
      if ( *((unsigned __int16 *)v34 + 2606) )
        v103 = ++v35;
      if ( *((unsigned __int16 *)v34 + 2607) )
        v103 = ++v35;
      if ( *((unsigned __int16 *)v34 + 2608) )
        v103 = ++v35;
      if ( *((unsigned __int16 *)v34 + 2609) )
        v103 = v35 + 1;
      LODWORD(v84) = 2;
      v110 = v34[634];
      UsbhEtwWrite(&USBHUB_ETW_EVENT_HUB_PORT_STATUS_CHANGE, 0LL, &v97, 12LL, v102, 36LL, &v94, 4LL, &v85, v84, 0LL);
      v30 = v85;
    }
    if ( !v30 )
      goto LABEL_124;
    v88[0] = 0;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      WPP_RECORDER_SF_d(
        WPP_GLOBAL_Control->DeviceExtension,
        0,
        1,
        27,
        (__int64)&WPP_e45bf104894738235e8d472f481bb2e2_Traceguids,
        v10);
      v30 = v85;
    }
    if ( (v30 & 1) != 0 )
    {
      v36 = 16;
    }
    else if ( (v30 & 2) != 0 )
    {
      v36 = 17;
    }
    else if ( (v30 & 4) != 0 )
    {
      v36 = 18;
    }
    else if ( (v30 & 8) != 0 )
    {
      v36 = 19;
    }
    else
    {
      if ( (v30 & 0x10) == 0 )
      {
        LODWORD(v29) = 0;
        goto LABEL_72;
      }
      v36 = 20;
    }
    v92[0] = 291;
    v92[3] = 0;
    v92[1] = v36;
    v92[2] = v10;
    v29 = (int)UsbhSyncSendCommand((__int64)DeviceObject, (unsigned __int8 *)v92, 0LL, v88, v83, &v87);
    if ( (UsbhLogMask & 4) != 0 )
    {
      if ( DeviceObject )
      {
        v37 = DeviceObject->DeviceExtension;
        if ( v37 )
        {
          v38 = *((_QWORD *)v37 + 111)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v37 + 220) & *((_DWORD *)v37 + 221));
          *(_DWORD *)v38 = 1734560577;
          *(_QWORD *)(v38 + 8) = 0LL;
          *(_QWORD *)(v38 + 16) = v36;
          *(_QWORD *)(v38 + 24) = v29;
        }
      }
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_dd(
        WPP_GLOBAL_Control->DeviceExtension,
        (_DWORD)v37,
        1,
        28,
        (__int64)&WPP_e45bf104894738235e8d472f481bb2e2_Traceguids,
        v10,
        v29);
    v30 = v85;
LABEL_72:
    if ( (UsbhLogMask & 4) != 0 )
    {
      if ( DeviceObject )
      {
        v39 = DeviceObject->DeviceExtension;
        if ( v39 )
        {
          v40 = *((_QWORD *)v39 + 111)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v39 + 220) & *((_DWORD *)v39 + 221));
          *(_DWORD *)v40 = 1734894401;
          *(_QWORD *)(v40 + 16) = v10;
          *(_QWORD *)(v40 + 24) = (int)v29;
          *(_QWORD *)(v40 + 8) = 0LL;
          v30 = v85;
        }
      }
    }
    if ( (v29 & 0xC0000000) != 0xC0000000 )
    {
      if ( (v30 & 1) != 0 )
      {
        if ( (UsbhLogMask & 4) != 0 )
        {
          if ( DeviceObject )
          {
            v41 = DeviceObject->DeviceExtension;
            if ( v41 )
            {
              v42 = *((_QWORD *)v41 + 111)
                  + 32LL
                  * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v41 + 220) & *((_DWORD *)v41 + 221));
              *(_DWORD *)v42 = 725831234;
              *(_QWORD *)(v42 + 16) = v10;
              *(_QWORD *)(v42 + 8) = 0LL;
              *(_QWORD *)(v42 + 24) = 0LL;
            }
          }
        }
        _InterlockedIncrement((volatile signed __int32 *)(v96 + 404));
        v30 = v85;
      }
      LOWORD(v95) = v30;
      FdoExt((__int64)DeviceObject);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_d(
          WPP_GLOBAL_Control->DeviceExtension,
          0,
          1,
          62,
          (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
          v10);
      if ( (UsbhLogMask & 0x200) != 0 )
      {
        if ( DeviceObject )
        {
          v43 = DeviceObject->DeviceExtension;
          if ( v43 )
          {
            v44 = *((_QWORD *)v43 + 111)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v43 + 220) & *((_DWORD *)v43 + 221));
            *(_DWORD *)v44 = 842089808;
            *(_QWORD *)(v44 + 24) = v10;
            *(_QWORD *)(v44 + 8) = 0LL;
            *(_QWORD *)(v44 + 16) = 0LL;
          }
        }
      }
      if ( (UsbhLogMask & 8) != 0 )
      {
        if ( DeviceObject )
        {
          v45 = DeviceObject->DeviceExtension;
          if ( v45 )
          {
            v46 = *((_QWORD *)v45 + 111)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v45 + 220) & *((_DWORD *)v45 + 221));
            *(_DWORD *)v46 = 1413771367;
            *(_QWORD *)(v46 + 16) = v10;
            *(_QWORD *)(v46 + 8) = 0LL;
            *(_QWORD *)(v46 + 24) = 0LL;
          }
        }
      }
      v47 = FdoExt((__int64)DeviceObject);
      if ( v10 <= *((unsigned __int8 *)FdoExt((__int64)DeviceObject) + 2938) && (v48 = *((_QWORD *)v47 + 382)) != 0 )
      {
        v49 = v48 + 2928LL * v10 - 2928;
        if ( (UsbhLogMask & 8) != 0 )
        {
          if ( DeviceObject )
          {
            v50 = DeviceObject->DeviceExtension;
            if ( v50 )
            {
              v51 = *((_QWORD *)v50 + 111)
                  + 32LL
                  * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v50 + 220) & *((_DWORD *)v50 + 221));
              *(_DWORD *)v51 = 1044672615;
              *(_QWORD *)(v51 + 16) = v10;
              *(_QWORD *)(v51 + 8) = 0LL;
              *(_QWORD *)(v51 + 24) = v49;
            }
          }
        }
        v52 = v93;
        if ( v49 )
          UsbhDispatch_PortChangeQueueNullEvent((int)DeviceObject, v49, 12, v93);
      }
      else
      {
        v52 = v93;
      }
      v53 = v95;
      FdoExt((__int64)DeviceObject);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_d(
          WPP_GLOBAL_Control->DeviceExtension,
          0,
          1,
          75,
          (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
          v10);
      if ( (UsbhLogMask & 8) != 0 )
      {
        if ( DeviceObject )
        {
          v54 = DeviceObject->DeviceExtension;
          if ( v54 )
          {
            v55 = *((_QWORD *)v54 + 111)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v54 + 220) & *((_DWORD *)v54 + 221));
            *(_DWORD *)v55 = 1413771367;
            *(_QWORD *)(v55 + 16) = v10;
            *(_QWORD *)(v55 + 8) = 0LL;
            *(_QWORD *)(v55 + 24) = 0LL;
          }
        }
      }
      v56 = FdoExt((__int64)DeviceObject);
      if ( v10 <= *((unsigned __int8 *)FdoExt((__int64)DeviceObject) + 2938) )
      {
        v28 = *((_QWORD *)v56 + 382);
        if ( v28 )
        {
          v57 = v28 + 2928LL * v10 - 2928;
          if ( (UsbhLogMask & 8) != 0 && DeviceObject && (v58 = DeviceObject->DeviceExtension) != 0LL )
          {
            v59 = *((_QWORD *)v58 + 111)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v58 + 220) & *((_DWORD *)v58 + 221));
            v28 = 0LL;
            *(_DWORD *)v59 = 1044672615;
            *(_QWORD *)(v59 + 16) = v10;
            *(_QWORD *)(v59 + 8) = 0LL;
            *(_QWORD *)(v59 + 24) = v57;
          }
          else
          {
            v28 = 0LL;
          }
          if ( v57 )
            UsbhDispatch_PortChangeQueueEvent((int)DeviceObject, v57, 4, v52, v53, 0, 0LL);
        }
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_d(
          WPP_GLOBAL_Control->DeviceExtension,
          0,
          1,
          76,
          (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
          v10);
      if ( (UsbhLogMask & 4) != 0 && DeviceObject && (v28 = (__int64)DeviceObject->DeviceExtension) != 0 )
      {
        v60 = _InterlockedExchangeAdd((volatile signed __int32 *)(v28 + 880), 0xFFFFFFFF);
        v33 = v86;
        v61 = *(_QWORD *)(v28 + 888) + 32LL * ((unsigned int)(v60 - 1) & *(_DWORD *)(v28 + 884));
        *(_DWORD *)v61 = 1734894417;
        *(_QWORD *)(v61 + 16) = v10;
        *(_QWORD *)(v61 + 24) = &v95;
        *(_QWORD *)(v61 + 8) = 0LL;
      }
      else
      {
        v33 = v86;
      }
LABEL_124:
      UsbhDecHubBusy(DeviceObject, v28, v91);
      _InterlockedDecrement(&v8[114].Header.Lock);
      UsbhPostInterrupt(DeviceObject);
      result = (unsigned int)UsbhLogMask;
      v63 = v8[114].Header.LockNV;
      if ( (UsbhLogMask & 4) != 0 )
      {
        if ( DeviceObject )
        {
          v64 = DeviceObject->DeviceExtension;
          if ( v64 )
          {
            result = 826177385LL;
            v65 = *((_QWORD *)v64 + 111)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)v64 + 220) & *((_DWORD *)v64 + 221));
            *(_DWORD *)v65 = 826177385;
            *(_QWORD *)(v65 + 8) = 0LL;
            *(_QWORD *)(v65 + 16) = 0LL;
            *(_QWORD *)(v65 + 24) = v63;
          }
        }
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          return WPP_RECORDER_SF_d(
                   WPP_GLOBAL_Control->DeviceExtension,
                   0,
                   1,
                   37,
                   (__int64)&WPP_e45bf104894738235e8d472f481bb2e2_Traceguids,
                   v33);
      }
      return result;
    }
    goto LABEL_178;
  }
  v86 = 0;
  v75 = (int)UsbhQueryHubState(DeviceObject, &v86, &v87);
  Log((_DWORD)DeviceObject, 4, 1364551795, 0, v75);
  Log((_DWORD)DeviceObject, 4, 1364551779, HIWORD(v86), (unsigned __int16)v86);
  if ( (int)v75 < 0 )
    goto LABEL_199;
  v76 = 100;
  if ( (v86 & 1) == 0 )
    v76 = 500;
  v8[127].Header.LockNV = v76;
  if ( (v86 & 0x10000) != 0 )
    LODWORD(v8[126].Header.WaitListHead.Flink) = v76;
  LODWORD(v75) = UsbhHubAckHubChange(DeviceObject, &v86, &v87);
  Log((_DWORD)DeviceObject, 4, 1095263080, 0, (int)v75);
  if ( (int)v75 < 0 || (v86 & 2) != 0 || BYTE1(v8[125].Header.WaitListHead.Flink) == v77 && (v86 & 0x20000) != 0 )
  {
LABEL_199:
    KeSetEvent(v8 + 112, 0, 0);
    if ( (v86 & 2) != 0 || !BYTE1(v8[125].Header.WaitListHead.Flink) && (v86 & 0x20000) != 0 )
    {
      Log((_DWORD)DeviceObject, 4, 1749512054, 0, (int)v75);
      if ( BYTE2(v8[125].Header.WaitListHead.Flink) == (_BYTE)v82 )
      {
        BYTE2(v8[125].Header.WaitListHead.Flink) = 1;
        UsbhQueueWorkItemEx(
          (_DWORD)DeviceObject,
          v82 + 1,
          (unsigned int)UsbhSetHubOvercurrentDetectedKey,
          v82,
          0,
          1666340431,
          0LL);
      }
      UsbhException((__int64)DeviceObject, 0LL, 75LL, &v86, 4u, v75, v87, usbfile_bus_c, 3318, 0);
      v9 = v91;
    }
    else if ( !(unsigned __int8)Usb_Disconnected((unsigned int)v75) )
    {
      Log((_DWORD)DeviceObject, 4, 1769433138, 0, (int)v75);
      UsbhException((__int64)DeviceObject, 0LL, 1LL, v81, 0, v75, v87, usbfile_bus_c, 3331, 0);
      v9 = v91;
    }
    goto LABEL_136;
  }
  if ( (v86 & 0x20000) != 0 )
  {
    UsbhException((__int64)DeviceObject, 0LL, 72LL, &v86, 4u, v75, v87, usbfile_bus_c, 3270, 0);
  }
  else if ( (v86 & 0x10000) != 0 )
  {
    UsbhException((__int64)DeviceObject, 0LL, 73LL, &v86, 4u, v75, v87, usbfile_bus_c, 3273, 0);
  }
  else
  {
    UsbhException((__int64)DeviceObject, 0LL, 74LL, &v86, 4u, v75, v87, usbfile_bus_c, 3277, 0);
  }
  v79 = v91;
  _InterlockedDecrement(&v8[114].Header.Lock);
  UsbhDecHubBusy(DeviceObject, v78, v79);
  UsbhPostInterrupt(DeviceObject);
  Log((_DWORD)DeviceObject, 4, 1769422387, 0, v8[114].Header.LockNV);
  result = (__int64)&WPP_RECORDER_INITIALIZED;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    && LOWORD(WPP_GLOBAL_Control->DeviceType) != v80 )
  {
    return WPP_RECORDER_SF_(
             WPP_GLOBAL_Control->DeviceExtension,
             0,
             1,
             38,
             (__int64)&WPP_e45bf104894738235e8d472f481bb2e2_Traceguids);
  }
  return result;
}
