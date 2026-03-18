/*
 * XREFs of Usbh_PCE_ResumeTimeout_Action @ 0x1400447A8
 * Callers:
 *     UsbhDispatch_PortChangeQueueEventEx @ 0x140008E90 (UsbhDispatch_PortChangeQueueEventEx.c)
 * Callees:
 *     UsbhUnlockPcqWithTag @ 0x140001F30 (UsbhUnlockPcqWithTag.c)
 *     UsbhLockPcqWithTag @ 0x1400026C0 (UsbhLockPcqWithTag.c)
 *     UsbhFlushPortChangeQueue @ 0x14000481C (UsbhFlushPortChangeQueue.c)
 *     FdoExt @ 0x14000BE50 (FdoExt.c)
 *     UsbhiSignalResumeEvent @ 0x140019160 (UsbhiSignalResumeEvent.c)
 *     Log @ 0x1400298B0 (Log.c)
 */

void __fastcall Usbh_PCE_ResumeTimeout_Action(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rsi
  __int64 v6; // r9
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rax
  int v14; // r9d
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rax
  __int64 v20; // [rsp+60h] [rbp+18h] BYREF

  v20 = a3;
  LOBYTE(v20) = 0;
  FdoExt(a1);
  v5 = (int)UsbhLockPcqWithTag(a1, a2, 14, (KIRQL *)&v20, 0);
  Log(a1, 512, 825520176, v5, *(unsigned __int16 *)(a2 + 4));
  Log(a1, 512, 825520177, v6, *(unsigned __int16 *)(a2 + 4));
  if ( (_DWORD)v5 == 1 )
  {
    Log(a1, 512, 825520178, *(unsigned int *)(a2 + 400), *(unsigned __int16 *)(a2 + 4));
    if ( *(_DWORD *)(a2 + 400) != 5 )
    {
      Log(a1, 512, 825520179, 0LL, *(unsigned __int16 *)(a2 + 4));
      *(_BYTE *)(a2 + 2838) = 1;
      UsbhFlushPortChangeQueue(a1, a2, v15, v16);
      UsbhiSignalResumeEvent(a1, a2, v17, v18);
    }
    Log(a1, 512, 825520180, 0LL, *(unsigned __int16 *)(a2 + 4));
    v19 = 32LL * *(unsigned int *)(a2 + 2400);
    *(_DWORD *)(a2 + 12) = 1;
    *(_DWORD *)(v19 + a2 + 1384) = 1;
  }
  else
  {
    if ( (_DWORD)v5 == 3 || (_DWORD)v5 == 4 || (_DWORD)v5 == 14 )
    {
      if ( *(_BYTE *)(a2 + 2840) )
      {
        *(_BYTE *)(a2 + 2838) = 1;
        UsbhiSignalResumeEvent(a1, a2, v7, v8);
      }
      Log(a1, 512, 825520181, v5, *(unsigned __int16 *)(a2 + 4));
      *(_BYTE *)(a2 + 2838) = 0;
    }
    else
    {
      Log(a1, 512, 825520182, *(unsigned int *)(a2 + 400), *(unsigned __int16 *)(a2 + 4));
      *(_BYTE *)(a2 + 2838) = 1;
      UsbhFlushPortChangeQueue(a1, a2, v9, v10);
      UsbhiSignalResumeEvent(a1, a2, v11, v12);
    }
    v13 = 32LL * *(unsigned int *)(a2 + 2400);
    *(_DWORD *)(a2 + 12) = v5;
    v14 = 0;
    *(_DWORD *)(v13 + a2 + 1384) = v5;
  }
  UsbhUnlockPcqWithTag(a1, a2, v20, v14);
}
