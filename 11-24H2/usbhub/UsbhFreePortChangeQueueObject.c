/*
 * XREFs of UsbhFreePortChangeQueueObject @ 0x1400048F4
 * Callers:
 *     Usbh_PCE_QueueChange_Action @ 0x140003220 (Usbh_PCE_QueueChange_Action.c)
 *     UsbhFlushPortChangeQueue @ 0x14000481C (UsbhFlushPortChangeQueue.c)
 *     Usbh_PCE_psPAUSED_Action @ 0x140004BE4 (Usbh_PCE_psPAUSED_Action.c)
 *     Usbh_PCE_Disable_Action @ 0x140011580 (Usbh_PCE_Disable_Action.c)
 *     UsbhCancelQueuedTimeout @ 0x140038F40 (UsbhCancelQueuedTimeout.c)
 *     UsbhFlushQueuedDriverReset @ 0x140046324 (UsbhFlushQueuedDriverReset.c)
 * Callees:
 *     FdoExt @ 0x14000BE50 (FdoExt.c)
 *     UsbhiSignalResumeEvent @ 0x140019160 (UsbhiSignalResumeEvent.c)
 *     UsbhUnlatchPdo @ 0x140020FA0 (UsbhUnlatchPdo.c)
 *     UsbhiSignalSuspendEvent @ 0x14002BDEC (UsbhiSignalSuspendEvent.c)
 *     UsbhSignalPauseEvent @ 0x1400342C4 (UsbhSignalPauseEvent.c)
 *     WPP_RECORDER_SF_d @ 0x14003DA58 (WPP_RECORDER_SF_d.c)
 *     UsbhFreePortChangeQueueTimeoutObject @ 0x140042B3C (UsbhFreePortChangeQueueTimeoutObject.c)
 *     Usbh_iSignalSyncDeviceReset @ 0x140048F44 (Usbh_iSignalSyncDeviceReset.c)
 */

void __fastcall UsbhFreePortChangeQueueObject(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v5; // bp
  __int64 v6; // r8
  __int64 v7; // rsi
  __int64 v9; // rcx
  __int64 v10; // r9
  int v11; // ecx
  __int16 v12; // r8
  __int64 v13; // rdx
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8

  v5 = a4;
  v6 = *(unsigned __int16 *)(a2 + 4);
  v7 = a2;
  if ( (UsbhLogMask & 0x200) != 0 )
  {
    if ( a1 )
    {
      a2 = *(_QWORD *)(a1 + 64);
      if ( a2 )
      {
        v9 = *(_QWORD *)(a2 + 888)
           + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(a2 + 880)) & *(_DWORD *)(a2 + 884));
        *(_DWORD *)v9 = 1129343349;
        *(_QWORD *)(v9 + 8) = 0LL;
        *(_QWORD *)(v9 + 16) = 0LL;
        *(_QWORD *)(v9 + 24) = v6;
      }
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      54,
      (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
      *(_WORD *)(v7 + 4));
  FdoExt(a1, a2, v6, a4);
  v11 = *(_DWORD *)(a3 + 8);
  v12 = *(_WORD *)(v7 + 420);
  v13 = ((unsigned __int8)*(_DWORD *)(v7 + 856) + 1) & 0xF;
  v14 = *(_DWORD *)(v7 + 400);
  *(_DWORD *)(v7 + 856) = v13;
  v15 = v7 + 32 * (v13 + 27);
  *(_DWORD *)v15 = v14;
  *(_DWORD *)(v15 + 4) = v11;
  *(_WORD *)(v15 + 18) = 256;
  *(_WORD *)(v15 + 16) = v12;
  *(_QWORD *)(v15 + 8) = 0LL;
  *(_DWORD *)(v15 + 20) = 0;
  *(_DWORD *)(v15 + 28) = 1;
  if ( v5 )
  {
    if ( *(_DWORD *)(a3 + 8) == 4 )
      UsbhiSignalResumeEvent(a1, v7);
    if ( *(_DWORD *)(a3 + 8) == 0x80000 )
      UsbhSignalPauseEvent(a1, v7);
    if ( *(_DWORD *)(a3 + 8) == 4 )
      UsbhiSignalSuspendEvent(a1, v7);
  }
  if ( *(_DWORD *)(a3 + 48) == 1 )
  {
    if ( v5 )
      Usbh_iSignalSyncDeviceReset(a1, *(_QWORD *)(a3 + 40), v7);
  }
  else if ( *(_DWORD *)(a3 + 48) == 2 )
  {
    v18 = *(_QWORD *)(a3 + 40);
    LOBYTE(v10) = v5;
    *(_QWORD *)(a3 + 40) = 0LL;
    UsbhFreePortChangeQueueTimeoutObject(a1, v7, v18, v10);
  }
  if ( *(_DWORD *)(a3 + 48) == 1 )
    UsbhUnlatchPdo(a1, *(_QWORD *)(a3 + 40), a3, 1230065731LL);
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
        *(_DWORD *)v17 = 1146122854;
        *(_QWORD *)(v17 + 8) = 0LL;
        *(_QWORD *)(v17 + 16) = v7;
        *(_QWORD *)(v17 + 24) = a3;
      }
    }
  }
  ExFreePoolWithTag((PVOID)a3, 0);
}
