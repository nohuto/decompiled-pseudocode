/*
 * XREFs of UsbhQueryPortState @ 0x140009A20
 * Callers:
 *     UsbhHubRunPortChangeQueue @ 0x1400083A0 (UsbhHubRunPortChangeQueue.c)
 *     UsbhFdoReturnPortStatus @ 0x14000C4F0 (UsbhFdoReturnPortStatus.c)
 *     UsbhHubProcessIsr @ 0x14000D190 (UsbhHubProcessIsr.c)
 *     UsbhSshResumeDownstream @ 0x14001DC6C (UsbhSshResumeDownstream.c)
 *     UsbhSyncSuspendPdoPort @ 0x14001E27C (UsbhSyncSuspendPdoPort.c)
 *     UsbhBusPnpStop_Action @ 0x14001EB48 (UsbhBusPnpStop_Action.c)
 *     UsbhFdoColdStartPdo @ 0x140022D78 (UsbhFdoColdStartPdo.c)
 *     UsbhSetupDevice @ 0x1400280C8 (UsbhSetupDevice.c)
 *     UsbhFdoValidateConnectionPdo @ 0x1400296B0 (UsbhFdoValidateConnectionPdo.c)
 *     UsbhFdoColdStartCheckPort @ 0x1400363A0 (UsbhFdoColdStartCheckPort.c)
 *     UsbhFdoSetD0Warm @ 0x140037CE4 (UsbhFdoSetD0Warm.c)
 *     UsbhPdoWaitForD3Reconnect @ 0x1400388C8 (UsbhPdoWaitForD3Reconnect.c)
 *     UsbhOvercurrentResetWorker @ 0x14003F0B0 (UsbhOvercurrentResetWorker.c)
 *     UsbhBusSuspend_Action @ 0x1400408AC (UsbhBusSuspend_Action.c)
 *     UsbhHubSyncSuspendPortEvent @ 0x140042C7C (UsbhHubSyncSuspendPortEvent.c)
 *     UsbhQueueSoftConnectChange @ 0x1400439CC (UsbhQueueSoftConnectChange.c)
 *     UsbhFinishStart @ 0x14004604C (UsbhFinishStart.c)
 *     UsbhPortResumeTimeout @ 0x140046FF8 (UsbhPortResumeTimeout.c)
 * Callees:
 *     UsbhException @ 0x1400094F8 (UsbhException.c)
 *     UsbhSyncSendCommand @ 0x14000A470 (UsbhSyncSendCommand.c)
 *     FdoExt @ 0x14000BE50 (FdoExt.c)
 *     Usb_Disconnected @ 0x1400155D4 (Usb_Disconnected.c)
 *     Log @ 0x1400298B0 (Log.c)
 *     UsbhDispatch_HardResetEvent @ 0x1400376CC (UsbhDispatch_HardResetEvent.c)
 *     UsbhTrapFatal_Dbg @ 0x14003964C (UsbhTrapFatal_Dbg.c)
 *     UsbhFlushPortChange @ 0x14003AEC4 (UsbhFlushPortChange.c)
 *     WPP_RECORDER_SF_q @ 0x14003DEE0 (WPP_RECORDER_SF_q.c)
 */

