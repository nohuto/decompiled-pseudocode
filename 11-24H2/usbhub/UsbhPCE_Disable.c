/*
 * XREFs of UsbhPCE_Disable @ 0x140006878
 * Callers:
 *     UsbhBusPause_Action @ 0x140005D1C (UsbhBusPause_Action.c)
 *     UsbhQueueDriverOvercurrent @ 0x14003F320 (UsbhQueueDriverOvercurrent.c)
 *     UsbhQueueOvercurrentReset @ 0x14003F4A0 (UsbhQueueOvercurrentReset.c)
 *     Usbh_PCE_SoftDisconnect_Action @ 0x140044B14 (Usbh_PCE_SoftDisconnect_Action.c)
 * Callees:
 *     PdoExt @ 0x140006D10 (PdoExt.c)
 *     UsbhDispatch_PortChangeQueueNullEvent @ 0x140008E28 (UsbhDispatch_PortChangeQueueNullEvent.c)
 *     FdoExt @ 0x14000BE50 (FdoExt.c)
 *     UsbhBusUnlatchPdo @ 0x140029F90 (UsbhBusUnlatchPdo.c)
 *     UsbhCancelEnumeration @ 0x140034170 (UsbhCancelEnumeration.c)
 *     WPP_RECORDER_SF_dq @ 0x14003DE14 (WPP_RECORDER_SF_dq.c)
 */

