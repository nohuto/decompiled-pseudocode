/*
 * XREFs of UsbhResetPort @ 0x140018C04
 * Callers:
 *     UsbhReset1Complete @ 0x1400188C0 (UsbhReset1Complete.c)
 *     UsbhPortConnect @ 0x140019BF0 (UsbhPortConnect.c)
 *     UsbhReset2Complete @ 0x140028D20 (UsbhReset2Complete.c)
 *     UsbhDriverResetPort @ 0x140057310 (UsbhDriverResetPort.c)
 *     UsbhReset1Timeout @ 0x140058340 (UsbhReset1Timeout.c)
 *     UsbhReset2Timeout @ 0x140058930 (UsbhReset2Timeout.c)
 * Callees:
 *     Usbh_UsbdReadFrameCounter @ 0x14000835C (Usbh_UsbdReadFrameCounter.c)
 *     UsbhException @ 0x1400094F8 (UsbhException.c)
 *     UsbhSyncSendCommand @ 0x14000A470 (UsbhSyncSendCommand.c)
 *     FdoExt @ 0x14000BE50 (FdoExt.c)
 *     Usb_Disconnected @ 0x1400155D4 (Usb_Disconnected.c)
 *     Usbh_CheckPortHwPendingStatus @ 0x140017768 (Usbh_CheckPortHwPendingStatus.c)
 *     UsbhReferenceListAdd @ 0x14002CB80 (UsbhReferenceListAdd.c)
 *     UsbhReferenceListRemove @ 0x14003090C (UsbhReferenceListRemove.c)
 *     WPP_RECORDER_SF_d @ 0x14003DA58 (WPP_RECORDER_SF_d.c)
 */

char __fastcall UsbhResetPort(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  KSPIN_LOCK *v8; // r14
  int v9; // edx
  int v10; // edx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // rcx
  KIRQL v15; // al
  KIRQL v16; // r12
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  int FrameCounter; // eax
  __int64 v21; // r8
  __int64 v22; // rdx
  int v23; // r15d
  __int64 v24; // rax
  ULONG TimeIncrement; // eax
  __int64 v27; // [rsp+20h] [rbp-40h]
  int v28; // [rsp+50h] [rbp-10h] BYREF
  __int16 v29; // [rsp+54h] [rbp-Ch]
  __int16 v30; // [rsp+56h] [rbp-Ah]
  int v31; // [rsp+A8h] [rbp+48h] BYREF
  int v32; // [rsp+B0h] [rbp+50h]
  int v33; // [rsp+B8h] [rbp+58h] BYREF

  v33 = 0;
  if ( (UsbhLogMask & 4) != 0 )
  {
    if ( a1 )
    {
      v6 = *(_QWORD *)(a1 + 64);
      if ( v6 )
      {
        v31 = 1414554994;
        v7 = *(_QWORD *)(v6 + 888)
           + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v6 + 880)) & *(_DWORD *)(v6 + 884));
        *(_DWORD *)v7 = v31;
        *(_QWORD *)(v7 + 8) = 0LL;
        *(_QWORD *)(v7 + 16) = a2;
        *(_QWORD *)(v7 + 24) = 0LL;
      }
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      26,
      (__int64)&WPP_e45bf104894738235e8d472f481bb2e2_Traceguids,
      *(_WORD *)(a2 + 4));
  v8 = (KSPIN_LOCK *)FdoExt(a1);
  v29 = *(_WORD *)(a2 + 4);
  LOWORD(v31) = 0;
  v28 = 262947;
  v30 = 0;
  v9 = UsbhSyncSendCommand(a1, (unsigned __int8 *)&v28, 0LL, &v31, v27, &v33);
  if ( (v9 & 0xC0000000) == 0xC0000000 && !Usb_Disconnected(v9) )
    UsbhException(a1, *(unsigned __int16 *)(a2 + 4), 19LL, 0LL, 0, v10, v33, usbfile_bus_c, 2486, 0);
  v11 = *(int *)(a2 + 696);
  v12 = *(unsigned __int16 *)(a2 + 4);
  if ( (UsbhLogMask & 4) != 0 )
  {
    if ( a1 )
    {
      v13 = *(_QWORD *)(a1 + 64);
      if ( v13 )
      {
        v32 = 2018534770;
        v14 = *(_QWORD *)(v13 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v13 + 880)) & *(_DWORD *)(v13 + 884));
        *(_DWORD *)v14 = v32;
        *(_QWORD *)(v14 + 8) = 0LL;
        *(_QWORD *)(v14 + 16) = v12;
        *(_QWORD *)(v14 + 24) = v11;
      }
    }
  }
  Usbh_CheckPortHwPendingStatus(a1, a2);
  v15 = KeAcquireSpinLockRaiseToDpc(v8 + 618);
  *(_DWORD *)(a2 + 696) = 1;
  v16 = v15;
  FrameCounter = Usbh_UsbdReadFrameCounter(a1, v17, v18, v19);
  *(_DWORD *)(a2 + 852) = FrameCounter;
  *(_DWORD *)(a2 + 848) = FrameCounter;
  *(_DWORD *)(a3 + 4) = FrameCounter;
  if ( (UsbhLogMask & 4) != 0 )
  {
    if ( a1 )
    {
      v21 = *(_QWORD *)(a1 + 64);
      if ( v21 )
      {
        v31 = 1414620530;
        v22 = *(_QWORD *)(v21 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v21 + 880)) & *(_DWORD *)(v21 + 884));
        *(_DWORD *)v22 = v31;
        *(_QWORD *)(v22 + 8) = 0LL;
        *(_QWORD *)(v22 + 16) = a2;
        *(_QWORD *)(v22 + 24) = a3;
      }
    }
  }
  *(_QWORD *)(a2 + 680) = a3;
  KeResetEvent((PRKEVENT)(a2 + 768));
  KeReleaseSpinLock(v8 + 618, v16);
  v23 = dword_14006F5C4;
  v24 = UsbhReferenceListAdd(a1, a2 + 552, 1380799602LL) & 0xC0000000LL;
  if ( (_DWORD)v24 != -1073741824 )
  {
    TimeIncrement = KeQueryTimeIncrement();
    LOBYTE(v24) = KeSetTimer(
                    (PKTIMER)(a2 + 552),
                    (LARGE_INTEGER)(int)(1 - 10000 * v23 - TimeIncrement),
                    (PKDPC)(a2 + 616));
    if ( (_BYTE)v24 )
      LOBYTE(v24) = UsbhReferenceListRemove(a1, a2 + 552);
  }
  return v24;
}