__int64 __fastcall UsbhQueryPortState(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  __int64 v4; // r15
  __int64 v5; // rdi
  int v9; // ecx
  __int64 Pool2; // rax
  unsigned __int16 *v11; // r14
  __int64 v12; // r13
  __int64 v13; // rbp
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  KIRQL v19; // r12
  __int64 v20; // rcx
  __int64 v21; // r15
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rdi
  __int64 v30; // rax
  _QWORD *v31; // rax
  _QWORD *v32; // rdx
  __int64 v33; // rdx
  __int64 v34; // r8
  __int64 v35; // r9
  unsigned __int16 v36; // r12
  __int64 v37; // rdx
  __int64 v38; // rcx
  KIRQL v39; // r15
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // rdi
  __int64 *v43; // r9
  __int64 v44; // rdx
  __int64 v45; // rcx
  int v46; // eax
  __int64 *v47; // rcx
  __int64 **v48; // rax
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v55; // r8
  __int64 v56; // r9
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // rdx
  __int64 v60; // rcx
  unsigned __int16 v61; // r15
  unsigned __int16 v62; // di
  __int64 v63; // rax
  __int64 v64; // rdx
  __int64 v65; // r8
  __int64 v66; // r9
  __int64 v67; // rax
  _BYTE v68[8]; // [rsp+58h] [rbp-50h] BYREF
  _BYTE v69[2]; // [rsp+60h] [rbp-48h] BYREF
  __int16 v70; // [rsp+62h] [rbp-46h]
  __int16 v71; // [rsp+64h] [rbp-44h]
  __int16 v72; // [rsp+66h] [rbp-42h]
  unsigned __int16 v73; // [rsp+B8h] [rbp+10h]

  v73 = a2;
  v4 = (unsigned __int16)a2;
  v5 = 0LL;
  v9 = *(_DWORD *)(FdoExt(a1, a2, a3, a4) + 2560);
  if ( (v9 & 0x4000) != 0 )
  {
    Log(a1, 4, 1937076805, 0, 0LL);
    if ( a4 )
      *a4 = -1073713152;
    return 3221225486LL;
  }
  else if ( (v9 & 0x10) != 0 )
  {
    Log(a1, 4, 1752319312, 0, 0LL);
    if ( a4 )
      *a4 = -1073704960;
    return 3221225666LL;
  }
  else
  {
    Pool2 = ExAllocatePool2(64LL, 10LL, 1112885333LL);
    v11 = (unsigned __int16 *)Pool2;
    if ( Pool2 )
    {
      *(_WORD *)(Pool2 + 4) = 4;
      *(_DWORD *)a3 = 0;
      *(_WORD *)(Pool2 + 6) = v4;
      *(_DWORD *)Pool2 = 0;
      v69[0] = -93;
      *(_BYTE *)(Pool2 + 8) = 0;
      v69[1] = 0;
      v70 = 0;
      v71 = v4;
      v72 = *(_WORD *)(Pool2 + 4);
      v12 = (int)UsbhSyncSendCommand(a1, (unsigned int)v69, Pool2, (int)Pool2 + 4);
      v13 = 0LL;
      if ( (UsbhLogMask & 0x100) != 0 )
      {
        if ( a1 )
        {
          v14 = *(_QWORD *)(a1 + 64);
          if ( v14 )
          {
            v15 = *(_QWORD *)(v14 + 888)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v14 + 880)) & *(_DWORD *)(v14 + 884));
            *(_DWORD *)v15 = 1329877100;
            *(_QWORD *)(v15 + 8) = 0LL;
            *(_QWORD *)(v15 + 16) = v4;
            *(_QWORD *)(v15 + 24) = 1383420738LL;
          }
        }
      }
      v19 = KeAcquireSpinLockRaiseToDpc(&HubG);
      qword_14006F5E0 = (__int64)&dword_14006F5E8;
      if ( (UsbhLogMask & 8) != 0 )
      {
        if ( a1 )
        {
          v16 = *(_QWORD *)(a1 + 64);
          if ( v16 )
          {
            v20 = *(_QWORD *)(v16 + 888)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v16 + 880)) & *(_DWORD *)(v16 + 884));
            v16 = 0LL;
            *(_DWORD *)v20 = 1413771367;
            *(_QWORD *)(v20 + 8) = 0LL;
            *(_QWORD *)(v20 + 16) = v4;
            *(_QWORD *)(v20 + 24) = 0LL;
          }
        }
      }
      if ( !(_WORD)v4 )
        goto LABEL_80;
      v21 = FdoExt(a1, v16, v17, v18);
      if ( v73 > *(unsigned __int8 *)(FdoExt(a1, v22, v23, v24) + 2938) )
        goto LABEL_80;
      v25 = *(_QWORD *)(v21 + 3056);
      if ( !v25 )
        goto LABEL_80;
      v26 = v25 + 2928LL * v73 - 2928;
      if ( (UsbhLogMask & 8) != 0 )
      {
        if ( a1 )
        {
          v27 = *(_QWORD *)(a1 + 64);
          if ( v27 )
          {
            v28 = *(_QWORD *)(v27 + 888)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v27 + 880)) & *(_DWORD *)(v27 + 884));
            *(_DWORD *)v28 = 1044672615;
            *(_QWORD *)(v28 + 8) = 0LL;
            *(_QWORD *)(v28 + 16) = v73;
            *(_QWORD *)(v28 + 24) = v26;
          }
        }
      }
      if ( v26 && (v13 = *(_QWORD *)(v26 + 392)) != 0 )
      {
        v29 = *(_QWORD *)(v13 + 64);
        if ( !v29 )
          UsbhTrapFatal_Dbg(*(_QWORD *)(v26 + 392), 0LL);
        if ( *(_DWORD *)v29 != 1329877064 )
          UsbhTrapFatal_Dbg(*(_QWORD *)(v26 + 392), *(_QWORD *)(v13 + 64));
        v30 = ExAllocatePool2(64LL, 48LL, 1112885333LL);
        if ( v30 )
        {
          *(_DWORD *)v30 = 1668571500;
          *(_QWORD *)(v30 + 32) = v13;
          *(_DWORD *)(v30 + 24) = 1383420738;
          *(_QWORD *)(v30 + 40) = 0LL;
          v31 = (_QWORD *)(v30 + 8);
          v32 = *(_QWORD **)(v29 + 1280);
          if ( *v32 != v29 + 1272 )
            goto LABEL_114;
          *v31 = v29 + 1272;
          v31[1] = v32;
          *v32 = v31;
          *(_QWORD *)(v29 + 1280) = v31;
        }
        else
        {
          ++*(_DWORD *)(v29 + 1288);
        }
        qword_14006F5E0 = 0LL;
        KeReleaseSpinLock(&HubG, v19);
        v5 = *(_QWORD *)(v13 + 64);
        if ( !v5 )
          UsbhTrapFatal_Dbg(v13, 0LL);
        if ( *(_DWORD *)v5 != 1329877064 )
          UsbhTrapFatal_Dbg(v13, *(_QWORD *)(v13 + 64));
      }
      else
      {
LABEL_80:
        qword_14006F5E0 = 0LL;
        KeReleaseSpinLock(&HubG, v19);
      }
      if ( (int)v12 < 0 || !v5 || !*(_BYTE *)(v5 + 2740) )
        goto LABEL_31;
      v61 = *v11;
      v62 = v11[1];
      if ( ((v62 | *v11) & 8) != 0 )
      {
        v63 = FdoExt(a1, v33, v34, v35);
        UsbhDispatch_HardResetEvent(a1, v63 + 2264, 3LL);
      }
      if ( (v61 & 1) == 0 && (v62 & 1) != 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
          WPP_RECORDER_SF_q(
            WPP_GLOBAL_Control->DeviceExtension,
            0,
            3,
            21,
            (__int64)&WPP_e45bf104894738235e8d472f481bb2e2_Traceguids,
            a1);
        v36 = v73;
        byte_14006F708 = 1;
        UsbhFlushPortChange(a1, v73, v68);
        v67 = FdoExt(a1, v64, v65, v66);
        UsbhDispatch_HardResetEvent(a1, v67 + 2264, 3LL);
      }
      else
      {
LABEL_31:
        v36 = v73;
      }
      if ( !v13 )
        goto LABEL_58;
      if ( (UsbhLogMask & 0x100) != 0 )
      {
        if ( a1 )
        {
          v37 = *(_QWORD *)(a1 + 64);
          if ( v37 )
          {
            v38 = *(_QWORD *)(v37 + 888)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v37 + 880)) & *(_DWORD *)(v37 + 884));
            *(_DWORD *)v38 = 1329877109;
            *(_QWORD *)(v38 + 8) = 0LL;
            *(_QWORD *)(v38 + 16) = v13;
            *(_QWORD *)(v38 + 24) = 1383420738LL;
          }
        }
      }
      v39 = KeAcquireSpinLockRaiseToDpc(&HubG);
      qword_14006F5E0 = (__int64)&dword_14006F5E8;
      if ( (UsbhLogMask & 0x100) != 0 )
      {
        if ( a1 )
        {
          v40 = *(_QWORD *)(a1 + 64);
          if ( v40 )
          {
            v41 = *(_QWORD *)(v40 + 888)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v40 + 880)) & *(_DWORD *)(v40 + 884));
            *(_DWORD *)v41 = 1348891236;
            *(_QWORD *)(v41 + 8) = 0LL;
            *(_QWORD *)(v41 + 16) = v13;
            *(_QWORD *)(v41 + 24) = 1383420738LL;
          }
        }
      }
      v42 = *(_QWORD *)(v13 + 64);
      if ( !v42 )
        UsbhTrapFatal_Dbg(v13, 0LL);
      if ( *(_DWORD *)v42 != 1329877064 )
        UsbhTrapFatal_Dbg(v13, *(_QWORD *)(v13 + 64));
      v43 = *(__int64 **)(v42 + 1272);
      if ( v43 == (__int64 *)(v42 + 1272) )
      {
LABEL_50:
        v46 = *(_DWORD *)(v42 + 1288);
        if ( v46 )
          *(_DWORD *)(v42 + 1288) = v46 - 1;
        goto LABEL_56;
      }
      while ( 1 )
      {
        if ( (UsbhLogMask & 0x100) != 0 )
        {
          if ( a1 )
          {
            v44 = *(_QWORD *)(a1 + 64);
            if ( v44 )
            {
              v45 = *(_QWORD *)(v44 + 888)
                  + 32LL
                  * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v44 + 880)) & *(_DWORD *)(v44 + 884));
              *(_DWORD *)v45 = 1064591724;
              *(_QWORD *)(v45 + 8) = 0LL;
              *(_QWORD *)(v45 + 16) = v42;
              *(_QWORD *)(v45 + 24) = 1383420738LL;
            }
          }
        }
        if ( *((_DWORD *)v43 + 4) == 1383420738 && !v43[4] )
          break;
        v43 = (__int64 *)*v43;
        if ( v43 == (__int64 *)(v42 + 1272) )
          goto LABEL_50;
      }
      v47 = (__int64 *)*v43;
      if ( *(__int64 **)(*v43 + 8) == v43 )
      {
        v48 = (__int64 **)v43[1];
        if ( *v48 == v43 )
        {
          *v48 = v47;
          v47[1] = (__int64)v48;
          ExFreePoolWithTag(v43 - 1, 0);
LABEL_56:
          if ( *(_QWORD *)(v42 + 1272) == v42 + 1272 && !*(_DWORD *)(v42 + 1288) )
            KeSetEvent((PRKEVENT)(v42 + 1296), 0, 0);
          qword_14006F5E0 = 0LL;
          KeReleaseSpinLock(&HubG, v39);
LABEL_58:
          if ( (UsbhLogMask & 4) != 0 )
          {
            if ( a1 )
            {
              v49 = *(_QWORD *)(a1 + 64);
              if ( v49 )
              {
                v50 = *(_QWORD *)(v49 + 888)
                    + 32LL
                    * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v49 + 880)) & *(_DWORD *)(v49 + 884));
                *(_DWORD *)v50 = 1953722449;
                *(_QWORD *)(v50 + 8) = 0LL;
                *(_QWORD *)(v50 + 16) = v12;
                *(_QWORD *)(v50 + 24) = 0LL;
              }
            }
          }
          if ( (int)v12 < 0 || (v51 = v11[2], (_DWORD)v51 == 4) )
          {
            if ( (v12 & 0xC0000000) == 0xC0000000 && !(unsigned __int8)Usb_Disconnected((unsigned int)v12) )
            {
              Log(a1, 4, 1366324018, v11[2], 0LL);
              UsbhException(a1, v36, 8LL, v11, 0xAu, v12, 0, usbfile_bus_c, 1649, 0);
            }
            if ( (int)v12 >= 0 )
            {
              v55 = v11[1];
              *(_WORD *)(a3 + 2) = v55;
              v56 = *v11;
              *(_WORD *)a3 = v56;
              if ( (UsbhLogMask & 4) != 0 )
              {
                if ( a1 )
                {
                  v57 = *(_QWORD *)(a1 + 64);
                  if ( v57 )
                  {
                    v58 = *(_QWORD *)(v57 + 888)
                        + 32LL
                        * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v57 + 880)) & *(_DWORD *)(v57 + 884));
                    *(_DWORD *)v58 = 1953722448;
                    *(_QWORD *)(v58 + 8) = 0LL;
                    *(_QWORD *)(v58 + 16) = v55;
                    *(_QWORD *)(v58 + 24) = v56;
                  }
                }
              }
            }
            if ( a4 )
              *a4 = 0;
            ExFreePoolWithTag(v11, 0);
            return (unsigned int)v12;
          }
          else
          {
            if ( (UsbhLogMask & 4) != 0 )
            {
              if ( a1 )
              {
                v52 = *(_QWORD *)(a1 + 64);
                if ( v52 )
                {
                  v53 = *(_QWORD *)(v52 + 888)
                      + 32LL
                      * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v52 + 880)) & *(_DWORD *)(v52 + 884));
                  *(_DWORD *)v53 = 829648977;
                  *(_QWORD *)(v53 + 8) = 0LL;
                  *(_QWORD *)(v53 + 16) = v51;
                  *(_QWORD *)(v53 + 24) = 0LL;
                }
              }
            }
            UsbhException(a1, v36, 9LL, v11, 0xAu, v12, 0, usbfile_bus_c, 1635, 0);
            if ( a4 )
              *a4 = 0;
            ExFreePoolWithTag(v11, 0);
            return 3221225473LL;
          }
        }
      }
LABEL_114:
      __fastfail(3u);
    }
    if ( (UsbhLogMask & 4) != 0 )
    {
      if ( a1 )
      {
        v59 = *(_QWORD *)(a1 + 64);
        if ( v59 )
        {
          v60 = *(_QWORD *)(v59 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v59 + 880)) & *(_DWORD *)(v59 + 884));
          *(_DWORD *)v60 = 1818325073;
          *(_QWORD *)(v60 + 8) = 0LL;
          *(_QWORD *)(v60 + 16) = 0LL;
          *(_QWORD *)(v60 + 24) = 0LL;
        }
      }
    }
    if ( a4 )
      *a4 = -1073737728;
    return 3221225626LL;
  }
}
