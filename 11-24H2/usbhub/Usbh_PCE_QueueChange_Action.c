/*
 * XREFs of Usbh_PCE_QueueChange_Action @ 0x140003220
 * Callers:
 *     UsbhDispatch_PortChangeQueueEventEx @ 0x140008E90 (UsbhDispatch_PortChangeQueueEventEx.c)
 * Callees:
 *     UsbhUnlockPcqWithTag @ 0x140001F30 (UsbhUnlockPcqWithTag.c)
 *     UsbhInsertQueuePortChangeObject @ 0x140003F90 (UsbhInsertQueuePortChangeObject.c)
 *     UsbhFreePortChangeQueueObject @ 0x1400048F4 (UsbhFreePortChangeQueueObject.c)
 *     FdoExt @ 0x14000BE50 (FdoExt.c)
 *     Log @ 0x1400298B0 (Log.c)
 *     WPP_RECORDER_SF_d @ 0x14003DA58 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dd @ 0x14003DC1C (WPP_RECORDER_SF_dd.c)
 *     WPP_RECORDER_SF_dq @ 0x14003DE14 (WPP_RECORDER_SF_dq.c)
 *     UsbhFreePortChangeQueueTimeoutObject @ 0x140042B3C (UsbhFreePortChangeQueueTimeoutObject.c)
 *     WPP_RECORDER_SF_dc @ 0x140044F48 (WPP_RECORDER_SF_dc.c)
 *     Usbh_iSignalSyncDeviceReset @ 0x140048F44 (Usbh_iSignalSyncDeviceReset.c)
 */

