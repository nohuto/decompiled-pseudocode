/*
 * XREFs of Usbh_PCE_ResumeDone_Action @ 0x1C0035CA8
 * Callers:
 *     UsbhDispatch_PortChangeQueueEventEx @ 0x1C0014330 (UsbhDispatch_PortChangeQueueEventEx.c)
 * Callees:
 *     FdoExt @ 0x1C000DEB0 (FdoExt.c)
 *     Log @ 0x1C000F210 (Log.c)
 *     UsbhPCE_Suspend @ 0x1C00190B4 (UsbhPCE_Suspend.c)
 *     UsbhLockPcqWithTag @ 0x1C001FF20 (UsbhLockPcqWithTag.c)
 *     UsbhUnlockPcqWithTag @ 0x1C0035444 (UsbhUnlockPcqWithTag.c)
 */

void __fastcall Usbh_PCE_ResumeDone_Action(__int64 a1, __int64 a2, __int64 a3)
{
  int v6; // eax
  __int64 v7; // r9
  int v8; // r10d
  int v9; // r11d
  __int64 v10; // rax
  KIRQL v11; // r8
  __int64 v12; // rax
  int v13; // r10d
  KIRQL v14; // [rsp+48h] [rbp+10h] BYREF

  v14 = 0;
  FdoExt(a1);
  v6 = UsbhLockPcqWithTag(a1, a2, 21, &v14, 0);
  Log(a1, 512, 842100784, v6, *(unsigned __int16 *)(a2 + 4));
  if ( v8 == 2 || v8 == 3 || v8 == 4 || v8 == 14 )
  {
    Log(a1, v9, 842100785, v7, *(unsigned __int16 *)(a2 + 4));
    v11 = v14;
    v12 = 32LL * *(unsigned int *)(a2 + 2400);
    *(_DWORD *)(a2 + 12) = v13;
    *(_DWORD *)(v12 + a2 + 1384) = v13;
    UsbhUnlockPcqWithTag(a1, a2, v11);
    UsbhPCE_Suspend(a1, a3, *(_WORD *)(a2 + 4));
  }
  else
  {
    Log(a1, v9, 842100824, v7, *(unsigned __int16 *)(a2 + 4));
    v10 = *(unsigned int *)(a2 + 2400);
    *(_DWORD *)(a2 + 12) = 19;
    *(_DWORD *)(32 * v10 + a2 + 1384) = 19;
    UsbhUnlockPcqWithTag(a1, a2, v14);
  }
}