void __fastcall UsbhPCE_Disable(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdi
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rdi
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rsi
  __int64 v22; // rbp
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  KIRQL v28; // r15
  __int64 v29; // rcx
  __int64 v30; // r14
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rbp
  __int64 Pool2; // rax
  _QWORD *v40; // rax
  _QWORD *v41; // rdx
  __int64 v42; // rdx
  int v43; // r9d

  v5 = (unsigned __int16)a2;
  FdoExt(a1, a2, a3, a4);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_dq(
      WPP_GLOBAL_Control->DeviceExtension,
      v7,
      v8,
      66,
      (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
      v5,
      a3);
  if ( (UsbhLogMask & 0x200) != 0 )
  {
    if ( a1 )
    {
      v7 = *(_QWORD *)(a1 + 64);
      if ( v7 )
      {
        v10 = *(_QWORD *)(v7 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v7 + 880)) & *(_DWORD *)(v7 + 884));
        *(_DWORD *)v10 = 842024272;
        *(_QWORD *)(v10 + 8) = 0LL;
        *(_QWORD *)(v10 + 16) = 0LL;
        *(_QWORD *)(v10 + 24) = v5;
      }
    }
  }
  if ( (UsbhLogMask & 8) != 0 )
  {
    if ( a1 )
    {
      v7 = *(_QWORD *)(a1 + 64);
      if ( v7 )
      {
        v11 = *(_QWORD *)(v7 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v7 + 880)) & *(_DWORD *)(v7 + 884));
        *(_DWORD *)v11 = 1413771367;
        *(_QWORD *)(v11 + 8) = 0LL;
        *(_QWORD *)(v11 + 16) = v5;
        *(_QWORD *)(v11 + 24) = 0LL;
      }
    }
  }
  if ( (_WORD)v5 )
  {
    v12 = FdoExt(a1, v7, v8, v9);
    if ( (unsigned __int16)v5 <= *(unsigned __int8 *)(FdoExt(a1, v13, v14, v15) + 2938) )
    {
      v16 = *(_QWORD *)(v12 + 3056);
      if ( v16 )
      {
        v17 = v5;
        v18 = v16 + 2928 * v5 - 2928;
        if ( (UsbhLogMask & 8) != 0 )
        {
          if ( a1 )
          {
            v19 = *(_QWORD *)(a1 + 64);
            if ( v19 )
            {
              v20 = *(_QWORD *)(v19 + 888)
                  + 32LL
                  * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v19 + 880)) & *(_DWORD *)(v19 + 884));
              *(_DWORD *)v20 = 1044672615;
              *(_QWORD *)(v20 + 8) = 0LL;
              *(_QWORD *)(v20 + 16) = v17;
              *(_QWORD *)(v20 + 24) = v18;
            }
          }
        }
        if ( v18 )
        {
          UsbhDispatch_PortChangeQueueNullEvent(a1, v18, 2LL, a3);
          v21 = 0LL;
          v22 = *(unsigned __int16 *)(v18 + 4);
          if ( (UsbhLogMask & 0x100) != 0 )
          {
            if ( a1 )
            {
              v23 = *(_QWORD *)(a1 + 64);
              if ( v23 )
              {
                v24 = *(_QWORD *)(v23 + 888)
                    + 32LL
                    * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v23 + 880)) & *(_DWORD *)(v23 + 884));
                *(_DWORD *)v24 = 1329877100;
                *(_QWORD *)(v24 + 8) = 0LL;
                *(_QWORD *)(v24 + 16) = v22;
                *(_QWORD *)(v24 + 24) = 1884308559LL;
              }
            }
          }
          v28 = KeAcquireSpinLockRaiseToDpc(&HubG);
          qword_14006F5E0 = (__int64)&dword_14006F5E8;
          if ( (UsbhLogMask & 8) != 0 )
          {
            if ( a1 )
            {
              v25 = *(_QWORD *)(a1 + 64);
              if ( v25 )
              {
                v29 = *(_QWORD *)(v25 + 888)
                    + 32LL
                    * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v25 + 880)) & *(_DWORD *)(v25 + 884));
                *(_DWORD *)v29 = 1413771367;
                *(_QWORD *)(v29 + 8) = 0LL;
                *(_QWORD *)(v29 + 16) = v22;
                *(_QWORD *)(v29 + 24) = 0LL;
              }
            }
          }
          if ( (_WORD)v22 )
          {
            v30 = FdoExt(a1, v25, v26, v27);
            if ( (unsigned __int16)v22 <= *(unsigned __int8 *)(FdoExt(a1, v31, v32, v33) + 2938) )
            {
              v34 = *(_QWORD *)(v30 + 3056);
              if ( v34 )
              {
                v35 = v34 + 2928 * v22 - 2928;
                if ( (UsbhLogMask & 8) != 0 )
                {
                  if ( a1 )
                  {
                    v36 = *(_QWORD *)(a1 + 64);
                    if ( v36 )
                    {
                      v37 = *(_QWORD *)(v36 + 888)
                          + 32LL
                          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v36 + 880)) & *(_DWORD *)(v36 + 884));
                      *(_DWORD *)v37 = 1044672615;
                      *(_QWORD *)(v37 + 8) = 0LL;
                      *(_QWORD *)(v37 + 16) = v22;
                      *(_QWORD *)(v37 + 24) = v35;
                    }
                  }
                }
                if ( v35 )
                {
                  v21 = *(_QWORD *)(v35 + 392);
                  if ( v21 )
                  {
                    v38 = PdoExt(*(_QWORD *)(v35 + 392));
                    Pool2 = ExAllocatePool2(64LL, 48LL, 1112885333LL);
                    if ( Pool2 )
                    {
                      *(_DWORD *)Pool2 = 1668571500;
                      *(_QWORD *)(Pool2 + 32) = v21;
                      *(_DWORD *)(Pool2 + 24) = 1884308559;
                      *(_QWORD *)(Pool2 + 40) = 0LL;
                      v40 = (_QWORD *)(Pool2 + 8);
                      v41 = *(_QWORD **)(v38 + 1280);
                      if ( *v41 != v38 + 1272 )
                        __fastfail(3u);
                      *v40 = v38 + 1272;
                      v40[1] = v41;
                      *v41 = v40;
                      *(_QWORD *)(v38 + 1280) = v40;
                    }
                    else
                    {
                      ++*(_DWORD *)(v38 + 1288);
                    }
                  }
                }
              }
            }
          }
          qword_14006F5E0 = 0LL;
          KeReleaseSpinLock(&HubG, v28);
          if ( v21 )
          {
            v42 = *(unsigned int *)(v18 + 400);
            *(_QWORD *)(v18 + 376) = v18 + 24;
            *(_DWORD *)(v18 + 416) = 1;
            UsbhCancelEnumeration(a1, v42, v18, v21);
            *(_QWORD *)(v18 + 376) = 0LL;
            if ( *(_DWORD *)(v18 + 416) )
              UsbhBusUnlatchPdo(a1, v21, v18, v43, 0LL);
            else
              *(_DWORD *)(v18 + 400) = 0;
          }
        }
      }
    }
  }
}