_UNKNOWN **Usbh_PCE_QueueChange_Action(__int64 a1, __int64 a2, __int64 a3, ...)
{
  char v3; // r14
  KSPIN_LOCK *v6; // r15
  KIRQL v7; // al
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // r12
  __int64 v18; // r13
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rcx
  void *v26; // rdx
  KSPIN_LOCK *v27; // r15
  KIRQL v28; // r12
  __int64 v29; // r8
  __int64 v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // r14
  int v33; // r15d
  int v34; // eax
  __int64 v35; // r8
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // rax
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // rdx
  __int64 v44; // rcx
  int v45; // eax
  __int64 v46; // rcx
  KIRQL v47; // r14
  __int64 v48; // rcx
  __int64 v49; // rcx
  __int64 v50; // rdx
  KIRQL v51; // dl
  KSPIN_LOCK *v52; // rcx
  int v53; // edx
  int v54; // r8d
  _UNKNOWN **result; // rax
  __int64 v56; // r8
  __int64 v57; // rdx
  __int64 v58; // rcx
  int v59; // r9d
  __int64 v60; // rax
  __int64 v61; // rdx
  __int64 v62; // r8
  __int64 v63; // r9
  __int64 v64; // r9
  _QWORD **v65; // r14
  _QWORD *v66; // r8
  __int64 v67; // r8
  __int64 v68; // r9
  __int64 v69; // rdx
  __int64 v70; // rcx
  int v71; // eax
  __int64 v72; // rcx
  _QWORD *v73; // rax
  __int64 v74; // r8
  __int64 v75; // rdx
  __int64 v76; // rcx
  __int64 v77; // rax
  __int64 v78; // r8
  __int64 v79; // r9
  __int64 v80; // rcx
  __int64 v81; // rdx
  int v82; // eax
  __int64 v83; // rdx
  __int16 v84; // r9
  PDEVICE_OBJECT v85; // rcx
  int v86; // r9d
  __int64 v87; // r9
  int v88; // r10d
  __int64 v89; // r9
  __int16 v90; // r9
  __int64 v91; // rax
  int v92; // r9d
  KIRQL v93; // r10
  KIRQL v94; // r8
  __int64 v95; // rax
  int v96; // edx
  __int64 v97; // r9
  char v98; // r10
  int v99; // [rsp+20h] [rbp-30h]
  __int64 v100; // [rsp+48h] [rbp-8h]
  KIRQL v101; // [rsp+98h] [rbp+48h]
  __int64 v102; // [rsp+A8h] [rbp+58h] BYREF
  va_list va; // [rsp+A8h] [rbp+58h]
  __int64 v104; // [rsp+B0h] [rbp+60h]
  __int64 v105; // [rsp+B8h] [rbp+68h]
  va_list va1; // [rsp+C0h] [rbp+70h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v102 = va_arg(va1, _QWORD);
  v104 = va_arg(va1, _QWORD);
  v105 = va_arg(va1, _QWORD);
  v3 = a3;
  FdoExt(a1, a2, a3, v102);
  v6 = (KSPIN_LOCK *)(a2 + 440);
  v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 440));
  v8 = *(unsigned __int16 *)(a2 + 4);
  *(_DWORD *)(a2 + 448) = 1;
  v101 = v7;
  if ( (UsbhLogMask & 0x10) != 0 )
  {
    if ( a1 )
    {
      v9 = *(_QWORD *)(a1 + 64);
      if ( v9 )
      {
        v10 = *(_QWORD *)(v9 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v9 + 880)) & *(_DWORD *)(v9 + 884));
        *(_DWORD *)v10 = 724267376;
        *(_QWORD *)(v10 + 8) = 0LL;
        *(_QWORD *)(v10 + 16) = 4LL;
        *(_QWORD *)(v10 + 24) = v8;
      }
    }
  }
  v11 = *(unsigned __int16 *)(a2 + 4);
  v12 = *(int *)(a2 + 12);
  if ( (UsbhLogMask & 0x10) != 0 )
  {
    if ( a1 )
    {
      v13 = *(_QWORD *)(a1 + 64);
      if ( v13 )
      {
        v14 = *(_QWORD *)(v13 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v13 + 880)) & *(_DWORD *)(v13 + 884));
        *(_DWORD *)v14 = 724267376;
        *(_QWORD *)(v14 + 8) = 0LL;
        *(_QWORD *)(v14 + 16) = v12;
        *(_QWORD *)(v14 + 24) = v11;
      }
    }
  }
  v15 = ((unsigned __int8)*(_DWORD *)(a2 + 2400) + 1) & 0x1F;
  *(_DWORD *)(a2 + 2400) = v15;
  v16 = a2 + 32 * (v15 + 43);
  *(_DWORD *)v16 = 4;
  *(_DWORD *)(v16 + 4) = *(_DWORD *)(a2 + 12);
  *(_DWORD *)(v16 + 12) = v102;
  *(_DWORD *)(v16 + 8) = -1;
  *(_QWORD *)(v16 + 16) = 0LL;
  *(_QWORD *)(v16 + 24) = 0LL;
  v17 = *(unsigned __int16 *)(a2 + 4);
  v18 = *(int *)(a2 + 12);
  v100 = v17;
  if ( (UsbhLogMask & 0x200) != 0 )
  {
    if ( a1 )
    {
      v19 = *(_QWORD *)(a1 + 64);
      if ( v19 )
      {
        v20 = *(_QWORD *)(v19 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v19 + 880)) & *(_DWORD *)(v19 + 884));
        *(_DWORD *)v20 = 812659807;
        *(_QWORD *)(v20 + 8) = 0LL;
        *(_QWORD *)(v20 + 16) = v18;
        *(_QWORD *)(v20 + 24) = v17;
      }
    }
  }
  v21 = *(unsigned __int16 *)(a2 + 4);
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
        *(_DWORD *)v23 = 812147537;
        *(_QWORD *)(v23 + 8) = 0LL;
        *(_QWORD *)(v23 + 16) = a2;
        *(_QWORD *)(v23 + 24) = v21;
      }
    }
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
          *(_DWORD *)v25 = 812147537;
          *(_QWORD *)(v25 + 24) = (unsigned int)v102;
          *(_QWORD *)(v25 + 8) = 0LL;
          *(_QWORD *)(v25 + 16) = a2;
        }
      }
    }
  }
  v26 = &WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_dq(
      WPP_GLOBAL_Control->DeviceExtension,
      (unsigned int)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
      v21,
      19,
      (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
      *(_WORD *)(a2 + 4),
      v3);
  if ( (v102 & 0x80000) != 0 )
  {
    v27 = (KSPIN_LOCK *)(FdoExt(a1, v26, v21, &WPP_RECORDER_INITIALIZED) + 4944);
    v28 = KeAcquireSpinLockRaiseToDpc(v27);
    v29 = *(unsigned __int16 *)(a2 + 4);
    if ( (UsbhLogMask & 0x10) != 0 )
    {
      if ( a1 )
      {
        v30 = *(_QWORD *)(a1 + 64);
        if ( v30 )
        {
          v31 = *(_QWORD *)(v30 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v30 + 880)) & *(_DWORD *)(v30 + 884));
          *(_DWORD *)v31 = 1836086128;
          *(_QWORD *)(v31 + 8) = 0LL;
          *(_QWORD *)(v31 + 16) = 0LL;
          *(_QWORD *)(v31 + 24) = v29;
        }
      }
    }
    if ( KeReadStateEvent((PRKEVENT)(a2 + 800)) )
    {
      KeResetEvent((PRKEVENT)(a2 + 800));
      *(_QWORD *)(a2 + 792) = a2;
    }
    KeReleaseSpinLock(v27, v28);
    v17 = v100;
    v6 = (KSPIN_LOCK *)(a2 + 440);
  }
  switch ( (_DWORD)v18 )
  {
    case 2:
      v32 = v105;
      v33 = v104;
      v34 = UsbhInsertQueuePortChangeObject(a1, (unsigned __int16)v17, (unsigned int)va, v104, v105);
      v35 = *(unsigned __int16 *)(a2 + 4);
      if ( (UsbhLogMask & 0x200) != 0 )
      {
        if ( a1 )
        {
          v36 = *(_QWORD *)(a1 + 64);
          if ( v36 )
          {
            v37 = *(_QWORD *)(v36 + 888)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v36 + 880)) & *(_DWORD *)(v36 + 884));
            *(_DWORD *)v37 = 846214239;
            *(_QWORD *)(v37 + 8) = 0LL;
            *(_QWORD *)(v37 + 16) = v34;
            *(_QWORD *)(v37 + 24) = v35;
          }
        }
      }
      if ( v34 >= 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
          WPP_RECORDER_SF_d(
            WPP_GLOBAL_Control->DeviceExtension,
            0,
            1,
            20,
            (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
            v17);
        if ( (UsbhLogMask & 8) != 0 )
        {
          if ( a1 )
          {
            v38 = *(_QWORD *)(a1 + 64);
            if ( v38 )
            {
              v39 = *(_QWORD *)(v38 + 888)
                  + 32LL
                  * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v38 + 880)) & *(_DWORD *)(v38 + 884));
              *(_DWORD *)v39 = 827353457;
              *(_QWORD *)(v39 + 8) = 0LL;
              *(_QWORD *)(v39 + 16) = a2;
              *(_QWORD *)(v39 + 24) = v17;
            }
          }
        }
        v40 = 32LL * *(unsigned int *)(a2 + 2400);
        *(_DWORD *)(a2 + 12) = 4;
        *(_DWORD *)(v40 + a2 + 1384) = 4;
        v41 = *(unsigned __int16 *)(a2 + 4);
        v42 = *(int *)(a2 + 12);
        if ( (UsbhLogMask & 0x10) != 0 )
        {
          if ( a1 )
          {
            v43 = *(_QWORD *)(a1 + 64);
            if ( v43 )
            {
              v44 = *(_QWORD *)(v43 + 888)
                  + 32LL
                  * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v43 + 880)) & *(_DWORD *)(v43 + 884));
              *(_DWORD *)v44 = 757952880;
              *(_QWORD *)(v44 + 8) = 0LL;
              *(_QWORD *)(v44 + 16) = v42;
              *(_QWORD *)(v44 + 24) = v41;
            }
          }
        }
        v45 = *(_DWORD *)(a2 + 12);
        v46 = 32 * (*(unsigned int *)(a2 + 2400) + 43LL);
        *(_DWORD *)(a2 + 448) = 0;
        *(_DWORD *)(v46 + a2 + 8) = v45;
        KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 440), v101);
        v47 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 2448));
        if ( *(_DWORD *)(a2 + 2412) != 1 )
        {
          *(_DWORD *)(a2 + 2412) = 1;
          if ( (UsbhLogMask & 0x200) != 0 )
          {
            v48 = *(_QWORD *)(a2 + 16);
            if ( v48 )
            {
              v49 = *(_QWORD *)(v48 + 64);
              if ( v49 )
              {
                v50 = *(_QWORD *)(v49 + 888)
                    + 32LL
                    * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v49 + 880)) & *(_DWORD *)(v49 + 884));
                *(_DWORD *)v50 = 1464029265;
                *(_QWORD *)(v50 + 8) = 0LL;
                *(_QWORD *)(v50 + 16) = a2;
                *(_QWORD *)(v50 + 24) = 0LL;
              }
            }
          }
          _InterlockedIncrement((volatile signed __int32 *)(a2 + 2440));
          IoQueueWorkItem(*(PIO_WORKITEM *)(a2 + 2456), UsbhHubProcessChangeWorker, DelayedWorkQueue, (PVOID)a2);
        }
        v51 = v47;
        v52 = (KSPIN_LOCK *)(a2 + 2448);
LABEL_54:
        KeReleaseSpinLock(v52, v51);
        goto LABEL_55;
      }
      Log(a1, 8, 1902727218, a2, v17);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_dd(
          WPP_GLOBAL_Control->DeviceExtension,
          v96,
          1,
          21,
          (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
          v17,
          v98);
      if ( v33 == 1 )
      {
        Log(a1, 512, 1902735480, v32, *(unsigned __int16 *)(a2 + 4));
        Usbh_iSignalSyncDeviceReset(a1, v32, a2);
      }
      else if ( v33 == 2 )
      {
        LOBYTE(v97) = 1;
        UsbhFreePortChangeQueueTimeoutObject(a1, a2, v32, v97);
      }
      break;
    case 7:
      v56 = *(unsigned __int16 *)(a2 + 4);
      if ( (UsbhLogMask & 0x200) != 0 )
      {
        if ( a1 )
        {
          v57 = *(_QWORD *)(a1 + 64);
          if ( v57 )
          {
            v58 = *(_QWORD *)(v57 + 888)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v57 + 880)) & *(_DWORD *)(v57 + 884));
            *(_DWORD *)v58 = 829437023;
            *(_QWORD *)(v58 + 8) = 0LL;
            *(_QWORD *)(v58 + 16) = 0LL;
            *(_QWORD *)(v58 + 24) = v56;
          }
        }
      }
      v59 = v104;
      v60 = 32LL * *(unsigned int *)(a2 + 2400);
      *(_DWORD *)(a2 + 12) = 7;
      *(_DWORD *)(v60 + a2 + 1384) = 7;
      UsbhInsertQueuePortChangeObject(a1, (unsigned __int16)v17, (unsigned int)va, v59, v105);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_d(
          WPP_GLOBAL_Control->DeviceExtension,
          0,
          1,
          55,
          (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
          *(_WORD *)(a2 + 4));
      FdoExt(a1, v61, v62, v63);
      v65 = (_QWORD **)(a2 + 456);
      while ( 1 )
      {
        v66 = *v65;
        if ( *v65 == v65 )
          break;
        if ( (_QWORD **)v66[1] != v65 || (v73 = (_QWORD *)*v66, *(_QWORD **)(*v66 + 8LL) != v66) )
          __fastfail(3u);
        *v65 = v73;
        LOBYTE(v64) = 1;
        v73[1] = v65;
        UsbhFreePortChangeQueueObject(a1, a2, v66 - 2, v64);
      }
      v67 = *(unsigned __int16 *)(a2 + 4);
      v68 = *(int *)(a2 + 12);
      *(_DWORD *)(a2 + 2876) = 0;
      *(_BYTE *)(a2 + 2839) = 0;
      if ( (UsbhLogMask & 0x10) != 0 )
      {
        if ( a1 )
        {
          v69 = *(_QWORD *)(a1 + 64);
          if ( v69 )
          {
            LODWORD(v102) = 757952880;
            v70 = *(_QWORD *)(v69 + 888)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v69 + 880)) & *(_DWORD *)(v69 + 884));
            *(_DWORD *)v70 = v102;
            *(_QWORD *)(v70 + 8) = 0LL;
            *(_QWORD *)(v70 + 16) = v68;
            *(_QWORD *)(v70 + 24) = v67;
          }
        }
      }
      v71 = *(_DWORD *)(a2 + 12);
      v51 = v101;
      v72 = 32 * (*(unsigned int *)(a2 + 2400) + 43LL);
      *(_DWORD *)(a2 + 448) = 0;
      *(_DWORD *)(v72 + a2 + 8) = v71;
      v52 = v6;
      goto LABEL_54;
    case 3:
LABEL_79:
      v74 = *(unsigned __int16 *)(a2 + 4);
      if ( (UsbhLogMask & 0x200) != 0 )
      {
        if ( a1 )
        {
          v75 = *(_QWORD *)(a1 + 64);
          if ( v75 )
          {
            v76 = *(_QWORD *)(v75 + 888)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v75 + 880)) & *(_DWORD *)(v75 + 884));
            *(_DWORD *)v76 = 879768671;
            *(_QWORD *)(v76 + 8) = 0LL;
            *(_QWORD *)(v76 + 16) = 0LL;
            *(_QWORD *)(v76 + 24) = v74;
          }
        }
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_d(
          WPP_GLOBAL_Control->DeviceExtension,
          0,
          1,
          23,
          (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
          v17);
      UsbhInsertQueuePortChangeObject(a1, (unsigned __int16)v17, (unsigned int)va, v104, v105);
      v77 = 32LL * *(unsigned int *)(a2 + 2400);
      *(_DWORD *)(a2 + 12) = 14;
      *(_DWORD *)(v77 + a2 + 1384) = 14;
      v78 = *(unsigned __int16 *)(a2 + 4);
      v79 = *(int *)(a2 + 12);
      if ( (UsbhLogMask & 0x10) != 0 )
      {
        if ( a1 )
        {
          v80 = *(_QWORD *)(a1 + 64);
          if ( v80 )
          {
            LODWORD(v102) = 757952880;
            v81 = *(_QWORD *)(v80 + 888)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v80 + 880)) & *(_DWORD *)(v80 + 884));
            *(_DWORD *)v81 = v102;
            *(_QWORD *)(v81 + 8) = 0LL;
            *(_QWORD *)(v81 + 16) = v79;
            *(_QWORD *)(v81 + 24) = v78;
          }
        }
      }
      v52 = v6;
      v82 = *(_DWORD *)(a2 + 12);
      v83 = 32 * (*(unsigned int *)(a2 + 2400) + 43LL);
      *(_DWORD *)(a2 + 448) = 0;
      *(_DWORD *)(v83 + a2 + 8) = v82;
      v51 = v101;
      goto LABEL_54;
    default:
      switch ( (int)v18 )
      {
        case 1:
        case 18:
          Log(a1, 512, 1597272118, 0, *(unsigned __int16 *)(a2 + 4));
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_108;
          v85 = WPP_GLOBAL_Control;
          if ( LOWORD(WPP_GLOBAL_Control->DeviceType) == v90 )
            goto LABEL_108;
          v86 = 25;
          break;
        case 4:
          Log(a1, 512, 1597272115, 0, *(unsigned __int16 *)(a2 + 4));
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_108;
          v85 = WPP_GLOBAL_Control;
          if ( LOWORD(WPP_GLOBAL_Control->DeviceType) == v84 )
            goto LABEL_108;
          v86 = 22;
          break;
        case 5:
        case 6:
        case 11:
        case 12:
        case 13:
        case 15:
        case 16:
        case 17:
        case 20:
          Log(a1, 512, 1597272117, v104, *(unsigned __int16 *)(a2 + 4));
          if ( v88 == 1 )
          {
            Log(a1, 512, 1597272184, v105, *(unsigned __int16 *)(a2 + 4));
            Usbh_iSignalSyncDeviceReset(a1, v89, a2);
          }
          else if ( v88 == 2 )
          {
            LOBYTE(v87) = 1;
            UsbhFreePortChangeQueueTimeoutObject(a1, a2, v105, v87);
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
            && LOWORD(WPP_GLOBAL_Control->DeviceType) )
          {
            WPP_RECORDER_SF_d(
              WPP_GLOBAL_Control->DeviceExtension,
              0,
              1,
              24,
              (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
              v17);
          }
          goto LABEL_120;
        case 8:
        case 10:
          Log(a1, 512, 1597272119, 0, *(unsigned __int16 *)(a2 + 4));
          UsbhInsertQueuePortChangeObject(a1, (unsigned __int16)v17, (unsigned int)va, v104, v105);
          v91 = 32LL * *(unsigned int *)(a2 + 2400);
          *(_DWORD *)(a2 + 12) = 10;
          *(_DWORD *)(v91 + a2 + 1384) = 10;
          goto LABEL_120;
        case 9:
          Log(a1, 512, 1597272120, 0, *(unsigned __int16 *)(a2 + 4));
          UsbhInsertQueuePortChangeObject(a1, (unsigned __int16)v17, (unsigned int)va, v104, v105);
          goto LABEL_120;
        case 14:
          goto LABEL_79;
        default:
          Log(a1, 512, 1597272152, 0, *(unsigned __int16 *)(a2 + 4));
          v94 = v93;
          v95 = 32LL * *(unsigned int *)(a2 + 2400);
          *(_DWORD *)(a2 + 12) = 19;
          *(_DWORD *)(v95 + a2 + 1384) = 19;
          goto LABEL_121;
      }
      WPP_RECORDER_SF_d(v85->DeviceExtension, 0, 1, v86, (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids, v17);
LABEL_108:
      UsbhInsertQueuePortChangeObject(a1, (unsigned __int16)v17, (unsigned int)va, v104, v105);
      break;
  }
LABEL_120:
  v94 = v101;
  v92 = 0;
LABEL_121:
  UsbhUnlockPcqWithTag(a1, a2, v94, v92);
LABEL_55:
  result = &WPP_RECORDER_INITIALIZED;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      return (_UNKNOWN **)WPP_RECORDER_SF_dc(WPP_GLOBAL_Control->DeviceExtension, v53, v54, 26, v99, v17, v18);
  }
  return result;
}
